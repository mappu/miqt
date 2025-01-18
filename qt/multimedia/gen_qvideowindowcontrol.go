package multimedia

/*

#include "gen_qvideowindowcontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVideoWindowControl struct {
	h          *C.QVideoWindowControl
	isSubclass bool
	*QMediaControl
}

func (this *QVideoWindowControl) cPointer() *C.QVideoWindowControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoWindowControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoWindowControl constructs the type using only CGO pointers.
func newQVideoWindowControl(h *C.QVideoWindowControl) *QVideoWindowControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QVideoWindowControl_virtbase(h, &outptr_QMediaControl)

	return &QVideoWindowControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQVideoWindowControl constructs the type using only unsafe pointers.
func UnsafeNewQVideoWindowControl(h unsafe.Pointer) *QVideoWindowControl {
	return newQVideoWindowControl((*C.QVideoWindowControl)(h))
}

func (this *QVideoWindowControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QVideoWindowControl_MetaObject(this.h)))
}

func (this *QVideoWindowControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVideoWindowControl_Metacast(this.h, param1_Cstring))
}

func QVideoWindowControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWindowControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoWindowControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWindowControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoWindowControl) WinId() uintptr {
	return (uintptr)(C.QVideoWindowControl_WinId(this.h))
}

func (this *QVideoWindowControl) SetWinId(id uintptr) {
	C.QVideoWindowControl_SetWinId(this.h, (C.uintptr_t)(id))
}

func (this *QVideoWindowControl) DisplayRect() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QVideoWindowControl_DisplayRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoWindowControl) SetDisplayRect(rect *qt.QRect) {
	C.QVideoWindowControl_SetDisplayRect(this.h, (*C.QRect)(rect.UnsafePointer()))
}

func (this *QVideoWindowControl) IsFullScreen() bool {
	return (bool)(C.QVideoWindowControl_IsFullScreen(this.h))
}

func (this *QVideoWindowControl) SetFullScreen(fullScreen bool) {
	C.QVideoWindowControl_SetFullScreen(this.h, (C.bool)(fullScreen))
}

func (this *QVideoWindowControl) Repaint() {
	C.QVideoWindowControl_Repaint(this.h)
}

func (this *QVideoWindowControl) NativeSize() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QVideoWindowControl_NativeSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoWindowControl) AspectRatioMode() qt.AspectRatioMode {
	return (qt.AspectRatioMode)(C.QVideoWindowControl_AspectRatioMode(this.h))
}

func (this *QVideoWindowControl) SetAspectRatioMode(mode qt.AspectRatioMode) {
	C.QVideoWindowControl_SetAspectRatioMode(this.h, (C.int)(mode))
}

func (this *QVideoWindowControl) Brightness() int {
	return (int)(C.QVideoWindowControl_Brightness(this.h))
}

func (this *QVideoWindowControl) SetBrightness(brightness int) {
	C.QVideoWindowControl_SetBrightness(this.h, (C.int)(brightness))
}

func (this *QVideoWindowControl) Contrast() int {
	return (int)(C.QVideoWindowControl_Contrast(this.h))
}

func (this *QVideoWindowControl) SetContrast(contrast int) {
	C.QVideoWindowControl_SetContrast(this.h, (C.int)(contrast))
}

func (this *QVideoWindowControl) Hue() int {
	return (int)(C.QVideoWindowControl_Hue(this.h))
}

func (this *QVideoWindowControl) SetHue(hue int) {
	C.QVideoWindowControl_SetHue(this.h, (C.int)(hue))
}

func (this *QVideoWindowControl) Saturation() int {
	return (int)(C.QVideoWindowControl_Saturation(this.h))
}

func (this *QVideoWindowControl) SetSaturation(saturation int) {
	C.QVideoWindowControl_SetSaturation(this.h, (C.int)(saturation))
}

func (this *QVideoWindowControl) FullScreenChanged(fullScreen bool) {
	C.QVideoWindowControl_FullScreenChanged(this.h, (C.bool)(fullScreen))
}
func (this *QVideoWindowControl) OnFullScreenChanged(slot func(fullScreen bool)) {
	C.QVideoWindowControl_connect_FullScreenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWindowControl_FullScreenChanged
func miqt_exec_callback_QVideoWindowControl_FullScreenChanged(cb C.intptr_t, fullScreen C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(fullScreen bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fullScreen)

	gofunc(slotval1)
}

func (this *QVideoWindowControl) BrightnessChanged(brightness int) {
	C.QVideoWindowControl_BrightnessChanged(this.h, (C.int)(brightness))
}
func (this *QVideoWindowControl) OnBrightnessChanged(slot func(brightness int)) {
	C.QVideoWindowControl_connect_BrightnessChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWindowControl_BrightnessChanged
func miqt_exec_callback_QVideoWindowControl_BrightnessChanged(cb C.intptr_t, brightness C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(brightness int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(brightness)

	gofunc(slotval1)
}

func (this *QVideoWindowControl) ContrastChanged(contrast int) {
	C.QVideoWindowControl_ContrastChanged(this.h, (C.int)(contrast))
}
func (this *QVideoWindowControl) OnContrastChanged(slot func(contrast int)) {
	C.QVideoWindowControl_connect_ContrastChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWindowControl_ContrastChanged
func miqt_exec_callback_QVideoWindowControl_ContrastChanged(cb C.intptr_t, contrast C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(contrast int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(contrast)

	gofunc(slotval1)
}

func (this *QVideoWindowControl) HueChanged(hue int) {
	C.QVideoWindowControl_HueChanged(this.h, (C.int)(hue))
}
func (this *QVideoWindowControl) OnHueChanged(slot func(hue int)) {
	C.QVideoWindowControl_connect_HueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWindowControl_HueChanged
func miqt_exec_callback_QVideoWindowControl_HueChanged(cb C.intptr_t, hue C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(hue int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(hue)

	gofunc(slotval1)
}

func (this *QVideoWindowControl) SaturationChanged(saturation int) {
	C.QVideoWindowControl_SaturationChanged(this.h, (C.int)(saturation))
}
func (this *QVideoWindowControl) OnSaturationChanged(slot func(saturation int)) {
	C.QVideoWindowControl_connect_SaturationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWindowControl_SaturationChanged
func miqt_exec_callback_QVideoWindowControl_SaturationChanged(cb C.intptr_t, saturation C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(saturation int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(saturation)

	gofunc(slotval1)
}

func (this *QVideoWindowControl) NativeSizeChanged() {
	C.QVideoWindowControl_NativeSizeChanged(this.h)
}
func (this *QVideoWindowControl) OnNativeSizeChanged(slot func()) {
	C.QVideoWindowControl_connect_NativeSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWindowControl_NativeSizeChanged
func miqt_exec_callback_QVideoWindowControl_NativeSizeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QVideoWindowControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWindowControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoWindowControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWindowControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoWindowControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWindowControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoWindowControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWindowControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QVideoWindowControl) Delete() {
	C.QVideoWindowControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoWindowControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoWindowControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

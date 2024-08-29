package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmovie.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMovie struct {
	h *C.QMovie
	*QObject
}

func (this *QMovie) cPointer() *C.QMovie {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMovie(h *C.QMovie) *QMovie {
	return &QMovie{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQMovie_U(h unsafe.Pointer) *QMovie {
	return newQMovie((*C.QMovie)(h))
}

// NewQMovie constructs a new QMovie object.
func NewQMovie() *QMovie {
	ret := C.QMovie_new()
	return newQMovie(ret)
}

// NewQMovie2 constructs a new QMovie object.
func NewQMovie2(device *QIODevice) *QMovie {
	ret := C.QMovie_new2(device.cPointer())
	return newQMovie(ret)
}

// NewQMovie3 constructs a new QMovie object.
func NewQMovie3(fileName string) *QMovie {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QMovie_new3(fileName_Cstring, C.ulong(len(fileName)))
	return newQMovie(ret)
}

// NewQMovie4 constructs a new QMovie object.
func NewQMovie4(parent *QObject) *QMovie {
	ret := C.QMovie_new4(parent.cPointer())
	return newQMovie(ret)
}

// NewQMovie5 constructs a new QMovie object.
func NewQMovie5(device *QIODevice, format *QByteArray) *QMovie {
	ret := C.QMovie_new5(device.cPointer(), format.cPointer())
	return newQMovie(ret)
}

// NewQMovie6 constructs a new QMovie object.
func NewQMovie6(device *QIODevice, format *QByteArray, parent *QObject) *QMovie {
	ret := C.QMovie_new6(device.cPointer(), format.cPointer(), parent.cPointer())
	return newQMovie(ret)
}

// NewQMovie7 constructs a new QMovie object.
func NewQMovie7(fileName string, format *QByteArray) *QMovie {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QMovie_new7(fileName_Cstring, C.ulong(len(fileName)), format.cPointer())
	return newQMovie(ret)
}

// NewQMovie8 constructs a new QMovie object.
func NewQMovie8(fileName string, format *QByteArray, parent *QObject) *QMovie {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QMovie_new8(fileName_Cstring, C.ulong(len(fileName)), format.cPointer(), parent.cPointer())
	return newQMovie(ret)
}

func (this *QMovie) MetaObject() *QMetaObject {
	ret := C.QMovie_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QMovie_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMovie_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMovie_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMovie_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMovie_SupportedFormats() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QMovie_SupportedFormats(&_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMovie) SetDevice(device *QIODevice) {
	C.QMovie_SetDevice(this.h, device.cPointer())
}

func (this *QMovie) Device() *QIODevice {
	ret := C.QMovie_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(ret))
}

func (this *QMovie) SetFileName(fileName string) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QMovie_SetFileName(this.h, fileName_Cstring, C.ulong(len(fileName)))
}

func (this *QMovie) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMovie_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMovie) SetFormat(format *QByteArray) {
	C.QMovie_SetFormat(this.h, format.cPointer())
}

func (this *QMovie) Format() *QByteArray {
	ret := C.QMovie_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMovie) SetBackgroundColor(color *QColor) {
	C.QMovie_SetBackgroundColor(this.h, color.cPointer())
}

func (this *QMovie) BackgroundColor() *QColor {
	ret := C.QMovie_BackgroundColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMovie) State() uintptr {
	ret := C.QMovie_State(this.h)
	return (uintptr)(ret)
}

func (this *QMovie) FrameRect() *QRect {
	ret := C.QMovie_FrameRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMovie) CurrentImage() *QImage {
	ret := C.QMovie_CurrentImage(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMovie) CurrentPixmap() *QPixmap {
	ret := C.QMovie_CurrentPixmap(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMovie) IsValid() bool {
	ret := C.QMovie_IsValid(this.h)
	return (bool)(ret)
}

func (this *QMovie) LastError() uintptr {
	ret := C.QMovie_LastError(this.h)
	return (uintptr)(ret)
}

func (this *QMovie) LastErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMovie_LastErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMovie) JumpToFrame(frameNumber int) bool {
	ret := C.QMovie_JumpToFrame(this.h, (C.int)(frameNumber))
	return (bool)(ret)
}

func (this *QMovie) LoopCount() int {
	ret := C.QMovie_LoopCount(this.h)
	return (int)(ret)
}

func (this *QMovie) FrameCount() int {
	ret := C.QMovie_FrameCount(this.h)
	return (int)(ret)
}

func (this *QMovie) NextFrameDelay() int {
	ret := C.QMovie_NextFrameDelay(this.h)
	return (int)(ret)
}

func (this *QMovie) CurrentFrameNumber() int {
	ret := C.QMovie_CurrentFrameNumber(this.h)
	return (int)(ret)
}

func (this *QMovie) Speed() int {
	ret := C.QMovie_Speed(this.h)
	return (int)(ret)
}

func (this *QMovie) ScaledSize() *QSize {
	ret := C.QMovie_ScaledSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMovie) SetScaledSize(size *QSize) {
	C.QMovie_SetScaledSize(this.h, size.cPointer())
}

func (this *QMovie) CacheMode() uintptr {
	ret := C.QMovie_CacheMode(this.h)
	return (uintptr)(ret)
}

func (this *QMovie) SetCacheMode(mode uintptr) {
	C.QMovie_SetCacheMode(this.h, (C.uintptr_t)(mode))
}

func (this *QMovie) Started() {
	C.QMovie_Started(this.h)
}

func (this *QMovie) OnStarted(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMovie_connect_Started(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMovie) Resized(size *QSize) {
	C.QMovie_Resized(this.h, size.cPointer())
}

func (this *QMovie) OnResized(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMovie_connect_Resized(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMovie) Updated(rect *QRect) {
	C.QMovie_Updated(this.h, rect.cPointer())
}

func (this *QMovie) OnUpdated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMovie_connect_Updated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMovie) StateChanged(state uintptr) {
	C.QMovie_StateChanged(this.h, (C.uintptr_t)(state))
}

func (this *QMovie) OnStateChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMovie_connect_StateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMovie) Error(error uintptr) {
	C.QMovie_Error(this.h, (C.uintptr_t)(error))
}

func (this *QMovie) OnError(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMovie_connect_Error(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMovie) Finished() {
	C.QMovie_Finished(this.h)
}

func (this *QMovie) OnFinished(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMovie_connect_Finished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMovie) FrameChanged(frameNumber int) {
	C.QMovie_FrameChanged(this.h, (C.int)(frameNumber))
}

func (this *QMovie) OnFrameChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMovie_connect_FrameChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMovie) Start() {
	C.QMovie_Start(this.h)
}

func (this *QMovie) JumpToNextFrame() bool {
	ret := C.QMovie_JumpToNextFrame(this.h)
	return (bool)(ret)
}

func (this *QMovie) SetPaused(paused bool) {
	C.QMovie_SetPaused(this.h, (C.bool)(paused))
}

func (this *QMovie) Stop() {
	C.QMovie_Stop(this.h)
}

func (this *QMovie) SetSpeed(percentSpeed int) {
	C.QMovie_SetSpeed(this.h, (C.int)(percentSpeed))
}

func QMovie_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMovie_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMovie_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMovie_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMovie_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMovie_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMovie_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMovie_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMovie) Delete() {
	C.QMovie_Delete(this.h)
}

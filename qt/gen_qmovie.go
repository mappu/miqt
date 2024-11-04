package qt

/*

#include "gen_qmovie.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMovie__MovieState int

const (
	QMovie__NotRunning QMovie__MovieState = 0
	QMovie__Paused     QMovie__MovieState = 1
	QMovie__Running    QMovie__MovieState = 2
)

type QMovie__CacheMode int

const (
	QMovie__CacheNone QMovie__CacheMode = 0
	QMovie__CacheAll  QMovie__CacheMode = 1
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

func (this *QMovie) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMovie(h *C.QMovie) *QMovie {
	if h == nil {
		return nil
	}
	return &QMovie{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQMovie(h unsafe.Pointer) *QMovie {
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
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	ret := C.QMovie_new3(fileName_ms)
	return newQMovie(ret)
}

// NewQMovie4 constructs a new QMovie object.
func NewQMovie4(parent *QObject) *QMovie {
	ret := C.QMovie_new4(parent.cPointer())
	return newQMovie(ret)
}

// NewQMovie5 constructs a new QMovie object.
func NewQMovie5(device *QIODevice, format []byte) *QMovie {
	format_alias := C.struct_miqt_string{}
	format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	format_alias.len = C.size_t(len(format))
	ret := C.QMovie_new5(device.cPointer(), format_alias)
	return newQMovie(ret)
}

// NewQMovie6 constructs a new QMovie object.
func NewQMovie6(device *QIODevice, format []byte, parent *QObject) *QMovie {
	format_alias := C.struct_miqt_string{}
	format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	format_alias.len = C.size_t(len(format))
	ret := C.QMovie_new6(device.cPointer(), format_alias, parent.cPointer())
	return newQMovie(ret)
}

// NewQMovie7 constructs a new QMovie object.
func NewQMovie7(fileName string, format []byte) *QMovie {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_alias := C.struct_miqt_string{}
	format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	format_alias.len = C.size_t(len(format))
	ret := C.QMovie_new7(fileName_ms, format_alias)
	return newQMovie(ret)
}

// NewQMovie8 constructs a new QMovie object.
func NewQMovie8(fileName string, format []byte, parent *QObject) *QMovie {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_alias := C.struct_miqt_string{}
	format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	format_alias.len = C.size_t(len(format))
	ret := C.QMovie_new8(fileName_ms, format_alias, parent.cPointer())
	return newQMovie(ret)
}

func (this *QMovie) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMovie_MetaObject(this.h)))
}

func (this *QMovie) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMovie_Metacast(this.h, param1_Cstring))
}

func QMovie_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMovie_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMovie_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMovie_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMovie_SupportedFormats() [][]byte {
	var _ma C.struct_miqt_array = C.QMovie_SupportedFormats()
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QMovie) SetDevice(device *QIODevice) {
	C.QMovie_SetDevice(this.h, device.cPointer())
}

func (this *QMovie) Device() *QIODevice {
	return UnsafeNewQIODevice(unsafe.Pointer(C.QMovie_Device(this.h)))
}

func (this *QMovie) SetFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QMovie_SetFileName(this.h, fileName_ms)
}

func (this *QMovie) FileName() string {
	var _ms C.struct_miqt_string = C.QMovie_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMovie) SetFormat(format []byte) {
	format_alias := C.struct_miqt_string{}
	format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	format_alias.len = C.size_t(len(format))
	C.QMovie_SetFormat(this.h, format_alias)
}

func (this *QMovie) Format() []byte {
	var _bytearray C.struct_miqt_string = C.QMovie_Format(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMovie) SetBackgroundColor(color *QColor) {
	C.QMovie_SetBackgroundColor(this.h, color.cPointer())
}

func (this *QMovie) BackgroundColor() *QColor {
	_ret := C.QMovie_BackgroundColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) State() QMovie__MovieState {
	return (QMovie__MovieState)(C.QMovie_State(this.h))
}

func (this *QMovie) FrameRect() *QRect {
	_ret := C.QMovie_FrameRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) CurrentImage() *QImage {
	_ret := C.QMovie_CurrentImage(this.h)
	_goptr := newQImage(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) CurrentPixmap() *QPixmap {
	_ret := C.QMovie_CurrentPixmap(this.h)
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) IsValid() bool {
	return (bool)(C.QMovie_IsValid(this.h))
}

func (this *QMovie) LastError() QImageReader__ImageReaderError {
	return (QImageReader__ImageReaderError)(C.QMovie_LastError(this.h))
}

func (this *QMovie) LastErrorString() string {
	var _ms C.struct_miqt_string = C.QMovie_LastErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMovie) JumpToFrame(frameNumber int) bool {
	return (bool)(C.QMovie_JumpToFrame(this.h, (C.int)(frameNumber)))
}

func (this *QMovie) LoopCount() int {
	return (int)(C.QMovie_LoopCount(this.h))
}

func (this *QMovie) FrameCount() int {
	return (int)(C.QMovie_FrameCount(this.h))
}

func (this *QMovie) NextFrameDelay() int {
	return (int)(C.QMovie_NextFrameDelay(this.h))
}

func (this *QMovie) CurrentFrameNumber() int {
	return (int)(C.QMovie_CurrentFrameNumber(this.h))
}

func (this *QMovie) Speed() int {
	return (int)(C.QMovie_Speed(this.h))
}

func (this *QMovie) ScaledSize() *QSize {
	_ret := C.QMovie_ScaledSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) SetScaledSize(size *QSize) {
	C.QMovie_SetScaledSize(this.h, size.cPointer())
}

func (this *QMovie) CacheMode() QMovie__CacheMode {
	return (QMovie__CacheMode)(C.QMovie_CacheMode(this.h))
}

func (this *QMovie) SetCacheMode(mode QMovie__CacheMode) {
	C.QMovie_SetCacheMode(this.h, (C.int)(mode))
}

func (this *QMovie) Started() {
	C.QMovie_Started(this.h)
}
func (this *QMovie) OnStarted(slot func()) {
	C.QMovie_connect_Started(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_Started
func miqt_exec_callback_QMovie_Started(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMovie) Resized(size *QSize) {
	C.QMovie_Resized(this.h, size.cPointer())
}
func (this *QMovie) OnResized(slot func(size *QSize)) {
	C.QMovie_connect_Resized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_Resized
func miqt_exec_callback_QMovie_Resized(cb C.intptr_t, size *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size *QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQSize(unsafe.Pointer(size))

	gofunc(slotval1)
}

func (this *QMovie) Updated(rect *QRect) {
	C.QMovie_Updated(this.h, rect.cPointer())
}
func (this *QMovie) OnUpdated(slot func(rect *QRect)) {
	C.QMovie_connect_Updated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_Updated
func miqt_exec_callback_QMovie_Updated(cb C.intptr_t, rect *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rect *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRect(unsafe.Pointer(rect))

	gofunc(slotval1)
}

func (this *QMovie) StateChanged(state QMovie__MovieState) {
	C.QMovie_StateChanged(this.h, (C.int)(state))
}
func (this *QMovie) OnStateChanged(slot func(state QMovie__MovieState)) {
	C.QMovie_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_StateChanged
func miqt_exec_callback_QMovie_StateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QMovie__MovieState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMovie__MovieState)(state)

	gofunc(slotval1)
}

func (this *QMovie) Error(error QImageReader__ImageReaderError) {
	C.QMovie_Error(this.h, (C.int)(error))
}
func (this *QMovie) OnError(slot func(error QImageReader__ImageReaderError)) {
	C.QMovie_connect_Error(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_Error
func miqt_exec_callback_QMovie_Error(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QImageReader__ImageReaderError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QImageReader__ImageReaderError)(error)

	gofunc(slotval1)
}

func (this *QMovie) Finished() {
	C.QMovie_Finished(this.h)
}
func (this *QMovie) OnFinished(slot func()) {
	C.QMovie_connect_Finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_Finished
func miqt_exec_callback_QMovie_Finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMovie) FrameChanged(frameNumber int) {
	C.QMovie_FrameChanged(this.h, (C.int)(frameNumber))
}
func (this *QMovie) OnFrameChanged(slot func(frameNumber int)) {
	C.QMovie_connect_FrameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_FrameChanged
func miqt_exec_callback_QMovie_FrameChanged(cb C.intptr_t, frameNumber C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frameNumber int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(frameNumber)

	gofunc(slotval1)
}

func (this *QMovie) Start() {
	C.QMovie_Start(this.h)
}

func (this *QMovie) JumpToNextFrame() bool {
	return (bool)(C.QMovie_JumpToNextFrame(this.h))
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
	var _ms C.struct_miqt_string = C.QMovie_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMovie_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMovie_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMovie_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMovie_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMovie_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMovie_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMovie) Delete() {
	C.QMovie_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMovie) GoGC() {
	runtime.SetFinalizer(this, func(this *QMovie) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

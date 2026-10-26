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
	h  *C.QMovie
	gc *[1]unsafe.Pointer
	*QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMovie) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QObject.miqtSetGC(gc)
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

// newQMovie constructs the type using only CGO pointers.
func newQMovie(h *C.QMovie) *QMovie {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QMovie_virtbase(h, &outptr_QObject)

	return &QMovie{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQMovie constructs the type using only unsafe pointers.
func UnsafeNewQMovie(h unsafe.Pointer) *QMovie {
	return newQMovie((*C.QMovie)(h))
}

// NewQMovie constructs a new QMovie object.
func NewQMovie() *QMovie {

	return newQMovie(C.QMovie_new())
}

// NewQMovie2 constructs a new QMovie object.
func NewQMovie2(device *QIODevice) *QMovie {
	defer runtime.KeepAlive(device)

	return newQMovie(C.QMovie_new2(device.cPointer()))
}

// NewQMovie3 constructs a new QMovie object.
func NewQMovie3(fileName string) *QMovie {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQMovie(C.QMovie_new3(fileName_ms))
}

// NewQMovie4 constructs a new QMovie object.
func NewQMovie4(parent *QObject) *QMovie {
	defer runtime.KeepAlive(parent)

	return newQMovie(C.QMovie_new4(parent.cPointer()))
}

// NewQMovie5 constructs a new QMovie object.
func NewQMovie5(device *QIODevice, format []byte) *QMovie {
	defer runtime.KeepAlive(device)
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))

	return newQMovie(C.QMovie_new5(device.cPointer(), format_alias))
}

// NewQMovie6 constructs a new QMovie object.
func NewQMovie6(device *QIODevice, format []byte, parent *QObject) *QMovie {
	defer runtime.KeepAlive(device)
	defer runtime.KeepAlive(parent)
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))

	return newQMovie(C.QMovie_new6(device.cPointer(), format_alias, parent.cPointer()))
}

// NewQMovie7 constructs a new QMovie object.
func NewQMovie7(fileName string, format []byte) *QMovie {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))

	return newQMovie(C.QMovie_new7(fileName_ms, format_alias))
}

// NewQMovie8 constructs a new QMovie object.
func NewQMovie8(fileName string, format []byte, parent *QObject) *QMovie {
	defer runtime.KeepAlive(parent)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))

	return newQMovie(C.QMovie_new8(fileName_ms, format_alias, parent.cPointer()))
}

func (this *QMovie) MetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QMovie_metaObject(this.h))
}

func (this *QMovie) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMovie_metacast(this.h, param1_Cstring))
}

func QMovie_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMovie_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMovie_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMovie_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMovie_SupportedFormats() [][]byte {
	var _ma C.struct_miqt_array = C.QMovie_supportedFormats()
	_ret := make([][]byte, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QMovie) SetDevice(device *QIODevice) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(device)
	C.QMovie_setDevice(this.h, device.cPointer())
}

func (this *QMovie) Device() *QIODevice {
	defer runtime.KeepAlive(this)
	return newQIODevice(C.QMovie_device(this.h))
}

func (this *QMovie) SetFileName(fileName string) {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QMovie_setFileName(this.h, fileName_ms)
}

func (this *QMovie) FileName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QMovie_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMovie) SetFormat(format []byte) {
	defer runtime.KeepAlive(this)
	format_alias := C.struct_miqt_string{}
	if len(format) > 0 {
		format_alias.data = (*C.char)(unsafe.Pointer(&format[0]))
	} else {
		format_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	format_alias.len = C.size_t(len(format))
	C.QMovie_setFormat(this.h, format_alias)
}

func (this *QMovie) Format() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QMovie_format(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMovie) SetBackgroundColor(color *QColor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(color)
	C.QMovie_setBackgroundColor(this.h, color.cPointer())
}

func (this *QMovie) BackgroundColor() *QColor {
	defer runtime.KeepAlive(this)
	_goptr := newQColor(C.QMovie_backgroundColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) State() QMovie__MovieState {
	defer runtime.KeepAlive(this)
	return (QMovie__MovieState)(C.QMovie_state(this.h))
}

func (this *QMovie) FrameRect() *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QMovie_frameRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) CurrentImage() *QImage {
	defer runtime.KeepAlive(this)
	_goptr := newQImage(C.QMovie_currentImage(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) CurrentPixmap() *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QMovie_currentPixmap(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMovie_isValid(this.h))
}

func (this *QMovie) LastError() QImageReader__ImageReaderError {
	defer runtime.KeepAlive(this)
	return (QImageReader__ImageReaderError)(C.QMovie_lastError(this.h))
}

func (this *QMovie) LastErrorString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QMovie_lastErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMovie) JumpToFrame(frameNumber int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMovie_jumpToFrame(this.h, (C.int)(frameNumber)))
}

func (this *QMovie) LoopCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMovie_loopCount(this.h))
}

func (this *QMovie) FrameCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMovie_frameCount(this.h))
}

func (this *QMovie) NextFrameDelay() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMovie_nextFrameDelay(this.h))
}

func (this *QMovie) CurrentFrameNumber() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMovie_currentFrameNumber(this.h))
}

func (this *QMovie) Speed() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMovie_speed(this.h))
}

func (this *QMovie) ScaledSize() *QSize {
	defer runtime.KeepAlive(this)
	_goptr := newQSize(C.QMovie_scaledSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) SetScaledSize(size *QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(size)
	C.QMovie_setScaledSize(this.h, size.cPointer())
}

func (this *QMovie) CacheMode() QMovie__CacheMode {
	defer runtime.KeepAlive(this)
	return (QMovie__CacheMode)(C.QMovie_cacheMode(this.h))
}

func (this *QMovie) SetCacheMode(mode QMovie__CacheMode) {
	defer runtime.KeepAlive(this)
	C.QMovie_setCacheMode(this.h, (C.int)(mode))
}

func (this *QMovie) Started() {
	defer runtime.KeepAlive(this)
	C.QMovie_started(this.h)
}
func (this *QMovie) OnStarted(slot func()) {
	C.QMovie_connect_started(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_started
func miqt_exec_callback_QMovie_started(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMovie) Resized(size *QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(size)
	C.QMovie_resized(this.h, size.cPointer())
}
func (this *QMovie) OnResized(slot func(size *QSize)) {
	C.QMovie_connect_resized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_resized
func miqt_exec_callback_QMovie_resized(cb C.intptr_t, size *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size *QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSize(size)

	gofunc(slotval1)
}

func (this *QMovie) Updated(rect *QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rect)
	C.QMovie_updated(this.h, rect.cPointer())
}
func (this *QMovie) OnUpdated(slot func(rect *QRect)) {
	C.QMovie_connect_updated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_updated
func miqt_exec_callback_QMovie_updated(cb C.intptr_t, rect *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rect *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	gofunc(slotval1)
}

func (this *QMovie) StateChanged(state QMovie__MovieState) {
	defer runtime.KeepAlive(this)
	C.QMovie_stateChanged(this.h, (C.int)(state))
}
func (this *QMovie) OnStateChanged(slot func(state QMovie__MovieState)) {
	C.QMovie_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_stateChanged
func miqt_exec_callback_QMovie_stateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QMovie__MovieState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMovie__MovieState)(state)

	gofunc(slotval1)
}

func (this *QMovie) Error(error QImageReader__ImageReaderError) {
	defer runtime.KeepAlive(this)
	C.QMovie_error(this.h, (C.int)(error))
}
func (this *QMovie) OnError(slot func(error QImageReader__ImageReaderError)) {
	C.QMovie_connect_error(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_error
func miqt_exec_callback_QMovie_error(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QImageReader__ImageReaderError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QImageReader__ImageReaderError)(error)

	gofunc(slotval1)
}

func (this *QMovie) Finished() {
	defer runtime.KeepAlive(this)
	C.QMovie_finished(this.h)
}
func (this *QMovie) OnFinished(slot func()) {
	C.QMovie_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_finished
func miqt_exec_callback_QMovie_finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMovie) FrameChanged(frameNumber int) {
	defer runtime.KeepAlive(this)
	C.QMovie_frameChanged(this.h, (C.int)(frameNumber))
}
func (this *QMovie) OnFrameChanged(slot func(frameNumber int)) {
	C.QMovie_connect_frameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMovie_frameChanged
func miqt_exec_callback_QMovie_frameChanged(cb C.intptr_t, frameNumber C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frameNumber int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(frameNumber)

	gofunc(slotval1)
}

func (this *QMovie) Start() {
	defer runtime.KeepAlive(this)
	C.QMovie_start(this.h)
}

func (this *QMovie) JumpToNextFrame() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMovie_jumpToNextFrame(this.h))
}

func (this *QMovie) SetPaused(paused bool) {
	defer runtime.KeepAlive(this)
	C.QMovie_setPaused(this.h, (C.bool)(paused))
}

func (this *QMovie) Stop() {
	defer runtime.KeepAlive(this)
	C.QMovie_stop(this.h)
}

func (this *QMovie) SetSpeed(percentSpeed int) {
	defer runtime.KeepAlive(this)
	C.QMovie_setSpeed(this.h, (C.int)(percentSpeed))
}

func QMovie_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMovie_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMovie_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMovie_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMovie_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMovie_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMovie_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMovie_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QMovie that was directly constructed.
func (this *QMovie) Sender() *QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QMovie_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QMovie that was directly constructed.
func (this *QMovie) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMovie_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QMovie that was directly constructed.
func (this *QMovie) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QMovie_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QMovie that was directly constructed.
func (this *QMovie) IsSignalConnected(signal *QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QMovie_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QMovie) callVirtualBase_Event(event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QMovie_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMovie) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QMovie_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMovie_event
func miqt_exec_callback_QMovie_event(self *C.QMovie, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QMovie{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMovie) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QMovie_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QMovie) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QMovie_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMovie_eventFilter
func miqt_exec_callback_QMovie_eventFilter(self *C.QMovie, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QMovie{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMovie) callVirtualBase_TimerEvent(event *QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QMovie_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMovie) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QMovie_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMovie_timerEvent
func miqt_exec_callback_QMovie_timerEvent(self *C.QMovie, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QMovie{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMovie) callVirtualBase_ChildEvent(event *QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QMovie_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMovie) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QMovie_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMovie_childEvent
func miqt_exec_callback_QMovie_childEvent(self *C.QMovie, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QMovie{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMovie) callVirtualBase_CustomEvent(event *QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QMovie_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMovie) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMovie_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMovie_customEvent
func miqt_exec_callback_QMovie_customEvent(self *C.QMovie, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMovie{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMovie) callVirtualBase_ConnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QMovie_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMovie) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMovie_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMovie_connectNotify
func miqt_exec_callback_QMovie_connectNotify(self *C.QMovie, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMovie{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMovie) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QMovie_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMovie) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMovie_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMovie_disconnectNotify
func miqt_exec_callback_QMovie_disconnectNotify(self *C.QMovie, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMovie{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMovie) Delete() {
	C.QMovie_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMovie) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMovie_delete((*C.QMovie)(gc[0]))
	})
	this.miqtSetGC(gc)
}

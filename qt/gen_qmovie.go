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

	return newQMovie(C.QMovie_new4(parent.cPointer()))
}

// NewQMovie5 constructs a new QMovie object.
func NewQMovie5(device *QIODevice, format []byte) *QMovie {
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
	return newQMetaObject(C.QMovie_metaObject(this.h))
}

func (this *QMovie) Metacast(param1 string) unsafe.Pointer {
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
	C.QMovie_setDevice(this.h, device.cPointer())
}

func (this *QMovie) Device() *QIODevice {
	return newQIODevice(C.QMovie_device(this.h))
}

func (this *QMovie) SetFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QMovie_setFileName(this.h, fileName_ms)
}

func (this *QMovie) FileName() string {
	var _ms C.struct_miqt_string = C.QMovie_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMovie) SetFormat(format []byte) {
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
	var _bytearray C.struct_miqt_string = C.QMovie_format(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMovie) SetBackgroundColor(color *QColor) {
	C.QMovie_setBackgroundColor(this.h, color.cPointer())
}

func (this *QMovie) BackgroundColor() *QColor {
	_goptr := newQColor(C.QMovie_backgroundColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) State() QMovie__MovieState {
	return (QMovie__MovieState)(C.QMovie_state(this.h))
}

func (this *QMovie) FrameRect() *QRect {
	_goptr := newQRect(C.QMovie_frameRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) CurrentImage() *QImage {
	_goptr := newQImage(C.QMovie_currentImage(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) CurrentPixmap() *QPixmap {
	_goptr := newQPixmap(C.QMovie_currentPixmap(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) IsValid() bool {
	return (bool)(C.QMovie_isValid(this.h))
}

func (this *QMovie) LastError() QImageReader__ImageReaderError {
	return (QImageReader__ImageReaderError)(C.QMovie_lastError(this.h))
}

func (this *QMovie) LastErrorString() string {
	var _ms C.struct_miqt_string = C.QMovie_lastErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMovie) JumpToFrame(frameNumber int) bool {
	return (bool)(C.QMovie_jumpToFrame(this.h, (C.int)(frameNumber)))
}

func (this *QMovie) LoopCount() int {
	return (int)(C.QMovie_loopCount(this.h))
}

func (this *QMovie) FrameCount() int {
	return (int)(C.QMovie_frameCount(this.h))
}

func (this *QMovie) NextFrameDelay() int {
	return (int)(C.QMovie_nextFrameDelay(this.h))
}

func (this *QMovie) CurrentFrameNumber() int {
	return (int)(C.QMovie_currentFrameNumber(this.h))
}

func (this *QMovie) Speed() int {
	return (int)(C.QMovie_speed(this.h))
}

func (this *QMovie) ScaledSize() *QSize {
	_goptr := newQSize(C.QMovie_scaledSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMovie) SetScaledSize(size *QSize) {
	C.QMovie_setScaledSize(this.h, size.cPointer())
}

func (this *QMovie) CacheMode() QMovie__CacheMode {
	return (QMovie__CacheMode)(C.QMovie_cacheMode(this.h))
}

func (this *QMovie) SetCacheMode(mode QMovie__CacheMode) {
	C.QMovie_setCacheMode(this.h, (C.int)(mode))
}

func (this *QMovie) Started() {
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
	C.QMovie_start(this.h)
}

func (this *QMovie) JumpToNextFrame() bool {
	return (bool)(C.QMovie_jumpToNextFrame(this.h))
}

func (this *QMovie) SetPaused(paused bool) {
	C.QMovie_setPaused(this.h, (C.bool)(paused))
}

func (this *QMovie) Stop() {
	C.QMovie_stop(this.h)
}

func (this *QMovie) SetSpeed(percentSpeed int) {
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

func (this *QMovie) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QMovie_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMovie) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
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

	return (bool)(C.QMovie_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QMovie) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
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

	C.QMovie_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMovie) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
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

	C.QMovie_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMovie) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
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

	C.QMovie_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMovie) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
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

	C.QMovie_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMovie) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
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

	C.QMovie_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMovie) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
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

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMovie) GoGC() {
	runtime.SetFinalizer(this, func(this *QMovie) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

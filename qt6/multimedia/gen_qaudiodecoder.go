package multimedia

/*

#include "gen_qaudiodecoder.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioDecoder__Error int

const (
	QAudioDecoder__NoError           QAudioDecoder__Error = 0
	QAudioDecoder__ResourceError     QAudioDecoder__Error = 1
	QAudioDecoder__FormatError       QAudioDecoder__Error = 2
	QAudioDecoder__AccessDeniedError QAudioDecoder__Error = 3
	QAudioDecoder__NotSupportedError QAudioDecoder__Error = 4
)

type QAudioDecoder struct {
	h  *C.QAudioDecoder
	gc *[1]unsafe.Pointer
	*qt6.QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAudioDecoder) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QAudioDecoder) cPointer() *C.QAudioDecoder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioDecoder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioDecoder constructs the type using only CGO pointers.
func newQAudioDecoder(h *C.QAudioDecoder) *QAudioDecoder {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAudioDecoder_virtbase(h, &outptr_QObject)

	return &QAudioDecoder{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAudioDecoder constructs the type using only unsafe pointers.
func UnsafeNewQAudioDecoder(h unsafe.Pointer) *QAudioDecoder {
	return newQAudioDecoder((*C.QAudioDecoder)(h))
}

// NewQAudioDecoder constructs a new QAudioDecoder object.
func NewQAudioDecoder() *QAudioDecoder {

	return newQAudioDecoder(C.QAudioDecoder_new())
}

// NewQAudioDecoder2 constructs a new QAudioDecoder object.
func NewQAudioDecoder2(parent *qt6.QObject) *QAudioDecoder {
	defer runtime.KeepAlive(parent)

	return newQAudioDecoder(C.QAudioDecoder_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QAudioDecoder) MetaObject() *qt6.QMetaObject {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioDecoder_metaObject(this.h)))
}

func (this *QAudioDecoder) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioDecoder_metacast(this.h, param1_Cstring))
}

func QAudioDecoder_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoder_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDecoder) IsSupported() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAudioDecoder_isSupported(this.h))
}

func (this *QAudioDecoder) IsDecoding() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAudioDecoder_isDecoding(this.h))
}

func (this *QAudioDecoder) Source() *qt6.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QAudioDecoder_source(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDecoder) SetSource(fileName *qt6.QUrl) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(fileName)
	C.QAudioDecoder_setSource(this.h, (*C.QUrl)(fileName.UnsafePointer()))
}

func (this *QAudioDecoder) SourceDevice() *qt6.QIODevice {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QAudioDecoder_sourceDevice(this.h)))
}

func (this *QAudioDecoder) SetSourceDevice(device *qt6.QIODevice) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(device)
	C.QAudioDecoder_setSourceDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QAudioDecoder) AudioFormat() *QAudioFormat {
	defer runtime.KeepAlive(this)
	_goptr := newQAudioFormat(C.QAudioDecoder_audioFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDecoder) SetAudioFormat(format *QAudioFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	C.QAudioDecoder_setAudioFormat(this.h, format.cPointer())
}

func (this *QAudioDecoder) Error() QAudioDecoder__Error {
	defer runtime.KeepAlive(this)
	return (QAudioDecoder__Error)(C.QAudioDecoder_error(this.h))
}

func (this *QAudioDecoder) ErrorString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAudioDecoder_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDecoder) Read() *QAudioBuffer {
	defer runtime.KeepAlive(this)
	_goptr := newQAudioBuffer(C.QAudioDecoder_read(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDecoder) BufferAvailable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAudioDecoder_bufferAvailable(this.h))
}

func (this *QAudioDecoder) Position() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QAudioDecoder_position(this.h))
}

func (this *QAudioDecoder) Duration() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QAudioDecoder_duration(this.h))
}

func (this *QAudioDecoder) Start() {
	defer runtime.KeepAlive(this)
	C.QAudioDecoder_start(this.h)
}

func (this *QAudioDecoder) Stop() {
	defer runtime.KeepAlive(this)
	C.QAudioDecoder_stop(this.h)
}

func (this *QAudioDecoder) BufferAvailableChanged(param1 bool) {
	defer runtime.KeepAlive(this)
	C.QAudioDecoder_bufferAvailableChanged(this.h, (C.bool)(param1))
}
func (this *QAudioDecoder) OnBufferAvailableChanged(slot func(param1 bool)) {
	C.QAudioDecoder_connect_bufferAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_bufferAvailableChanged
func miqt_exec_callback_QAudioDecoder_bufferAvailableChanged(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QAudioDecoder) BufferReady() {
	defer runtime.KeepAlive(this)
	C.QAudioDecoder_bufferReady(this.h)
}
func (this *QAudioDecoder) OnBufferReady(slot func()) {
	C.QAudioDecoder_connect_bufferReady(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_bufferReady
func miqt_exec_callback_QAudioDecoder_bufferReady(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioDecoder) Finished() {
	defer runtime.KeepAlive(this)
	C.QAudioDecoder_finished(this.h)
}
func (this *QAudioDecoder) OnFinished(slot func()) {
	C.QAudioDecoder_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_finished
func miqt_exec_callback_QAudioDecoder_finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioDecoder) IsDecodingChanged(param1 bool) {
	defer runtime.KeepAlive(this)
	C.QAudioDecoder_isDecodingChanged(this.h, (C.bool)(param1))
}
func (this *QAudioDecoder) OnIsDecodingChanged(slot func(param1 bool)) {
	C.QAudioDecoder_connect_isDecodingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_isDecodingChanged
func miqt_exec_callback_QAudioDecoder_isDecodingChanged(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QAudioDecoder) FormatChanged(format *QAudioFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	C.QAudioDecoder_formatChanged(this.h, format.cPointer())
}
func (this *QAudioDecoder) OnFormatChanged(slot func(format *QAudioFormat)) {
	C.QAudioDecoder_connect_formatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_formatChanged
func miqt_exec_callback_QAudioDecoder_formatChanged(cb C.intptr_t, format *C.QAudioFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format *QAudioFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAudioFormat(format)

	gofunc(slotval1)
}

func (this *QAudioDecoder) ErrorWithError(error QAudioDecoder__Error) {
	defer runtime.KeepAlive(this)
	C.QAudioDecoder_errorWithError(this.h, (C.int)(error))
}
func (this *QAudioDecoder) OnErrorWithError(slot func(error QAudioDecoder__Error)) {
	C.QAudioDecoder_connect_errorWithError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_errorWithError
func miqt_exec_callback_QAudioDecoder_errorWithError(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QAudioDecoder__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudioDecoder__Error)(error)

	gofunc(slotval1)
}

func (this *QAudioDecoder) SourceChanged() {
	defer runtime.KeepAlive(this)
	C.QAudioDecoder_sourceChanged(this.h)
}
func (this *QAudioDecoder) OnSourceChanged(slot func()) {
	C.QAudioDecoder_connect_sourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_sourceChanged
func miqt_exec_callback_QAudioDecoder_sourceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioDecoder) PositionChanged(position int64) {
	defer runtime.KeepAlive(this)
	C.QAudioDecoder_positionChanged(this.h, (C.longlong)(position))
}
func (this *QAudioDecoder) OnPositionChanged(slot func(position int64)) {
	C.QAudioDecoder_connect_positionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_positionChanged
func miqt_exec_callback_QAudioDecoder_positionChanged(cb C.intptr_t, position C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(position)

	gofunc(slotval1)
}

func (this *QAudioDecoder) DurationChanged(duration int64) {
	defer runtime.KeepAlive(this)
	C.QAudioDecoder_durationChanged(this.h, (C.longlong)(duration))
}
func (this *QAudioDecoder) OnDurationChanged(slot func(duration int64)) {
	C.QAudioDecoder_connect_durationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_durationChanged
func miqt_exec_callback_QAudioDecoder_durationChanged(cb C.intptr_t, duration C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(duration int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(duration)

	gofunc(slotval1)
}

func QAudioDecoder_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoder_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioDecoder_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoder_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QAudioDecoder that was directly constructed.
func (this *QAudioDecoder) Sender() *qt6.QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QAudioDecoder_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAudioDecoder that was directly constructed.
func (this *QAudioDecoder) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAudioDecoder_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAudioDecoder that was directly constructed.
func (this *QAudioDecoder) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAudioDecoder_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAudioDecoder that was directly constructed.
func (this *QAudioDecoder) IsSignalConnected(signal *qt6.QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAudioDecoder_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QAudioDecoder) callVirtualBase_Event(event *qt6.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QAudioDecoder_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioDecoder) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QAudioDecoder_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_event
func miqt_exec_callback_QAudioDecoder_event(self *C.QAudioDecoder, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioDecoder{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioDecoder) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QAudioDecoder_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioDecoder) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QAudioDecoder_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_eventFilter
func miqt_exec_callback_QAudioDecoder_eventFilter(self *C.QAudioDecoder, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioDecoder{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioDecoder) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QAudioDecoder_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioDecoder) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QAudioDecoder_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_timerEvent
func miqt_exec_callback_QAudioDecoder_timerEvent(self *C.QAudioDecoder, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QAudioDecoder_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioDecoder) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QAudioDecoder_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_childEvent
func miqt_exec_callback_QAudioDecoder_childEvent(self *C.QAudioDecoder, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_CustomEvent(event *qt6.QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QAudioDecoder_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioDecoder) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QAudioDecoder_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_customEvent
func miqt_exec_callback_QAudioDecoder_customEvent(self *C.QAudioDecoder, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QAudioDecoder_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioDecoder) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAudioDecoder_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_connectNotify
func miqt_exec_callback_QAudioDecoder_connectNotify(self *C.QAudioDecoder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QAudioDecoder_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioDecoder) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QAudioDecoder_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_disconnectNotify
func miqt_exec_callback_QAudioDecoder_disconnectNotify(self *C.QAudioDecoder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioDecoder) Delete() {
	C.QAudioDecoder_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAudioDecoder) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAudioDecoder_delete((*C.QAudioDecoder)(gc[0]))
	})
	this.miqtSetGC(gc)
}

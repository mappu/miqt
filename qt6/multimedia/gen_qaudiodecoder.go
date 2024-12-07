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
	h          *C.QAudioDecoder
	isSubclass bool
	*qt6.QObject
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

	ret := newQAudioDecoder(C.QAudioDecoder_new())
	ret.isSubclass = true
	return ret
}

// NewQAudioDecoder2 constructs a new QAudioDecoder object.
func NewQAudioDecoder2(parent *qt6.QObject) *QAudioDecoder {

	ret := newQAudioDecoder(C.QAudioDecoder_new2((*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

func (this *QAudioDecoder) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioDecoder_MetaObject(this.h)))
}

func (this *QAudioDecoder) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioDecoder_Metacast(this.h, param1_Cstring))
}

func QAudioDecoder_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoder_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDecoder) IsSupported() bool {
	return (bool)(C.QAudioDecoder_IsSupported(this.h))
}

func (this *QAudioDecoder) IsDecoding() bool {
	return (bool)(C.QAudioDecoder_IsDecoding(this.h))
}

func (this *QAudioDecoder) Source() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QAudioDecoder_Source(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDecoder) SetSource(fileName *qt6.QUrl) {
	C.QAudioDecoder_SetSource(this.h, (*C.QUrl)(fileName.UnsafePointer()))
}

func (this *QAudioDecoder) SourceDevice() *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QAudioDecoder_SourceDevice(this.h)))
}

func (this *QAudioDecoder) SetSourceDevice(device *qt6.QIODevice) {
	C.QAudioDecoder_SetSourceDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QAudioDecoder) AudioFormat() *QAudioFormat {
	_goptr := newQAudioFormat(C.QAudioDecoder_AudioFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDecoder) SetAudioFormat(format *QAudioFormat) {
	C.QAudioDecoder_SetAudioFormat(this.h, format.cPointer())
}

func (this *QAudioDecoder) Error() QAudioDecoder__Error {
	return (QAudioDecoder__Error)(C.QAudioDecoder_Error(this.h))
}

func (this *QAudioDecoder) ErrorString() string {
	var _ms C.struct_miqt_string = C.QAudioDecoder_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDecoder) Read() *QAudioBuffer {
	_goptr := newQAudioBuffer(C.QAudioDecoder_Read(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDecoder) BufferAvailable() bool {
	return (bool)(C.QAudioDecoder_BufferAvailable(this.h))
}

func (this *QAudioDecoder) Position() int64 {
	return (int64)(C.QAudioDecoder_Position(this.h))
}

func (this *QAudioDecoder) Duration() int64 {
	return (int64)(C.QAudioDecoder_Duration(this.h))
}

func (this *QAudioDecoder) Start() {
	C.QAudioDecoder_Start(this.h)
}

func (this *QAudioDecoder) Stop() {
	C.QAudioDecoder_Stop(this.h)
}

func (this *QAudioDecoder) BufferAvailableChanged(param1 bool) {
	C.QAudioDecoder_BufferAvailableChanged(this.h, (C.bool)(param1))
}
func (this *QAudioDecoder) OnBufferAvailableChanged(slot func(param1 bool)) {
	C.QAudioDecoder_connect_BufferAvailableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_BufferAvailableChanged
func miqt_exec_callback_QAudioDecoder_BufferAvailableChanged(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QAudioDecoder) BufferReady() {
	C.QAudioDecoder_BufferReady(this.h)
}
func (this *QAudioDecoder) OnBufferReady(slot func()) {
	C.QAudioDecoder_connect_BufferReady(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_BufferReady
func miqt_exec_callback_QAudioDecoder_BufferReady(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioDecoder) Finished() {
	C.QAudioDecoder_Finished(this.h)
}
func (this *QAudioDecoder) OnFinished(slot func()) {
	C.QAudioDecoder_connect_Finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_Finished
func miqt_exec_callback_QAudioDecoder_Finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioDecoder) IsDecodingChanged(param1 bool) {
	C.QAudioDecoder_IsDecodingChanged(this.h, (C.bool)(param1))
}
func (this *QAudioDecoder) OnIsDecodingChanged(slot func(param1 bool)) {
	C.QAudioDecoder_connect_IsDecodingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_IsDecodingChanged
func miqt_exec_callback_QAudioDecoder_IsDecodingChanged(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QAudioDecoder) FormatChanged(format *QAudioFormat) {
	C.QAudioDecoder_FormatChanged(this.h, format.cPointer())
}
func (this *QAudioDecoder) OnFormatChanged(slot func(format *QAudioFormat)) {
	C.QAudioDecoder_connect_FormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_FormatChanged
func miqt_exec_callback_QAudioDecoder_FormatChanged(cb C.intptr_t, format *C.QAudioFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format *QAudioFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAudioFormat(format)

	gofunc(slotval1)
}

func (this *QAudioDecoder) ErrorWithError(error QAudioDecoder__Error) {
	C.QAudioDecoder_ErrorWithError(this.h, (C.int)(error))
}
func (this *QAudioDecoder) OnErrorWithError(slot func(error QAudioDecoder__Error)) {
	C.QAudioDecoder_connect_ErrorWithError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_ErrorWithError
func miqt_exec_callback_QAudioDecoder_ErrorWithError(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QAudioDecoder__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudioDecoder__Error)(error)

	gofunc(slotval1)
}

func (this *QAudioDecoder) SourceChanged() {
	C.QAudioDecoder_SourceChanged(this.h)
}
func (this *QAudioDecoder) OnSourceChanged(slot func()) {
	C.QAudioDecoder_connect_SourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_SourceChanged
func miqt_exec_callback_QAudioDecoder_SourceChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAudioDecoder) PositionChanged(position int64) {
	C.QAudioDecoder_PositionChanged(this.h, (C.longlong)(position))
}
func (this *QAudioDecoder) OnPositionChanged(slot func(position int64)) {
	C.QAudioDecoder_connect_PositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_PositionChanged
func miqt_exec_callback_QAudioDecoder_PositionChanged(cb C.intptr_t, position C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(position)

	gofunc(slotval1)
}

func (this *QAudioDecoder) DurationChanged(duration int64) {
	C.QAudioDecoder_DurationChanged(this.h, (C.longlong)(duration))
}
func (this *QAudioDecoder) OnDurationChanged(slot func(duration int64)) {
	C.QAudioDecoder_connect_DurationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_DurationChanged
func miqt_exec_callback_QAudioDecoder_DurationChanged(cb C.intptr_t, duration C.longlong) {
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
	var _ms C.struct_miqt_string = C.QAudioDecoder_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioDecoder_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoder_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDecoder) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QAudioDecoder_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioDecoder) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioDecoder_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_Event
func miqt_exec_callback_QAudioDecoder_Event(self *C.QAudioDecoder, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QAudioDecoder_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioDecoder) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioDecoder_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_EventFilter
func miqt_exec_callback_QAudioDecoder_EventFilter(self *C.QAudioDecoder, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QAudioDecoder_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioDecoder) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioDecoder_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_TimerEvent
func miqt_exec_callback_QAudioDecoder_TimerEvent(self *C.QAudioDecoder, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QAudioDecoder_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioDecoder) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioDecoder_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_ChildEvent
func miqt_exec_callback_QAudioDecoder_ChildEvent(self *C.QAudioDecoder, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QAudioDecoder_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioDecoder) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioDecoder_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_CustomEvent
func miqt_exec_callback_QAudioDecoder_CustomEvent(self *C.QAudioDecoder, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioDecoder_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioDecoder) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioDecoder_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_ConnectNotify
func miqt_exec_callback_QAudioDecoder_ConnectNotify(self *C.QAudioDecoder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QAudioDecoder_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioDecoder) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioDecoder_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_DisconnectNotify
func miqt_exec_callback_QAudioDecoder_DisconnectNotify(self *C.QAudioDecoder, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QAudioDecoder_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioDecoder) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioDecoder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

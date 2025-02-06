package multimedia

/*

#include "gen_qaudiodecoder.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioDecoder__State int

const (
	QAudioDecoder__StoppedState  QAudioDecoder__State = 0
	QAudioDecoder__DecodingState QAudioDecoder__State = 1
)

type QAudioDecoder__Error int

const (
	QAudioDecoder__NoError             QAudioDecoder__Error = 0
	QAudioDecoder__ResourceError       QAudioDecoder__Error = 1
	QAudioDecoder__FormatError         QAudioDecoder__Error = 2
	QAudioDecoder__AccessDeniedError   QAudioDecoder__Error = 3
	QAudioDecoder__ServiceMissingError QAudioDecoder__Error = 4
)

type QAudioDecoder struct {
	h *C.QAudioDecoder
	*QMediaObject
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
	var outptr_QMediaObject *C.QMediaObject = nil
	C.QAudioDecoder_virtbase(h, &outptr_QMediaObject)

	return &QAudioDecoder{h: h,
		QMediaObject: newQMediaObject(outptr_QMediaObject)}
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
func NewQAudioDecoder2(parent *qt.QObject) *QAudioDecoder {

	return newQAudioDecoder(C.QAudioDecoder_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QAudioDecoder) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioDecoder_metaObject(this.h)))
}

func (this *QAudioDecoder) Metacast(param1 string) unsafe.Pointer {
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

func QAudioDecoder_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoder_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioDecoder_HasSupport(mimeType string) QMultimedia__SupportEstimate {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	return (QMultimedia__SupportEstimate)(C.QAudioDecoder_hasSupport(mimeType_ms))
}

func (this *QAudioDecoder) State() QAudioDecoder__State {
	return (QAudioDecoder__State)(C.QAudioDecoder_state(this.h))
}

func (this *QAudioDecoder) SourceFilename() string {
	var _ms C.struct_miqt_string = C.QAudioDecoder_sourceFilename(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDecoder) SetSourceFilename(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QAudioDecoder_setSourceFilename(this.h, fileName_ms)
}

func (this *QAudioDecoder) SourceDevice() *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QAudioDecoder_sourceDevice(this.h)))
}

func (this *QAudioDecoder) SetSourceDevice(device *qt.QIODevice) {
	C.QAudioDecoder_setSourceDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QAudioDecoder) AudioFormat() *QAudioFormat {
	_goptr := newQAudioFormat(C.QAudioDecoder_audioFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDecoder) SetAudioFormat(format *QAudioFormat) {
	C.QAudioDecoder_setAudioFormat(this.h, format.cPointer())
}

func (this *QAudioDecoder) Error() QAudioDecoder__Error {
	return (QAudioDecoder__Error)(C.QAudioDecoder_error(this.h))
}

func (this *QAudioDecoder) ErrorString() string {
	var _ms C.struct_miqt_string = C.QAudioDecoder_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDecoder) Read() *QAudioBuffer {
	_goptr := newQAudioBuffer(C.QAudioDecoder_read(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAudioDecoder) BufferAvailable() bool {
	return (bool)(C.QAudioDecoder_bufferAvailable(this.h))
}

func (this *QAudioDecoder) Position() int64 {
	return (int64)(C.QAudioDecoder_position(this.h))
}

func (this *QAudioDecoder) Duration() int64 {
	return (int64)(C.QAudioDecoder_duration(this.h))
}

func (this *QAudioDecoder) Start() {
	C.QAudioDecoder_start(this.h)
}

func (this *QAudioDecoder) Stop() {
	C.QAudioDecoder_stop(this.h)
}

func (this *QAudioDecoder) BufferAvailableChanged(param1 bool) {
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

func (this *QAudioDecoder) StateChanged(newState QAudioDecoder__State) {
	C.QAudioDecoder_stateChanged(this.h, (C.int)(newState))
}
func (this *QAudioDecoder) OnStateChanged(slot func(newState QAudioDecoder__State)) {
	C.QAudioDecoder_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_stateChanged
func miqt_exec_callback_QAudioDecoder_stateChanged(cb C.intptr_t, newState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newState QAudioDecoder__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudioDecoder__State)(newState)

	gofunc(slotval1)
}

func (this *QAudioDecoder) FormatChanged(format *QAudioFormat) {
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

func (this *QAudioDecoder) Bind(param1 *qt.QObject) bool {
	return (bool)(C.QAudioDecoder_bind(this.h, (*C.QObject)(param1.UnsafePointer())))
}

func (this *QAudioDecoder) Unbind(param1 *qt.QObject) {
	C.QAudioDecoder_unbind(this.h, (*C.QObject)(param1.UnsafePointer()))
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

func QAudioDecoder_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoder_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioDecoder_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoder_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioDecoder_HasSupport2(mimeType string, codecs []string) QMultimedia__SupportEstimate {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	codecs_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(codecs))))
	defer C.free(unsafe.Pointer(codecs_CArray))
	for i := range codecs {
		codecs_i_ms := C.struct_miqt_string{}
		codecs_i_ms.data = C.CString(codecs[i])
		codecs_i_ms.len = C.size_t(len(codecs[i]))
		defer C.free(unsafe.Pointer(codecs_i_ms.data))
		codecs_CArray[i] = codecs_i_ms
	}
	codecs_ma := C.struct_miqt_array{len: C.size_t(len(codecs)), data: unsafe.Pointer(codecs_CArray)}
	return (QMultimedia__SupportEstimate)(C.QAudioDecoder_hasSupport2(mimeType_ms, codecs_ma))
}

// AddPropertyWatch can only be called from a QAudioDecoder that was directly constructed.
func (this *QAudioDecoder) AddPropertyWatch(name []byte) {
	name_alias := C.struct_miqt_string{}
	if len(name) > 0 {
		name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	} else {
		name_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	name_alias.len = C.size_t(len(name))

	var _dynamic_cast_ok C.bool = false
	C.QAudioDecoder_protectedbase_addPropertyWatch(&_dynamic_cast_ok, unsafe.Pointer(this.h), name_alias)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemovePropertyWatch can only be called from a QAudioDecoder that was directly constructed.
func (this *QAudioDecoder) RemovePropertyWatch(name []byte) {
	name_alias := C.struct_miqt_string{}
	if len(name) > 0 {
		name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	} else {
		name_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	name_alias.len = C.size_t(len(name))

	var _dynamic_cast_ok C.bool = false
	C.QAudioDecoder_protectedbase_removePropertyWatch(&_dynamic_cast_ok, unsafe.Pointer(this.h), name_alias)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QAudioDecoder that was directly constructed.
func (this *QAudioDecoder) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QAudioDecoder_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAudioDecoder that was directly constructed.
func (this *QAudioDecoder) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAudioDecoder_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAudioDecoder that was directly constructed.
func (this *QAudioDecoder) Receivers(signal string) int {
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
func (this *QAudioDecoder) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAudioDecoder_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QAudioDecoder) callVirtualBase_Bind(param1 *qt.QObject) bool {

	return (bool)(C.QAudioDecoder_virtualbase_bind(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer())))

}
func (this *QAudioDecoder) OnBind(slot func(super func(param1 *qt.QObject) bool, param1 *qt.QObject) bool) {
	ok := C.QAudioDecoder_override_virtual_bind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_bind
func miqt_exec_callback_QAudioDecoder_bind(self *C.QAudioDecoder, cb C.intptr_t, param1 *C.QObject) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject) bool, param1 *qt.QObject) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QAudioDecoder{h: self}).callVirtualBase_Bind, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioDecoder) callVirtualBase_Unbind(param1 *qt.QObject) {

	C.QAudioDecoder_virtualbase_unbind(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()))

}
func (this *QAudioDecoder) OnUnbind(slot func(super func(param1 *qt.QObject), param1 *qt.QObject)) {
	ok := C.QAudioDecoder_override_virtual_unbind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_unbind
func miqt_exec_callback_QAudioDecoder_unbind(self *C.QAudioDecoder, cb C.intptr_t, param1 *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject), param1 *qt.QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_Unbind, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_IsAvailable() bool {

	return (bool)(C.QAudioDecoder_virtualbase_isAvailable(unsafe.Pointer(this.h)))

}
func (this *QAudioDecoder) OnIsAvailable(slot func(super func() bool) bool) {
	ok := C.QAudioDecoder_override_virtual_isAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_isAvailable
func miqt_exec_callback_QAudioDecoder_isAvailable(self *C.QAudioDecoder, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAudioDecoder{h: self}).callVirtualBase_IsAvailable)

	return (C.bool)(virtualReturn)

}

func (this *QAudioDecoder) callVirtualBase_Availability() QMultimedia__AvailabilityStatus {

	return (QMultimedia__AvailabilityStatus)(C.QAudioDecoder_virtualbase_availability(unsafe.Pointer(this.h)))

}
func (this *QAudioDecoder) OnAvailability(slot func(super func() QMultimedia__AvailabilityStatus) QMultimedia__AvailabilityStatus) {
	ok := C.QAudioDecoder_override_virtual_availability(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_availability
func miqt_exec_callback_QAudioDecoder_availability(self *C.QAudioDecoder, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QMultimedia__AvailabilityStatus) QMultimedia__AvailabilityStatus)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAudioDecoder{h: self}).callVirtualBase_Availability)

	return (C.int)(virtualReturn)

}

func (this *QAudioDecoder) callVirtualBase_Service() *QMediaService {

	return newQMediaService(C.QAudioDecoder_virtualbase_service(unsafe.Pointer(this.h)))

}
func (this *QAudioDecoder) OnService(slot func(super func() *QMediaService) *QMediaService) {
	ok := C.QAudioDecoder_override_virtual_service(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_service
func miqt_exec_callback_QAudioDecoder_service(self *C.QAudioDecoder, cb C.intptr_t) *C.QMediaService {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaService) *QMediaService)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAudioDecoder{h: self}).callVirtualBase_Service)

	return virtualReturn.cPointer()

}

func (this *QAudioDecoder) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QAudioDecoder_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioDecoder) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QAudioDecoder_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_event
func miqt_exec_callback_QAudioDecoder_event(self *C.QAudioDecoder, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioDecoder{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioDecoder) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QAudioDecoder_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioDecoder) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QAudioDecoder_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_eventFilter
func miqt_exec_callback_QAudioDecoder_eventFilter(self *C.QAudioDecoder, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioDecoder{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioDecoder) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QAudioDecoder_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioDecoder) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QAudioDecoder_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_timerEvent
func miqt_exec_callback_QAudioDecoder_timerEvent(self *C.QAudioDecoder, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QAudioDecoder_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioDecoder) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QAudioDecoder_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_childEvent
func miqt_exec_callback_QAudioDecoder_childEvent(self *C.QAudioDecoder, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QAudioDecoder_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioDecoder) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QAudioDecoder_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_customEvent
func miqt_exec_callback_QAudioDecoder_customEvent(self *C.QAudioDecoder, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QAudioDecoder_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioDecoder) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QAudioDecoder_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_connectNotify
func miqt_exec_callback_QAudioDecoder_connectNotify(self *C.QAudioDecoder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QAudioDecoder_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioDecoder) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QAudioDecoder_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioDecoder_disconnectNotify
func miqt_exec_callback_QAudioDecoder_disconnectNotify(self *C.QAudioDecoder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioDecoder) Delete() {
	C.QAudioDecoder_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioDecoder) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioDecoder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

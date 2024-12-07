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
	h          *C.QAudioDecoder
	isSubclass bool
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
func newQAudioDecoder(h *C.QAudioDecoder, h_QMediaObject *C.QMediaObject, h_QObject *C.QObject) *QAudioDecoder {
	if h == nil {
		return nil
	}
	return &QAudioDecoder{h: h,
		QMediaObject: newQMediaObject(h_QMediaObject, h_QObject)}
}

// UnsafeNewQAudioDecoder constructs the type using only unsafe pointers.
func UnsafeNewQAudioDecoder(h unsafe.Pointer, h_QMediaObject unsafe.Pointer, h_QObject unsafe.Pointer) *QAudioDecoder {
	if h == nil {
		return nil
	}

	return &QAudioDecoder{h: (*C.QAudioDecoder)(h),
		QMediaObject: UnsafeNewQMediaObject(h_QMediaObject, h_QObject)}
}

// NewQAudioDecoder constructs a new QAudioDecoder object.
func NewQAudioDecoder() *QAudioDecoder {
	var outptr_QAudioDecoder *C.QAudioDecoder = nil
	var outptr_QMediaObject *C.QMediaObject = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioDecoder_new(&outptr_QAudioDecoder, &outptr_QMediaObject, &outptr_QObject)
	ret := newQAudioDecoder(outptr_QAudioDecoder, outptr_QMediaObject, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioDecoder2 constructs a new QAudioDecoder object.
func NewQAudioDecoder2(parent *qt.QObject) *QAudioDecoder {
	var outptr_QAudioDecoder *C.QAudioDecoder = nil
	var outptr_QMediaObject *C.QMediaObject = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioDecoder_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QAudioDecoder, &outptr_QMediaObject, &outptr_QObject)
	ret := newQAudioDecoder(outptr_QAudioDecoder, outptr_QMediaObject, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAudioDecoder) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioDecoder_MetaObject(this.h)))
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

func QAudioDecoder_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoder_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioDecoder_HasSupport(mimeType string) QMultimedia__SupportEstimate {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	return (QMultimedia__SupportEstimate)(C.QAudioDecoder_HasSupport(mimeType_ms))
}

func (this *QAudioDecoder) State() QAudioDecoder__State {
	return (QAudioDecoder__State)(C.QAudioDecoder_State(this.h))
}

func (this *QAudioDecoder) SourceFilename() string {
	var _ms C.struct_miqt_string = C.QAudioDecoder_SourceFilename(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioDecoder) SetSourceFilename(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QAudioDecoder_SetSourceFilename(this.h, fileName_ms)
}

func (this *QAudioDecoder) SourceDevice() *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QAudioDecoder_SourceDevice(this.h)), nil)
}

func (this *QAudioDecoder) SetSourceDevice(device *qt.QIODevice) {
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

func (this *QAudioDecoder) StateChanged(newState QAudioDecoder__State) {
	C.QAudioDecoder_StateChanged(this.h, (C.int)(newState))
}
func (this *QAudioDecoder) OnStateChanged(slot func(newState QAudioDecoder__State)) {
	C.QAudioDecoder_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_StateChanged
func miqt_exec_callback_QAudioDecoder_StateChanged(cb C.intptr_t, newState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newState QAudioDecoder__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudioDecoder__State)(newState)

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

func (this *QAudioDecoder) Bind(param1 *qt.QObject) bool {
	return (bool)(C.QAudioDecoder_Bind(this.h, (*C.QObject)(param1.UnsafePointer())))
}

func (this *QAudioDecoder) Unbind(param1 *qt.QObject) {
	C.QAudioDecoder_Unbind(this.h, (*C.QObject)(param1.UnsafePointer()))
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

func QAudioDecoder_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoder_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioDecoder_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioDecoder_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
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
	return (QMultimedia__SupportEstimate)(C.QAudioDecoder_HasSupport2(mimeType_ms, codecs_ma))
}

func (this *QAudioDecoder) callVirtualBase_Bind(param1 *qt.QObject) bool {

	return (bool)(C.QAudioDecoder_virtualbase_Bind(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer())))

}
func (this *QAudioDecoder) OnBind(slot func(super func(param1 *qt.QObject) bool, param1 *qt.QObject) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioDecoder_override_virtual_Bind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_Bind
func miqt_exec_callback_QAudioDecoder_Bind(self *C.QAudioDecoder, cb C.intptr_t, param1 *C.QObject) C.bool {
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

	C.QAudioDecoder_virtualbase_Unbind(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()))

}
func (this *QAudioDecoder) OnUnbind(slot func(super func(param1 *qt.QObject), param1 *qt.QObject)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioDecoder_override_virtual_Unbind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_Unbind
func miqt_exec_callback_QAudioDecoder_Unbind(self *C.QAudioDecoder, cb C.intptr_t, param1 *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject), param1 *qt.QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	gofunc((&QAudioDecoder{h: self}).callVirtualBase_Unbind, slotval1)

}

func (this *QAudioDecoder) callVirtualBase_IsAvailable() bool {

	return (bool)(C.QAudioDecoder_virtualbase_IsAvailable(unsafe.Pointer(this.h)))

}
func (this *QAudioDecoder) OnIsAvailable(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioDecoder_override_virtual_IsAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_IsAvailable
func miqt_exec_callback_QAudioDecoder_IsAvailable(self *C.QAudioDecoder, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAudioDecoder{h: self}).callVirtualBase_IsAvailable)

	return (C.bool)(virtualReturn)

}

func (this *QAudioDecoder) callVirtualBase_Availability() QMultimedia__AvailabilityStatus {

	return (QMultimedia__AvailabilityStatus)(C.QAudioDecoder_virtualbase_Availability(unsafe.Pointer(this.h)))

}
func (this *QAudioDecoder) OnAvailability(slot func(super func() QMultimedia__AvailabilityStatus) QMultimedia__AvailabilityStatus) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioDecoder_override_virtual_Availability(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_Availability
func miqt_exec_callback_QAudioDecoder_Availability(self *C.QAudioDecoder, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QMultimedia__AvailabilityStatus) QMultimedia__AvailabilityStatus)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAudioDecoder{h: self}).callVirtualBase_Availability)

	return (C.int)(virtualReturn)

}

func (this *QAudioDecoder) callVirtualBase_Service() *QMediaService {

	return newQMediaService(C.QAudioDecoder_virtualbase_Service(unsafe.Pointer(this.h)), nil)

}
func (this *QAudioDecoder) OnService(slot func(super func() *QMediaService) *QMediaService) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioDecoder_override_virtual_Service(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioDecoder_Service
func miqt_exec_callback_QAudioDecoder_Service(self *C.QAudioDecoder, cb C.intptr_t) *C.QMediaService {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaService) *QMediaService)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAudioDecoder{h: self}).callVirtualBase_Service)

	return virtualReturn.cPointer()

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

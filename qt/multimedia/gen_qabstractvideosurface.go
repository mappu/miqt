package multimedia

/*

#include "gen_qabstractvideosurface.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractVideoSurface__Error int

const (
	QAbstractVideoSurface__NoError                QAbstractVideoSurface__Error = 0
	QAbstractVideoSurface__UnsupportedFormatError QAbstractVideoSurface__Error = 1
	QAbstractVideoSurface__IncorrectFormatError   QAbstractVideoSurface__Error = 2
	QAbstractVideoSurface__StoppedError           QAbstractVideoSurface__Error = 3
	QAbstractVideoSurface__ResourceError          QAbstractVideoSurface__Error = 4
)

type QAbstractVideoSurface struct {
	h *C.QAbstractVideoSurface
	*qt.QObject
}

func (this *QAbstractVideoSurface) cPointer() *C.QAbstractVideoSurface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractVideoSurface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractVideoSurface constructs the type using only CGO pointers.
func newQAbstractVideoSurface(h *C.QAbstractVideoSurface) *QAbstractVideoSurface {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAbstractVideoSurface_virtbase(h, &outptr_QObject)

	return &QAbstractVideoSurface{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAbstractVideoSurface constructs the type using only unsafe pointers.
func UnsafeNewQAbstractVideoSurface(h unsafe.Pointer) *QAbstractVideoSurface {
	return newQAbstractVideoSurface((*C.QAbstractVideoSurface)(h))
}

// NewQAbstractVideoSurface constructs a new QAbstractVideoSurface object.
func NewQAbstractVideoSurface() *QAbstractVideoSurface {

	return newQAbstractVideoSurface(C.QAbstractVideoSurface_new())
}

// NewQAbstractVideoSurface2 constructs a new QAbstractVideoSurface object.
func NewQAbstractVideoSurface2(parent *qt.QObject) *QAbstractVideoSurface {

	return newQAbstractVideoSurface(C.QAbstractVideoSurface_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QAbstractVideoSurface) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractVideoSurface_metaObject(this.h)))
}

func (this *QAbstractVideoSurface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractVideoSurface_metacast(this.h, param1_Cstring))
}

func QAbstractVideoSurface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoSurface_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractVideoSurface) SupportedPixelFormats(typeVal QAbstractVideoBuffer__HandleType) []QVideoFrame__PixelFormat {
	var _ma C.struct_miqt_array = C.QAbstractVideoSurface_supportedPixelFormats(this.h, (C.int)(typeVal))
	_ret := make([]QVideoFrame__PixelFormat, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QVideoFrame__PixelFormat)(_outCast[i])
	}
	return _ret
}

func (this *QAbstractVideoSurface) IsFormatSupported(format *QVideoSurfaceFormat) bool {
	return (bool)(C.QAbstractVideoSurface_isFormatSupported(this.h, format.cPointer()))
}

func (this *QAbstractVideoSurface) NearestFormat(format *QVideoSurfaceFormat) *QVideoSurfaceFormat {
	_goptr := newQVideoSurfaceFormat(C.QAbstractVideoSurface_nearestFormat(this.h, format.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractVideoSurface) SurfaceFormat() *QVideoSurfaceFormat {
	_goptr := newQVideoSurfaceFormat(C.QAbstractVideoSurface_surfaceFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractVideoSurface) NativeResolution() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QAbstractVideoSurface_nativeResolution(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractVideoSurface) Start(format *QVideoSurfaceFormat) bool {
	return (bool)(C.QAbstractVideoSurface_start(this.h, format.cPointer()))
}

func (this *QAbstractVideoSurface) Stop() {
	C.QAbstractVideoSurface_stop(this.h)
}

func (this *QAbstractVideoSurface) IsActive() bool {
	return (bool)(C.QAbstractVideoSurface_isActive(this.h))
}

func (this *QAbstractVideoSurface) Present(frame *QVideoFrame) bool {
	return (bool)(C.QAbstractVideoSurface_present(this.h, frame.cPointer()))
}

func (this *QAbstractVideoSurface) Error() QAbstractVideoSurface__Error {
	return (QAbstractVideoSurface__Error)(C.QAbstractVideoSurface_error(this.h))
}

func (this *QAbstractVideoSurface) ActiveChanged(active bool) {
	C.QAbstractVideoSurface_activeChanged(this.h, (C.bool)(active))
}
func (this *QAbstractVideoSurface) OnActiveChanged(slot func(active bool)) {
	C.QAbstractVideoSurface_connect_activeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_activeChanged
func miqt_exec_callback_QAbstractVideoSurface_activeChanged(cb C.intptr_t, active C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(active bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(active)

	gofunc(slotval1)
}

func (this *QAbstractVideoSurface) SurfaceFormatChanged(format *QVideoSurfaceFormat) {
	C.QAbstractVideoSurface_surfaceFormatChanged(this.h, format.cPointer())
}
func (this *QAbstractVideoSurface) OnSurfaceFormatChanged(slot func(format *QVideoSurfaceFormat)) {
	C.QAbstractVideoSurface_connect_surfaceFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_surfaceFormatChanged
func miqt_exec_callback_QAbstractVideoSurface_surfaceFormatChanged(cb C.intptr_t, format *C.QVideoSurfaceFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format *QVideoSurfaceFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVideoSurfaceFormat(format)

	gofunc(slotval1)
}

func (this *QAbstractVideoSurface) SupportedFormatsChanged() {
	C.QAbstractVideoSurface_supportedFormatsChanged(this.h)
}
func (this *QAbstractVideoSurface) OnSupportedFormatsChanged(slot func()) {
	C.QAbstractVideoSurface_connect_supportedFormatsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_supportedFormatsChanged
func miqt_exec_callback_QAbstractVideoSurface_supportedFormatsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractVideoSurface) NativeResolutionChanged(resolution *qt.QSize) {
	C.QAbstractVideoSurface_nativeResolutionChanged(this.h, (*C.QSize)(resolution.UnsafePointer()))
}
func (this *QAbstractVideoSurface) OnNativeResolutionChanged(slot func(resolution *qt.QSize)) {
	C.QAbstractVideoSurface_connect_nativeResolutionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_nativeResolutionChanged
func miqt_exec_callback_QAbstractVideoSurface_nativeResolutionChanged(cb C.intptr_t, resolution *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(resolution *qt.QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSize(unsafe.Pointer(resolution))

	gofunc(slotval1)
}

func QAbstractVideoSurface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoSurface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoSurface_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoSurface_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetError can only be called from a QAbstractVideoSurface that was directly constructed.
func (this *QAbstractVideoSurface) SetError(error QAbstractVideoSurface__Error) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractVideoSurface_protectedbase_setError(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(error))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetNativeResolution can only be called from a QAbstractVideoSurface that was directly constructed.
func (this *QAbstractVideoSurface) SetNativeResolution(resolution *qt.QSize) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractVideoSurface_protectedbase_setNativeResolution(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QSize)(resolution.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QAbstractVideoSurface that was directly constructed.
func (this *QAbstractVideoSurface) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QAbstractVideoSurface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAbstractVideoSurface that was directly constructed.
func (this *QAbstractVideoSurface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractVideoSurface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAbstractVideoSurface that was directly constructed.
func (this *QAbstractVideoSurface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractVideoSurface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAbstractVideoSurface that was directly constructed.
func (this *QAbstractVideoSurface) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractVideoSurface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QAbstractVideoSurface) OnSupportedPixelFormats(slot func(typeVal QAbstractVideoBuffer__HandleType) []QVideoFrame__PixelFormat) {
	ok := C.QAbstractVideoSurface_override_virtual_supportedPixelFormats(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_supportedPixelFormats
func miqt_exec_callback_QAbstractVideoSurface_supportedPixelFormats(self *C.QAbstractVideoSurface, cb C.intptr_t, typeVal C.int) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(typeVal QAbstractVideoBuffer__HandleType) []QVideoFrame__PixelFormat)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractVideoBuffer__HandleType)(typeVal)

	virtualReturn := gofunc(slotval1)
	virtualReturn_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.int)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QAbstractVideoSurface) callVirtualBase_IsFormatSupported(format *QVideoSurfaceFormat) bool {

	return (bool)(C.QAbstractVideoSurface_virtualbase_isFormatSupported(unsafe.Pointer(this.h), format.cPointer()))

}
func (this *QAbstractVideoSurface) OnIsFormatSupported(slot func(super func(format *QVideoSurfaceFormat) bool, format *QVideoSurfaceFormat) bool) {
	ok := C.QAbstractVideoSurface_override_virtual_isFormatSupported(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_isFormatSupported
func miqt_exec_callback_QAbstractVideoSurface_isFormatSupported(self *C.QAbstractVideoSurface, cb C.intptr_t, format *C.QVideoSurfaceFormat) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(format *QVideoSurfaceFormat) bool, format *QVideoSurfaceFormat) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVideoSurfaceFormat(format)

	virtualReturn := gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_IsFormatSupported, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractVideoSurface) callVirtualBase_NearestFormat(format *QVideoSurfaceFormat) *QVideoSurfaceFormat {

	_goptr := newQVideoSurfaceFormat(C.QAbstractVideoSurface_virtualbase_nearestFormat(unsafe.Pointer(this.h), format.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractVideoSurface) OnNearestFormat(slot func(super func(format *QVideoSurfaceFormat) *QVideoSurfaceFormat, format *QVideoSurfaceFormat) *QVideoSurfaceFormat) {
	ok := C.QAbstractVideoSurface_override_virtual_nearestFormat(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_nearestFormat
func miqt_exec_callback_QAbstractVideoSurface_nearestFormat(self *C.QAbstractVideoSurface, cb C.intptr_t, format *C.QVideoSurfaceFormat) *C.QVideoSurfaceFormat {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(format *QVideoSurfaceFormat) *QVideoSurfaceFormat, format *QVideoSurfaceFormat) *QVideoSurfaceFormat)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVideoSurfaceFormat(format)

	virtualReturn := gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_NearestFormat, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractVideoSurface) callVirtualBase_Start(format *QVideoSurfaceFormat) bool {

	return (bool)(C.QAbstractVideoSurface_virtualbase_start(unsafe.Pointer(this.h), format.cPointer()))

}
func (this *QAbstractVideoSurface) OnStart(slot func(super func(format *QVideoSurfaceFormat) bool, format *QVideoSurfaceFormat) bool) {
	ok := C.QAbstractVideoSurface_override_virtual_start(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_start
func miqt_exec_callback_QAbstractVideoSurface_start(self *C.QAbstractVideoSurface, cb C.intptr_t, format *C.QVideoSurfaceFormat) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(format *QVideoSurfaceFormat) bool, format *QVideoSurfaceFormat) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVideoSurfaceFormat(format)

	virtualReturn := gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_Start, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractVideoSurface) callVirtualBase_Stop() {

	C.QAbstractVideoSurface_virtualbase_stop(unsafe.Pointer(this.h))

}
func (this *QAbstractVideoSurface) OnStop(slot func(super func())) {
	ok := C.QAbstractVideoSurface_override_virtual_stop(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_stop
func miqt_exec_callback_QAbstractVideoSurface_stop(self *C.QAbstractVideoSurface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_Stop)

}
func (this *QAbstractVideoSurface) OnPresent(slot func(frame *QVideoFrame) bool) {
	ok := C.QAbstractVideoSurface_override_virtual_present(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_present
func miqt_exec_callback_QAbstractVideoSurface_present(self *C.QAbstractVideoSurface, cb C.intptr_t, frame *C.QVideoFrame) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QVideoFrame) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVideoFrame(frame)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractVideoSurface) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QAbstractVideoSurface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAbstractVideoSurface) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QAbstractVideoSurface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_event
func miqt_exec_callback_QAbstractVideoSurface_event(self *C.QAbstractVideoSurface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractVideoSurface) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QAbstractVideoSurface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAbstractVideoSurface) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QAbstractVideoSurface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_eventFilter
func miqt_exec_callback_QAbstractVideoSurface_eventFilter(self *C.QAbstractVideoSurface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractVideoSurface) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QAbstractVideoSurface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAbstractVideoSurface) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QAbstractVideoSurface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_timerEvent
func miqt_exec_callback_QAbstractVideoSurface_timerEvent(self *C.QAbstractVideoSurface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractVideoSurface) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QAbstractVideoSurface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAbstractVideoSurface) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QAbstractVideoSurface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_childEvent
func miqt_exec_callback_QAbstractVideoSurface_childEvent(self *C.QAbstractVideoSurface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractVideoSurface) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QAbstractVideoSurface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAbstractVideoSurface) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QAbstractVideoSurface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_customEvent
func miqt_exec_callback_QAbstractVideoSurface_customEvent(self *C.QAbstractVideoSurface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractVideoSurface) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QAbstractVideoSurface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractVideoSurface) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QAbstractVideoSurface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_connectNotify
func miqt_exec_callback_QAbstractVideoSurface_connectNotify(self *C.QAbstractVideoSurface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractVideoSurface) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QAbstractVideoSurface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractVideoSurface) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QAbstractVideoSurface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractVideoSurface_disconnectNotify
func miqt_exec_callback_QAbstractVideoSurface_disconnectNotify(self *C.QAbstractVideoSurface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractVideoSurface) Delete() {
	C.QAbstractVideoSurface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractVideoSurface) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractVideoSurface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

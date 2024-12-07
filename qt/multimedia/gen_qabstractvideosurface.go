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
	h          *C.QAbstractVideoSurface
	isSubclass bool
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
func newQAbstractVideoSurface(h *C.QAbstractVideoSurface, h_QObject *C.QObject) *QAbstractVideoSurface {
	if h == nil {
		return nil
	}
	return &QAbstractVideoSurface{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQAbstractVideoSurface constructs the type using only unsafe pointers.
func UnsafeNewQAbstractVideoSurface(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAbstractVideoSurface {
	if h == nil {
		return nil
	}

	return &QAbstractVideoSurface{h: (*C.QAbstractVideoSurface)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

// NewQAbstractVideoSurface constructs a new QAbstractVideoSurface object.
func NewQAbstractVideoSurface() *QAbstractVideoSurface {
	var outptr_QAbstractVideoSurface *C.QAbstractVideoSurface = nil
	var outptr_QObject *C.QObject = nil

	C.QAbstractVideoSurface_new(&outptr_QAbstractVideoSurface, &outptr_QObject)
	ret := newQAbstractVideoSurface(outptr_QAbstractVideoSurface, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAbstractVideoSurface2 constructs a new QAbstractVideoSurface object.
func NewQAbstractVideoSurface2(parent *qt.QObject) *QAbstractVideoSurface {
	var outptr_QAbstractVideoSurface *C.QAbstractVideoSurface = nil
	var outptr_QObject *C.QObject = nil

	C.QAbstractVideoSurface_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QAbstractVideoSurface, &outptr_QObject)
	ret := newQAbstractVideoSurface(outptr_QAbstractVideoSurface, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAbstractVideoSurface) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractVideoSurface_MetaObject(this.h)))
}

func (this *QAbstractVideoSurface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractVideoSurface_Metacast(this.h, param1_Cstring))
}

func QAbstractVideoSurface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoSurface_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractVideoSurface) SupportedPixelFormats(typeVal QAbstractVideoBuffer__HandleType) []QVideoFrame__PixelFormat {
	var _ma C.struct_miqt_array = C.QAbstractVideoSurface_SupportedPixelFormats(this.h, (C.int)(typeVal))
	_ret := make([]QVideoFrame__PixelFormat, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QVideoFrame__PixelFormat)(_outCast[i])
	}
	return _ret
}

func (this *QAbstractVideoSurface) IsFormatSupported(format *QVideoSurfaceFormat) bool {
	return (bool)(C.QAbstractVideoSurface_IsFormatSupported(this.h, format.cPointer()))
}

func (this *QAbstractVideoSurface) NearestFormat(format *QVideoSurfaceFormat) *QVideoSurfaceFormat {
	_ret := C.QAbstractVideoSurface_NearestFormat(this.h, format.cPointer())
	_goptr := newQVideoSurfaceFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractVideoSurface) SurfaceFormat() *QVideoSurfaceFormat {
	_ret := C.QAbstractVideoSurface_SurfaceFormat(this.h)
	_goptr := newQVideoSurfaceFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractVideoSurface) NativeResolution() *qt.QSize {
	_ret := C.QAbstractVideoSurface_NativeResolution(this.h)
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractVideoSurface) Start(format *QVideoSurfaceFormat) bool {
	return (bool)(C.QAbstractVideoSurface_Start(this.h, format.cPointer()))
}

func (this *QAbstractVideoSurface) Stop() {
	C.QAbstractVideoSurface_Stop(this.h)
}

func (this *QAbstractVideoSurface) IsActive() bool {
	return (bool)(C.QAbstractVideoSurface_IsActive(this.h))
}

func (this *QAbstractVideoSurface) Present(frame *QVideoFrame) bool {
	return (bool)(C.QAbstractVideoSurface_Present(this.h, frame.cPointer()))
}

func (this *QAbstractVideoSurface) Error() QAbstractVideoSurface__Error {
	return (QAbstractVideoSurface__Error)(C.QAbstractVideoSurface_Error(this.h))
}

func (this *QAbstractVideoSurface) ActiveChanged(active bool) {
	C.QAbstractVideoSurface_ActiveChanged(this.h, (C.bool)(active))
}
func (this *QAbstractVideoSurface) OnActiveChanged(slot func(active bool)) {
	C.QAbstractVideoSurface_connect_ActiveChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_ActiveChanged
func miqt_exec_callback_QAbstractVideoSurface_ActiveChanged(cb C.intptr_t, active C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(active bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(active)

	gofunc(slotval1)
}

func (this *QAbstractVideoSurface) SurfaceFormatChanged(format *QVideoSurfaceFormat) {
	C.QAbstractVideoSurface_SurfaceFormatChanged(this.h, format.cPointer())
}
func (this *QAbstractVideoSurface) OnSurfaceFormatChanged(slot func(format *QVideoSurfaceFormat)) {
	C.QAbstractVideoSurface_connect_SurfaceFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_SurfaceFormatChanged
func miqt_exec_callback_QAbstractVideoSurface_SurfaceFormatChanged(cb C.intptr_t, format *C.QVideoSurfaceFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format *QVideoSurfaceFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVideoSurfaceFormat(unsafe.Pointer(format))

	gofunc(slotval1)
}

func (this *QAbstractVideoSurface) SupportedFormatsChanged() {
	C.QAbstractVideoSurface_SupportedFormatsChanged(this.h)
}
func (this *QAbstractVideoSurface) OnSupportedFormatsChanged(slot func()) {
	C.QAbstractVideoSurface_connect_SupportedFormatsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_SupportedFormatsChanged
func miqt_exec_callback_QAbstractVideoSurface_SupportedFormatsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractVideoSurface) NativeResolutionChanged(resolution *qt.QSize) {
	C.QAbstractVideoSurface_NativeResolutionChanged(this.h, (*C.QSize)(resolution.UnsafePointer()))
}
func (this *QAbstractVideoSurface) OnNativeResolutionChanged(slot func(resolution *qt.QSize)) {
	C.QAbstractVideoSurface_connect_NativeResolutionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_NativeResolutionChanged
func miqt_exec_callback_QAbstractVideoSurface_NativeResolutionChanged(cb C.intptr_t, resolution *C.QSize) {
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
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoSurface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoSurface_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoSurface_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoSurface_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QAbstractVideoSurface) OnSupportedPixelFormats(slot func(typeVal QAbstractVideoBuffer__HandleType) []QVideoFrame__PixelFormat) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_SupportedPixelFormats(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_SupportedPixelFormats
func miqt_exec_callback_QAbstractVideoSurface_SupportedPixelFormats(self *C.QAbstractVideoSurface, cb C.intptr_t, typeVal C.int) C.struct_miqt_array {
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

	return (bool)(C.QAbstractVideoSurface_virtualbase_IsFormatSupported(unsafe.Pointer(this.h), format.cPointer()))

}
func (this *QAbstractVideoSurface) OnIsFormatSupported(slot func(super func(format *QVideoSurfaceFormat) bool, format *QVideoSurfaceFormat) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_IsFormatSupported(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_IsFormatSupported
func miqt_exec_callback_QAbstractVideoSurface_IsFormatSupported(self *C.QAbstractVideoSurface, cb C.intptr_t, format *C.QVideoSurfaceFormat) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(format *QVideoSurfaceFormat) bool, format *QVideoSurfaceFormat) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVideoSurfaceFormat(unsafe.Pointer(format))

	virtualReturn := gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_IsFormatSupported, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractVideoSurface) callVirtualBase_NearestFormat(format *QVideoSurfaceFormat) *QVideoSurfaceFormat {

	_ret := C.QAbstractVideoSurface_virtualbase_NearestFormat(unsafe.Pointer(this.h), format.cPointer())
	_goptr := newQVideoSurfaceFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractVideoSurface) OnNearestFormat(slot func(super func(format *QVideoSurfaceFormat) *QVideoSurfaceFormat, format *QVideoSurfaceFormat) *QVideoSurfaceFormat) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_NearestFormat(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_NearestFormat
func miqt_exec_callback_QAbstractVideoSurface_NearestFormat(self *C.QAbstractVideoSurface, cb C.intptr_t, format *C.QVideoSurfaceFormat) *C.QVideoSurfaceFormat {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(format *QVideoSurfaceFormat) *QVideoSurfaceFormat, format *QVideoSurfaceFormat) *QVideoSurfaceFormat)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVideoSurfaceFormat(unsafe.Pointer(format))

	virtualReturn := gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_NearestFormat, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractVideoSurface) callVirtualBase_Start(format *QVideoSurfaceFormat) bool {

	return (bool)(C.QAbstractVideoSurface_virtualbase_Start(unsafe.Pointer(this.h), format.cPointer()))

}
func (this *QAbstractVideoSurface) OnStart(slot func(super func(format *QVideoSurfaceFormat) bool, format *QVideoSurfaceFormat) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_Start(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_Start
func miqt_exec_callback_QAbstractVideoSurface_Start(self *C.QAbstractVideoSurface, cb C.intptr_t, format *C.QVideoSurfaceFormat) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(format *QVideoSurfaceFormat) bool, format *QVideoSurfaceFormat) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVideoSurfaceFormat(unsafe.Pointer(format))

	virtualReturn := gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_Start, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractVideoSurface) callVirtualBase_Stop() {

	C.QAbstractVideoSurface_virtualbase_Stop(unsafe.Pointer(this.h))

}
func (this *QAbstractVideoSurface) OnStop(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_Stop(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_Stop
func miqt_exec_callback_QAbstractVideoSurface_Stop(self *C.QAbstractVideoSurface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_Stop)

}
func (this *QAbstractVideoSurface) OnPresent(slot func(frame *QVideoFrame) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_Present(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_Present
func miqt_exec_callback_QAbstractVideoSurface_Present(self *C.QAbstractVideoSurface, cb C.intptr_t, frame *C.QVideoFrame) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QVideoFrame) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVideoFrame(unsafe.Pointer(frame))

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractVideoSurface) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QAbstractVideoSurface_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAbstractVideoSurface) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_Event
func miqt_exec_callback_QAbstractVideoSurface_Event(self *C.QAbstractVideoSurface, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QAbstractVideoSurface_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAbstractVideoSurface) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_EventFilter
func miqt_exec_callback_QAbstractVideoSurface_EventFilter(self *C.QAbstractVideoSurface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QAbstractVideoSurface_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAbstractVideoSurface) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_TimerEvent
func miqt_exec_callback_QAbstractVideoSurface_TimerEvent(self *C.QAbstractVideoSurface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractVideoSurface) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QAbstractVideoSurface_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAbstractVideoSurface) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_ChildEvent
func miqt_exec_callback_QAbstractVideoSurface_ChildEvent(self *C.QAbstractVideoSurface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractVideoSurface) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QAbstractVideoSurface_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAbstractVideoSurface) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_CustomEvent
func miqt_exec_callback_QAbstractVideoSurface_CustomEvent(self *C.QAbstractVideoSurface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractVideoSurface) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QAbstractVideoSurface_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractVideoSurface) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_ConnectNotify
func miqt_exec_callback_QAbstractVideoSurface_ConnectNotify(self *C.QAbstractVideoSurface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractVideoSurface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractVideoSurface) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QAbstractVideoSurface_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractVideoSurface) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractVideoSurface_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoSurface_DisconnectNotify
func miqt_exec_callback_QAbstractVideoSurface_DisconnectNotify(self *C.QAbstractVideoSurface, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QAbstractVideoSurface_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractVideoSurface) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractVideoSurface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package pdf

/*

#include "gen_qpdfdocument.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPdfDocument__Status int

const (
	QPdfDocument__Null      QPdfDocument__Status = 0
	QPdfDocument__Loading   QPdfDocument__Status = 1
	QPdfDocument__Ready     QPdfDocument__Status = 2
	QPdfDocument__Unloading QPdfDocument__Status = 3
	QPdfDocument__Error     QPdfDocument__Status = 4
)

type QPdfDocument__DocumentError int

const (
	QPdfDocument__NoError                        QPdfDocument__DocumentError = 0
	QPdfDocument__UnknownError                   QPdfDocument__DocumentError = 1
	QPdfDocument__DataNotYetAvailableError       QPdfDocument__DocumentError = 2
	QPdfDocument__FileNotFoundError              QPdfDocument__DocumentError = 3
	QPdfDocument__InvalidFileFormatError         QPdfDocument__DocumentError = 4
	QPdfDocument__IncorrectPasswordError         QPdfDocument__DocumentError = 5
	QPdfDocument__UnsupportedSecuritySchemeError QPdfDocument__DocumentError = 6
)

type QPdfDocument__MetaDataField int

const (
	QPdfDocument__Title            QPdfDocument__MetaDataField = 0
	QPdfDocument__Subject          QPdfDocument__MetaDataField = 1
	QPdfDocument__Author           QPdfDocument__MetaDataField = 2
	QPdfDocument__Keywords         QPdfDocument__MetaDataField = 3
	QPdfDocument__Producer         QPdfDocument__MetaDataField = 4
	QPdfDocument__Creator          QPdfDocument__MetaDataField = 5
	QPdfDocument__CreationDate     QPdfDocument__MetaDataField = 6
	QPdfDocument__ModificationDate QPdfDocument__MetaDataField = 7
)

type QPdfDocument struct {
	h  *C.QPdfDocument
	gc *[1]unsafe.Pointer
	*qt.QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPdfDocument) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QPdfDocument) cPointer() *C.QPdfDocument {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfDocument) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfDocument constructs the type using only CGO pointers.
func newQPdfDocument(h *C.QPdfDocument) *QPdfDocument {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QPdfDocument_virtbase(h, &outptr_QObject)

	return &QPdfDocument{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQPdfDocument constructs the type using only unsafe pointers.
func UnsafeNewQPdfDocument(h unsafe.Pointer) *QPdfDocument {
	return newQPdfDocument((*C.QPdfDocument)(h))
}

// NewQPdfDocument constructs a new QPdfDocument object.
func NewQPdfDocument() *QPdfDocument {

	return newQPdfDocument(C.QPdfDocument_new())
}

// NewQPdfDocument2 constructs a new QPdfDocument object.
func NewQPdfDocument2(parent *qt.QObject) *QPdfDocument {
	defer runtime.KeepAlive(parent)

	return newQPdfDocument(C.QPdfDocument_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QPdfDocument) MetaObject() *qt.QMetaObject {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QPdfDocument_metaObject(this.h)))
}

func (this *QPdfDocument) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPdfDocument_metacast(this.h, param1_Cstring))
}

func QPdfDocument_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfDocument_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfDocument_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfDocument_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfDocument) Load(fileName string) QPdfDocument__DocumentError {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (QPdfDocument__DocumentError)(C.QPdfDocument_load(this.h, fileName_ms))
}

func (this *QPdfDocument) Status() QPdfDocument__Status {
	defer runtime.KeepAlive(this)
	return (QPdfDocument__Status)(C.QPdfDocument_status(this.h))
}

func (this *QPdfDocument) LoadWithDevice(device *qt.QIODevice) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(device)
	C.QPdfDocument_loadWithDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QPdfDocument) SetPassword(password string) {
	defer runtime.KeepAlive(this)
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	C.QPdfDocument_setPassword(this.h, password_ms)
}

func (this *QPdfDocument) Password() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QPdfDocument_password(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfDocument) MetaData(field QPdfDocument__MetaDataField) *qt.QVariant {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QPdfDocument_metaData(this.h, (C.int)(field))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfDocument) Error() QPdfDocument__DocumentError {
	defer runtime.KeepAlive(this)
	return (QPdfDocument__DocumentError)(C.QPdfDocument_error(this.h))
}

func (this *QPdfDocument) Close() {
	defer runtime.KeepAlive(this)
	C.QPdfDocument_close(this.h)
}

func (this *QPdfDocument) PageCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPdfDocument_pageCount(this.h))
}

func (this *QPdfDocument) PageSize(page int) *qt.QSizeF {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QPdfDocument_pageSize(this.h, (C.int)(page))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfDocument) Render(page int, imageSize qt.QSize) *qt.QImage {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(imageSize)
	_goptr := qt.UnsafeNewQImage(unsafe.Pointer(C.QPdfDocument_render(this.h, (C.int)(page), (*C.QSize)(imageSize.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfDocument) GetSelection(page int, start qt.QPointF, end qt.QPointF) *QPdfSelection {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(start)
	defer runtime.KeepAlive(end)
	_goptr := newQPdfSelection(C.QPdfDocument_getSelection(this.h, (C.int)(page), (*C.QPointF)(start.UnsafePointer()), (*C.QPointF)(end.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfDocument) GetSelectionAtIndex(page int, startIndex int, maxLength int) *QPdfSelection {
	defer runtime.KeepAlive(this)
	_goptr := newQPdfSelection(C.QPdfDocument_getSelectionAtIndex(this.h, (C.int)(page), (C.int)(startIndex), (C.int)(maxLength)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfDocument) GetAllText(page int) *QPdfSelection {
	defer runtime.KeepAlive(this)
	_goptr := newQPdfSelection(C.QPdfDocument_getAllText(this.h, (C.int)(page)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfDocument) PasswordChanged() {
	defer runtime.KeepAlive(this)
	C.QPdfDocument_passwordChanged(this.h)
}
func (this *QPdfDocument) OnPasswordChanged(slot func()) {
	C.QPdfDocument_connect_passwordChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfDocument_passwordChanged
func miqt_exec_callback_QPdfDocument_passwordChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPdfDocument) PasswordRequired() {
	defer runtime.KeepAlive(this)
	C.QPdfDocument_passwordRequired(this.h)
}
func (this *QPdfDocument) OnPasswordRequired(slot func()) {
	C.QPdfDocument_connect_passwordRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfDocument_passwordRequired
func miqt_exec_callback_QPdfDocument_passwordRequired(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPdfDocument) StatusChanged(status QPdfDocument__Status) {
	defer runtime.KeepAlive(this)
	C.QPdfDocument_statusChanged(this.h, (C.int)(status))
}
func (this *QPdfDocument) OnStatusChanged(slot func(status QPdfDocument__Status)) {
	C.QPdfDocument_connect_statusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfDocument_statusChanged
func miqt_exec_callback_QPdfDocument_statusChanged(cb C.intptr_t, status C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status QPdfDocument__Status))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPdfDocument__Status)(status)

	gofunc(slotval1)
}

func (this *QPdfDocument) PageCountChanged(pageCount int) {
	defer runtime.KeepAlive(this)
	C.QPdfDocument_pageCountChanged(this.h, (C.int)(pageCount))
}
func (this *QPdfDocument) OnPageCountChanged(slot func(pageCount int)) {
	C.QPdfDocument_connect_pageCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfDocument_pageCountChanged
func miqt_exec_callback_QPdfDocument_pageCountChanged(cb C.intptr_t, pageCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pageCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(pageCount)

	gofunc(slotval1)
}

func QPdfDocument_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfDocument_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfDocument_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfDocument_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfDocument_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfDocument_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfDocument_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfDocument_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfDocument) Render2(page int, imageSize qt.QSize, options QPdfDocumentRenderOptions) *qt.QImage {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(imageSize)
	defer runtime.KeepAlive(options)
	_goptr := qt.UnsafeNewQImage(unsafe.Pointer(C.QPdfDocument_render2(this.h, (C.int)(page), (*C.QSize)(imageSize.UnsafePointer()), options.cPointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Sender can only be called from a QPdfDocument that was directly constructed.
func (this *QPdfDocument) Sender() *qt.QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QPdfDocument_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPdfDocument that was directly constructed.
func (this *QPdfDocument) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfDocument_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPdfDocument that was directly constructed.
func (this *QPdfDocument) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfDocument_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPdfDocument that was directly constructed.
func (this *QPdfDocument) IsSignalConnected(signal *qt.QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPdfDocument_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPdfDocument) callVirtualBase_Event(event *qt.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QPdfDocument_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPdfDocument) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QPdfDocument_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfDocument_event
func miqt_exec_callback_QPdfDocument_event(self *C.QPdfDocument, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPdfDocument{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfDocument) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QPdfDocument_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPdfDocument) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QPdfDocument_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfDocument_eventFilter
func miqt_exec_callback_QPdfDocument_eventFilter(self *C.QPdfDocument, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPdfDocument{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPdfDocument) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QPdfDocument_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPdfDocument) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QPdfDocument_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfDocument_timerEvent
func miqt_exec_callback_QPdfDocument_timerEvent(self *C.QPdfDocument, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPdfDocument{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPdfDocument) callVirtualBase_ChildEvent(event *qt.QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QPdfDocument_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPdfDocument) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QPdfDocument_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfDocument_childEvent
func miqt_exec_callback_QPdfDocument_childEvent(self *C.QPdfDocument, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPdfDocument{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPdfDocument) callVirtualBase_CustomEvent(event *qt.QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QPdfDocument_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPdfDocument) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QPdfDocument_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfDocument_customEvent
func miqt_exec_callback_QPdfDocument_customEvent(self *C.QPdfDocument, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPdfDocument{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPdfDocument) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QPdfDocument_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPdfDocument) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QPdfDocument_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfDocument_connectNotify
func miqt_exec_callback_QPdfDocument_connectNotify(self *C.QPdfDocument, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPdfDocument{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPdfDocument) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QPdfDocument_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPdfDocument) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QPdfDocument_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfDocument_disconnectNotify
func miqt_exec_callback_QPdfDocument_disconnectNotify(self *C.QPdfDocument, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPdfDocument{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPdfDocument) Delete() {
	C.QPdfDocument_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPdfDocument) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPdfDocument_delete((*C.QPdfDocument)(gc[0]))
	})
	this.miqtSetGC(gc)
}

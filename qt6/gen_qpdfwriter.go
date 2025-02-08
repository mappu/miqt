package qt6

/*

#include "gen_qpdfwriter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPdfWriter struct {
	h *C.QPdfWriter
	*QObject
	*QPagedPaintDevice
}

func (this *QPdfWriter) cPointer() *C.QPdfWriter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfWriter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfWriter constructs the type using only CGO pointers.
func newQPdfWriter(h *C.QPdfWriter) *QPdfWriter {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QPagedPaintDevice *C.QPagedPaintDevice = nil
	C.QPdfWriter_virtbase(h, &outptr_QObject, &outptr_QPagedPaintDevice)

	return &QPdfWriter{h: h,
		QObject:           newQObject(outptr_QObject),
		QPagedPaintDevice: newQPagedPaintDevice(outptr_QPagedPaintDevice)}
}

// UnsafeNewQPdfWriter constructs the type using only unsafe pointers.
func UnsafeNewQPdfWriter(h unsafe.Pointer) *QPdfWriter {
	return newQPdfWriter((*C.QPdfWriter)(h))
}

// NewQPdfWriter constructs a new QPdfWriter object.
func NewQPdfWriter(filename string) *QPdfWriter {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))

	return newQPdfWriter(C.QPdfWriter_new(filename_ms))
}

// NewQPdfWriter2 constructs a new QPdfWriter object.
func NewQPdfWriter2(device *QIODevice) *QPdfWriter {

	return newQPdfWriter(C.QPdfWriter_new2(device.cPointer()))
}

func (this *QPdfWriter) MetaObject() *QMetaObject {
	return newQMetaObject(C.QPdfWriter_metaObject(this.h))
}

func (this *QPdfWriter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPdfWriter_metacast(this.h, param1_Cstring))
}

func QPdfWriter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfWriter_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfWriter) SetPdfVersion(version QPagedPaintDevice__PdfVersion) {
	C.QPdfWriter_setPdfVersion(this.h, (C.int)(version))
}

func (this *QPdfWriter) PdfVersion() QPagedPaintDevice__PdfVersion {
	return (QPagedPaintDevice__PdfVersion)(C.QPdfWriter_pdfVersion(this.h))
}

func (this *QPdfWriter) Title() string {
	var _ms C.struct_miqt_string = C.QPdfWriter_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfWriter) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QPdfWriter_setTitle(this.h, title_ms)
}

func (this *QPdfWriter) Creator() string {
	var _ms C.struct_miqt_string = C.QPdfWriter_creator(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfWriter) SetCreator(creator string) {
	creator_ms := C.struct_miqt_string{}
	creator_ms.data = C.CString(creator)
	creator_ms.len = C.size_t(len(creator))
	defer C.free(unsafe.Pointer(creator_ms.data))
	C.QPdfWriter_setCreator(this.h, creator_ms)
}

func (this *QPdfWriter) NewPage() bool {
	return (bool)(C.QPdfWriter_newPage(this.h))
}

func (this *QPdfWriter) SetResolution(resolution int) {
	C.QPdfWriter_setResolution(this.h, (C.int)(resolution))
}

func (this *QPdfWriter) Resolution() int {
	return (int)(C.QPdfWriter_resolution(this.h))
}

func (this *QPdfWriter) SetDocumentXmpMetadata(xmpMetadata []byte) {
	xmpMetadata_alias := C.struct_miqt_string{}
	if len(xmpMetadata) > 0 {
		xmpMetadata_alias.data = (*C.char)(unsafe.Pointer(&xmpMetadata[0]))
	} else {
		xmpMetadata_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	xmpMetadata_alias.len = C.size_t(len(xmpMetadata))
	C.QPdfWriter_setDocumentXmpMetadata(this.h, xmpMetadata_alias)
}

func (this *QPdfWriter) DocumentXmpMetadata() []byte {
	var _bytearray C.struct_miqt_string = C.QPdfWriter_documentXmpMetadata(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QPdfWriter) AddFileAttachment(fileName string, data []byte) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	C.QPdfWriter_addFileAttachment(this.h, fileName_ms, data_alias)
}

func QPdfWriter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfWriter_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfWriter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfWriter_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfWriter) AddFileAttachment3(fileName string, data []byte, mimeType string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QPdfWriter_addFileAttachment3(this.h, fileName_ms, data_alias, mimeType_ms)
}

// Sender can only be called from a QPdfWriter that was directly constructed.
func (this *QPdfWriter) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QPdfWriter_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPdfWriter that was directly constructed.
func (this *QPdfWriter) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfWriter_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPdfWriter that was directly constructed.
func (this *QPdfWriter) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfWriter_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPdfWriter that was directly constructed.
func (this *QPdfWriter) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPdfWriter_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPdfWriter) callVirtualBase_NewPage() bool {

	return (bool)(C.QPdfWriter_virtualbase_newPage(unsafe.Pointer(this.h)))

}
func (this *QPdfWriter) OnNewPage(slot func(super func() bool) bool) {
	ok := C.QPdfWriter_override_virtual_newPage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_newPage
func miqt_exec_callback_QPdfWriter_newPage(self *C.QPdfWriter, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_NewPage)

	return (C.bool)(virtualReturn)

}

func (this *QPdfWriter) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QPdfWriter_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QPdfWriter) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QPdfWriter_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_paintEngine
func miqt_exec_callback_QPdfWriter_paintEngine(self *C.QPdfWriter, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QPdfWriter) callVirtualBase_Metric(id QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPdfWriter_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(id)))

}
func (this *QPdfWriter) OnMetric(slot func(super func(id QPaintDevice__PaintDeviceMetric) int, id QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPdfWriter_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_metric
func miqt_exec_callback_QPdfWriter_metric(self *C.QPdfWriter, cb C.intptr_t, id C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(id QPaintDevice__PaintDeviceMetric) int, id QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(id)

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPdfWriter) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QPdfWriter_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QPdfWriter) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QPdfWriter_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_event
func miqt_exec_callback_QPdfWriter_event(self *C.QPdfWriter, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfWriter) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QPdfWriter_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPdfWriter) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QPdfWriter_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_eventFilter
func miqt_exec_callback_QPdfWriter_eventFilter(self *C.QPdfWriter, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPdfWriter) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QPdfWriter_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPdfWriter) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QPdfWriter_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_timerEvent
func miqt_exec_callback_QPdfWriter_timerEvent(self *C.QPdfWriter, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPdfWriter) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPdfWriter_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPdfWriter) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QPdfWriter_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_childEvent
func miqt_exec_callback_QPdfWriter_childEvent(self *C.QPdfWriter, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPdfWriter) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPdfWriter_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPdfWriter) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPdfWriter_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_customEvent
func miqt_exec_callback_QPdfWriter_customEvent(self *C.QPdfWriter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPdfWriter) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPdfWriter_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPdfWriter) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPdfWriter_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_connectNotify
func miqt_exec_callback_QPdfWriter_connectNotify(self *C.QPdfWriter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPdfWriter) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPdfWriter_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPdfWriter) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPdfWriter_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_disconnectNotify
func miqt_exec_callback_QPdfWriter_disconnectNotify(self *C.QPdfWriter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QPdfWriter) callVirtualBase_SetPageLayout(pageLayout *QPageLayout) bool {

	return (bool)(C.QPdfWriter_virtualbase_setPageLayout(unsafe.Pointer(this.h), pageLayout.cPointer()))

}
func (this *QPdfWriter) OnSetPageLayout(slot func(super func(pageLayout *QPageLayout) bool, pageLayout *QPageLayout) bool) {
	ok := C.QPdfWriter_override_virtual_setPageLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_setPageLayout
func miqt_exec_callback_QPdfWriter_setPageLayout(self *C.QPdfWriter, cb C.intptr_t, pageLayout *C.QPageLayout) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pageLayout *QPageLayout) bool, pageLayout *QPageLayout) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPageLayout(pageLayout)

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_SetPageLayout, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfWriter) callVirtualBase_SetPageSize(pageSize *QPageSize) bool {

	return (bool)(C.QPdfWriter_virtualbase_setPageSize(unsafe.Pointer(this.h), pageSize.cPointer()))

}
func (this *QPdfWriter) OnSetPageSize(slot func(super func(pageSize *QPageSize) bool, pageSize *QPageSize) bool) {
	ok := C.QPdfWriter_override_virtual_setPageSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_setPageSize
func miqt_exec_callback_QPdfWriter_setPageSize(self *C.QPdfWriter, cb C.intptr_t, pageSize *C.QPageSize) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pageSize *QPageSize) bool, pageSize *QPageSize) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPageSize(pageSize)

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_SetPageSize, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfWriter) callVirtualBase_SetPageOrientation(orientation QPageLayout__Orientation) bool {

	return (bool)(C.QPdfWriter_virtualbase_setPageOrientation(unsafe.Pointer(this.h), (C.int)(orientation)))

}
func (this *QPdfWriter) OnSetPageOrientation(slot func(super func(orientation QPageLayout__Orientation) bool, orientation QPageLayout__Orientation) bool) {
	ok := C.QPdfWriter_override_virtual_setPageOrientation(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_setPageOrientation
func miqt_exec_callback_QPdfWriter_setPageOrientation(self *C.QPdfWriter, cb C.intptr_t, orientation C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(orientation QPageLayout__Orientation) bool, orientation QPageLayout__Orientation) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPageLayout__Orientation)(orientation)

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_SetPageOrientation, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfWriter) callVirtualBase_SetPageMargins(margins *QMarginsF, units QPageLayout__Unit) bool {

	return (bool)(C.QPdfWriter_virtualbase_setPageMargins(unsafe.Pointer(this.h), margins.cPointer(), (C.int)(units)))

}
func (this *QPdfWriter) OnSetPageMargins(slot func(super func(margins *QMarginsF, units QPageLayout__Unit) bool, margins *QMarginsF, units QPageLayout__Unit) bool) {
	ok := C.QPdfWriter_override_virtual_setPageMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_setPageMargins
func miqt_exec_callback_QPdfWriter_setPageMargins(self *C.QPdfWriter, cb C.intptr_t, margins *C.QMarginsF, units C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(margins *QMarginsF, units QPageLayout__Unit) bool, margins *QMarginsF, units QPageLayout__Unit) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMarginsF(margins)

	slotval2 := (QPageLayout__Unit)(units)

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_SetPageMargins, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPdfWriter) callVirtualBase_SetPageRanges(ranges *QPageRanges) {

	C.QPdfWriter_virtualbase_setPageRanges(unsafe.Pointer(this.h), ranges.cPointer())

}
func (this *QPdfWriter) OnSetPageRanges(slot func(super func(ranges *QPageRanges), ranges *QPageRanges)) {
	ok := C.QPdfWriter_override_virtual_setPageRanges(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_setPageRanges
func miqt_exec_callback_QPdfWriter_setPageRanges(self *C.QPdfWriter, cb C.intptr_t, ranges *C.QPageRanges) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ranges *QPageRanges), ranges *QPageRanges))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPageRanges(ranges)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_SetPageRanges, slotval1)

}

func (this *QPdfWriter) callVirtualBase_DevType() int {

	return (int)(C.QPdfWriter_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QPdfWriter) OnDevType(slot func(super func() int) int) {
	ok := C.QPdfWriter_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_devType
func miqt_exec_callback_QPdfWriter_devType(self *C.QPdfWriter, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPdfWriter) callVirtualBase_InitPainter(painter *QPainter) {

	C.QPdfWriter_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QPdfWriter) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QPdfWriter_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_initPainter
func miqt_exec_callback_QPdfWriter_initPainter(self *C.QPdfWriter, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPdfWriter) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QPdfWriter_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QPdfWriter) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QPdfWriter_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_redirected
func miqt_exec_callback_QPdfWriter_redirected(self *C.QPdfWriter, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QPdfWriter) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QPdfWriter_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QPdfWriter) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QPdfWriter_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_sharedPainter
func miqt_exec_callback_QPdfWriter_sharedPainter(self *C.QPdfWriter, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QPdfWriter) Delete() {
	C.QPdfWriter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfWriter) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfWriter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt

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
	return newQMetaObject(C.QPdfWriter_MetaObject(this.h))
}

func (this *QPdfWriter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPdfWriter_Metacast(this.h, param1_Cstring))
}

func QPdfWriter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfWriter_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfWriter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfWriter_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfWriter) SetPdfVersion(version QPagedPaintDevice__PdfVersion) {
	C.QPdfWriter_SetPdfVersion(this.h, (C.int)(version))
}

func (this *QPdfWriter) PdfVersion() QPagedPaintDevice__PdfVersion {
	return (QPagedPaintDevice__PdfVersion)(C.QPdfWriter_PdfVersion(this.h))
}

func (this *QPdfWriter) Title() string {
	var _ms C.struct_miqt_string = C.QPdfWriter_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfWriter) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QPdfWriter_SetTitle(this.h, title_ms)
}

func (this *QPdfWriter) Creator() string {
	var _ms C.struct_miqt_string = C.QPdfWriter_Creator(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfWriter) SetCreator(creator string) {
	creator_ms := C.struct_miqt_string{}
	creator_ms.data = C.CString(creator)
	creator_ms.len = C.size_t(len(creator))
	defer C.free(unsafe.Pointer(creator_ms.data))
	C.QPdfWriter_SetCreator(this.h, creator_ms)
}

func (this *QPdfWriter) NewPage() bool {
	return (bool)(C.QPdfWriter_NewPage(this.h))
}

func (this *QPdfWriter) SetResolution(resolution int) {
	C.QPdfWriter_SetResolution(this.h, (C.int)(resolution))
}

func (this *QPdfWriter) Resolution() int {
	return (int)(C.QPdfWriter_Resolution(this.h))
}

func (this *QPdfWriter) SetDocumentXmpMetadata(xmpMetadata []byte) {
	xmpMetadata_alias := C.struct_miqt_string{}
	if len(xmpMetadata) > 0 {
		xmpMetadata_alias.data = (*C.char)(unsafe.Pointer(&xmpMetadata[0]))
	} else {
		xmpMetadata_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	xmpMetadata_alias.len = C.size_t(len(xmpMetadata))
	C.QPdfWriter_SetDocumentXmpMetadata(this.h, xmpMetadata_alias)
}

func (this *QPdfWriter) DocumentXmpMetadata() []byte {
	var _bytearray C.struct_miqt_string = C.QPdfWriter_DocumentXmpMetadata(this.h)
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
	C.QPdfWriter_AddFileAttachment(this.h, fileName_ms, data_alias)
}

func (this *QPdfWriter) SetPageSize(size QPagedPaintDevice__PageSize) {
	C.QPdfWriter_SetPageSize(this.h, (C.int)(size))
}

func (this *QPdfWriter) SetPageSizeMM(size *QSizeF) {
	C.QPdfWriter_SetPageSizeMM(this.h, size.cPointer())
}

func (this *QPdfWriter) SetMargins(m *QPagedPaintDevice__Margins) {
	C.QPdfWriter_SetMargins(this.h, m.cPointer())
}

func QPdfWriter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfWriter_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfWriter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfWriter_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfWriter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfWriter_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfWriter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfWriter_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
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
	C.QPdfWriter_AddFileAttachment3(this.h, fileName_ms, data_alias, mimeType_ms)
}

func (this *QPdfWriter) callVirtualBase_NewPage() bool {

	return (bool)(C.QPdfWriter_virtualbase_NewPage(unsafe.Pointer(this.h)))

}
func (this *QPdfWriter) OnNewPage(slot func(super func() bool) bool) {
	ok := C.QPdfWriter_override_virtual_NewPage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_NewPage
func miqt_exec_callback_QPdfWriter_NewPage(self *C.QPdfWriter, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_NewPage)

	return (C.bool)(virtualReturn)

}

func (this *QPdfWriter) callVirtualBase_SetPageSize(size QPagedPaintDevice__PageSize) {

	C.QPdfWriter_virtualbase_SetPageSize(unsafe.Pointer(this.h), (C.int)(size))

}
func (this *QPdfWriter) OnSetPageSize(slot func(super func(size QPagedPaintDevice__PageSize), size QPagedPaintDevice__PageSize)) {
	ok := C.QPdfWriter_override_virtual_SetPageSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_SetPageSize
func miqt_exec_callback_QPdfWriter_SetPageSize(self *C.QPdfWriter, cb C.intptr_t, size C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size QPagedPaintDevice__PageSize), size QPagedPaintDevice__PageSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPagedPaintDevice__PageSize)(size)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_SetPageSize, slotval1)

}

func (this *QPdfWriter) callVirtualBase_SetPageSizeMM(size *QSizeF) {

	C.QPdfWriter_virtualbase_SetPageSizeMM(unsafe.Pointer(this.h), size.cPointer())

}
func (this *QPdfWriter) OnSetPageSizeMM(slot func(super func(size *QSizeF), size *QSizeF)) {
	ok := C.QPdfWriter_override_virtual_SetPageSizeMM(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_SetPageSizeMM
func miqt_exec_callback_QPdfWriter_SetPageSizeMM(self *C.QPdfWriter, cb C.intptr_t, size *C.QSizeF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size *QSizeF), size *QSizeF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSizeF(size)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_SetPageSizeMM, slotval1)

}

func (this *QPdfWriter) callVirtualBase_SetMargins(m *QPagedPaintDevice__Margins) {

	C.QPdfWriter_virtualbase_SetMargins(unsafe.Pointer(this.h), m.cPointer())

}
func (this *QPdfWriter) OnSetMargins(slot func(super func(m *QPagedPaintDevice__Margins), m *QPagedPaintDevice__Margins)) {
	ok := C.QPdfWriter_override_virtual_SetMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_SetMargins
func miqt_exec_callback_QPdfWriter_SetMargins(self *C.QPdfWriter, cb C.intptr_t, m *C.QPagedPaintDevice__Margins) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(m *QPagedPaintDevice__Margins), m *QPagedPaintDevice__Margins))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPagedPaintDevice__Margins(m)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_SetMargins, slotval1)

}

func (this *QPdfWriter) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QPdfWriter_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QPdfWriter) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QPdfWriter_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_PaintEngine
func miqt_exec_callback_QPdfWriter_PaintEngine(self *C.QPdfWriter, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QPdfWriter) callVirtualBase_Metric(id QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPdfWriter_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(id)))

}
func (this *QPdfWriter) OnMetric(slot func(super func(id QPaintDevice__PaintDeviceMetric) int, id QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPdfWriter_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_Metric
func miqt_exec_callback_QPdfWriter_Metric(self *C.QPdfWriter, cb C.intptr_t, id C.int) C.int {
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

	return (bool)(C.QPdfWriter_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QPdfWriter) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QPdfWriter_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_Event
func miqt_exec_callback_QPdfWriter_Event(self *C.QPdfWriter, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QPdfWriter_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPdfWriter) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QPdfWriter_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_EventFilter
func miqt_exec_callback_QPdfWriter_EventFilter(self *C.QPdfWriter, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QPdfWriter_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPdfWriter) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QPdfWriter_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_TimerEvent
func miqt_exec_callback_QPdfWriter_TimerEvent(self *C.QPdfWriter, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPdfWriter) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPdfWriter_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPdfWriter) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QPdfWriter_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_ChildEvent
func miqt_exec_callback_QPdfWriter_ChildEvent(self *C.QPdfWriter, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPdfWriter) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPdfWriter_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPdfWriter) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPdfWriter_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_CustomEvent
func miqt_exec_callback_QPdfWriter_CustomEvent(self *C.QPdfWriter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPdfWriter) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPdfWriter_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPdfWriter) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPdfWriter_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_ConnectNotify
func miqt_exec_callback_QPdfWriter_ConnectNotify(self *C.QPdfWriter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPdfWriter) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPdfWriter_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPdfWriter) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPdfWriter_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_DisconnectNotify
func miqt_exec_callback_QPdfWriter_DisconnectNotify(self *C.QPdfWriter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QPdfWriter) callVirtualBase_DevType() int {

	return (int)(C.QPdfWriter_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QPdfWriter) OnDevType(slot func(super func() int) int) {
	ok := C.QPdfWriter_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_DevType
func miqt_exec_callback_QPdfWriter_DevType(self *C.QPdfWriter, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPdfWriter) callVirtualBase_InitPainter(painter *QPainter) {

	C.QPdfWriter_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QPdfWriter) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QPdfWriter_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_InitPainter
func miqt_exec_callback_QPdfWriter_InitPainter(self *C.QPdfWriter, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QPdfWriter{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPdfWriter) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QPdfWriter_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QPdfWriter) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QPdfWriter_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_Redirected
func miqt_exec_callback_QPdfWriter_Redirected(self *C.QPdfWriter, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QPdfWriter_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QPdfWriter) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QPdfWriter_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfWriter_SharedPainter
func miqt_exec_callback_QPdfWriter_SharedPainter(self *C.QPdfWriter, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPdfWriter{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QPdfWriter) Delete() {
	C.QPdfWriter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfWriter) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfWriter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

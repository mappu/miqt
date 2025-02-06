package qt6

/*

#include "gen_qtextobject.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTextObject struct {
	h *C.QTextObject
	*QObject
}

func (this *QTextObject) cPointer() *C.QTextObject {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextObject) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextObject constructs the type using only CGO pointers.
func newQTextObject(h *C.QTextObject) *QTextObject {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QTextObject_virtbase(h, &outptr_QObject)

	return &QTextObject{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQTextObject constructs the type using only unsafe pointers.
func UnsafeNewQTextObject(h unsafe.Pointer) *QTextObject {
	return newQTextObject((*C.QTextObject)(h))
}

func (this *QTextObject) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTextObject_metaObject(this.h))
}

func (this *QTextObject) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTextObject_metacast(this.h, param1_Cstring))
}

func QTextObject_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextObject_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextObject) Format() *QTextFormat {
	_goptr := newQTextFormat(C.QTextObject_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextObject) FormatIndex() int {
	return (int)(C.QTextObject_formatIndex(this.h))
}

func (this *QTextObject) Document() *QTextDocument {
	return newQTextDocument(C.QTextObject_document(this.h))
}

func (this *QTextObject) ObjectIndex() int {
	return (int)(C.QTextObject_objectIndex(this.h))
}

func QTextObject_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextObject_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextObject_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextObject_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

type QTextBlockGroup struct {
	h *C.QTextBlockGroup
	*QTextObject
}

func (this *QTextBlockGroup) cPointer() *C.QTextBlockGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextBlockGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextBlockGroup constructs the type using only CGO pointers.
func newQTextBlockGroup(h *C.QTextBlockGroup) *QTextBlockGroup {
	if h == nil {
		return nil
	}
	var outptr_QTextObject *C.QTextObject = nil
	C.QTextBlockGroup_virtbase(h, &outptr_QTextObject)

	return &QTextBlockGroup{h: h,
		QTextObject: newQTextObject(outptr_QTextObject)}
}

// UnsafeNewQTextBlockGroup constructs the type using only unsafe pointers.
func UnsafeNewQTextBlockGroup(h unsafe.Pointer) *QTextBlockGroup {
	return newQTextBlockGroup((*C.QTextBlockGroup)(h))
}

func (this *QTextBlockGroup) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTextBlockGroup_metaObject(this.h))
}

func (this *QTextBlockGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTextBlockGroup_metacast(this.h, param1_Cstring))
}

func QTextBlockGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextBlockGroup_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextBlockGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextBlockGroup_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextBlockGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextBlockGroup_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

type QTextFrameLayoutData struct {
	h *C.QTextFrameLayoutData
}

func (this *QTextFrameLayoutData) cPointer() *C.QTextFrameLayoutData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextFrameLayoutData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextFrameLayoutData constructs the type using only CGO pointers.
func newQTextFrameLayoutData(h *C.QTextFrameLayoutData) *QTextFrameLayoutData {
	if h == nil {
		return nil
	}

	return &QTextFrameLayoutData{h: h}
}

// UnsafeNewQTextFrameLayoutData constructs the type using only unsafe pointers.
func UnsafeNewQTextFrameLayoutData(h unsafe.Pointer) *QTextFrameLayoutData {
	return newQTextFrameLayoutData((*C.QTextFrameLayoutData)(h))
}

func (this *QTextFrameLayoutData) OperatorAssign(param1 *QTextFrameLayoutData) {
	C.QTextFrameLayoutData_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTextFrameLayoutData) Delete() {
	C.QTextFrameLayoutData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextFrameLayoutData) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextFrameLayoutData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextFrame struct {
	h *C.QTextFrame
	*QTextObject
}

func (this *QTextFrame) cPointer() *C.QTextFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextFrame) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextFrame constructs the type using only CGO pointers.
func newQTextFrame(h *C.QTextFrame) *QTextFrame {
	if h == nil {
		return nil
	}
	var outptr_QTextObject *C.QTextObject = nil
	C.QTextFrame_virtbase(h, &outptr_QTextObject)

	return &QTextFrame{h: h,
		QTextObject: newQTextObject(outptr_QTextObject)}
}

// UnsafeNewQTextFrame constructs the type using only unsafe pointers.
func UnsafeNewQTextFrame(h unsafe.Pointer) *QTextFrame {
	return newQTextFrame((*C.QTextFrame)(h))
}

// NewQTextFrame constructs a new QTextFrame object.
func NewQTextFrame(doc *QTextDocument) *QTextFrame {

	return newQTextFrame(C.QTextFrame_new(doc.cPointer()))
}

func (this *QTextFrame) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTextFrame_metaObject(this.h))
}

func (this *QTextFrame) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTextFrame_metacast(this.h, param1_Cstring))
}

func QTextFrame_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextFrame_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextFrame) SetFrameFormat(format *QTextFrameFormat) {
	C.QTextFrame_setFrameFormat(this.h, format.cPointer())
}

func (this *QTextFrame) FrameFormat() *QTextFrameFormat {
	_goptr := newQTextFrameFormat(C.QTextFrame_frameFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFrame) FirstCursorPosition() *QTextCursor {
	_goptr := newQTextCursor(C.QTextFrame_firstCursorPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFrame) LastCursorPosition() *QTextCursor {
	_goptr := newQTextCursor(C.QTextFrame_lastCursorPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFrame) FirstPosition() int {
	return (int)(C.QTextFrame_firstPosition(this.h))
}

func (this *QTextFrame) LastPosition() int {
	return (int)(C.QTextFrame_lastPosition(this.h))
}

func (this *QTextFrame) LayoutData() *QTextFrameLayoutData {
	return newQTextFrameLayoutData(C.QTextFrame_layoutData(this.h))
}

func (this *QTextFrame) SetLayoutData(data *QTextFrameLayoutData) {
	C.QTextFrame_setLayoutData(this.h, data.cPointer())
}

func (this *QTextFrame) ChildFrames() []*QTextFrame {
	var _ma C.struct_miqt_array = C.QTextFrame_childFrames(this.h)
	_ret := make([]*QTextFrame, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextFrame)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTextFrame(_outCast[i])
	}
	return _ret
}

func (this *QTextFrame) ParentFrame() *QTextFrame {
	return newQTextFrame(C.QTextFrame_parentFrame(this.h))
}

func (this *QTextFrame) Begin() *QTextFrame__iterator {
	_goptr := newQTextFrame__iterator(C.QTextFrame_begin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFrame) End() *QTextFrame__iterator {
	_goptr := newQTextFrame__iterator(C.QTextFrame_end(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTextFrame_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextFrame_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextFrame_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextFrame_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetFormat can only be called from a QTextFrame that was directly constructed.
func (this *QTextFrame) SetFormat(format *QTextFormat) {

	var _dynamic_cast_ok C.bool = false
	C.QTextFrame_protectedbase_setFormat(&_dynamic_cast_ok, unsafe.Pointer(this.h), format.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QTextFrame that was directly constructed.
func (this *QTextFrame) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QTextFrame_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTextFrame that was directly constructed.
func (this *QTextFrame) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTextFrame_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTextFrame that was directly constructed.
func (this *QTextFrame) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTextFrame_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTextFrame that was directly constructed.
func (this *QTextFrame) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTextFrame_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTextFrame) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTextFrame_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTextFrame) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTextFrame_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextFrame_event
func miqt_exec_callback_QTextFrame_event(self *C.QTextFrame, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTextFrame{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextFrame) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTextFrame_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTextFrame) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTextFrame_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextFrame_eventFilter
func miqt_exec_callback_QTextFrame_eventFilter(self *C.QTextFrame, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTextFrame{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTextFrame) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTextFrame_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextFrame) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTextFrame_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextFrame_timerEvent
func miqt_exec_callback_QTextFrame_timerEvent(self *C.QTextFrame, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTextFrame{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTextFrame) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTextFrame_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextFrame) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTextFrame_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextFrame_childEvent
func miqt_exec_callback_QTextFrame_childEvent(self *C.QTextFrame, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTextFrame{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTextFrame) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTextFrame_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextFrame) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTextFrame_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextFrame_customEvent
func miqt_exec_callback_QTextFrame_customEvent(self *C.QTextFrame, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTextFrame{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTextFrame) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTextFrame_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextFrame) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextFrame_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextFrame_connectNotify
func miqt_exec_callback_QTextFrame_connectNotify(self *C.QTextFrame, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextFrame{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTextFrame) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTextFrame_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextFrame) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextFrame_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextFrame_disconnectNotify
func miqt_exec_callback_QTextFrame_disconnectNotify(self *C.QTextFrame, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextFrame{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTextFrame) Delete() {
	C.QTextFrame_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextFrame) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextFrame) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextBlockUserData struct {
	h *C.QTextBlockUserData
}

func (this *QTextBlockUserData) cPointer() *C.QTextBlockUserData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextBlockUserData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextBlockUserData constructs the type using only CGO pointers.
func newQTextBlockUserData(h *C.QTextBlockUserData) *QTextBlockUserData {
	if h == nil {
		return nil
	}

	return &QTextBlockUserData{h: h}
}

// UnsafeNewQTextBlockUserData constructs the type using only unsafe pointers.
func UnsafeNewQTextBlockUserData(h unsafe.Pointer) *QTextBlockUserData {
	return newQTextBlockUserData((*C.QTextBlockUserData)(h))
}

func (this *QTextBlockUserData) OperatorAssign(param1 *QTextBlockUserData) {
	C.QTextBlockUserData_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTextBlockUserData) Delete() {
	C.QTextBlockUserData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextBlockUserData) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextBlockUserData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextBlock struct {
	h *C.QTextBlock
}

func (this *QTextBlock) cPointer() *C.QTextBlock {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextBlock) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextBlock constructs the type using only CGO pointers.
func newQTextBlock(h *C.QTextBlock) *QTextBlock {
	if h == nil {
		return nil
	}

	return &QTextBlock{h: h}
}

// UnsafeNewQTextBlock constructs the type using only unsafe pointers.
func UnsafeNewQTextBlock(h unsafe.Pointer) *QTextBlock {
	return newQTextBlock((*C.QTextBlock)(h))
}

// NewQTextBlock constructs a new QTextBlock object.
func NewQTextBlock() *QTextBlock {

	return newQTextBlock(C.QTextBlock_new())
}

// NewQTextBlock2 constructs a new QTextBlock object.
func NewQTextBlock2(o *QTextBlock) *QTextBlock {

	return newQTextBlock(C.QTextBlock_new2(o.cPointer()))
}

func (this *QTextBlock) OperatorAssign(o *QTextBlock) {
	C.QTextBlock_operatorAssign(this.h, o.cPointer())
}

func (this *QTextBlock) IsValid() bool {
	return (bool)(C.QTextBlock_isValid(this.h))
}

func (this *QTextBlock) OperatorEqual(o *QTextBlock) bool {
	return (bool)(C.QTextBlock_operatorEqual(this.h, o.cPointer()))
}

func (this *QTextBlock) OperatorNotEqual(o *QTextBlock) bool {
	return (bool)(C.QTextBlock_operatorNotEqual(this.h, o.cPointer()))
}

func (this *QTextBlock) OperatorLesser(o *QTextBlock) bool {
	return (bool)(C.QTextBlock_operatorLesser(this.h, o.cPointer()))
}

func (this *QTextBlock) Position() int {
	return (int)(C.QTextBlock_position(this.h))
}

func (this *QTextBlock) Length() int {
	return (int)(C.QTextBlock_length(this.h))
}

func (this *QTextBlock) Contains(position int) bool {
	return (bool)(C.QTextBlock_contains(this.h, (C.int)(position)))
}

func (this *QTextBlock) Layout() *QTextLayout {
	return newQTextLayout(C.QTextBlock_layout(this.h))
}

func (this *QTextBlock) ClearLayout() {
	C.QTextBlock_clearLayout(this.h)
}

func (this *QTextBlock) BlockFormat() *QTextBlockFormat {
	_goptr := newQTextBlockFormat(C.QTextBlock_blockFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBlock) BlockFormatIndex() int {
	return (int)(C.QTextBlock_blockFormatIndex(this.h))
}

func (this *QTextBlock) CharFormat() *QTextCharFormat {
	_goptr := newQTextCharFormat(C.QTextBlock_charFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBlock) CharFormatIndex() int {
	return (int)(C.QTextBlock_charFormatIndex(this.h))
}

func (this *QTextBlock) TextDirection() LayoutDirection {
	return (LayoutDirection)(C.QTextBlock_textDirection(this.h))
}

func (this *QTextBlock) Text() string {
	var _ms C.struct_miqt_string = C.QTextBlock_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextBlock) TextFormats() []QTextLayout__FormatRange {
	var _ma C.struct_miqt_array = C.QTextBlock_textFormats(this.h)
	_ret := make([]QTextLayout__FormatRange, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextLayout__FormatRange)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQTextLayout__FormatRange(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTextBlock) Document() *QTextDocument {
	return newQTextDocument(C.QTextBlock_document(this.h))
}

func (this *QTextBlock) TextList() *QTextList {
	return newQTextList(C.QTextBlock_textList(this.h))
}

func (this *QTextBlock) UserData() *QTextBlockUserData {
	return newQTextBlockUserData(C.QTextBlock_userData(this.h))
}

func (this *QTextBlock) SetUserData(data *QTextBlockUserData) {
	C.QTextBlock_setUserData(this.h, data.cPointer())
}

func (this *QTextBlock) UserState() int {
	return (int)(C.QTextBlock_userState(this.h))
}

func (this *QTextBlock) SetUserState(state int) {
	C.QTextBlock_setUserState(this.h, (C.int)(state))
}

func (this *QTextBlock) Revision() int {
	return (int)(C.QTextBlock_revision(this.h))
}

func (this *QTextBlock) SetRevision(rev int) {
	C.QTextBlock_setRevision(this.h, (C.int)(rev))
}

func (this *QTextBlock) IsVisible() bool {
	return (bool)(C.QTextBlock_isVisible(this.h))
}

func (this *QTextBlock) SetVisible(visible bool) {
	C.QTextBlock_setVisible(this.h, (C.bool)(visible))
}

func (this *QTextBlock) BlockNumber() int {
	return (int)(C.QTextBlock_blockNumber(this.h))
}

func (this *QTextBlock) FirstLineNumber() int {
	return (int)(C.QTextBlock_firstLineNumber(this.h))
}

func (this *QTextBlock) SetLineCount(count int) {
	C.QTextBlock_setLineCount(this.h, (C.int)(count))
}

func (this *QTextBlock) LineCount() int {
	return (int)(C.QTextBlock_lineCount(this.h))
}

func (this *QTextBlock) Begin() *QTextBlock__iterator {
	_goptr := newQTextBlock__iterator(C.QTextBlock_begin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBlock) End() *QTextBlock__iterator {
	_goptr := newQTextBlock__iterator(C.QTextBlock_end(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBlock) Next() *QTextBlock {
	_goptr := newQTextBlock(C.QTextBlock_next(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBlock) Previous() *QTextBlock {
	_goptr := newQTextBlock(C.QTextBlock_previous(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBlock) FragmentIndex() int {
	return (int)(C.QTextBlock_fragmentIndex(this.h))
}

// Delete this object from C++ memory.
func (this *QTextBlock) Delete() {
	C.QTextBlock_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextBlock) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextBlock) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextFragment struct {
	h *C.QTextFragment
}

func (this *QTextFragment) cPointer() *C.QTextFragment {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextFragment) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextFragment constructs the type using only CGO pointers.
func newQTextFragment(h *C.QTextFragment) *QTextFragment {
	if h == nil {
		return nil
	}

	return &QTextFragment{h: h}
}

// UnsafeNewQTextFragment constructs the type using only unsafe pointers.
func UnsafeNewQTextFragment(h unsafe.Pointer) *QTextFragment {
	return newQTextFragment((*C.QTextFragment)(h))
}

// NewQTextFragment constructs a new QTextFragment object.
func NewQTextFragment() *QTextFragment {

	return newQTextFragment(C.QTextFragment_new())
}

// NewQTextFragment2 constructs a new QTextFragment object.
func NewQTextFragment2(o *QTextFragment) *QTextFragment {

	return newQTextFragment(C.QTextFragment_new2(o.cPointer()))
}

func (this *QTextFragment) OperatorAssign(o *QTextFragment) {
	C.QTextFragment_operatorAssign(this.h, o.cPointer())
}

func (this *QTextFragment) IsValid() bool {
	return (bool)(C.QTextFragment_isValid(this.h))
}

func (this *QTextFragment) OperatorEqual(o *QTextFragment) bool {
	return (bool)(C.QTextFragment_operatorEqual(this.h, o.cPointer()))
}

func (this *QTextFragment) OperatorNotEqual(o *QTextFragment) bool {
	return (bool)(C.QTextFragment_operatorNotEqual(this.h, o.cPointer()))
}

func (this *QTextFragment) OperatorLesser(o *QTextFragment) bool {
	return (bool)(C.QTextFragment_operatorLesser(this.h, o.cPointer()))
}

func (this *QTextFragment) Position() int {
	return (int)(C.QTextFragment_position(this.h))
}

func (this *QTextFragment) Length() int {
	return (int)(C.QTextFragment_length(this.h))
}

func (this *QTextFragment) Contains(position int) bool {
	return (bool)(C.QTextFragment_contains(this.h, (C.int)(position)))
}

func (this *QTextFragment) CharFormat() *QTextCharFormat {
	_goptr := newQTextCharFormat(C.QTextFragment_charFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFragment) CharFormatIndex() int {
	return (int)(C.QTextFragment_charFormatIndex(this.h))
}

func (this *QTextFragment) Text() string {
	var _ms C.struct_miqt_string = C.QTextFragment_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextFragment) GlyphRuns() []QGlyphRun {
	var _ma C.struct_miqt_array = C.QTextFragment_glyphRuns(this.h)
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGlyphRun(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTextFragment) GlyphRuns1(from int) []QGlyphRun {
	var _ma C.struct_miqt_array = C.QTextFragment_glyphRuns1(this.h, (C.int)(from))
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGlyphRun(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTextFragment) GlyphRuns2(from int, length int) []QGlyphRun {
	var _ma C.struct_miqt_array = C.QTextFragment_glyphRuns2(this.h, (C.int)(from), (C.int)(length))
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGlyphRun(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QTextFragment) Delete() {
	C.QTextFragment_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextFragment) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextFragment) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextFrame__iterator struct {
	h *C.QTextFrame__iterator
}

func (this *QTextFrame__iterator) cPointer() *C.QTextFrame__iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextFrame__iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextFrame__iterator constructs the type using only CGO pointers.
func newQTextFrame__iterator(h *C.QTextFrame__iterator) *QTextFrame__iterator {
	if h == nil {
		return nil
	}

	return &QTextFrame__iterator{h: h}
}

// UnsafeNewQTextFrame__iterator constructs the type using only unsafe pointers.
func UnsafeNewQTextFrame__iterator(h unsafe.Pointer) *QTextFrame__iterator {
	return newQTextFrame__iterator((*C.QTextFrame__iterator)(h))
}

// NewQTextFrame__iterator constructs a new QTextFrame::iterator object.
func NewQTextFrame__iterator() *QTextFrame__iterator {

	return newQTextFrame__iterator(C.QTextFrame__iterator_new())
}

// NewQTextFrame__iterator2 constructs a new QTextFrame::iterator object.
func NewQTextFrame__iterator2(param1 *QTextFrame__iterator) *QTextFrame__iterator {

	return newQTextFrame__iterator(C.QTextFrame__iterator_new2(param1.cPointer()))
}

func (this *QTextFrame__iterator) ParentFrame() *QTextFrame {
	return newQTextFrame(C.QTextFrame__iterator_parentFrame(this.h))
}

func (this *QTextFrame__iterator) CurrentFrame() *QTextFrame {
	return newQTextFrame(C.QTextFrame__iterator_currentFrame(this.h))
}

func (this *QTextFrame__iterator) CurrentBlock() *QTextBlock {
	_goptr := newQTextBlock(C.QTextFrame__iterator_currentBlock(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFrame__iterator) AtEnd() bool {
	return (bool)(C.QTextFrame__iterator_atEnd(this.h))
}

func (this *QTextFrame__iterator) OperatorEqual(o *QTextFrame__iterator) bool {
	return (bool)(C.QTextFrame__iterator_operatorEqual(this.h, o.cPointer()))
}

func (this *QTextFrame__iterator) OperatorNotEqual(o *QTextFrame__iterator) bool {
	return (bool)(C.QTextFrame__iterator_operatorNotEqual(this.h, o.cPointer()))
}

func (this *QTextFrame__iterator) OperatorPlusPlus() *QTextFrame__iterator {
	return newQTextFrame__iterator(C.QTextFrame__iterator_operatorPlusPlus(this.h))
}

func (this *QTextFrame__iterator) OperatorPlusPlusWithInt(param1 int) *QTextFrame__iterator {
	_goptr := newQTextFrame__iterator(C.QTextFrame__iterator_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextFrame__iterator) OperatorMinusMinus() *QTextFrame__iterator {
	return newQTextFrame__iterator(C.QTextFrame__iterator_operatorMinusMinus(this.h))
}

func (this *QTextFrame__iterator) OperatorMinusMinusWithInt(param1 int) *QTextFrame__iterator {
	_goptr := newQTextFrame__iterator(C.QTextFrame__iterator_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QTextFrame__iterator) Delete() {
	C.QTextFrame__iterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextFrame__iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextFrame__iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextBlock__iterator struct {
	h *C.QTextBlock__iterator
}

func (this *QTextBlock__iterator) cPointer() *C.QTextBlock__iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextBlock__iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextBlock__iterator constructs the type using only CGO pointers.
func newQTextBlock__iterator(h *C.QTextBlock__iterator) *QTextBlock__iterator {
	if h == nil {
		return nil
	}

	return &QTextBlock__iterator{h: h}
}

// UnsafeNewQTextBlock__iterator constructs the type using only unsafe pointers.
func UnsafeNewQTextBlock__iterator(h unsafe.Pointer) *QTextBlock__iterator {
	return newQTextBlock__iterator((*C.QTextBlock__iterator)(h))
}

// NewQTextBlock__iterator constructs a new QTextBlock::iterator object.
func NewQTextBlock__iterator() *QTextBlock__iterator {

	return newQTextBlock__iterator(C.QTextBlock__iterator_new())
}

// NewQTextBlock__iterator2 constructs a new QTextBlock::iterator object.
func NewQTextBlock__iterator2(param1 *QTextBlock__iterator) *QTextBlock__iterator {

	return newQTextBlock__iterator(C.QTextBlock__iterator_new2(param1.cPointer()))
}

func (this *QTextBlock__iterator) Fragment() *QTextFragment {
	_goptr := newQTextFragment(C.QTextBlock__iterator_fragment(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBlock__iterator) AtEnd() bool {
	return (bool)(C.QTextBlock__iterator_atEnd(this.h))
}

func (this *QTextBlock__iterator) OperatorEqual(o *QTextBlock__iterator) bool {
	return (bool)(C.QTextBlock__iterator_operatorEqual(this.h, o.cPointer()))
}

func (this *QTextBlock__iterator) OperatorNotEqual(o *QTextBlock__iterator) bool {
	return (bool)(C.QTextBlock__iterator_operatorNotEqual(this.h, o.cPointer()))
}

func (this *QTextBlock__iterator) OperatorPlusPlus() *QTextBlock__iterator {
	return newQTextBlock__iterator(C.QTextBlock__iterator_operatorPlusPlus(this.h))
}

func (this *QTextBlock__iterator) OperatorPlusPlusWithInt(param1 int) *QTextBlock__iterator {
	_goptr := newQTextBlock__iterator(C.QTextBlock__iterator_operatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBlock__iterator) OperatorMinusMinus() *QTextBlock__iterator {
	return newQTextBlock__iterator(C.QTextBlock__iterator_operatorMinusMinus(this.h))
}

func (this *QTextBlock__iterator) OperatorMinusMinusWithInt(param1 int) *QTextBlock__iterator {
	_goptr := newQTextBlock__iterator(C.QTextBlock__iterator_operatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QTextBlock__iterator) Delete() {
	C.QTextBlock__iterator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextBlock__iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextBlock__iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

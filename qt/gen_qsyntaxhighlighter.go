package qt

/*

#include "gen_qsyntaxhighlighter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSyntaxHighlighter struct {
	h *C.QSyntaxHighlighter
	*QObject
}

func (this *QSyntaxHighlighter) cPointer() *C.QSyntaxHighlighter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSyntaxHighlighter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSyntaxHighlighter constructs the type using only CGO pointers.
func newQSyntaxHighlighter(h *C.QSyntaxHighlighter) *QSyntaxHighlighter {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QSyntaxHighlighter_virtbase(h, &outptr_QObject)

	return &QSyntaxHighlighter{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQSyntaxHighlighter constructs the type using only unsafe pointers.
func UnsafeNewQSyntaxHighlighter(h unsafe.Pointer) *QSyntaxHighlighter {
	return newQSyntaxHighlighter((*C.QSyntaxHighlighter)(h))
}

// NewQSyntaxHighlighter constructs a new QSyntaxHighlighter object.
func NewQSyntaxHighlighter(parent *QObject) *QSyntaxHighlighter {

	return newQSyntaxHighlighter(C.QSyntaxHighlighter_new(parent.cPointer()))
}

// NewQSyntaxHighlighter2 constructs a new QSyntaxHighlighter object.
func NewQSyntaxHighlighter2(parent *QTextDocument) *QSyntaxHighlighter {

	return newQSyntaxHighlighter(C.QSyntaxHighlighter_new2(parent.cPointer()))
}

func (this *QSyntaxHighlighter) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSyntaxHighlighter_metaObject(this.h))
}

func (this *QSyntaxHighlighter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSyntaxHighlighter_metacast(this.h, param1_Cstring))
}

func QSyntaxHighlighter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSyntaxHighlighter_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSyntaxHighlighter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSyntaxHighlighter_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSyntaxHighlighter) SetDocument(doc *QTextDocument) {
	C.QSyntaxHighlighter_setDocument(this.h, doc.cPointer())
}

func (this *QSyntaxHighlighter) Document() *QTextDocument {
	return newQTextDocument(C.QSyntaxHighlighter_document(this.h))
}

func (this *QSyntaxHighlighter) Rehighlight() {
	C.QSyntaxHighlighter_rehighlight(this.h)
}

func (this *QSyntaxHighlighter) RehighlightBlock(block *QTextBlock) {
	C.QSyntaxHighlighter_rehighlightBlock(this.h, block.cPointer())
}

func QSyntaxHighlighter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSyntaxHighlighter_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSyntaxHighlighter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSyntaxHighlighter_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSyntaxHighlighter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSyntaxHighlighter_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSyntaxHighlighter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSyntaxHighlighter_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetFormat can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) SetFormat(start int, count int, format *QTextCharFormat) {

	var _dynamic_cast_ok C.bool = false
	C.QSyntaxHighlighter_protectedbase_setFormat(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(start), (C.int)(count), format.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetFormat2 can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) SetFormat2(start int, count int, color *QColor) {

	var _dynamic_cast_ok C.bool = false
	C.QSyntaxHighlighter_protectedbase_setFormat2(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(start), (C.int)(count), color.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetFormat3 can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) SetFormat3(start int, count int, font *QFont) {

	var _dynamic_cast_ok C.bool = false
	C.QSyntaxHighlighter_protectedbase_setFormat3(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(start), (C.int)(count), font.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Format can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) Format(pos int) QTextCharFormat {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQTextCharFormat(C.QSyntaxHighlighter_protectedbase_format(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(pos)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// PreviousBlockState can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) PreviousBlockState() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSyntaxHighlighter_protectedbase_previousBlockState(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// CurrentBlockState can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) CurrentBlockState() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSyntaxHighlighter_protectedbase_currentBlockState(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetCurrentBlockState can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) SetCurrentBlockState(newState int) {

	var _dynamic_cast_ok C.bool = false
	C.QSyntaxHighlighter_protectedbase_setCurrentBlockState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(newState))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetCurrentBlockUserData can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) SetCurrentBlockUserData(data *QTextBlockUserData) {

	var _dynamic_cast_ok C.bool = false
	C.QSyntaxHighlighter_protectedbase_setCurrentBlockUserData(&_dynamic_cast_ok, unsafe.Pointer(this.h), data.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// CurrentBlockUserData can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) CurrentBlockUserData() *QTextBlockUserData {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQTextBlockUserData(C.QSyntaxHighlighter_protectedbase_currentBlockUserData(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// CurrentBlock can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) CurrentBlock() QTextBlock {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQTextBlock(C.QSyntaxHighlighter_protectedbase_currentBlock(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QSyntaxHighlighter_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSyntaxHighlighter_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSyntaxHighlighter_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSyntaxHighlighter that was directly constructed.
func (this *QSyntaxHighlighter) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSyntaxHighlighter_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QSyntaxHighlighter) OnHighlightBlock(slot func(text string)) {
	ok := C.QSyntaxHighlighter_override_virtual_highlightBlock(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSyntaxHighlighter_highlightBlock
func miqt_exec_callback_QSyntaxHighlighter_highlightBlock(self *C.QSyntaxHighlighter, cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc(slotval1)

}

func (this *QSyntaxHighlighter) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSyntaxHighlighter_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSyntaxHighlighter) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSyntaxHighlighter_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSyntaxHighlighter_event
func miqt_exec_callback_QSyntaxHighlighter_event(self *C.QSyntaxHighlighter, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSyntaxHighlighter{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSyntaxHighlighter) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSyntaxHighlighter_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSyntaxHighlighter) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSyntaxHighlighter_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSyntaxHighlighter_eventFilter
func miqt_exec_callback_QSyntaxHighlighter_eventFilter(self *C.QSyntaxHighlighter, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSyntaxHighlighter{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSyntaxHighlighter) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSyntaxHighlighter_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSyntaxHighlighter) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSyntaxHighlighter_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSyntaxHighlighter_timerEvent
func miqt_exec_callback_QSyntaxHighlighter_timerEvent(self *C.QSyntaxHighlighter, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSyntaxHighlighter{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSyntaxHighlighter) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSyntaxHighlighter_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSyntaxHighlighter) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSyntaxHighlighter_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSyntaxHighlighter_childEvent
func miqt_exec_callback_QSyntaxHighlighter_childEvent(self *C.QSyntaxHighlighter, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSyntaxHighlighter{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSyntaxHighlighter) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSyntaxHighlighter_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSyntaxHighlighter) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSyntaxHighlighter_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSyntaxHighlighter_customEvent
func miqt_exec_callback_QSyntaxHighlighter_customEvent(self *C.QSyntaxHighlighter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSyntaxHighlighter{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSyntaxHighlighter) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSyntaxHighlighter_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSyntaxHighlighter) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSyntaxHighlighter_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSyntaxHighlighter_connectNotify
func miqt_exec_callback_QSyntaxHighlighter_connectNotify(self *C.QSyntaxHighlighter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSyntaxHighlighter{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSyntaxHighlighter) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSyntaxHighlighter_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSyntaxHighlighter) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSyntaxHighlighter_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSyntaxHighlighter_disconnectNotify
func miqt_exec_callback_QSyntaxHighlighter_disconnectNotify(self *C.QSyntaxHighlighter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSyntaxHighlighter{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSyntaxHighlighter) Delete() {
	C.QSyntaxHighlighter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSyntaxHighlighter) GoGC() {
	runtime.SetFinalizer(this, func(this *QSyntaxHighlighter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

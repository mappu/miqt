package qwt

/*

#include "gen_qwt_text_label.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtTextLabel struct {
	h *C.QwtTextLabel
	*qt.QFrame
}

func (this *QwtTextLabel) cPointer() *C.QwtTextLabel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtTextLabel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtTextLabel constructs the type using only CGO pointers.
func newQwtTextLabel(h *C.QwtTextLabel) *QwtTextLabel {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	C.QwtTextLabel_virtbase(h, &outptr_QFrame)

	return &QwtTextLabel{h: h,
		QFrame: qt.UnsafeNewQFrame(unsafe.Pointer(outptr_QFrame))}
}

// UnsafeNewQwtTextLabel constructs the type using only unsafe pointers.
func UnsafeNewQwtTextLabel(h unsafe.Pointer) *QwtTextLabel {
	return newQwtTextLabel((*C.QwtTextLabel)(h))
}

// NewQwtTextLabel constructs a new QwtTextLabel object.
func NewQwtTextLabel(parent *qt.QWidget) *QwtTextLabel {

	return newQwtTextLabel(C.QwtTextLabel_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtTextLabel2 constructs a new QwtTextLabel object.
func NewQwtTextLabel2() *QwtTextLabel {

	return newQwtTextLabel(C.QwtTextLabel_new2())
}

// NewQwtTextLabel3 constructs a new QwtTextLabel object.
func NewQwtTextLabel3(param1 *QwtText) *QwtTextLabel {

	return newQwtTextLabel(C.QwtTextLabel_new3(param1.cPointer()))
}

// NewQwtTextLabel4 constructs a new QwtTextLabel object.
func NewQwtTextLabel4(param1 *QwtText, parent *qt.QWidget) *QwtTextLabel {

	return newQwtTextLabel(C.QwtTextLabel_new4(param1.cPointer(), (*C.QWidget)(parent.UnsafePointer())))
}

func (this *QwtTextLabel) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtTextLabel_metaObject(this.h)))
}

func (this *QwtTextLabel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtTextLabel_metacast(this.h, param1_Cstring))
}

func QwtTextLabel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtTextLabel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtTextLabel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtTextLabel_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtTextLabel) SetPlainText(plainText string) {
	plainText_ms := C.struct_miqt_string{}
	plainText_ms.data = C.CString(plainText)
	plainText_ms.len = C.size_t(len(plainText))
	defer C.free(unsafe.Pointer(plainText_ms.data))
	C.QwtTextLabel_setPlainText(this.h, plainText_ms)
}

func (this *QwtTextLabel) PlainText() string {
	var _ms C.struct_miqt_string = C.QwtTextLabel_plainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtTextLabel) SetText(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QwtTextLabel_setText(this.h, param1_ms)
}

func (this *QwtTextLabel) SetTextWithText(text *QwtText) {
	C.QwtTextLabel_setTextWithText(this.h, text.cPointer())
}

func (this *QwtTextLabel) Clear() {
	C.QwtTextLabel_clear(this.h)
}

func (this *QwtTextLabel) Text() *QwtText {
	return newQwtText(C.QwtTextLabel_text(this.h))
}

func (this *QwtTextLabel) Indent() int {
	return (int)(C.QwtTextLabel_indent(this.h))
}

func (this *QwtTextLabel) SetIndent(indent int) {
	C.QwtTextLabel_setIndent(this.h, (C.int)(indent))
}

func (this *QwtTextLabel) Margin() int {
	return (int)(C.QwtTextLabel_margin(this.h))
}

func (this *QwtTextLabel) SetMargin(margin int) {
	C.QwtTextLabel_setMargin(this.h, (C.int)(margin))
}

func (this *QwtTextLabel) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtTextLabel_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtTextLabel) MinimumSizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtTextLabel_minimumSizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtTextLabel) HeightForWidth(param1 int) int {
	return (int)(C.QwtTextLabel_heightForWidth(this.h, (C.int)(param1)))
}

func (this *QwtTextLabel) TextRect() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtTextLabel_textRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtTextLabel) DrawText(param1 *qt.QPainter, param2 *qt.QRectF) {
	C.QwtTextLabel_drawText(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()))
}

func QwtTextLabel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtTextLabel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtTextLabel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtTextLabel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtTextLabel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtTextLabel_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtTextLabel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtTextLabel_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtTextLabel) SetText2(param1 string, textFormat QwtText__TextFormat) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QwtTextLabel_setText2(this.h, param1_ms, (C.int)(textFormat))
}

// DrawFrame can only be called from a QwtTextLabel that was directly constructed.
func (this *QwtTextLabel) DrawFrame(param1 *qt.QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QwtTextLabel_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// InitStyleOption can only be called from a QwtTextLabel that was directly constructed.
func (this *QwtTextLabel) InitStyleOption(option *qt.QStyleOptionFrame) {

	var _dynamic_cast_ok C.bool = false
	C.QwtTextLabel_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QStyleOptionFrame)(option.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QwtTextLabel that was directly constructed.
func (this *QwtTextLabel) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtTextLabel_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtTextLabel that was directly constructed.
func (this *QwtTextLabel) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtTextLabel_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtTextLabel that was directly constructed.
func (this *QwtTextLabel) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtTextLabel_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtTextLabel that was directly constructed.
func (this *QwtTextLabel) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtTextLabel_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtTextLabel that was directly constructed.
func (this *QwtTextLabel) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtTextLabel_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtTextLabel that was directly constructed.
func (this *QwtTextLabel) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtTextLabel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtTextLabel that was directly constructed.
func (this *QwtTextLabel) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtTextLabel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtTextLabel that was directly constructed.
func (this *QwtTextLabel) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtTextLabel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtTextLabel that was directly constructed.
func (this *QwtTextLabel) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtTextLabel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtTextLabel) callVirtualBase_SetTextWithText(text *QwtText) {

	C.QwtTextLabel_virtualbase_setTextWithText(unsafe.Pointer(this.h), text.cPointer())

}
func (this *QwtTextLabel) OnSetTextWithText(slot func(super func(text *QwtText), text *QwtText)) {
	ok := C.QwtTextLabel_override_virtual_setTextWithText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_setTextWithText
func miqt_exec_callback_QwtTextLabel_setTextWithText(self *C.QwtTextLabel, cb C.intptr_t, text *C.QwtText) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text *QwtText), text *QwtText))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtText(text)

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_SetTextWithText, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtTextLabel_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtTextLabel) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtTextLabel_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_sizeHint
func miqt_exec_callback_QwtTextLabel_sizeHint(self *C.QwtTextLabel, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtTextLabel) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtTextLabel_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtTextLabel) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtTextLabel_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_minimumSizeHint
func miqt_exec_callback_QwtTextLabel_minimumSizeHint(self *C.QwtTextLabel, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtTextLabel) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtTextLabel_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtTextLabel) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtTextLabel_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_heightForWidth
func miqt_exec_callback_QwtTextLabel_heightForWidth(self *C.QwtTextLabel, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtTextLabel) callVirtualBase_DrawText(param1 *qt.QPainter, param2 *qt.QRectF) {

	C.QwtTextLabel_virtualbase_drawText(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()))

}
func (this *QwtTextLabel) OnDrawText(slot func(super func(param1 *qt.QPainter, param2 *qt.QRectF), param1 *qt.QPainter, param2 *qt.QRectF)) {
	ok := C.QwtTextLabel_override_virtual_drawText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_drawText
func miqt_exec_callback_QwtTextLabel_drawText(self *C.QwtTextLabel, cb C.intptr_t, param1 *C.QPainter, param2 *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QRectF), param1 *qt.QPainter, param2 *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQRectF(unsafe.Pointer(param2))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_DrawText, slotval1, slotval2)

}

func (this *QwtTextLabel) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtTextLabel_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtTextLabel) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtTextLabel_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_paintEvent
func miqt_exec_callback_QwtTextLabel_paintEvent(self *C.QwtTextLabel, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_DrawContents(param1 *qt.QPainter) {

	C.QwtTextLabel_virtualbase_drawContents(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtTextLabel) OnDrawContents(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtTextLabel_override_virtual_drawContents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_drawContents
func miqt_exec_callback_QwtTextLabel_drawContents(self *C.QwtTextLabel, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_DrawContents, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_Event(e *qt.QEvent) bool {

	return (bool)(C.QwtTextLabel_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QwtTextLabel) OnEvent(slot func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool) {
	ok := C.QwtTextLabel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_event
func miqt_exec_callback_QwtTextLabel_event(self *C.QwtTextLabel, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtTextLabel) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtTextLabel_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtTextLabel) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtTextLabel_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_changeEvent
func miqt_exec_callback_QwtTextLabel_changeEvent(self *C.QwtTextLabel, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_DevType() int {

	return (int)(C.QwtTextLabel_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtTextLabel) OnDevType(slot func(super func() int) int) {
	ok := C.QwtTextLabel_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_devType
func miqt_exec_callback_QwtTextLabel_devType(self *C.QwtTextLabel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtTextLabel) callVirtualBase_SetVisible(visible bool) {

	C.QwtTextLabel_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtTextLabel) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtTextLabel_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_setVisible
func miqt_exec_callback_QwtTextLabel_setVisible(self *C.QwtTextLabel, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtTextLabel_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtTextLabel) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtTextLabel_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_hasHeightForWidth
func miqt_exec_callback_QwtTextLabel_hasHeightForWidth(self *C.QwtTextLabel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtTextLabel) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtTextLabel_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtTextLabel) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtTextLabel_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_paintEngine
func miqt_exec_callback_QwtTextLabel_paintEngine(self *C.QwtTextLabel, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtTextLabel) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QwtTextLabel_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtTextLabel_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_mousePressEvent
func miqt_exec_callback_QwtTextLabel_mousePressEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QwtTextLabel_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtTextLabel_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_mouseReleaseEvent
func miqt_exec_callback_QwtTextLabel_mouseReleaseEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtTextLabel_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtTextLabel_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_mouseDoubleClickEvent
func miqt_exec_callback_QwtTextLabel_mouseDoubleClickEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QwtTextLabel_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtTextLabel_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_mouseMoveEvent
func miqt_exec_callback_QwtTextLabel_mouseMoveEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QwtTextLabel_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QwtTextLabel_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_wheelEvent
func miqt_exec_callback_QwtTextLabel_wheelEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QwtTextLabel_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtTextLabel_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_keyPressEvent
func miqt_exec_callback_QwtTextLabel_keyPressEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtTextLabel_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtTextLabel_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_keyReleaseEvent
func miqt_exec_callback_QwtTextLabel_keyReleaseEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtTextLabel_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtTextLabel_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_focusInEvent
func miqt_exec_callback_QwtTextLabel_focusInEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtTextLabel_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtTextLabel_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_focusOutEvent
func miqt_exec_callback_QwtTextLabel_focusOutEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtTextLabel_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtTextLabel_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_enterEvent
func miqt_exec_callback_QwtTextLabel_enterEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtTextLabel_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtTextLabel_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_leaveEvent
func miqt_exec_callback_QwtTextLabel_leaveEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtTextLabel_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtTextLabel_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_moveEvent
func miqt_exec_callback_QwtTextLabel_moveEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QwtTextLabel_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QwtTextLabel_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_resizeEvent
func miqt_exec_callback_QwtTextLabel_resizeEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtTextLabel_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtTextLabel_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_closeEvent
func miqt_exec_callback_QwtTextLabel_closeEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtTextLabel_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtTextLabel_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_contextMenuEvent
func miqt_exec_callback_QwtTextLabel_contextMenuEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtTextLabel_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtTextLabel_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_tabletEvent
func miqt_exec_callback_QwtTextLabel_tabletEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtTextLabel_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtTextLabel_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_actionEvent
func miqt_exec_callback_QwtTextLabel_actionEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtTextLabel_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtTextLabel_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_dragEnterEvent
func miqt_exec_callback_QwtTextLabel_dragEnterEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtTextLabel_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtTextLabel_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_dragMoveEvent
func miqt_exec_callback_QwtTextLabel_dragMoveEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtTextLabel_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtTextLabel_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_dragLeaveEvent
func miqt_exec_callback_QwtTextLabel_dragLeaveEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtTextLabel_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtTextLabel_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_dropEvent
func miqt_exec_callback_QwtTextLabel_dropEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtTextLabel_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtTextLabel_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_showEvent
func miqt_exec_callback_QwtTextLabel_showEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtTextLabel_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtTextLabel_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_hideEvent
func miqt_exec_callback_QwtTextLabel_hideEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtTextLabel_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtTextLabel) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtTextLabel_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_nativeEvent
func miqt_exec_callback_QwtTextLabel_nativeEvent(self *C.QwtTextLabel, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtTextLabel) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtTextLabel_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtTextLabel) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtTextLabel_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_metric
func miqt_exec_callback_QwtTextLabel_metric(self *C.QwtTextLabel, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtTextLabel) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtTextLabel_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtTextLabel) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtTextLabel_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_initPainter
func miqt_exec_callback_QwtTextLabel_initPainter(self *C.QwtTextLabel, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtTextLabel_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtTextLabel) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtTextLabel_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_redirected
func miqt_exec_callback_QwtTextLabel_redirected(self *C.QwtTextLabel, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtTextLabel) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtTextLabel_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtTextLabel) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtTextLabel_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_sharedPainter
func miqt_exec_callback_QwtTextLabel_sharedPainter(self *C.QwtTextLabel, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtTextLabel) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtTextLabel_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtTextLabel) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtTextLabel_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_inputMethodEvent
func miqt_exec_callback_QwtTextLabel_inputMethodEvent(self *C.QwtTextLabel, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtTextLabel_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtTextLabel) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtTextLabel_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_inputMethodQuery
func miqt_exec_callback_QwtTextLabel_inputMethodQuery(self *C.QwtTextLabel, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtTextLabel) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtTextLabel_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtTextLabel) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtTextLabel_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_focusNextPrevChild
func miqt_exec_callback_QwtTextLabel_focusNextPrevChild(self *C.QwtTextLabel, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtTextLabel) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtTextLabel_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtTextLabel) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtTextLabel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_eventFilter
func miqt_exec_callback_QwtTextLabel_eventFilter(self *C.QwtTextLabel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtTextLabel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtTextLabel) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtTextLabel_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtTextLabel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_timerEvent
func miqt_exec_callback_QwtTextLabel_timerEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtTextLabel_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtTextLabel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_childEvent
func miqt_exec_callback_QwtTextLabel_childEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtTextLabel_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtTextLabel) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtTextLabel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_customEvent
func miqt_exec_callback_QwtTextLabel_customEvent(self *C.QwtTextLabel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtTextLabel_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtTextLabel) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtTextLabel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_connectNotify
func miqt_exec_callback_QwtTextLabel_connectNotify(self *C.QwtTextLabel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtTextLabel) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtTextLabel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtTextLabel) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtTextLabel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtTextLabel_disconnectNotify
func miqt_exec_callback_QwtTextLabel_disconnectNotify(self *C.QwtTextLabel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtTextLabel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtTextLabel) Delete() {
	C.QwtTextLabel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtTextLabel) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtTextLabel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

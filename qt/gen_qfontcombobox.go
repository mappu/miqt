package qt

/*

#include "gen_qfontcombobox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFontComboBox__FontFilter int

const (
	QFontComboBox__AllFonts          QFontComboBox__FontFilter = 0
	QFontComboBox__ScalableFonts     QFontComboBox__FontFilter = 1
	QFontComboBox__NonScalableFonts  QFontComboBox__FontFilter = 2
	QFontComboBox__MonospacedFonts   QFontComboBox__FontFilter = 4
	QFontComboBox__ProportionalFonts QFontComboBox__FontFilter = 8
)

type QFontComboBox struct {
	h *C.QFontComboBox
	*QComboBox
}

func (this *QFontComboBox) cPointer() *C.QFontComboBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFontComboBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFontComboBox constructs the type using only CGO pointers.
func newQFontComboBox(h *C.QFontComboBox) *QFontComboBox {
	if h == nil {
		return nil
	}
	var outptr_QComboBox *C.QComboBox = nil
	C.QFontComboBox_virtbase(h, &outptr_QComboBox)

	return &QFontComboBox{h: h,
		QComboBox: newQComboBox(outptr_QComboBox)}
}

// UnsafeNewQFontComboBox constructs the type using only unsafe pointers.
func UnsafeNewQFontComboBox(h unsafe.Pointer) *QFontComboBox {
	return newQFontComboBox((*C.QFontComboBox)(h))
}

// NewQFontComboBox constructs a new QFontComboBox object.
func NewQFontComboBox(parent *QWidget) *QFontComboBox {

	return newQFontComboBox(C.QFontComboBox_new(parent.cPointer()))
}

// NewQFontComboBox2 constructs a new QFontComboBox object.
func NewQFontComboBox2() *QFontComboBox {

	return newQFontComboBox(C.QFontComboBox_new2())
}

func (this *QFontComboBox) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFontComboBox_metaObject(this.h))
}

func (this *QFontComboBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFontComboBox_metacast(this.h, param1_Cstring))
}

func QFontComboBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFontComboBox_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontComboBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFontComboBox_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontComboBox) SetWritingSystem(writingSystem QFontDatabase__WritingSystem) {
	C.QFontComboBox_setWritingSystem(this.h, (C.int)(writingSystem))
}

func (this *QFontComboBox) WritingSystem() QFontDatabase__WritingSystem {
	return (QFontDatabase__WritingSystem)(C.QFontComboBox_writingSystem(this.h))
}

func (this *QFontComboBox) SetFontFilters(filters QFontComboBox__FontFilter) {
	C.QFontComboBox_setFontFilters(this.h, (C.int)(filters))
}

func (this *QFontComboBox) FontFilters() QFontComboBox__FontFilter {
	return (QFontComboBox__FontFilter)(C.QFontComboBox_fontFilters(this.h))
}

func (this *QFontComboBox) CurrentFont() *QFont {
	_goptr := newQFont(C.QFontComboBox_currentFont(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontComboBox) SizeHint() *QSize {
	_goptr := newQSize(C.QFontComboBox_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontComboBox) SetCurrentFont(f *QFont) {
	C.QFontComboBox_setCurrentFont(this.h, f.cPointer())
}

func (this *QFontComboBox) CurrentFontChanged(f *QFont) {
	C.QFontComboBox_currentFontChanged(this.h, f.cPointer())
}
func (this *QFontComboBox) OnCurrentFontChanged(slot func(f *QFont)) {
	C.QFontComboBox_connect_currentFontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFontComboBox_currentFontChanged
func miqt_exec_callback_QFontComboBox_currentFontChanged(cb C.intptr_t, f *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(f *QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFont(f)

	gofunc(slotval1)
}

func QFontComboBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFontComboBox_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontComboBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFontComboBox_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontComboBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFontComboBox_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontComboBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFontComboBox_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// InitStyleOption can only be called from a QFontComboBox that was directly constructed.
func (this *QFontComboBox) InitStyleOption(option *QStyleOptionComboBox) {

	var _dynamic_cast_ok C.bool = false
	C.QFontComboBox_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), option.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QFontComboBox that was directly constructed.
func (this *QFontComboBox) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QFontComboBox_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QFontComboBox that was directly constructed.
func (this *QFontComboBox) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QFontComboBox_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QFontComboBox that was directly constructed.
func (this *QFontComboBox) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QFontComboBox_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QFontComboBox that was directly constructed.
func (this *QFontComboBox) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QFontComboBox_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QFontComboBox that was directly constructed.
func (this *QFontComboBox) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QFontComboBox_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QFontComboBox that was directly constructed.
func (this *QFontComboBox) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QFontComboBox_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QFontComboBox that was directly constructed.
func (this *QFontComboBox) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QFontComboBox_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QFontComboBox that was directly constructed.
func (this *QFontComboBox) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QFontComboBox_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QFontComboBox that was directly constructed.
func (this *QFontComboBox) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QFontComboBox_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QFontComboBox) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QFontComboBox_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFontComboBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFontComboBox_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_sizeHint
func miqt_exec_callback_QFontComboBox_sizeHint(self *C.QFontComboBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QFontComboBox) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QFontComboBox_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QFontComboBox) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QFontComboBox_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_event
func miqt_exec_callback_QFontComboBox_event(self *C.QFontComboBox, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFontComboBox) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QFontComboBox_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFontComboBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFontComboBox_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_minimumSizeHint
func miqt_exec_callback_QFontComboBox_minimumSizeHint(self *C.QFontComboBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QFontComboBox) callVirtualBase_ShowPopup() {

	C.QFontComboBox_virtualbase_showPopup(unsafe.Pointer(this.h))

}
func (this *QFontComboBox) OnShowPopup(slot func(super func())) {
	ok := C.QFontComboBox_override_virtual_showPopup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_showPopup
func miqt_exec_callback_QFontComboBox_showPopup(self *C.QFontComboBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ShowPopup)

}

func (this *QFontComboBox) callVirtualBase_HidePopup() {

	C.QFontComboBox_virtualbase_hidePopup(unsafe.Pointer(this.h))

}
func (this *QFontComboBox) OnHidePopup(slot func(super func())) {
	ok := C.QFontComboBox_override_virtual_hidePopup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_hidePopup
func miqt_exec_callback_QFontComboBox_hidePopup(self *C.QFontComboBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFontComboBox{h: self}).callVirtualBase_HidePopup)

}

func (this *QFontComboBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QFontComboBox_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFontComboBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QFontComboBox_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_inputMethodQuery
func miqt_exec_callback_QFontComboBox_inputMethodQuery(self *C.QFontComboBox, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFontComboBox) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QFontComboBox_virtualbase_focusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QFontComboBox_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_focusInEvent
func miqt_exec_callback_QFontComboBox_focusInEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QFontComboBox_virtualbase_focusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QFontComboBox_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_focusOutEvent
func miqt_exec_callback_QFontComboBox_focusOutEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QFontComboBox_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QFontComboBox_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_changeEvent
func miqt_exec_callback_QFontComboBox_changeEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QFontComboBox_virtualbase_resizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	ok := C.QFontComboBox_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_resizeEvent
func miqt_exec_callback_QFontComboBox_resizeEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QFontComboBox_virtualbase_paintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QFontComboBox_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_paintEvent
func miqt_exec_callback_QFontComboBox_paintEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ShowEvent(e *QShowEvent) {

	C.QFontComboBox_virtualbase_showEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnShowEvent(slot func(super func(e *QShowEvent), e *QShowEvent)) {
	ok := C.QFontComboBox_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_showEvent
func miqt_exec_callback_QFontComboBox_showEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QShowEvent), e *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_HideEvent(e *QHideEvent) {

	C.QFontComboBox_virtualbase_hideEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnHideEvent(slot func(super func(e *QHideEvent), e *QHideEvent)) {
	ok := C.QFontComboBox_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_hideEvent
func miqt_exec_callback_QFontComboBox_hideEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QHideEvent), e *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QFontComboBox_virtualbase_mousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QFontComboBox_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_mousePressEvent
func miqt_exec_callback_QFontComboBox_mousePressEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QFontComboBox_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QFontComboBox_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_mouseReleaseEvent
func miqt_exec_callback_QFontComboBox_mouseReleaseEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QFontComboBox_virtualbase_keyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnKeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QFontComboBox_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_keyPressEvent
func miqt_exec_callback_QFontComboBox_keyPressEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QFontComboBox_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QFontComboBox_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_keyReleaseEvent
func miqt_exec_callback_QFontComboBox_keyReleaseEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QFontComboBox_virtualbase_wheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QFontComboBox_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_wheelEvent
func miqt_exec_callback_QFontComboBox_wheelEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ContextMenuEvent(e *QContextMenuEvent) {

	C.QFontComboBox_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnContextMenuEvent(slot func(super func(e *QContextMenuEvent), e *QContextMenuEvent)) {
	ok := C.QFontComboBox_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_contextMenuEvent
func miqt_exec_callback_QFontComboBox_contextMenuEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QContextMenuEvent), e *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QFontComboBox_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontComboBox) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QFontComboBox_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_inputMethodEvent
func miqt_exec_callback_QFontComboBox_inputMethodEvent(self *C.QFontComboBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_DevType() int {

	return (int)(C.QFontComboBox_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QFontComboBox) OnDevType(slot func(super func() int) int) {
	ok := C.QFontComboBox_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_devType
func miqt_exec_callback_QFontComboBox_devType(self *C.QFontComboBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QFontComboBox) callVirtualBase_SetVisible(visible bool) {

	C.QFontComboBox_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QFontComboBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QFontComboBox_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_setVisible
func miqt_exec_callback_QFontComboBox_setVisible(self *C.QFontComboBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QFontComboBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QFontComboBox_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFontComboBox) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QFontComboBox_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_heightForWidth
func miqt_exec_callback_QFontComboBox_heightForWidth(self *C.QFontComboBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFontComboBox) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QFontComboBox_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QFontComboBox) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QFontComboBox_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_hasHeightForWidth
func miqt_exec_callback_QFontComboBox_hasHeightForWidth(self *C.QFontComboBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QFontComboBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QFontComboBox_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QFontComboBox) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QFontComboBox_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_paintEngine
func miqt_exec_callback_QFontComboBox_paintEngine(self *C.QFontComboBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QFontComboBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QFontComboBox_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFontComboBox_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_mouseDoubleClickEvent
func miqt_exec_callback_QFontComboBox_mouseDoubleClickEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QFontComboBox_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFontComboBox_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_mouseMoveEvent
func miqt_exec_callback_QFontComboBox_mouseMoveEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_EnterEvent(event *QEvent) {

	C.QFontComboBox_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFontComboBox_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_enterEvent
func miqt_exec_callback_QFontComboBox_enterEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QFontComboBox_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFontComboBox_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_leaveEvent
func miqt_exec_callback_QFontComboBox_leaveEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QFontComboBox_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QFontComboBox_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_moveEvent
func miqt_exec_callback_QFontComboBox_moveEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QFontComboBox_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QFontComboBox_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_closeEvent
func miqt_exec_callback_QFontComboBox_closeEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QFontComboBox_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QFontComboBox_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_tabletEvent
func miqt_exec_callback_QFontComboBox_tabletEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QFontComboBox_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QFontComboBox_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_actionEvent
func miqt_exec_callback_QFontComboBox_actionEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QFontComboBox_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QFontComboBox_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_dragEnterEvent
func miqt_exec_callback_QFontComboBox_dragEnterEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QFontComboBox_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QFontComboBox_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_dragMoveEvent
func miqt_exec_callback_QFontComboBox_dragMoveEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QFontComboBox_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QFontComboBox_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_dragLeaveEvent
func miqt_exec_callback_QFontComboBox_dragLeaveEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QFontComboBox_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QFontComboBox_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_dropEvent
func miqt_exec_callback_QFontComboBox_dropEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QFontComboBox_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QFontComboBox) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QFontComboBox_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_nativeEvent
func miqt_exec_callback_QFontComboBox_nativeEvent(self *C.QFontComboBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QFontComboBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QFontComboBox_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFontComboBox) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QFontComboBox_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_metric
func miqt_exec_callback_QFontComboBox_metric(self *C.QFontComboBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFontComboBox) callVirtualBase_InitPainter(painter *QPainter) {

	C.QFontComboBox_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QFontComboBox) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QFontComboBox_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_initPainter
func miqt_exec_callback_QFontComboBox_initPainter(self *C.QFontComboBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QFontComboBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QFontComboBox_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QFontComboBox) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QFontComboBox_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_redirected
func miqt_exec_callback_QFontComboBox_redirected(self *C.QFontComboBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFontComboBox) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QFontComboBox_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QFontComboBox) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QFontComboBox_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_sharedPainter
func miqt_exec_callback_QFontComboBox_sharedPainter(self *C.QFontComboBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QFontComboBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QFontComboBox_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QFontComboBox) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QFontComboBox_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_focusNextPrevChild
func miqt_exec_callback_QFontComboBox_focusNextPrevChild(self *C.QFontComboBox, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFontComboBox) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QFontComboBox_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QFontComboBox) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QFontComboBox_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_eventFilter
func miqt_exec_callback_QFontComboBox_eventFilter(self *C.QFontComboBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QFontComboBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QFontComboBox_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFontComboBox_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_timerEvent
func miqt_exec_callback_QFontComboBox_timerEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFontComboBox_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QFontComboBox_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_childEvent
func miqt_exec_callback_QFontComboBox_childEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFontComboBox_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFontComboBox_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_customEvent
func miqt_exec_callback_QFontComboBox_customEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFontComboBox_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFontComboBox) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFontComboBox_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_connectNotify
func miqt_exec_callback_QFontComboBox_connectNotify(self *C.QFontComboBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFontComboBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFontComboBox_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFontComboBox) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFontComboBox_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_disconnectNotify
func miqt_exec_callback_QFontComboBox_disconnectNotify(self *C.QFontComboBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QFontComboBox) Delete() {
	C.QFontComboBox_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFontComboBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QFontComboBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

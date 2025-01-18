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
	return newQMetaObject(C.QFontComboBox_MetaObject(this.h))
}

func (this *QFontComboBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFontComboBox_Metacast(this.h, param1_Cstring))
}

func QFontComboBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFontComboBox_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontComboBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFontComboBox_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontComboBox) SetWritingSystem(writingSystem QFontDatabase__WritingSystem) {
	C.QFontComboBox_SetWritingSystem(this.h, (C.int)(writingSystem))
}

func (this *QFontComboBox) WritingSystem() QFontDatabase__WritingSystem {
	return (QFontDatabase__WritingSystem)(C.QFontComboBox_WritingSystem(this.h))
}

func (this *QFontComboBox) SetFontFilters(filters QFontComboBox__FontFilter) {
	C.QFontComboBox_SetFontFilters(this.h, (C.int)(filters))
}

func (this *QFontComboBox) FontFilters() QFontComboBox__FontFilter {
	return (QFontComboBox__FontFilter)(C.QFontComboBox_FontFilters(this.h))
}

func (this *QFontComboBox) CurrentFont() *QFont {
	_goptr := newQFont(C.QFontComboBox_CurrentFont(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontComboBox) SizeHint() *QSize {
	_goptr := newQSize(C.QFontComboBox_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontComboBox) SetCurrentFont(f *QFont) {
	C.QFontComboBox_SetCurrentFont(this.h, f.cPointer())
}

func (this *QFontComboBox) CurrentFontChanged(f *QFont) {
	C.QFontComboBox_CurrentFontChanged(this.h, f.cPointer())
}
func (this *QFontComboBox) OnCurrentFontChanged(slot func(f *QFont)) {
	C.QFontComboBox_connect_CurrentFontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFontComboBox_CurrentFontChanged
func miqt_exec_callback_QFontComboBox_CurrentFontChanged(cb C.intptr_t, f *C.QFont) {
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
	var _ms C.struct_miqt_string = C.QFontComboBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontComboBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFontComboBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontComboBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFontComboBox_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFontComboBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFontComboBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontComboBox) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QFontComboBox_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFontComboBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFontComboBox_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_SizeHint
func miqt_exec_callback_QFontComboBox_SizeHint(self *C.QFontComboBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QFontComboBox) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QFontComboBox_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QFontComboBox) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QFontComboBox_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_Event
func miqt_exec_callback_QFontComboBox_Event(self *C.QFontComboBox, cb C.intptr_t, e *C.QEvent) C.bool {
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

	_goptr := newQSize(C.QFontComboBox_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFontComboBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFontComboBox_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_MinimumSizeHint
func miqt_exec_callback_QFontComboBox_MinimumSizeHint(self *C.QFontComboBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QFontComboBox) callVirtualBase_ShowPopup() {

	C.QFontComboBox_virtualbase_ShowPopup(unsafe.Pointer(this.h))

}
func (this *QFontComboBox) OnShowPopup(slot func(super func())) {
	ok := C.QFontComboBox_override_virtual_ShowPopup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_ShowPopup
func miqt_exec_callback_QFontComboBox_ShowPopup(self *C.QFontComboBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ShowPopup)

}

func (this *QFontComboBox) callVirtualBase_HidePopup() {

	C.QFontComboBox_virtualbase_HidePopup(unsafe.Pointer(this.h))

}
func (this *QFontComboBox) OnHidePopup(slot func(super func())) {
	ok := C.QFontComboBox_override_virtual_HidePopup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_HidePopup
func miqt_exec_callback_QFontComboBox_HidePopup(self *C.QFontComboBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFontComboBox{h: self}).callVirtualBase_HidePopup)

}

func (this *QFontComboBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QFontComboBox_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFontComboBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QFontComboBox_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_InputMethodQuery
func miqt_exec_callback_QFontComboBox_InputMethodQuery(self *C.QFontComboBox, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	C.QFontComboBox_virtualbase_FocusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QFontComboBox_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_FocusInEvent
func miqt_exec_callback_QFontComboBox_FocusInEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QFontComboBox_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QFontComboBox_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_FocusOutEvent
func miqt_exec_callback_QFontComboBox_FocusOutEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QFontComboBox_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QFontComboBox_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_ChangeEvent
func miqt_exec_callback_QFontComboBox_ChangeEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QFontComboBox_virtualbase_ResizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	ok := C.QFontComboBox_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_ResizeEvent
func miqt_exec_callback_QFontComboBox_ResizeEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QFontComboBox_virtualbase_PaintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QFontComboBox_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_PaintEvent
func miqt_exec_callback_QFontComboBox_PaintEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ShowEvent(e *QShowEvent) {

	C.QFontComboBox_virtualbase_ShowEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnShowEvent(slot func(super func(e *QShowEvent), e *QShowEvent)) {
	ok := C.QFontComboBox_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_ShowEvent
func miqt_exec_callback_QFontComboBox_ShowEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QShowEvent), e *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_HideEvent(e *QHideEvent) {

	C.QFontComboBox_virtualbase_HideEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnHideEvent(slot func(super func(e *QHideEvent), e *QHideEvent)) {
	ok := C.QFontComboBox_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_HideEvent
func miqt_exec_callback_QFontComboBox_HideEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QHideEvent), e *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QFontComboBox_virtualbase_MousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QFontComboBox_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_MousePressEvent
func miqt_exec_callback_QFontComboBox_MousePressEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QFontComboBox_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QFontComboBox_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_MouseReleaseEvent
func miqt_exec_callback_QFontComboBox_MouseReleaseEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QFontComboBox_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnKeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QFontComboBox_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_KeyPressEvent
func miqt_exec_callback_QFontComboBox_KeyPressEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QFontComboBox_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QFontComboBox_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_KeyReleaseEvent
func miqt_exec_callback_QFontComboBox_KeyReleaseEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QFontComboBox_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QFontComboBox_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_WheelEvent
func miqt_exec_callback_QFontComboBox_WheelEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ContextMenuEvent(e *QContextMenuEvent) {

	C.QFontComboBox_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFontComboBox) OnContextMenuEvent(slot func(super func(e *QContextMenuEvent), e *QContextMenuEvent)) {
	ok := C.QFontComboBox_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_ContextMenuEvent
func miqt_exec_callback_QFontComboBox_ContextMenuEvent(self *C.QFontComboBox, cb C.intptr_t, e *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QContextMenuEvent), e *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(e)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QFontComboBox_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFontComboBox) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QFontComboBox_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_InputMethodEvent
func miqt_exec_callback_QFontComboBox_InputMethodEvent(self *C.QFontComboBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QFontComboBox) Delete() {
	C.QFontComboBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFontComboBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QFontComboBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

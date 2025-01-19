package qt6

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

func (this *QFontComboBox) SetSampleTextForSystem(writingSystem QFontDatabase__WritingSystem, sampleText string) {
	sampleText_ms := C.struct_miqt_string{}
	sampleText_ms.data = C.CString(sampleText)
	sampleText_ms.len = C.size_t(len(sampleText))
	defer C.free(unsafe.Pointer(sampleText_ms.data))
	C.QFontComboBox_SetSampleTextForSystem(this.h, (C.int)(writingSystem), sampleText_ms)
}

func (this *QFontComboBox) SampleTextForSystem(writingSystem QFontDatabase__WritingSystem) string {
	var _ms C.struct_miqt_string = C.QFontComboBox_SampleTextForSystem(this.h, (C.int)(writingSystem))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontComboBox) SetSampleTextForFont(fontFamily string, sampleText string) {
	fontFamily_ms := C.struct_miqt_string{}
	fontFamily_ms.data = C.CString(fontFamily)
	fontFamily_ms.len = C.size_t(len(fontFamily))
	defer C.free(unsafe.Pointer(fontFamily_ms.data))
	sampleText_ms := C.struct_miqt_string{}
	sampleText_ms.data = C.CString(sampleText)
	sampleText_ms.len = C.size_t(len(sampleText))
	defer C.free(unsafe.Pointer(sampleText_ms.data))
	C.QFontComboBox_SetSampleTextForFont(this.h, fontFamily_ms, sampleText_ms)
}

func (this *QFontComboBox) SampleTextForFont(fontFamily string) string {
	fontFamily_ms := C.struct_miqt_string{}
	fontFamily_ms.data = C.CString(fontFamily)
	fontFamily_ms.len = C.size_t(len(fontFamily))
	defer C.free(unsafe.Pointer(fontFamily_ms.data))
	var _ms C.struct_miqt_string = C.QFontComboBox_SampleTextForFont(this.h, fontFamily_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontComboBox) SetDisplayFont(fontFamily string, font *QFont) {
	fontFamily_ms := C.struct_miqt_string{}
	fontFamily_ms.data = C.CString(fontFamily)
	fontFamily_ms.len = C.size_t(len(fontFamily))
	defer C.free(unsafe.Pointer(fontFamily_ms.data))
	C.QFontComboBox_SetDisplayFont(this.h, fontFamily_ms, font.cPointer())
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

func (this *QFontComboBox) callVirtualBase_SetModel(model *QAbstractItemModel) {

	C.QFontComboBox_virtualbase_SetModel(unsafe.Pointer(this.h), model.cPointer())

}
func (this *QFontComboBox) OnSetModel(slot func(super func(model *QAbstractItemModel), model *QAbstractItemModel)) {
	ok := C.QFontComboBox_override_virtual_SetModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_SetModel
func miqt_exec_callback_QFontComboBox_SetModel(self *C.QFontComboBox, cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(model *QAbstractItemModel), model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(model)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_SetModel, slotval1)

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

func (this *QFontComboBox) callVirtualBase_InitStyleOption(option *QStyleOptionComboBox) {

	C.QFontComboBox_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QFontComboBox) OnInitStyleOption(slot func(super func(option *QStyleOptionComboBox), option *QStyleOptionComboBox)) {
	ok := C.QFontComboBox_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_InitStyleOption
func miqt_exec_callback_QFontComboBox_InitStyleOption(self *C.QFontComboBox, cb C.intptr_t, option *C.QStyleOptionComboBox) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionComboBox), option *QStyleOptionComboBox))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionComboBox(option)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QFontComboBox) callVirtualBase_DevType() int {

	return (int)(C.QFontComboBox_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QFontComboBox) OnDevType(slot func(super func() int) int) {
	ok := C.QFontComboBox_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_DevType
func miqt_exec_callback_QFontComboBox_DevType(self *C.QFontComboBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QFontComboBox) callVirtualBase_SetVisible(visible bool) {

	C.QFontComboBox_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QFontComboBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QFontComboBox_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_SetVisible
func miqt_exec_callback_QFontComboBox_SetVisible(self *C.QFontComboBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QFontComboBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QFontComboBox_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFontComboBox) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QFontComboBox_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_HeightForWidth
func miqt_exec_callback_QFontComboBox_HeightForWidth(self *C.QFontComboBox, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QFontComboBox_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QFontComboBox) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QFontComboBox_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_HasHeightForWidth
func miqt_exec_callback_QFontComboBox_HasHeightForWidth(self *C.QFontComboBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QFontComboBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QFontComboBox_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QFontComboBox) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QFontComboBox_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_PaintEngine
func miqt_exec_callback_QFontComboBox_PaintEngine(self *C.QFontComboBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QFontComboBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QFontComboBox_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFontComboBox_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_MouseDoubleClickEvent
func miqt_exec_callback_QFontComboBox_MouseDoubleClickEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QFontComboBox_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFontComboBox_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_MouseMoveEvent
func miqt_exec_callback_QFontComboBox_MouseMoveEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QFontComboBox_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QFontComboBox_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_EnterEvent
func miqt_exec_callback_QFontComboBox_EnterEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QFontComboBox_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFontComboBox_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_LeaveEvent
func miqt_exec_callback_QFontComboBox_LeaveEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QFontComboBox_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QFontComboBox_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_MoveEvent
func miqt_exec_callback_QFontComboBox_MoveEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QFontComboBox_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QFontComboBox_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_CloseEvent
func miqt_exec_callback_QFontComboBox_CloseEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QFontComboBox_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QFontComboBox_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_TabletEvent
func miqt_exec_callback_QFontComboBox_TabletEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QFontComboBox_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QFontComboBox_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_ActionEvent
func miqt_exec_callback_QFontComboBox_ActionEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QFontComboBox_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QFontComboBox_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_DragEnterEvent
func miqt_exec_callback_QFontComboBox_DragEnterEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QFontComboBox_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QFontComboBox_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_DragMoveEvent
func miqt_exec_callback_QFontComboBox_DragMoveEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QFontComboBox_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QFontComboBox_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_DragLeaveEvent
func miqt_exec_callback_QFontComboBox_DragLeaveEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QFontComboBox_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QFontComboBox_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_DropEvent
func miqt_exec_callback_QFontComboBox_DropEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QFontComboBox_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QFontComboBox) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QFontComboBox_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_NativeEvent
func miqt_exec_callback_QFontComboBox_NativeEvent(self *C.QFontComboBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QFontComboBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QFontComboBox_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFontComboBox) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QFontComboBox_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_Metric
func miqt_exec_callback_QFontComboBox_Metric(self *C.QFontComboBox, cb C.intptr_t, param1 C.int) C.int {
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

	C.QFontComboBox_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QFontComboBox) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QFontComboBox_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_InitPainter
func miqt_exec_callback_QFontComboBox_InitPainter(self *C.QFontComboBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QFontComboBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QFontComboBox_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QFontComboBox) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QFontComboBox_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_Redirected
func miqt_exec_callback_QFontComboBox_Redirected(self *C.QFontComboBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QFontComboBox_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QFontComboBox) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QFontComboBox_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_SharedPainter
func miqt_exec_callback_QFontComboBox_SharedPainter(self *C.QFontComboBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFontComboBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QFontComboBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QFontComboBox_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QFontComboBox) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QFontComboBox_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_FocusNextPrevChild
func miqt_exec_callback_QFontComboBox_FocusNextPrevChild(self *C.QFontComboBox, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QFontComboBox_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QFontComboBox) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QFontComboBox_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_EventFilter
func miqt_exec_callback_QFontComboBox_EventFilter(self *C.QFontComboBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QFontComboBox_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFontComboBox_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_TimerEvent
func miqt_exec_callback_QFontComboBox_TimerEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFontComboBox_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QFontComboBox_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_ChildEvent
func miqt_exec_callback_QFontComboBox_ChildEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFontComboBox_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFontComboBox) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFontComboBox_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_CustomEvent
func miqt_exec_callback_QFontComboBox_CustomEvent(self *C.QFontComboBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFontComboBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFontComboBox_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFontComboBox) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFontComboBox_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_ConnectNotify
func miqt_exec_callback_QFontComboBox_ConnectNotify(self *C.QFontComboBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFontComboBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFontComboBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFontComboBox_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFontComboBox) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFontComboBox_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFontComboBox_DisconnectNotify
func miqt_exec_callback_QFontComboBox_DisconnectNotify(self *C.QFontComboBox, cb C.intptr_t, signal *C.QMetaMethod) {
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

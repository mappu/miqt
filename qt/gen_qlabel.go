package qt

/*

#include "gen_qlabel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLabel struct {
	h *C.QLabel
	*QFrame
}

func (this *QLabel) cPointer() *C.QLabel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLabel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLabel constructs the type using only CGO pointers.
func newQLabel(h *C.QLabel) *QLabel {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	C.QLabel_virtbase(h, &outptr_QFrame)

	return &QLabel{h: h,
		QFrame: newQFrame(outptr_QFrame)}
}

// UnsafeNewQLabel constructs the type using only unsafe pointers.
func UnsafeNewQLabel(h unsafe.Pointer) *QLabel {
	return newQLabel((*C.QLabel)(h))
}

// NewQLabel constructs a new QLabel object.
func NewQLabel(parent *QWidget) *QLabel {

	return newQLabel(C.QLabel_new(parent.cPointer()))
}

// NewQLabel2 constructs a new QLabel object.
func NewQLabel2() *QLabel {

	return newQLabel(C.QLabel_new2())
}

// NewQLabel3 constructs a new QLabel object.
func NewQLabel3(text string) *QLabel {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQLabel(C.QLabel_new3(text_ms))
}

// NewQLabel4 constructs a new QLabel object.
func NewQLabel4(parent *QWidget, f WindowType) *QLabel {

	return newQLabel(C.QLabel_new4(parent.cPointer(), (C.int)(f)))
}

// NewQLabel5 constructs a new QLabel object.
func NewQLabel5(text string, parent *QWidget) *QLabel {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQLabel(C.QLabel_new5(text_ms, parent.cPointer()))
}

// NewQLabel6 constructs a new QLabel object.
func NewQLabel6(text string, parent *QWidget, f WindowType) *QLabel {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQLabel(C.QLabel_new6(text_ms, parent.cPointer(), (C.int)(f)))
}

func (this *QLabel) MetaObject() *QMetaObject {
	return newQMetaObject(C.QLabel_metaObject(this.h))
}

func (this *QLabel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLabel_metacast(this.h, param1_Cstring))
}

func QLabel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLabel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLabel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLabel_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLabel) Text() string {
	var _ms C.struct_miqt_string = C.QLabel_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLabel) Pixmap() *QPixmap {
	return newQPixmap(C.QLabel_pixmap(this.h))
}

func (this *QLabel) PixmapWithQtReturnByValueConstant(param1 ReturnByValueConstant) *QPixmap {
	_goptr := newQPixmap(C.QLabel_pixmapWithQtReturnByValueConstant(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLabel) Picture() *QPicture {
	return newQPicture(C.QLabel_picture(this.h))
}

func (this *QLabel) PictureWithQtReturnByValueConstant(param1 ReturnByValueConstant) *QPicture {
	_goptr := newQPicture(C.QLabel_pictureWithQtReturnByValueConstant(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLabel) Movie() *QMovie {
	return newQMovie(C.QLabel_movie(this.h))
}

func (this *QLabel) TextFormat() TextFormat {
	return (TextFormat)(C.QLabel_textFormat(this.h))
}

func (this *QLabel) SetTextFormat(textFormat TextFormat) {
	C.QLabel_setTextFormat(this.h, (C.int)(textFormat))
}

func (this *QLabel) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QLabel_alignment(this.h))
}

func (this *QLabel) SetAlignment(alignment AlignmentFlag) {
	C.QLabel_setAlignment(this.h, (C.int)(alignment))
}

func (this *QLabel) SetWordWrap(on bool) {
	C.QLabel_setWordWrap(this.h, (C.bool)(on))
}

func (this *QLabel) WordWrap() bool {
	return (bool)(C.QLabel_wordWrap(this.h))
}

func (this *QLabel) Indent() int {
	return (int)(C.QLabel_indent(this.h))
}

func (this *QLabel) SetIndent(indent int) {
	C.QLabel_setIndent(this.h, (C.int)(indent))
}

func (this *QLabel) Margin() int {
	return (int)(C.QLabel_margin(this.h))
}

func (this *QLabel) SetMargin(margin int) {
	C.QLabel_setMargin(this.h, (C.int)(margin))
}

func (this *QLabel) HasScaledContents() bool {
	return (bool)(C.QLabel_hasScaledContents(this.h))
}

func (this *QLabel) SetScaledContents(scaledContents bool) {
	C.QLabel_setScaledContents(this.h, (C.bool)(scaledContents))
}

func (this *QLabel) SizeHint() *QSize {
	_goptr := newQSize(C.QLabel_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLabel) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QLabel_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLabel) SetBuddy(buddy *QWidget) {
	C.QLabel_setBuddy(this.h, buddy.cPointer())
}

func (this *QLabel) Buddy() *QWidget {
	return newQWidget(C.QLabel_buddy(this.h))
}

func (this *QLabel) HeightForWidth(param1 int) int {
	return (int)(C.QLabel_heightForWidth(this.h, (C.int)(param1)))
}

func (this *QLabel) OpenExternalLinks() bool {
	return (bool)(C.QLabel_openExternalLinks(this.h))
}

func (this *QLabel) SetOpenExternalLinks(open bool) {
	C.QLabel_setOpenExternalLinks(this.h, (C.bool)(open))
}

func (this *QLabel) SetTextInteractionFlags(flags TextInteractionFlag) {
	C.QLabel_setTextInteractionFlags(this.h, (C.int)(flags))
}

func (this *QLabel) TextInteractionFlags() TextInteractionFlag {
	return (TextInteractionFlag)(C.QLabel_textInteractionFlags(this.h))
}

func (this *QLabel) SetSelection(param1 int, param2 int) {
	C.QLabel_setSelection(this.h, (C.int)(param1), (C.int)(param2))
}

func (this *QLabel) HasSelectedText() bool {
	return (bool)(C.QLabel_hasSelectedText(this.h))
}

func (this *QLabel) SelectedText() string {
	var _ms C.struct_miqt_string = C.QLabel_selectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLabel) SelectionStart() int {
	return (int)(C.QLabel_selectionStart(this.h))
}

func (this *QLabel) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QLabel_setText(this.h, text_ms)
}

func (this *QLabel) SetPixmap(pixmap *QPixmap) {
	C.QLabel_setPixmap(this.h, pixmap.cPointer())
}

func (this *QLabel) SetPicture(picture *QPicture) {
	C.QLabel_setPicture(this.h, picture.cPointer())
}

func (this *QLabel) SetMovie(movie *QMovie) {
	C.QLabel_setMovie(this.h, movie.cPointer())
}

func (this *QLabel) SetNum(num int) {
	C.QLabel_setNum(this.h, (C.int)(num))
}

func (this *QLabel) SetNumWithNum(num float64) {
	C.QLabel_setNumWithNum(this.h, (C.double)(num))
}

func (this *QLabel) Clear() {
	C.QLabel_clear(this.h)
}

func (this *QLabel) LinkActivated(link string) {
	link_ms := C.struct_miqt_string{}
	link_ms.data = C.CString(link)
	link_ms.len = C.size_t(len(link))
	defer C.free(unsafe.Pointer(link_ms.data))
	C.QLabel_linkActivated(this.h, link_ms)
}
func (this *QLabel) OnLinkActivated(slot func(link string)) {
	C.QLabel_connect_linkActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLabel_linkActivated
func miqt_exec_callback_QLabel_linkActivated(cb C.intptr_t, link C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(link string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var link_ms C.struct_miqt_string = link
	link_ret := C.GoStringN(link_ms.data, C.int(int64(link_ms.len)))
	C.free(unsafe.Pointer(link_ms.data))
	slotval1 := link_ret

	gofunc(slotval1)
}

func (this *QLabel) LinkHovered(link string) {
	link_ms := C.struct_miqt_string{}
	link_ms.data = C.CString(link)
	link_ms.len = C.size_t(len(link))
	defer C.free(unsafe.Pointer(link_ms.data))
	C.QLabel_linkHovered(this.h, link_ms)
}
func (this *QLabel) OnLinkHovered(slot func(link string)) {
	C.QLabel_connect_linkHovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLabel_linkHovered
func miqt_exec_callback_QLabel_linkHovered(cb C.intptr_t, link C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(link string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var link_ms C.struct_miqt_string = link
	link_ret := C.GoStringN(link_ms.data, C.int(int64(link_ms.len)))
	C.free(unsafe.Pointer(link_ms.data))
	slotval1 := link_ret

	gofunc(slotval1)
}

func QLabel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLabel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLabel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLabel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLabel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLabel_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLabel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLabel_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLabel) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QLabel_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLabel) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QLabel_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_sizeHint
func miqt_exec_callback_QLabel_sizeHint(self *C.QLabel, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QLabel) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QLabel_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLabel) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QLabel_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_minimumSizeHint
func miqt_exec_callback_QLabel_minimumSizeHint(self *C.QLabel, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QLabel) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QLabel_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLabel) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QLabel_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_heightForWidth
func miqt_exec_callback_QLabel_heightForWidth(self *C.QLabel, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLabel) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QLabel_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QLabel) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QLabel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_event
func miqt_exec_callback_QLabel_event(self *C.QLabel, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLabel) callVirtualBase_KeyPressEvent(ev *QKeyEvent) {

	C.QLabel_virtualbase_keyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QLabel) OnKeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	ok := C.QLabel_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_keyPressEvent
func miqt_exec_callback_QLabel_keyPressEvent(self *C.QLabel, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(ev)

	gofunc((&QLabel{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QLabel) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QLabel_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLabel) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QLabel_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_paintEvent
func miqt_exec_callback_QLabel_paintEvent(self *C.QLabel, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QLabel{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QLabel) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QLabel_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLabel) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QLabel_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_changeEvent
func miqt_exec_callback_QLabel_changeEvent(self *C.QLabel, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QLabel{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QLabel) callVirtualBase_MousePressEvent(ev *QMouseEvent) {

	C.QLabel_virtualbase_mousePressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QLabel) OnMousePressEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QLabel_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_mousePressEvent
func miqt_exec_callback_QLabel_mousePressEvent(self *C.QLabel, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QLabel{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QLabel) callVirtualBase_MouseMoveEvent(ev *QMouseEvent) {

	C.QLabel_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QLabel) OnMouseMoveEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QLabel_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_mouseMoveEvent
func miqt_exec_callback_QLabel_mouseMoveEvent(self *C.QLabel, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QLabel{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QLabel) callVirtualBase_MouseReleaseEvent(ev *QMouseEvent) {

	C.QLabel_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QLabel) OnMouseReleaseEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QLabel_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_mouseReleaseEvent
func miqt_exec_callback_QLabel_mouseReleaseEvent(self *C.QLabel, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QLabel{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QLabel) callVirtualBase_ContextMenuEvent(ev *QContextMenuEvent) {

	C.QLabel_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QLabel) OnContextMenuEvent(slot func(super func(ev *QContextMenuEvent), ev *QContextMenuEvent)) {
	ok := C.QLabel_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_contextMenuEvent
func miqt_exec_callback_QLabel_contextMenuEvent(self *C.QLabel, cb C.intptr_t, ev *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QContextMenuEvent), ev *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(ev)

	gofunc((&QLabel{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QLabel) callVirtualBase_FocusInEvent(ev *QFocusEvent) {

	C.QLabel_virtualbase_focusInEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QLabel) OnFocusInEvent(slot func(super func(ev *QFocusEvent), ev *QFocusEvent)) {
	ok := C.QLabel_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_focusInEvent
func miqt_exec_callback_QLabel_focusInEvent(self *C.QLabel, cb C.intptr_t, ev *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QFocusEvent), ev *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(ev)

	gofunc((&QLabel{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QLabel) callVirtualBase_FocusOutEvent(ev *QFocusEvent) {

	C.QLabel_virtualbase_focusOutEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QLabel) OnFocusOutEvent(slot func(super func(ev *QFocusEvent), ev *QFocusEvent)) {
	ok := C.QLabel_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_focusOutEvent
func miqt_exec_callback_QLabel_focusOutEvent(self *C.QLabel, cb C.intptr_t, ev *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QFocusEvent), ev *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(ev)

	gofunc((&QLabel{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QLabel) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QLabel_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QLabel) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QLabel_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_focusNextPrevChild
func miqt_exec_callback_QLabel_focusNextPrevChild(self *C.QLabel, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLabel) callVirtualBase_DevType() int {

	return (int)(C.QLabel_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QLabel) OnDevType(slot func(super func() int) int) {
	ok := C.QLabel_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_devType
func miqt_exec_callback_QLabel_devType(self *C.QLabel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QLabel) callVirtualBase_SetVisible(visible bool) {

	C.QLabel_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QLabel) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QLabel_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_setVisible
func miqt_exec_callback_QLabel_setVisible(self *C.QLabel, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QLabel{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QLabel) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QLabel_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QLabel) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QLabel_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_hasHeightForWidth
func miqt_exec_callback_QLabel_hasHeightForWidth(self *C.QLabel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QLabel) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QLabel_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QLabel) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QLabel_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_paintEngine
func miqt_exec_callback_QLabel_paintEngine(self *C.QLabel, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QLabel) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QLabel_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QLabel_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_mouseDoubleClickEvent
func miqt_exec_callback_QLabel_mouseDoubleClickEvent(self *C.QLabel, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QLabel) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QLabel_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QLabel_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_wheelEvent
func miqt_exec_callback_QLabel_wheelEvent(self *C.QLabel, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QLabel) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QLabel_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QLabel_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_keyReleaseEvent
func miqt_exec_callback_QLabel_keyReleaseEvent(self *C.QLabel, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QLabel) callVirtualBase_EnterEvent(event *QEvent) {

	C.QLabel_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QLabel_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_enterEvent
func miqt_exec_callback_QLabel_enterEvent(self *C.QLabel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QLabel) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QLabel_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QLabel_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_leaveEvent
func miqt_exec_callback_QLabel_leaveEvent(self *C.QLabel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QLabel) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QLabel_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QLabel_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_moveEvent
func miqt_exec_callback_QLabel_moveEvent(self *C.QLabel, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QLabel) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QLabel_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QLabel_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_resizeEvent
func miqt_exec_callback_QLabel_resizeEvent(self *C.QLabel, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QLabel) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QLabel_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QLabel_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_closeEvent
func miqt_exec_callback_QLabel_closeEvent(self *C.QLabel, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QLabel) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QLabel_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QLabel_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_tabletEvent
func miqt_exec_callback_QLabel_tabletEvent(self *C.QLabel, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QLabel) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QLabel_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QLabel_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_actionEvent
func miqt_exec_callback_QLabel_actionEvent(self *C.QLabel, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QLabel) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QLabel_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QLabel_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_dragEnterEvent
func miqt_exec_callback_QLabel_dragEnterEvent(self *C.QLabel, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QLabel) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QLabel_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QLabel_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_dragMoveEvent
func miqt_exec_callback_QLabel_dragMoveEvent(self *C.QLabel, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QLabel) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QLabel_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QLabel_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_dragLeaveEvent
func miqt_exec_callback_QLabel_dragLeaveEvent(self *C.QLabel, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QLabel) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QLabel_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QLabel_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_dropEvent
func miqt_exec_callback_QLabel_dropEvent(self *C.QLabel, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QLabel) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QLabel_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QLabel_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_showEvent
func miqt_exec_callback_QLabel_showEvent(self *C.QLabel, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QLabel) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QLabel_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QLabel_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_hideEvent
func miqt_exec_callback_QLabel_hideEvent(self *C.QLabel, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QLabel) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QLabel_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QLabel) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QLabel_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_nativeEvent
func miqt_exec_callback_QLabel_nativeEvent(self *C.QLabel, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QLabel) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QLabel_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLabel) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QLabel_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_metric
func miqt_exec_callback_QLabel_metric(self *C.QLabel, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLabel) callVirtualBase_InitPainter(painter *QPainter) {

	C.QLabel_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QLabel) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QLabel_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_initPainter
func miqt_exec_callback_QLabel_initPainter(self *C.QLabel, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QLabel{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QLabel) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QLabel_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QLabel) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QLabel_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_redirected
func miqt_exec_callback_QLabel_redirected(self *C.QLabel, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QLabel) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QLabel_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QLabel) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QLabel_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_sharedPainter
func miqt_exec_callback_QLabel_sharedPainter(self *C.QLabel, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QLabel) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QLabel_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLabel) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QLabel_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_inputMethodEvent
func miqt_exec_callback_QLabel_inputMethodEvent(self *C.QLabel, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QLabel{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QLabel) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QLabel_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLabel) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QLabel_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_inputMethodQuery
func miqt_exec_callback_QLabel_inputMethodQuery(self *C.QLabel, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QLabel) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QLabel_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QLabel) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QLabel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_eventFilter
func miqt_exec_callback_QLabel_eventFilter(self *C.QLabel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QLabel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QLabel) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QLabel_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QLabel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_timerEvent
func miqt_exec_callback_QLabel_timerEvent(self *C.QLabel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLabel) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QLabel_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QLabel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_childEvent
func miqt_exec_callback_QLabel_childEvent(self *C.QLabel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLabel) callVirtualBase_CustomEvent(event *QEvent) {

	C.QLabel_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLabel) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QLabel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_customEvent
func miqt_exec_callback_QLabel_customEvent(self *C.QLabel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QLabel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLabel) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QLabel_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLabel) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QLabel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_connectNotify
func miqt_exec_callback_QLabel_connectNotify(self *C.QLabel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QLabel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLabel) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QLabel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLabel) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QLabel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLabel_disconnectNotify
func miqt_exec_callback_QLabel_disconnectNotify(self *C.QLabel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QLabel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QLabel) Delete() {
	C.QLabel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLabel) GoGC() {
	runtime.SetFinalizer(this, func(this *QLabel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

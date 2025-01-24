package qt

/*

#include "gen_qtextbrowser.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTextBrowser struct {
	h *C.QTextBrowser
	*QTextEdit
}

func (this *QTextBrowser) cPointer() *C.QTextBrowser {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextBrowser) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextBrowser constructs the type using only CGO pointers.
func newQTextBrowser(h *C.QTextBrowser) *QTextBrowser {
	if h == nil {
		return nil
	}
	var outptr_QTextEdit *C.QTextEdit = nil
	C.QTextBrowser_virtbase(h, &outptr_QTextEdit)

	return &QTextBrowser{h: h,
		QTextEdit: newQTextEdit(outptr_QTextEdit)}
}

// UnsafeNewQTextBrowser constructs the type using only unsafe pointers.
func UnsafeNewQTextBrowser(h unsafe.Pointer) *QTextBrowser {
	return newQTextBrowser((*C.QTextBrowser)(h))
}

// NewQTextBrowser constructs a new QTextBrowser object.
func NewQTextBrowser(parent *QWidget) *QTextBrowser {

	return newQTextBrowser(C.QTextBrowser_new(parent.cPointer()))
}

// NewQTextBrowser2 constructs a new QTextBrowser object.
func NewQTextBrowser2() *QTextBrowser {

	return newQTextBrowser(C.QTextBrowser_new2())
}

func (this *QTextBrowser) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTextBrowser_MetaObject(this.h))
}

func (this *QTextBrowser) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTextBrowser_Metacast(this.h, param1_Cstring))
}

func QTextBrowser_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextBrowser_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextBrowser_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextBrowser_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextBrowser) Source() *QUrl {
	_goptr := newQUrl(C.QTextBrowser_Source(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBrowser) SourceType() QTextDocument__ResourceType {
	return (QTextDocument__ResourceType)(C.QTextBrowser_SourceType(this.h))
}

func (this *QTextBrowser) SearchPaths() []string {
	var _ma C.struct_miqt_array = C.QTextBrowser_SearchPaths(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QTextBrowser) SetSearchPaths(paths []string) {
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	C.QTextBrowser_SetSearchPaths(this.h, paths_ma)
}

func (this *QTextBrowser) LoadResource(typeVal int, name *QUrl) *QVariant {
	_goptr := newQVariant(C.QTextBrowser_LoadResource(this.h, (C.int)(typeVal), name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBrowser) IsBackwardAvailable() bool {
	return (bool)(C.QTextBrowser_IsBackwardAvailable(this.h))
}

func (this *QTextBrowser) IsForwardAvailable() bool {
	return (bool)(C.QTextBrowser_IsForwardAvailable(this.h))
}

func (this *QTextBrowser) ClearHistory() {
	C.QTextBrowser_ClearHistory(this.h)
}

func (this *QTextBrowser) HistoryTitle(param1 int) string {
	var _ms C.struct_miqt_string = C.QTextBrowser_HistoryTitle(this.h, (C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextBrowser) HistoryUrl(param1 int) *QUrl {
	_goptr := newQUrl(C.QTextBrowser_HistoryUrl(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBrowser) BackwardHistoryCount() int {
	return (int)(C.QTextBrowser_BackwardHistoryCount(this.h))
}

func (this *QTextBrowser) ForwardHistoryCount() int {
	return (int)(C.QTextBrowser_ForwardHistoryCount(this.h))
}

func (this *QTextBrowser) OpenExternalLinks() bool {
	return (bool)(C.QTextBrowser_OpenExternalLinks(this.h))
}

func (this *QTextBrowser) SetOpenExternalLinks(open bool) {
	C.QTextBrowser_SetOpenExternalLinks(this.h, (C.bool)(open))
}

func (this *QTextBrowser) OpenLinks() bool {
	return (bool)(C.QTextBrowser_OpenLinks(this.h))
}

func (this *QTextBrowser) SetOpenLinks(open bool) {
	C.QTextBrowser_SetOpenLinks(this.h, (C.bool)(open))
}

func (this *QTextBrowser) SetSource(name *QUrl) {
	C.QTextBrowser_SetSource(this.h, name.cPointer())
}

func (this *QTextBrowser) SetSource2(name *QUrl, typeVal QTextDocument__ResourceType) {
	C.QTextBrowser_SetSource2(this.h, name.cPointer(), (C.int)(typeVal))
}

func (this *QTextBrowser) Backward() {
	C.QTextBrowser_Backward(this.h)
}

func (this *QTextBrowser) Forward() {
	C.QTextBrowser_Forward(this.h)
}

func (this *QTextBrowser) Home() {
	C.QTextBrowser_Home(this.h)
}

func (this *QTextBrowser) Reload() {
	C.QTextBrowser_Reload(this.h)
}

func (this *QTextBrowser) BackwardAvailable(param1 bool) {
	C.QTextBrowser_BackwardAvailable(this.h, (C.bool)(param1))
}
func (this *QTextBrowser) OnBackwardAvailable(slot func(param1 bool)) {
	C.QTextBrowser_connect_BackwardAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_BackwardAvailable
func miqt_exec_callback_QTextBrowser_BackwardAvailable(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QTextBrowser) ForwardAvailable(param1 bool) {
	C.QTextBrowser_ForwardAvailable(this.h, (C.bool)(param1))
}
func (this *QTextBrowser) OnForwardAvailable(slot func(param1 bool)) {
	C.QTextBrowser_connect_ForwardAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_ForwardAvailable
func miqt_exec_callback_QTextBrowser_ForwardAvailable(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QTextBrowser) HistoryChanged() {
	C.QTextBrowser_HistoryChanged(this.h)
}
func (this *QTextBrowser) OnHistoryChanged(slot func()) {
	C.QTextBrowser_connect_HistoryChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_HistoryChanged
func miqt_exec_callback_QTextBrowser_HistoryChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTextBrowser) SourceChanged(param1 *QUrl) {
	C.QTextBrowser_SourceChanged(this.h, param1.cPointer())
}
func (this *QTextBrowser) OnSourceChanged(slot func(param1 *QUrl)) {
	C.QTextBrowser_connect_SourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_SourceChanged
func miqt_exec_callback_QTextBrowser_SourceChanged(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUrl(param1)

	gofunc(slotval1)
}

func (this *QTextBrowser) Highlighted(param1 *QUrl) {
	C.QTextBrowser_Highlighted(this.h, param1.cPointer())
}
func (this *QTextBrowser) OnHighlighted(slot func(param1 *QUrl)) {
	C.QTextBrowser_connect_Highlighted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_Highlighted
func miqt_exec_callback_QTextBrowser_Highlighted(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUrl(param1)

	gofunc(slotval1)
}

func (this *QTextBrowser) HighlightedWithQString(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QTextBrowser_HighlightedWithQString(this.h, param1_ms)
}
func (this *QTextBrowser) OnHighlightedWithQString(slot func(param1 string)) {
	C.QTextBrowser_connect_HighlightedWithQString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_HighlightedWithQString
func miqt_exec_callback_QTextBrowser_HighlightedWithQString(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QTextBrowser) AnchorClicked(param1 *QUrl) {
	C.QTextBrowser_AnchorClicked(this.h, param1.cPointer())
}
func (this *QTextBrowser) OnAnchorClicked(slot func(param1 *QUrl)) {
	C.QTextBrowser_connect_AnchorClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_AnchorClicked
func miqt_exec_callback_QTextBrowser_AnchorClicked(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUrl(param1)

	gofunc(slotval1)
}

func QTextBrowser_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextBrowser_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextBrowser_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextBrowser_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextBrowser_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextBrowser_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextBrowser_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextBrowser_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextBrowser) callVirtualBase_LoadResource(typeVal int, name *QUrl) *QVariant {

	_goptr := newQVariant(C.QTextBrowser_virtualbase_LoadResource(unsafe.Pointer(this.h), (C.int)(typeVal), name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextBrowser) OnLoadResource(slot func(super func(typeVal int, name *QUrl) *QVariant, typeVal int, name *QUrl) *QVariant) {
	ok := C.QTextBrowser_override_virtual_LoadResource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_LoadResource
func miqt_exec_callback_QTextBrowser_LoadResource(self *C.QTextBrowser, cb C.intptr_t, typeVal C.int, name *C.QUrl) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal int, name *QUrl) *QVariant, typeVal int, name *QUrl) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(typeVal)

	slotval2 := newQUrl(name)

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_LoadResource, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_SetSource(name *QUrl) {

	C.QTextBrowser_virtualbase_SetSource(unsafe.Pointer(this.h), name.cPointer())

}
func (this *QTextBrowser) OnSetSource(slot func(super func(name *QUrl), name *QUrl)) {
	ok := C.QTextBrowser_override_virtual_SetSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_SetSource
func miqt_exec_callback_QTextBrowser_SetSource(self *C.QTextBrowser, cb C.intptr_t, name *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name *QUrl), name *QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUrl(name)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_SetSource, slotval1)

}

func (this *QTextBrowser) callVirtualBase_Backward() {

	C.QTextBrowser_virtualbase_Backward(unsafe.Pointer(this.h))

}
func (this *QTextBrowser) OnBackward(slot func(super func())) {
	ok := C.QTextBrowser_override_virtual_Backward(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_Backward
func miqt_exec_callback_QTextBrowser_Backward(self *C.QTextBrowser, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTextBrowser{h: self}).callVirtualBase_Backward)

}

func (this *QTextBrowser) callVirtualBase_Forward() {

	C.QTextBrowser_virtualbase_Forward(unsafe.Pointer(this.h))

}
func (this *QTextBrowser) OnForward(slot func(super func())) {
	ok := C.QTextBrowser_override_virtual_Forward(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_Forward
func miqt_exec_callback_QTextBrowser_Forward(self *C.QTextBrowser, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTextBrowser{h: self}).callVirtualBase_Forward)

}

func (this *QTextBrowser) callVirtualBase_Home() {

	C.QTextBrowser_virtualbase_Home(unsafe.Pointer(this.h))

}
func (this *QTextBrowser) OnHome(slot func(super func())) {
	ok := C.QTextBrowser_override_virtual_Home(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_Home
func miqt_exec_callback_QTextBrowser_Home(self *C.QTextBrowser, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTextBrowser{h: self}).callVirtualBase_Home)

}

func (this *QTextBrowser) callVirtualBase_Reload() {

	C.QTextBrowser_virtualbase_Reload(unsafe.Pointer(this.h))

}
func (this *QTextBrowser) OnReload(slot func(super func())) {
	ok := C.QTextBrowser_override_virtual_Reload(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_Reload
func miqt_exec_callback_QTextBrowser_Reload(self *C.QTextBrowser, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTextBrowser{h: self}).callVirtualBase_Reload)

}

func (this *QTextBrowser) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QTextBrowser_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QTextBrowser) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QTextBrowser_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_Event
func miqt_exec_callback_QTextBrowser_Event(self *C.QTextBrowser, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_KeyPressEvent(ev *QKeyEvent) {

	C.QTextBrowser_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnKeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	ok := C.QTextBrowser_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_KeyPressEvent
func miqt_exec_callback_QTextBrowser_KeyPressEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(ev)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MouseMoveEvent(ev *QMouseEvent) {

	C.QTextBrowser_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnMouseMoveEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QTextBrowser_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_MouseMoveEvent
func miqt_exec_callback_QTextBrowser_MouseMoveEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MousePressEvent(ev *QMouseEvent) {

	C.QTextBrowser_virtualbase_MousePressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnMousePressEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QTextBrowser_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_MousePressEvent
func miqt_exec_callback_QTextBrowser_MousePressEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MouseReleaseEvent(ev *QMouseEvent) {

	C.QTextBrowser_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnMouseReleaseEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QTextBrowser_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_MouseReleaseEvent
func miqt_exec_callback_QTextBrowser_MouseReleaseEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_FocusOutEvent(ev *QFocusEvent) {

	C.QTextBrowser_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnFocusOutEvent(slot func(super func(ev *QFocusEvent), ev *QFocusEvent)) {
	ok := C.QTextBrowser_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_FocusOutEvent
func miqt_exec_callback_QTextBrowser_FocusOutEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QFocusEvent), ev *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(ev)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTextBrowser_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTextBrowser) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTextBrowser_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_FocusNextPrevChild
func miqt_exec_callback_QTextBrowser_FocusNextPrevChild(self *C.QTextBrowser, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QTextBrowser_virtualbase_PaintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QTextBrowser_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_PaintEvent
func miqt_exec_callback_QTextBrowser_PaintEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_InputMethodQuery(property InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTextBrowser_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(property)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextBrowser) OnInputMethodQuery(slot func(super func(property InputMethodQuery) *QVariant, property InputMethodQuery) *QVariant) {
	ok := C.QTextBrowser_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_InputMethodQuery
func miqt_exec_callback_QTextBrowser_InputMethodQuery(self *C.QTextBrowser, cb C.intptr_t, property C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(property InputMethodQuery) *QVariant, property InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(property)

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QTextBrowser_virtualbase_TimerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QTextBrowser_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_TimerEvent
func miqt_exec_callback_QTextBrowser_TimerEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QTextBrowser_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QTextBrowser_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_KeyReleaseEvent
func miqt_exec_callback_QTextBrowser_KeyReleaseEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QTextBrowser_virtualbase_ResizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	ok := C.QTextBrowser_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_ResizeEvent
func miqt_exec_callback_QTextBrowser_ResizeEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MouseDoubleClickEvent(e *QMouseEvent) {

	C.QTextBrowser_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnMouseDoubleClickEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QTextBrowser_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_MouseDoubleClickEvent
func miqt_exec_callback_QTextBrowser_MouseDoubleClickEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ContextMenuEvent(e *QContextMenuEvent) {

	C.QTextBrowser_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnContextMenuEvent(slot func(super func(e *QContextMenuEvent), e *QContextMenuEvent)) {
	ok := C.QTextBrowser_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_ContextMenuEvent
func miqt_exec_callback_QTextBrowser_ContextMenuEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QContextMenuEvent), e *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DragEnterEvent(e *QDragEnterEvent) {

	C.QTextBrowser_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnDragEnterEvent(slot func(super func(e *QDragEnterEvent), e *QDragEnterEvent)) {
	ok := C.QTextBrowser_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_DragEnterEvent
func miqt_exec_callback_QTextBrowser_DragEnterEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragEnterEvent), e *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QTextBrowser_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	ok := C.QTextBrowser_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_DragLeaveEvent
func miqt_exec_callback_QTextBrowser_DragLeaveEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QTextBrowser_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	ok := C.QTextBrowser_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_DragMoveEvent
func miqt_exec_callback_QTextBrowser_DragMoveEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DropEvent(e *QDropEvent) {

	C.QTextBrowser_virtualbase_DropEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnDropEvent(slot func(super func(e *QDropEvent), e *QDropEvent)) {
	ok := C.QTextBrowser_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_DropEvent
func miqt_exec_callback_QTextBrowser_DropEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDropEvent), e *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QTextBrowser_virtualbase_FocusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QTextBrowser_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_FocusInEvent
func miqt_exec_callback_QTextBrowser_FocusInEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QTextBrowser_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTextBrowser) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QTextBrowser_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_ShowEvent
func miqt_exec_callback_QTextBrowser_ShowEvent(self *C.QTextBrowser, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QTextBrowser_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QTextBrowser_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_ChangeEvent
func miqt_exec_callback_QTextBrowser_ChangeEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QTextBrowser_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QTextBrowser_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_WheelEvent
func miqt_exec_callback_QTextBrowser_WheelEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_CreateMimeDataFromSelection() *QMimeData {

	return newQMimeData(C.QTextBrowser_virtualbase_CreateMimeDataFromSelection(unsafe.Pointer(this.h)))

}
func (this *QTextBrowser) OnCreateMimeDataFromSelection(slot func(super func() *QMimeData) *QMimeData) {
	ok := C.QTextBrowser_override_virtual_CreateMimeDataFromSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_CreateMimeDataFromSelection
func miqt_exec_callback_QTextBrowser_CreateMimeDataFromSelection(self *C.QTextBrowser, cb C.intptr_t) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMimeData) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_CreateMimeDataFromSelection)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_CanInsertFromMimeData(source *QMimeData) bool {

	return (bool)(C.QTextBrowser_virtualbase_CanInsertFromMimeData(unsafe.Pointer(this.h), source.cPointer()))

}
func (this *QTextBrowser) OnCanInsertFromMimeData(slot func(super func(source *QMimeData) bool, source *QMimeData) bool) {
	ok := C.QTextBrowser_override_virtual_CanInsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_CanInsertFromMimeData
func miqt_exec_callback_QTextBrowser_CanInsertFromMimeData(self *C.QTextBrowser, cb C.intptr_t, source *C.QMimeData) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *QMimeData) bool, source *QMimeData) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(source)

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_CanInsertFromMimeData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_InsertFromMimeData(source *QMimeData) {

	C.QTextBrowser_virtualbase_InsertFromMimeData(unsafe.Pointer(this.h), source.cPointer())

}
func (this *QTextBrowser) OnInsertFromMimeData(slot func(super func(source *QMimeData), source *QMimeData)) {
	ok := C.QTextBrowser_override_virtual_InsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_InsertFromMimeData
func miqt_exec_callback_QTextBrowser_InsertFromMimeData(self *C.QTextBrowser, cb C.intptr_t, source *C.QMimeData) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *QMimeData), source *QMimeData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(source)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_InsertFromMimeData, slotval1)

}

func (this *QTextBrowser) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QTextBrowser_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTextBrowser) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QTextBrowser_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_InputMethodEvent
func miqt_exec_callback_QTextBrowser_InputMethodEvent(self *C.QTextBrowser, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QTextBrowser_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QTextBrowser) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QTextBrowser_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_ScrollContentsBy
func miqt_exec_callback_QTextBrowser_ScrollContentsBy(self *C.QTextBrowser, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QTextBrowser) callVirtualBase_DoSetTextCursor(cursor *QTextCursor) {

	C.QTextBrowser_virtualbase_DoSetTextCursor(unsafe.Pointer(this.h), cursor.cPointer())

}
func (this *QTextBrowser) OnDoSetTextCursor(slot func(super func(cursor *QTextCursor), cursor *QTextCursor)) {
	ok := C.QTextBrowser_override_virtual_DoSetTextCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_DoSetTextCursor
func miqt_exec_callback_QTextBrowser_DoSetTextCursor(self *C.QTextBrowser, cb C.intptr_t, cursor *C.QTextCursor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursor *QTextCursor), cursor *QTextCursor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextCursor(cursor)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DoSetTextCursor, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QTextBrowser_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextBrowser) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTextBrowser_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_MinimumSizeHint
func miqt_exec_callback_QTextBrowser_MinimumSizeHint(self *C.QTextBrowser, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTextBrowser_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextBrowser) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTextBrowser_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_SizeHint
func miqt_exec_callback_QTextBrowser_SizeHint(self *C.QTextBrowser, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QTextBrowser_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QTextBrowser) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QTextBrowser_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_SetupViewport
func miqt_exec_callback_QTextBrowser_SetupViewport(self *C.QTextBrowser, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QTextBrowser) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QTextBrowser_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QTextBrowser) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QTextBrowser_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_EventFilter
func miqt_exec_callback_QTextBrowser_EventFilter(self *C.QTextBrowser, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_ViewportEvent(param1 *QEvent) bool {

	return (bool)(C.QTextBrowser_virtualbase_ViewportEvent(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QTextBrowser) OnViewportEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QTextBrowser_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_ViewportEvent
func miqt_exec_callback_QTextBrowser_ViewportEvent(self *C.QTextBrowser, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QTextBrowser_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextBrowser) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTextBrowser_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_ViewportSizeHint
func miqt_exec_callback_QTextBrowser_ViewportSizeHint(self *C.QTextBrowser, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_DevType() int {

	return (int)(C.QTextBrowser_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QTextBrowser) OnDevType(slot func(super func() int) int) {
	ok := C.QTextBrowser_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_DevType
func miqt_exec_callback_QTextBrowser_DevType(self *C.QTextBrowser, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_SetVisible(visible bool) {

	C.QTextBrowser_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTextBrowser) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTextBrowser_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_SetVisible
func miqt_exec_callback_QTextBrowser_SetVisible(self *C.QTextBrowser, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTextBrowser) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTextBrowser_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTextBrowser) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QTextBrowser_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_HeightForWidth
func miqt_exec_callback_QTextBrowser_HeightForWidth(self *C.QTextBrowser, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QTextBrowser_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTextBrowser) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTextBrowser_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_HasHeightForWidth
func miqt_exec_callback_QTextBrowser_HasHeightForWidth(self *C.QTextBrowser, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTextBrowser_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QTextBrowser) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QTextBrowser_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_PaintEngine
func miqt_exec_callback_QTextBrowser_PaintEngine(self *C.QTextBrowser, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_EnterEvent(event *QEvent) {

	C.QTextBrowser_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTextBrowser_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_EnterEvent
func miqt_exec_callback_QTextBrowser_EnterEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTextBrowser_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTextBrowser_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_LeaveEvent
func miqt_exec_callback_QTextBrowser_LeaveEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTextBrowser_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QTextBrowser_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_MoveEvent
func miqt_exec_callback_QTextBrowser_MoveEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTextBrowser_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QTextBrowser_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_CloseEvent
func miqt_exec_callback_QTextBrowser_CloseEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTextBrowser_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QTextBrowser_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_TabletEvent
func miqt_exec_callback_QTextBrowser_TabletEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTextBrowser_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QTextBrowser_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_ActionEvent
func miqt_exec_callback_QTextBrowser_ActionEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QTextBrowser_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QTextBrowser_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_HideEvent
func miqt_exec_callback_QTextBrowser_HideEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTextBrowser_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QTextBrowser) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QTextBrowser_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_NativeEvent
func miqt_exec_callback_QTextBrowser_NativeEvent(self *C.QTextBrowser, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTextBrowser_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTextBrowser) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTextBrowser_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_Metric
func miqt_exec_callback_QTextBrowser_Metric(self *C.QTextBrowser, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_InitPainter(painter *QPainter) {

	C.QTextBrowser_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTextBrowser) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QTextBrowser_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_InitPainter
func miqt_exec_callback_QTextBrowser_InitPainter(self *C.QTextBrowser, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTextBrowser) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTextBrowser_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTextBrowser) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QTextBrowser_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_Redirected
func miqt_exec_callback_QTextBrowser_Redirected(self *C.QTextBrowser, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QTextBrowser_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTextBrowser) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QTextBrowser_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_SharedPainter
func miqt_exec_callback_QTextBrowser_SharedPainter(self *C.QTextBrowser, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTextBrowser_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTextBrowser_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_ChildEvent
func miqt_exec_callback_QTextBrowser_ChildEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTextBrowser_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTextBrowser_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_CustomEvent
func miqt_exec_callback_QTextBrowser_CustomEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTextBrowser_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextBrowser) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextBrowser_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_ConnectNotify
func miqt_exec_callback_QTextBrowser_ConnectNotify(self *C.QTextBrowser, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTextBrowser_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextBrowser) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextBrowser_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_DisconnectNotify
func miqt_exec_callback_QTextBrowser_DisconnectNotify(self *C.QTextBrowser, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTextBrowser) Delete() {
	C.QTextBrowser_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextBrowser) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextBrowser) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

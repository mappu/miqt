package qt6

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
	h          *C.QTextBrowser
	isSubclass bool
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
func newQTextBrowser(h *C.QTextBrowser, h_QTextEdit *C.QTextEdit, h_QAbstractScrollArea *C.QAbstractScrollArea, h_QFrame *C.QFrame, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QTextBrowser {
	if h == nil {
		return nil
	}
	return &QTextBrowser{h: h,
		QTextEdit: newQTextEdit(h_QTextEdit, h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQTextBrowser constructs the type using only unsafe pointers.
func UnsafeNewQTextBrowser(h unsafe.Pointer, h_QTextEdit unsafe.Pointer, h_QAbstractScrollArea unsafe.Pointer, h_QFrame unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QTextBrowser {
	if h == nil {
		return nil
	}

	return &QTextBrowser{h: (*C.QTextBrowser)(h),
		QTextEdit: UnsafeNewQTextEdit(h_QTextEdit, h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQTextBrowser constructs a new QTextBrowser object.
func NewQTextBrowser(parent *QWidget) *QTextBrowser {
	var outptr_QTextBrowser *C.QTextBrowser = nil
	var outptr_QTextEdit *C.QTextEdit = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QTextBrowser_new(parent.cPointer(), &outptr_QTextBrowser, &outptr_QTextEdit, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQTextBrowser(outptr_QTextBrowser, outptr_QTextEdit, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQTextBrowser2 constructs a new QTextBrowser object.
func NewQTextBrowser2() *QTextBrowser {
	var outptr_QTextBrowser *C.QTextBrowser = nil
	var outptr_QTextEdit *C.QTextEdit = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QTextBrowser_new2(&outptr_QTextBrowser, &outptr_QTextEdit, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQTextBrowser(outptr_QTextBrowser, outptr_QTextEdit, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QTextBrowser) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTextBrowser_MetaObject(this.h)))
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

func (this *QTextBrowser) Source() *QUrl {
	_ret := C.QTextBrowser_Source(this.h)
	_goptr := newQUrl(_ret)
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
	_ret := C.QTextBrowser_LoadResource(this.h, (C.int)(typeVal), name.cPointer())
	_goptr := newQVariant(_ret)
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
	_ret := C.QTextBrowser_HistoryUrl(this.h, (C.int)(param1))
	_goptr := newQUrl(_ret)
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
	slotval1 := UnsafeNewQUrl(unsafe.Pointer(param1))

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
	slotval1 := UnsafeNewQUrl(unsafe.Pointer(param1))

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
	slotval1 := UnsafeNewQUrl(unsafe.Pointer(param1))

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

func (this *QTextBrowser) SetSource2(name *QUrl, typeVal QTextDocument__ResourceType) {
	C.QTextBrowser_SetSource2(this.h, name.cPointer(), (C.int)(typeVal))
}

func (this *QTextBrowser) callVirtualBase_LoadResource(typeVal int, name *QUrl) *QVariant {

	_ret := C.QTextBrowser_virtualbase_LoadResource(unsafe.Pointer(this.h), (C.int)(typeVal), name.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextBrowser) OnLoadResource(slot func(super func(typeVal int, name *QUrl) *QVariant, typeVal int, name *QUrl) *QVariant) {
	C.QTextBrowser_override_virtual_LoadResource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_LoadResource
func miqt_exec_callback_QTextBrowser_LoadResource(self *C.QTextBrowser, cb C.intptr_t, typeVal C.int, name *C.QUrl) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal int, name *QUrl) *QVariant, typeVal int, name *QUrl) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(typeVal)

	slotval2 := UnsafeNewQUrl(unsafe.Pointer(name))

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_LoadResource, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_Backward() {

	C.QTextBrowser_virtualbase_Backward(unsafe.Pointer(this.h))

}
func (this *QTextBrowser) OnBackward(slot func(super func())) {
	C.QTextBrowser_override_virtual_Backward(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QTextBrowser_override_virtual_Forward(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QTextBrowser_override_virtual_Home(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QTextBrowser_override_virtual_Reload(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QTextBrowser_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_Event
func miqt_exec_callback_QTextBrowser_Event(self *C.QTextBrowser, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_KeyPressEvent(ev *QKeyEvent) {

	C.QTextBrowser_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnKeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	C.QTextBrowser_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_KeyPressEvent
func miqt_exec_callback_QTextBrowser_KeyPressEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(ev), nil, nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MouseMoveEvent(ev *QMouseEvent) {

	C.QTextBrowser_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnMouseMoveEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	C.QTextBrowser_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_MouseMoveEvent
func miqt_exec_callback_QTextBrowser_MouseMoveEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(ev), nil, nil, nil, nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MousePressEvent(ev *QMouseEvent) {

	C.QTextBrowser_virtualbase_MousePressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnMousePressEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	C.QTextBrowser_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_MousePressEvent
func miqt_exec_callback_QTextBrowser_MousePressEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(ev), nil, nil, nil, nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MouseReleaseEvent(ev *QMouseEvent) {

	C.QTextBrowser_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnMouseReleaseEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	C.QTextBrowser_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_MouseReleaseEvent
func miqt_exec_callback_QTextBrowser_MouseReleaseEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(ev), nil, nil, nil, nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_FocusOutEvent(ev *QFocusEvent) {

	C.QTextBrowser_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnFocusOutEvent(slot func(super func(ev *QFocusEvent), ev *QFocusEvent)) {
	C.QTextBrowser_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_FocusOutEvent
func miqt_exec_callback_QTextBrowser_FocusOutEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QFocusEvent), ev *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(ev), nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTextBrowser_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTextBrowser) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	C.QTextBrowser_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QTextBrowser_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_PaintEvent
func miqt_exec_callback_QTextBrowser_PaintEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(e), nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DoSetSource(name *QUrl, typeVal QTextDocument__ResourceType) {

	C.QTextBrowser_virtualbase_DoSetSource(unsafe.Pointer(this.h), name.cPointer(), (C.int)(typeVal))

}
func (this *QTextBrowser) OnDoSetSource(slot func(super func(name *QUrl, typeVal QTextDocument__ResourceType), name *QUrl, typeVal QTextDocument__ResourceType)) {
	C.QTextBrowser_override_virtual_DoSetSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_DoSetSource
func miqt_exec_callback_QTextBrowser_DoSetSource(self *C.QTextBrowser, cb C.intptr_t, name *C.QUrl, typeVal C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name *QUrl, typeVal QTextDocument__ResourceType), name *QUrl, typeVal QTextDocument__ResourceType))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQUrl(unsafe.Pointer(name))
	slotval2 := (QTextDocument__ResourceType)(typeVal)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DoSetSource, slotval1, slotval2)

}

func (this *QTextBrowser) callVirtualBase_InputMethodQuery(property InputMethodQuery) *QVariant {

	_ret := C.QTextBrowser_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(property))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextBrowser) OnInputMethodQuery(slot func(super func(property InputMethodQuery) *QVariant, property InputMethodQuery) *QVariant) {
	C.QTextBrowser_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QTextBrowser_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_TimerEvent
func miqt_exec_callback_QTextBrowser_TimerEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(e), nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QTextBrowser_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	C.QTextBrowser_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_KeyReleaseEvent
func miqt_exec_callback_QTextBrowser_KeyReleaseEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QTextBrowser_virtualbase_ResizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	C.QTextBrowser_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_ResizeEvent
func miqt_exec_callback_QTextBrowser_ResizeEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(e), nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MouseDoubleClickEvent(e *QMouseEvent) {

	C.QTextBrowser_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnMouseDoubleClickEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	C.QTextBrowser_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_MouseDoubleClickEvent
func miqt_exec_callback_QTextBrowser_MouseDoubleClickEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(e), nil, nil, nil, nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ContextMenuEvent(e *QContextMenuEvent) {

	C.QTextBrowser_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnContextMenuEvent(slot func(super func(e *QContextMenuEvent), e *QContextMenuEvent)) {
	C.QTextBrowser_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_ContextMenuEvent
func miqt_exec_callback_QTextBrowser_ContextMenuEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QContextMenuEvent), e *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DragEnterEvent(e *QDragEnterEvent) {

	C.QTextBrowser_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnDragEnterEvent(slot func(super func(e *QDragEnterEvent), e *QDragEnterEvent)) {
	C.QTextBrowser_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_DragEnterEvent
func miqt_exec_callback_QTextBrowser_DragEnterEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragEnterEvent), e *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(e), nil, nil, nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QTextBrowser_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	C.QTextBrowser_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_DragLeaveEvent
func miqt_exec_callback_QTextBrowser_DragLeaveEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(e), nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QTextBrowser_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	C.QTextBrowser_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_DragMoveEvent
func miqt_exec_callback_QTextBrowser_DragMoveEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DropEvent(e *QDropEvent) {

	C.QTextBrowser_virtualbase_DropEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnDropEvent(slot func(super func(e *QDropEvent), e *QDropEvent)) {
	C.QTextBrowser_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_DropEvent
func miqt_exec_callback_QTextBrowser_DropEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDropEvent), e *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(e), nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QTextBrowser_virtualbase_FocusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	C.QTextBrowser_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_FocusInEvent
func miqt_exec_callback_QTextBrowser_FocusInEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(e), nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QTextBrowser_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTextBrowser) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	C.QTextBrowser_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_ShowEvent
func miqt_exec_callback_QTextBrowser_ShowEvent(self *C.QTextBrowser, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(param1), nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QTextBrowser_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	C.QTextBrowser_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_ChangeEvent
func miqt_exec_callback_QTextBrowser_ChangeEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QTextBrowser_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	C.QTextBrowser_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_WheelEvent
func miqt_exec_callback_QTextBrowser_WheelEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(e), nil, nil, nil, nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_CreateMimeDataFromSelection() *QMimeData {

	return UnsafeNewQMimeData(unsafe.Pointer(C.QTextBrowser_virtualbase_CreateMimeDataFromSelection(unsafe.Pointer(this.h))), nil)
}
func (this *QTextBrowser) OnCreateMimeDataFromSelection(slot func(super func() *QMimeData) *QMimeData) {
	C.QTextBrowser_override_virtual_CreateMimeDataFromSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QTextBrowser_override_virtual_CanInsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_CanInsertFromMimeData
func miqt_exec_callback_QTextBrowser_CanInsertFromMimeData(self *C.QTextBrowser, cb C.intptr_t, source *C.QMimeData) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *QMimeData) bool, source *QMimeData) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMimeData(unsafe.Pointer(source), nil)

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_CanInsertFromMimeData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_InsertFromMimeData(source *QMimeData) {

	C.QTextBrowser_virtualbase_InsertFromMimeData(unsafe.Pointer(this.h), source.cPointer())

}
func (this *QTextBrowser) OnInsertFromMimeData(slot func(super func(source *QMimeData), source *QMimeData)) {
	C.QTextBrowser_override_virtual_InsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_InsertFromMimeData
func miqt_exec_callback_QTextBrowser_InsertFromMimeData(self *C.QTextBrowser, cb C.intptr_t, source *C.QMimeData) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *QMimeData), source *QMimeData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMimeData(unsafe.Pointer(source), nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_InsertFromMimeData, slotval1)

}

func (this *QTextBrowser) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QTextBrowser_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTextBrowser) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	C.QTextBrowser_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_InputMethodEvent
func miqt_exec_callback_QTextBrowser_InputMethodEvent(self *C.QTextBrowser, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QTextBrowser_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QTextBrowser) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	C.QTextBrowser_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QTextBrowser_override_virtual_DoSetTextCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_DoSetTextCursor
func miqt_exec_callback_QTextBrowser_DoSetTextCursor(self *C.QTextBrowser, cb C.intptr_t, cursor *C.QTextCursor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursor *QTextCursor), cursor *QTextCursor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTextCursor(unsafe.Pointer(cursor))

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DoSetTextCursor, slotval1)

}

// Delete this object from C++ memory.
func (this *QTextBrowser) Delete() {
	C.QTextBrowser_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextBrowser) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextBrowser) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

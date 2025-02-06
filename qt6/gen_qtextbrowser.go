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
	return newQMetaObject(C.QTextBrowser_metaObject(this.h))
}

func (this *QTextBrowser) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTextBrowser_metacast(this.h, param1_Cstring))
}

func QTextBrowser_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextBrowser_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextBrowser) Source() *QUrl {
	_goptr := newQUrl(C.QTextBrowser_source(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBrowser) SourceType() QTextDocument__ResourceType {
	return (QTextDocument__ResourceType)(C.QTextBrowser_sourceType(this.h))
}

func (this *QTextBrowser) SearchPaths() []string {
	var _ma C.struct_miqt_array = C.QTextBrowser_searchPaths(this.h)
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
	C.QTextBrowser_setSearchPaths(this.h, paths_ma)
}

func (this *QTextBrowser) LoadResource(typeVal int, name *QUrl) *QVariant {
	_goptr := newQVariant(C.QTextBrowser_loadResource(this.h, (C.int)(typeVal), name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBrowser) IsBackwardAvailable() bool {
	return (bool)(C.QTextBrowser_isBackwardAvailable(this.h))
}

func (this *QTextBrowser) IsForwardAvailable() bool {
	return (bool)(C.QTextBrowser_isForwardAvailable(this.h))
}

func (this *QTextBrowser) ClearHistory() {
	C.QTextBrowser_clearHistory(this.h)
}

func (this *QTextBrowser) HistoryTitle(param1 int) string {
	var _ms C.struct_miqt_string = C.QTextBrowser_historyTitle(this.h, (C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextBrowser) HistoryUrl(param1 int) *QUrl {
	_goptr := newQUrl(C.QTextBrowser_historyUrl(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextBrowser) BackwardHistoryCount() int {
	return (int)(C.QTextBrowser_backwardHistoryCount(this.h))
}

func (this *QTextBrowser) ForwardHistoryCount() int {
	return (int)(C.QTextBrowser_forwardHistoryCount(this.h))
}

func (this *QTextBrowser) OpenExternalLinks() bool {
	return (bool)(C.QTextBrowser_openExternalLinks(this.h))
}

func (this *QTextBrowser) SetOpenExternalLinks(open bool) {
	C.QTextBrowser_setOpenExternalLinks(this.h, (C.bool)(open))
}

func (this *QTextBrowser) OpenLinks() bool {
	return (bool)(C.QTextBrowser_openLinks(this.h))
}

func (this *QTextBrowser) SetOpenLinks(open bool) {
	C.QTextBrowser_setOpenLinks(this.h, (C.bool)(open))
}

func (this *QTextBrowser) SetSource(name *QUrl) {
	C.QTextBrowser_setSource(this.h, name.cPointer())
}

func (this *QTextBrowser) Backward() {
	C.QTextBrowser_backward(this.h)
}

func (this *QTextBrowser) Forward() {
	C.QTextBrowser_forward(this.h)
}

func (this *QTextBrowser) Home() {
	C.QTextBrowser_home(this.h)
}

func (this *QTextBrowser) Reload() {
	C.QTextBrowser_reload(this.h)
}

func (this *QTextBrowser) BackwardAvailable(param1 bool) {
	C.QTextBrowser_backwardAvailable(this.h, (C.bool)(param1))
}
func (this *QTextBrowser) OnBackwardAvailable(slot func(param1 bool)) {
	C.QTextBrowser_connect_backwardAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_backwardAvailable
func miqt_exec_callback_QTextBrowser_backwardAvailable(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QTextBrowser) ForwardAvailable(param1 bool) {
	C.QTextBrowser_forwardAvailable(this.h, (C.bool)(param1))
}
func (this *QTextBrowser) OnForwardAvailable(slot func(param1 bool)) {
	C.QTextBrowser_connect_forwardAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_forwardAvailable
func miqt_exec_callback_QTextBrowser_forwardAvailable(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QTextBrowser) HistoryChanged() {
	C.QTextBrowser_historyChanged(this.h)
}
func (this *QTextBrowser) OnHistoryChanged(slot func()) {
	C.QTextBrowser_connect_historyChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_historyChanged
func miqt_exec_callback_QTextBrowser_historyChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTextBrowser) SourceChanged(param1 *QUrl) {
	C.QTextBrowser_sourceChanged(this.h, param1.cPointer())
}
func (this *QTextBrowser) OnSourceChanged(slot func(param1 *QUrl)) {
	C.QTextBrowser_connect_sourceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_sourceChanged
func miqt_exec_callback_QTextBrowser_sourceChanged(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUrl(param1)

	gofunc(slotval1)
}

func (this *QTextBrowser) Highlighted(param1 *QUrl) {
	C.QTextBrowser_highlighted(this.h, param1.cPointer())
}
func (this *QTextBrowser) OnHighlighted(slot func(param1 *QUrl)) {
	C.QTextBrowser_connect_highlighted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_highlighted
func miqt_exec_callback_QTextBrowser_highlighted(cb C.intptr_t, param1 *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUrl(param1)

	gofunc(slotval1)
}

func (this *QTextBrowser) AnchorClicked(param1 *QUrl) {
	C.QTextBrowser_anchorClicked(this.h, param1.cPointer())
}
func (this *QTextBrowser) OnAnchorClicked(slot func(param1 *QUrl)) {
	C.QTextBrowser_connect_anchorClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextBrowser_anchorClicked
func miqt_exec_callback_QTextBrowser_anchorClicked(cb C.intptr_t, param1 *C.QUrl) {
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
	var _ms C.struct_miqt_string = C.QTextBrowser_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextBrowser_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextBrowser_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextBrowser) SetSource2(name *QUrl, typeVal QTextDocument__ResourceType) {
	C.QTextBrowser_setSource2(this.h, name.cPointer(), (C.int)(typeVal))
}

// ZoomInF can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) ZoomInF(rangeVal float32) {

	var _dynamic_cast_ok C.bool = false
	C.QTextBrowser_protectedbase_zoomInF(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.float)(rangeVal))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetViewportMargins can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) SetViewportMargins(left int, top int, right int, bottom int) {

	var _dynamic_cast_ok C.bool = false
	C.QTextBrowser_protectedbase_setViewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ViewportMargins can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) ViewportMargins() QMargins {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQMargins(C.QTextBrowser_protectedbase_viewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) DrawFrame(param1 *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QTextBrowser_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QTextBrowser_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QTextBrowser_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QTextBrowser_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTextBrowser_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTextBrowser_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QTextBrowser_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTextBrowser_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTextBrowser_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTextBrowser that was directly constructed.
func (this *QTextBrowser) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTextBrowser_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTextBrowser) callVirtualBase_LoadResource(typeVal int, name *QUrl) *QVariant {

	_goptr := newQVariant(C.QTextBrowser_virtualbase_loadResource(unsafe.Pointer(this.h), (C.int)(typeVal), name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextBrowser) OnLoadResource(slot func(super func(typeVal int, name *QUrl) *QVariant, typeVal int, name *QUrl) *QVariant) {
	ok := C.QTextBrowser_override_virtual_loadResource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_loadResource
func miqt_exec_callback_QTextBrowser_loadResource(self *C.QTextBrowser, cb C.intptr_t, typeVal C.int, name *C.QUrl) *C.QVariant {
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

func (this *QTextBrowser) callVirtualBase_Backward() {

	C.QTextBrowser_virtualbase_backward(unsafe.Pointer(this.h))

}
func (this *QTextBrowser) OnBackward(slot func(super func())) {
	ok := C.QTextBrowser_override_virtual_backward(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_backward
func miqt_exec_callback_QTextBrowser_backward(self *C.QTextBrowser, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTextBrowser{h: self}).callVirtualBase_Backward)

}

func (this *QTextBrowser) callVirtualBase_Forward() {

	C.QTextBrowser_virtualbase_forward(unsafe.Pointer(this.h))

}
func (this *QTextBrowser) OnForward(slot func(super func())) {
	ok := C.QTextBrowser_override_virtual_forward(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_forward
func miqt_exec_callback_QTextBrowser_forward(self *C.QTextBrowser, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTextBrowser{h: self}).callVirtualBase_Forward)

}

func (this *QTextBrowser) callVirtualBase_Home() {

	C.QTextBrowser_virtualbase_home(unsafe.Pointer(this.h))

}
func (this *QTextBrowser) OnHome(slot func(super func())) {
	ok := C.QTextBrowser_override_virtual_home(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_home
func miqt_exec_callback_QTextBrowser_home(self *C.QTextBrowser, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTextBrowser{h: self}).callVirtualBase_Home)

}

func (this *QTextBrowser) callVirtualBase_Reload() {

	C.QTextBrowser_virtualbase_reload(unsafe.Pointer(this.h))

}
func (this *QTextBrowser) OnReload(slot func(super func())) {
	ok := C.QTextBrowser_override_virtual_reload(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_reload
func miqt_exec_callback_QTextBrowser_reload(self *C.QTextBrowser, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTextBrowser{h: self}).callVirtualBase_Reload)

}

func (this *QTextBrowser) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QTextBrowser_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QTextBrowser) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QTextBrowser_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_event
func miqt_exec_callback_QTextBrowser_event(self *C.QTextBrowser, cb C.intptr_t, e *C.QEvent) C.bool {
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

	C.QTextBrowser_virtualbase_keyPressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnKeyPressEvent(slot func(super func(ev *QKeyEvent), ev *QKeyEvent)) {
	ok := C.QTextBrowser_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_keyPressEvent
func miqt_exec_callback_QTextBrowser_keyPressEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QKeyEvent), ev *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(ev)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MouseMoveEvent(ev *QMouseEvent) {

	C.QTextBrowser_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnMouseMoveEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QTextBrowser_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_mouseMoveEvent
func miqt_exec_callback_QTextBrowser_mouseMoveEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MousePressEvent(ev *QMouseEvent) {

	C.QTextBrowser_virtualbase_mousePressEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnMousePressEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QTextBrowser_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_mousePressEvent
func miqt_exec_callback_QTextBrowser_mousePressEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MouseReleaseEvent(ev *QMouseEvent) {

	C.QTextBrowser_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnMouseReleaseEvent(slot func(super func(ev *QMouseEvent), ev *QMouseEvent)) {
	ok := C.QTextBrowser_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_mouseReleaseEvent
func miqt_exec_callback_QTextBrowser_mouseReleaseEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QMouseEvent), ev *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(ev)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_FocusOutEvent(ev *QFocusEvent) {

	C.QTextBrowser_virtualbase_focusOutEvent(unsafe.Pointer(this.h), ev.cPointer())

}
func (this *QTextBrowser) OnFocusOutEvent(slot func(super func(ev *QFocusEvent), ev *QFocusEvent)) {
	ok := C.QTextBrowser_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_focusOutEvent
func miqt_exec_callback_QTextBrowser_focusOutEvent(self *C.QTextBrowser, cb C.intptr_t, ev *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QFocusEvent), ev *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(ev)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTextBrowser_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTextBrowser) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTextBrowser_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_focusNextPrevChild
func miqt_exec_callback_QTextBrowser_focusNextPrevChild(self *C.QTextBrowser, cb C.intptr_t, next C.bool) C.bool {
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

	C.QTextBrowser_virtualbase_paintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QTextBrowser_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_paintEvent
func miqt_exec_callback_QTextBrowser_paintEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DoSetSource(name *QUrl, typeVal QTextDocument__ResourceType) {

	C.QTextBrowser_virtualbase_doSetSource(unsafe.Pointer(this.h), name.cPointer(), (C.int)(typeVal))

}
func (this *QTextBrowser) OnDoSetSource(slot func(super func(name *QUrl, typeVal QTextDocument__ResourceType), name *QUrl, typeVal QTextDocument__ResourceType)) {
	ok := C.QTextBrowser_override_virtual_doSetSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_doSetSource
func miqt_exec_callback_QTextBrowser_doSetSource(self *C.QTextBrowser, cb C.intptr_t, name *C.QUrl, typeVal C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name *QUrl, typeVal QTextDocument__ResourceType), name *QUrl, typeVal QTextDocument__ResourceType))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUrl(name)

	slotval2 := (QTextDocument__ResourceType)(typeVal)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DoSetSource, slotval1, slotval2)

}

func (this *QTextBrowser) callVirtualBase_InputMethodQuery(property InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTextBrowser_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(property)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextBrowser) OnInputMethodQuery(slot func(super func(property InputMethodQuery) *QVariant, property InputMethodQuery) *QVariant) {
	ok := C.QTextBrowser_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_inputMethodQuery
func miqt_exec_callback_QTextBrowser_inputMethodQuery(self *C.QTextBrowser, cb C.intptr_t, property C.int) *C.QVariant {
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

	C.QTextBrowser_virtualbase_timerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QTextBrowser_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_timerEvent
func miqt_exec_callback_QTextBrowser_timerEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QTextBrowser_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QTextBrowser_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_keyReleaseEvent
func miqt_exec_callback_QTextBrowser_keyReleaseEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QTextBrowser_virtualbase_resizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	ok := C.QTextBrowser_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_resizeEvent
func miqt_exec_callback_QTextBrowser_resizeEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MouseDoubleClickEvent(e *QMouseEvent) {

	C.QTextBrowser_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnMouseDoubleClickEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QTextBrowser_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_mouseDoubleClickEvent
func miqt_exec_callback_QTextBrowser_mouseDoubleClickEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ContextMenuEvent(e *QContextMenuEvent) {

	C.QTextBrowser_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnContextMenuEvent(slot func(super func(e *QContextMenuEvent), e *QContextMenuEvent)) {
	ok := C.QTextBrowser_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_contextMenuEvent
func miqt_exec_callback_QTextBrowser_contextMenuEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QContextMenuEvent), e *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DragEnterEvent(e *QDragEnterEvent) {

	C.QTextBrowser_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnDragEnterEvent(slot func(super func(e *QDragEnterEvent), e *QDragEnterEvent)) {
	ok := C.QTextBrowser_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_dragEnterEvent
func miqt_exec_callback_QTextBrowser_dragEnterEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragEnterEvent), e *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QTextBrowser_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	ok := C.QTextBrowser_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_dragLeaveEvent
func miqt_exec_callback_QTextBrowser_dragLeaveEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QTextBrowser_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	ok := C.QTextBrowser_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_dragMoveEvent
func miqt_exec_callback_QTextBrowser_dragMoveEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DropEvent(e *QDropEvent) {

	C.QTextBrowser_virtualbase_dropEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnDropEvent(slot func(super func(e *QDropEvent), e *QDropEvent)) {
	ok := C.QTextBrowser_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_dropEvent
func miqt_exec_callback_QTextBrowser_dropEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDropEvent), e *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QTextBrowser_virtualbase_focusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QTextBrowser_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_focusInEvent
func miqt_exec_callback_QTextBrowser_focusInEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QTextBrowser_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTextBrowser) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QTextBrowser_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_showEvent
func miqt_exec_callback_QTextBrowser_showEvent(self *C.QTextBrowser, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QTextBrowser_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QTextBrowser_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_changeEvent
func miqt_exec_callback_QTextBrowser_changeEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QTextBrowser_virtualbase_wheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextBrowser) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QTextBrowser_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_wheelEvent
func miqt_exec_callback_QTextBrowser_wheelEvent(self *C.QTextBrowser, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_CreateMimeDataFromSelection() *QMimeData {

	return newQMimeData(C.QTextBrowser_virtualbase_createMimeDataFromSelection(unsafe.Pointer(this.h)))

}
func (this *QTextBrowser) OnCreateMimeDataFromSelection(slot func(super func() *QMimeData) *QMimeData) {
	ok := C.QTextBrowser_override_virtual_createMimeDataFromSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_createMimeDataFromSelection
func miqt_exec_callback_QTextBrowser_createMimeDataFromSelection(self *C.QTextBrowser, cb C.intptr_t) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMimeData) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_CreateMimeDataFromSelection)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_CanInsertFromMimeData(source *QMimeData) bool {

	return (bool)(C.QTextBrowser_virtualbase_canInsertFromMimeData(unsafe.Pointer(this.h), source.cPointer()))

}
func (this *QTextBrowser) OnCanInsertFromMimeData(slot func(super func(source *QMimeData) bool, source *QMimeData) bool) {
	ok := C.QTextBrowser_override_virtual_canInsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_canInsertFromMimeData
func miqt_exec_callback_QTextBrowser_canInsertFromMimeData(self *C.QTextBrowser, cb C.intptr_t, source *C.QMimeData) C.bool {
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

	C.QTextBrowser_virtualbase_insertFromMimeData(unsafe.Pointer(this.h), source.cPointer())

}
func (this *QTextBrowser) OnInsertFromMimeData(slot func(super func(source *QMimeData), source *QMimeData)) {
	ok := C.QTextBrowser_override_virtual_insertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_insertFromMimeData
func miqt_exec_callback_QTextBrowser_insertFromMimeData(self *C.QTextBrowser, cb C.intptr_t, source *C.QMimeData) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *QMimeData), source *QMimeData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(source)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_InsertFromMimeData, slotval1)

}

func (this *QTextBrowser) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QTextBrowser_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTextBrowser) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QTextBrowser_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_inputMethodEvent
func miqt_exec_callback_QTextBrowser_inputMethodEvent(self *C.QTextBrowser, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QTextBrowser_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QTextBrowser) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QTextBrowser_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_scrollContentsBy
func miqt_exec_callback_QTextBrowser_scrollContentsBy(self *C.QTextBrowser, cb C.intptr_t, dx C.int, dy C.int) {
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

	C.QTextBrowser_virtualbase_doSetTextCursor(unsafe.Pointer(this.h), cursor.cPointer())

}
func (this *QTextBrowser) OnDoSetTextCursor(slot func(super func(cursor *QTextCursor), cursor *QTextCursor)) {
	ok := C.QTextBrowser_override_virtual_doSetTextCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_doSetTextCursor
func miqt_exec_callback_QTextBrowser_doSetTextCursor(self *C.QTextBrowser, cb C.intptr_t, cursor *C.QTextCursor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursor *QTextCursor), cursor *QTextCursor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextCursor(cursor)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_DoSetTextCursor, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QTextBrowser_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextBrowser) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTextBrowser_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_minimumSizeHint
func miqt_exec_callback_QTextBrowser_minimumSizeHint(self *C.QTextBrowser, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTextBrowser_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextBrowser) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTextBrowser_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_sizeHint
func miqt_exec_callback_QTextBrowser_sizeHint(self *C.QTextBrowser, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QTextBrowser_virtualbase_setupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QTextBrowser) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QTextBrowser_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_setupViewport
func miqt_exec_callback_QTextBrowser_setupViewport(self *C.QTextBrowser, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QTextBrowser) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QTextBrowser_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QTextBrowser) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QTextBrowser_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_eventFilter
func miqt_exec_callback_QTextBrowser_eventFilter(self *C.QTextBrowser, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
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

	return (bool)(C.QTextBrowser_virtualbase_viewportEvent(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QTextBrowser) OnViewportEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QTextBrowser_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_viewportEvent
func miqt_exec_callback_QTextBrowser_viewportEvent(self *C.QTextBrowser, cb C.intptr_t, param1 *C.QEvent) C.bool {
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

	_goptr := newQSize(C.QTextBrowser_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextBrowser) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTextBrowser_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_viewportSizeHint
func miqt_exec_callback_QTextBrowser_viewportSizeHint(self *C.QTextBrowser, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QTextBrowser_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QTextBrowser) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QTextBrowser_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_initStyleOption
func miqt_exec_callback_QTextBrowser_initStyleOption(self *C.QTextBrowser, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DevType() int {

	return (int)(C.QTextBrowser_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QTextBrowser) OnDevType(slot func(super func() int) int) {
	ok := C.QTextBrowser_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_devType
func miqt_exec_callback_QTextBrowser_devType(self *C.QTextBrowser, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_SetVisible(visible bool) {

	C.QTextBrowser_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTextBrowser) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTextBrowser_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_setVisible
func miqt_exec_callback_QTextBrowser_setVisible(self *C.QTextBrowser, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTextBrowser) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTextBrowser_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTextBrowser) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QTextBrowser_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_heightForWidth
func miqt_exec_callback_QTextBrowser_heightForWidth(self *C.QTextBrowser, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QTextBrowser_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTextBrowser) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTextBrowser_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_hasHeightForWidth
func miqt_exec_callback_QTextBrowser_hasHeightForWidth(self *C.QTextBrowser, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTextBrowser_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QTextBrowser) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QTextBrowser_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_paintEngine
func miqt_exec_callback_QTextBrowser_paintEngine(self *C.QTextBrowser, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QTextBrowser_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QTextBrowser_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_enterEvent
func miqt_exec_callback_QTextBrowser_enterEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTextBrowser_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTextBrowser_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_leaveEvent
func miqt_exec_callback_QTextBrowser_leaveEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTextBrowser_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QTextBrowser_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_moveEvent
func miqt_exec_callback_QTextBrowser_moveEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTextBrowser_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QTextBrowser_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_closeEvent
func miqt_exec_callback_QTextBrowser_closeEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTextBrowser_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QTextBrowser_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_tabletEvent
func miqt_exec_callback_QTextBrowser_tabletEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTextBrowser_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QTextBrowser_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_actionEvent
func miqt_exec_callback_QTextBrowser_actionEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QTextBrowser_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QTextBrowser_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_hideEvent
func miqt_exec_callback_QTextBrowser_hideEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTextBrowser_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QTextBrowser) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QTextBrowser_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_nativeEvent
func miqt_exec_callback_QTextBrowser_nativeEvent(self *C.QTextBrowser, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTextBrowser) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTextBrowser_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTextBrowser) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTextBrowser_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_metric
func miqt_exec_callback_QTextBrowser_metric(self *C.QTextBrowser, cb C.intptr_t, param1 C.int) C.int {
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

	C.QTextBrowser_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTextBrowser) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QTextBrowser_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_initPainter
func miqt_exec_callback_QTextBrowser_initPainter(self *C.QTextBrowser, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTextBrowser) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTextBrowser_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTextBrowser) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QTextBrowser_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_redirected
func miqt_exec_callback_QTextBrowser_redirected(self *C.QTextBrowser, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QTextBrowser_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTextBrowser) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QTextBrowser_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_sharedPainter
func miqt_exec_callback_QTextBrowser_sharedPainter(self *C.QTextBrowser, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextBrowser{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTextBrowser) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTextBrowser_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTextBrowser_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_childEvent
func miqt_exec_callback_QTextBrowser_childEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTextBrowser_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextBrowser) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTextBrowser_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_customEvent
func miqt_exec_callback_QTextBrowser_customEvent(self *C.QTextBrowser, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTextBrowser) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTextBrowser_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextBrowser) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextBrowser_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_connectNotify
func miqt_exec_callback_QTextBrowser_connectNotify(self *C.QTextBrowser, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextBrowser{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTextBrowser) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTextBrowser_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextBrowser) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextBrowser_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextBrowser_disconnectNotify
func miqt_exec_callback_QTextBrowser_disconnectNotify(self *C.QTextBrowser, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QTextBrowser_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextBrowser) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextBrowser) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

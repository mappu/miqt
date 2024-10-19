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

func newQTextBrowser(h *C.QTextBrowser) *QTextBrowser {
	if h == nil {
		return nil
	}
	return &QTextBrowser{h: h, QTextEdit: UnsafeNewQTextEdit(unsafe.Pointer(h))}
}

func UnsafeNewQTextBrowser(h unsafe.Pointer) *QTextBrowser {
	return newQTextBrowser((*C.QTextBrowser)(h))
}

// NewQTextBrowser constructs a new QTextBrowser object.
func NewQTextBrowser() *QTextBrowser {
	ret := C.QTextBrowser_new()
	return newQTextBrowser(ret)
}

// NewQTextBrowser2 constructs a new QTextBrowser object.
func NewQTextBrowser2(parent *QWidget) *QTextBrowser {
	ret := C.QTextBrowser_new2(parent.cPointer())
	return newQTextBrowser(ret)
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

func QTextBrowser_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextBrowser_TrUtf8(s_Cstring)
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
	var _ma *C.struct_miqt_array = C.QTextBrowser_SearchPaths(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextBrowser) SetSearchPaths(paths []string) {
	// For the C ABI, malloc a C array of structs
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := &C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(paths_ma))
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

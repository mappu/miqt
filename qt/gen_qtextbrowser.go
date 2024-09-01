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

func newQTextBrowser(h *C.QTextBrowser) *QTextBrowser {
	if h == nil {
		return nil
	}
	return &QTextBrowser{h: h, QTextEdit: newQTextEdit_U(unsafe.Pointer(h))}
}

func newQTextBrowser_U(h unsafe.Pointer) *QTextBrowser {
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
	ret := C.QTextBrowser_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTextBrowser_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBrowser_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextBrowser_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBrowser_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextBrowser) Source() *QUrl {
	ret := C.QTextBrowser_Source(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextBrowser) SourceType() uintptr {
	ret := C.QTextBrowser_SourceType(this.h)
	return (uintptr)(ret)
}

func (this *QTextBrowser) SearchPaths() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QTextBrowser_SearchPaths(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextBrowser) SetSearchPaths(paths []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	paths_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(paths))))
	paths_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	defer C.free(unsafe.Pointer(paths_Lengths))
	for i := range paths {
		single_cstring := C.CString(paths[i])
		defer C.free(unsafe.Pointer(single_cstring))
		paths_CArray[i] = single_cstring
		paths_Lengths[i] = (C.size_t)(len(paths[i]))
	}
	C.QTextBrowser_SetSearchPaths(this.h, &paths_CArray[0], &paths_Lengths[0], C.ulong(len(paths)))
}

func (this *QTextBrowser) LoadResource(typeVal int, name *QUrl) *QVariant {
	ret := C.QTextBrowser_LoadResource(this.h, (C.int)(typeVal), name.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextBrowser) IsBackwardAvailable() bool {
	ret := C.QTextBrowser_IsBackwardAvailable(this.h)
	return (bool)(ret)
}

func (this *QTextBrowser) IsForwardAvailable() bool {
	ret := C.QTextBrowser_IsForwardAvailable(this.h)
	return (bool)(ret)
}

func (this *QTextBrowser) ClearHistory() {
	C.QTextBrowser_ClearHistory(this.h)
}

func (this *QTextBrowser) HistoryTitle(param1 int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBrowser_HistoryTitle(this.h, (C.int)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextBrowser) HistoryUrl(param1 int) *QUrl {
	ret := C.QTextBrowser_HistoryUrl(this.h, (C.int)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextBrowser) BackwardHistoryCount() int {
	ret := C.QTextBrowser_BackwardHistoryCount(this.h)
	return (int)(ret)
}

func (this *QTextBrowser) ForwardHistoryCount() int {
	ret := C.QTextBrowser_ForwardHistoryCount(this.h)
	return (int)(ret)
}

func (this *QTextBrowser) OpenExternalLinks() bool {
	ret := C.QTextBrowser_OpenExternalLinks(this.h)
	return (bool)(ret)
}

func (this *QTextBrowser) SetOpenExternalLinks(open bool) {
	C.QTextBrowser_SetOpenExternalLinks(this.h, (C.bool)(open))
}

func (this *QTextBrowser) OpenLinks() bool {
	ret := C.QTextBrowser_OpenLinks(this.h)
	return (bool)(ret)
}

func (this *QTextBrowser) SetOpenLinks(open bool) {
	C.QTextBrowser_SetOpenLinks(this.h, (C.bool)(open))
}

func (this *QTextBrowser) SetSource(name *QUrl) {
	C.QTextBrowser_SetSource(this.h, name.cPointer())
}

func (this *QTextBrowser) SetSource2(name *QUrl, typeVal uintptr) {
	C.QTextBrowser_SetSource2(this.h, name.cPointer(), (C.uintptr_t)(typeVal))
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

func (this *QTextBrowser) OnBackwardAvailable(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextBrowser_connect_BackwardAvailable(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextBrowser) ForwardAvailable(param1 bool) {
	C.QTextBrowser_ForwardAvailable(this.h, (C.bool)(param1))
}

func (this *QTextBrowser) OnForwardAvailable(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextBrowser_connect_ForwardAvailable(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextBrowser) HistoryChanged() {
	C.QTextBrowser_HistoryChanged(this.h)
}

func (this *QTextBrowser) OnHistoryChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextBrowser_connect_HistoryChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextBrowser) SourceChanged(param1 *QUrl) {
	C.QTextBrowser_SourceChanged(this.h, param1.cPointer())
}

func (this *QTextBrowser) OnSourceChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextBrowser_connect_SourceChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextBrowser) Highlighted(param1 *QUrl) {
	C.QTextBrowser_Highlighted(this.h, param1.cPointer())
}

func (this *QTextBrowser) OnHighlighted(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextBrowser_connect_Highlighted(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextBrowser) HighlightedWithQString(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QTextBrowser_HighlightedWithQString(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QTextBrowser) OnHighlightedWithQString(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextBrowser_connect_HighlightedWithQString(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextBrowser) AnchorClicked(param1 *QUrl) {
	C.QTextBrowser_AnchorClicked(this.h, param1.cPointer())
}

func (this *QTextBrowser) OnAnchorClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextBrowser_connect_AnchorClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QTextBrowser_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBrowser_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextBrowser_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBrowser_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextBrowser_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBrowser_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextBrowser_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextBrowser_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextBrowser) Delete() {
	C.QTextBrowser_Delete(this.h)
}

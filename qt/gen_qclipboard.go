package qt

/*

#include "gen_qclipboard.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QClipboard struct {
	h *C.QClipboard
	*QObject
}

func (this *QClipboard) cPointer() *C.QClipboard {
	if this == nil {
		return nil
	}
	return this.h
}

func newQClipboard(h *C.QClipboard) *QClipboard {
	if h == nil {
		return nil
	}
	return &QClipboard{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQClipboard_U(h unsafe.Pointer) *QClipboard {
	return newQClipboard((*C.QClipboard)(h))
}

func (this *QClipboard) MetaObject() *QMetaObject {
	ret := C.QClipboard_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QClipboard_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QClipboard_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QClipboard) Clear() {
	C.QClipboard_Clear(this.h)
}

func (this *QClipboard) SupportsSelection() bool {
	ret := C.QClipboard_SupportsSelection(this.h)
	return (bool)(ret)
}

func (this *QClipboard) SupportsFindBuffer() bool {
	ret := C.QClipboard_SupportsFindBuffer(this.h)
	return (bool)(ret)
}

func (this *QClipboard) OwnsSelection() bool {
	ret := C.QClipboard_OwnsSelection(this.h)
	return (bool)(ret)
}

func (this *QClipboard) OwnsClipboard() bool {
	ret := C.QClipboard_OwnsClipboard(this.h)
	return (bool)(ret)
}

func (this *QClipboard) OwnsFindBuffer() bool {
	ret := C.QClipboard_OwnsFindBuffer(this.h)
	return (bool)(ret)
}

func (this *QClipboard) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QClipboard) TextWithSubtype(subtype string) string {
	subtype_Cstring := C.CString(subtype)
	defer C.free(unsafe.Pointer(subtype_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_TextWithSubtype(this.h, subtype_Cstring, C.ulong(len(subtype)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QClipboard) SetText(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QClipboard_SetText(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QClipboard) MimeData() *QMimeData {
	ret := C.QClipboard_MimeData(this.h)
	return newQMimeData_U(unsafe.Pointer(ret))
}

func (this *QClipboard) SetMimeData(data *QMimeData) {
	C.QClipboard_SetMimeData(this.h, data.cPointer())
}

func (this *QClipboard) Image() *QImage {
	ret := C.QClipboard_Image(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QClipboard) Pixmap() *QPixmap {
	ret := C.QClipboard_Pixmap(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QClipboard) SetImage(param1 *QImage) {
	C.QClipboard_SetImage(this.h, param1.cPointer())
}

func (this *QClipboard) SetPixmap(param1 *QPixmap) {
	C.QClipboard_SetPixmap(this.h, param1.cPointer())
}

func (this *QClipboard) Changed(mode uintptr) {
	C.QClipboard_Changed(this.h, (C.uintptr_t)(mode))
}

func (this *QClipboard) OnChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QClipboard_connect_Changed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QClipboard) SelectionChanged() {
	C.QClipboard_SelectionChanged(this.h)
}

func (this *QClipboard) OnSelectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QClipboard_connect_SelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QClipboard) FindBufferChanged() {
	C.QClipboard_FindBufferChanged(this.h)
}

func (this *QClipboard) OnFindBufferChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QClipboard_connect_FindBufferChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QClipboard) DataChanged() {
	C.QClipboard_DataChanged(this.h)
}

func (this *QClipboard) OnDataChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QClipboard_connect_DataChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QClipboard_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QClipboard_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QClipboard_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QClipboard_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QClipboard) Clear1(mode uintptr) {
	C.QClipboard_Clear1(this.h, (C.uintptr_t)(mode))
}

func (this *QClipboard) Text1(mode uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_Text1(this.h, (C.uintptr_t)(mode), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QClipboard) Text2(subtype string, mode uintptr) string {
	subtype_Cstring := C.CString(subtype)
	defer C.free(unsafe.Pointer(subtype_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_Text2(this.h, subtype_Cstring, C.ulong(len(subtype)), (C.uintptr_t)(mode), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QClipboard) SetText2(param1 string, mode uintptr) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QClipboard_SetText2(this.h, param1_Cstring, C.ulong(len(param1)), (C.uintptr_t)(mode))
}

func (this *QClipboard) MimeData1(mode uintptr) *QMimeData {
	ret := C.QClipboard_MimeData1(this.h, (C.uintptr_t)(mode))
	return newQMimeData_U(unsafe.Pointer(ret))
}

func (this *QClipboard) SetMimeData2(data *QMimeData, mode uintptr) {
	C.QClipboard_SetMimeData2(this.h, data.cPointer(), (C.uintptr_t)(mode))
}

func (this *QClipboard) Image1(mode uintptr) *QImage {
	ret := C.QClipboard_Image1(this.h, (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QClipboard) Pixmap1(mode uintptr) *QPixmap {
	ret := C.QClipboard_Pixmap1(this.h, (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QClipboard) SetImage2(param1 *QImage, mode uintptr) {
	C.QClipboard_SetImage2(this.h, param1.cPointer(), (C.uintptr_t)(mode))
}

func (this *QClipboard) SetPixmap2(param1 *QPixmap, mode uintptr) {
	C.QClipboard_SetPixmap2(this.h, param1.cPointer(), (C.uintptr_t)(mode))
}

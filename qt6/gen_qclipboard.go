package qt6

/*

#include "gen_qclipboard.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

type QClipboard__Mode int

const (
	QClipboard__Clipboard  QClipboard__Mode = 0
	QClipboard__Selection  QClipboard__Mode = 1
	QClipboard__FindBuffer QClipboard__Mode = 2
	QClipboard__LastMode   QClipboard__Mode = 2
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

func (this *QClipboard) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQClipboard(h *C.QClipboard) *QClipboard {
	if h == nil {
		return nil
	}
	return &QClipboard{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQClipboard(h unsafe.Pointer) *QClipboard {
	return newQClipboard((*C.QClipboard)(h))
}

func (this *QClipboard) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QClipboard_MetaObject(this.h)))
}

func (this *QClipboard) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QClipboard_Metacast(this.h, param1_Cstring))
}

func QClipboard_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QClipboard_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QClipboard) Clear() {
	C.QClipboard_Clear(this.h)
}

func (this *QClipboard) SupportsSelection() bool {
	return (bool)(C.QClipboard_SupportsSelection(this.h))
}

func (this *QClipboard) SupportsFindBuffer() bool {
	return (bool)(C.QClipboard_SupportsFindBuffer(this.h))
}

func (this *QClipboard) OwnsSelection() bool {
	return (bool)(C.QClipboard_OwnsSelection(this.h))
}

func (this *QClipboard) OwnsClipboard() bool {
	return (bool)(C.QClipboard_OwnsClipboard(this.h))
}

func (this *QClipboard) OwnsFindBuffer() bool {
	return (bool)(C.QClipboard_OwnsFindBuffer(this.h))
}

func (this *QClipboard) Text() string {
	var _ms C.struct_miqt_string = C.QClipboard_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QClipboard) TextWithSubtype(subtype string) string {
	subtype_ms := C.struct_miqt_string{}
	subtype_ms.data = C.CString(subtype)
	subtype_ms.len = C.size_t(len(subtype))
	defer C.free(unsafe.Pointer(subtype_ms.data))
	var _ms C.struct_miqt_string = C.QClipboard_TextWithSubtype(this.h, subtype_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QClipboard) SetText(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QClipboard_SetText(this.h, param1_ms)
}

func (this *QClipboard) MimeData() *QMimeData {
	return UnsafeNewQMimeData(unsafe.Pointer(C.QClipboard_MimeData(this.h)))
}

func (this *QClipboard) SetMimeData(data *QMimeData) {
	C.QClipboard_SetMimeData(this.h, data.cPointer())
}

func (this *QClipboard) Image() *QImage {
	_ret := C.QClipboard_Image(this.h)
	_goptr := newQImage(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QClipboard) Pixmap() *QPixmap {
	_ret := C.QClipboard_Pixmap(this.h)
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QClipboard) SetImage(param1 *QImage) {
	C.QClipboard_SetImage(this.h, param1.cPointer())
}

func (this *QClipboard) SetPixmap(param1 *QPixmap) {
	C.QClipboard_SetPixmap(this.h, param1.cPointer())
}

func (this *QClipboard) Changed(mode QClipboard__Mode) {
	C.QClipboard_Changed(this.h, (C.int)(mode))
}
func (this *QClipboard) OnChanged(slot func(mode QClipboard__Mode)) {
	C.QClipboard_connect_Changed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QClipboard_Changed
func miqt_exec_callback_QClipboard_Changed(cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode QClipboard__Mode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QClipboard__Mode)(mode)

	gofunc(slotval1)
}

func (this *QClipboard) SelectionChanged() {
	C.QClipboard_SelectionChanged(this.h)
}
func (this *QClipboard) OnSelectionChanged(slot func()) {
	C.QClipboard_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QClipboard_SelectionChanged
func miqt_exec_callback_QClipboard_SelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QClipboard) FindBufferChanged() {
	C.QClipboard_FindBufferChanged(this.h)
}
func (this *QClipboard) OnFindBufferChanged(slot func()) {
	C.QClipboard_connect_FindBufferChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QClipboard_FindBufferChanged
func miqt_exec_callback_QClipboard_FindBufferChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QClipboard) DataChanged() {
	C.QClipboard_DataChanged(this.h)
}
func (this *QClipboard) OnDataChanged(slot func()) {
	C.QClipboard_connect_DataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QClipboard_DataChanged
func miqt_exec_callback_QClipboard_DataChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QClipboard_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QClipboard_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QClipboard_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QClipboard_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QClipboard) Clear1(mode QClipboard__Mode) {
	C.QClipboard_Clear1(this.h, (C.int)(mode))
}

func (this *QClipboard) Text1(mode QClipboard__Mode) string {
	var _ms C.struct_miqt_string = C.QClipboard_Text1(this.h, (C.int)(mode))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QClipboard) Text2(subtype string, mode QClipboard__Mode) string {
	subtype_ms := C.struct_miqt_string{}
	subtype_ms.data = C.CString(subtype)
	subtype_ms.len = C.size_t(len(subtype))
	defer C.free(unsafe.Pointer(subtype_ms.data))
	var _ms C.struct_miqt_string = C.QClipboard_Text2(this.h, subtype_ms, (C.int)(mode))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QClipboard) SetText2(param1 string, mode QClipboard__Mode) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QClipboard_SetText2(this.h, param1_ms, (C.int)(mode))
}

func (this *QClipboard) MimeData1(mode QClipboard__Mode) *QMimeData {
	return UnsafeNewQMimeData(unsafe.Pointer(C.QClipboard_MimeData1(this.h, (C.int)(mode))))
}

func (this *QClipboard) SetMimeData2(data *QMimeData, mode QClipboard__Mode) {
	C.QClipboard_SetMimeData2(this.h, data.cPointer(), (C.int)(mode))
}

func (this *QClipboard) Image1(mode QClipboard__Mode) *QImage {
	_ret := C.QClipboard_Image1(this.h, (C.int)(mode))
	_goptr := newQImage(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QClipboard) Pixmap1(mode QClipboard__Mode) *QPixmap {
	_ret := C.QClipboard_Pixmap1(this.h, (C.int)(mode))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QClipboard) SetImage2(param1 *QImage, mode QClipboard__Mode) {
	C.QClipboard_SetImage2(this.h, param1.cPointer(), (C.int)(mode))
}

func (this *QClipboard) SetPixmap2(param1 *QPixmap, mode QClipboard__Mode) {
	C.QClipboard_SetPixmap2(this.h, param1.cPointer(), (C.int)(mode))
}

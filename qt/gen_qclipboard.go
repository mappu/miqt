package qt

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
	QClipboard__Mode__Clipboard  QClipboard__Mode = 0
	QClipboard__Mode__Selection  QClipboard__Mode = 1
	QClipboard__Mode__FindBuffer QClipboard__Mode = 2
	QClipboard__Mode__LastMode   QClipboard__Mode = 2
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
	_ret := C.QClipboard_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QClipboard_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QClipboard_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QClipboard_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QClipboard_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QClipboard) Clear() {
	C.QClipboard_Clear(this.h)
}

func (this *QClipboard) SupportsSelection() bool {
	_ret := C.QClipboard_SupportsSelection(this.h)
	return (bool)(_ret)
}

func (this *QClipboard) SupportsFindBuffer() bool {
	_ret := C.QClipboard_SupportsFindBuffer(this.h)
	return (bool)(_ret)
}

func (this *QClipboard) OwnsSelection() bool {
	_ret := C.QClipboard_OwnsSelection(this.h)
	return (bool)(_ret)
}

func (this *QClipboard) OwnsClipboard() bool {
	_ret := C.QClipboard_OwnsClipboard(this.h)
	return (bool)(_ret)
}

func (this *QClipboard) OwnsFindBuffer() bool {
	_ret := C.QClipboard_OwnsFindBuffer(this.h)
	return (bool)(_ret)
}

func (this *QClipboard) Text() string {
	var _ms *C.struct_miqt_string = C.QClipboard_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QClipboard) TextWithSubtype(subtype string) string {
	subtype_ms := miqt_strdupg(subtype)
	defer C.free(subtype_ms)
	var _ms *C.struct_miqt_string = C.QClipboard_TextWithSubtype(this.h, (*C.struct_miqt_string)(subtype_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QClipboard) SetText(param1 string) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QClipboard_SetText(this.h, (*C.struct_miqt_string)(param1_ms))
}

func (this *QClipboard) MimeData() *QMimeData {
	_ret := C.QClipboard_MimeData(this.h)
	return newQMimeData_U(unsafe.Pointer(_ret))
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
	C.QClipboard_Changed(this.h, (C.uintptr_t)(mode))
}
func (this *QClipboard) OnChanged(slot func(mode QClipboard__Mode)) {
	C.QClipboard_connect_Changed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QClipboard_Changed
func miqt_exec_callback_QClipboard_Changed(cb *C.void, mode C.uintptr_t) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(mode QClipboard__Mode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	mode_ret := mode
	slotval1 := (QClipboard__Mode)(mode_ret)

	gofunc(slotval1)
}

func (this *QClipboard) SelectionChanged() {
	C.QClipboard_SelectionChanged(this.h)
}
func (this *QClipboard) OnSelectionChanged(slot func()) {
	C.QClipboard_connect_SelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QClipboard_SelectionChanged
func miqt_exec_callback_QClipboard_SelectionChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QClipboard) FindBufferChanged() {
	C.QClipboard_FindBufferChanged(this.h)
}
func (this *QClipboard) OnFindBufferChanged(slot func()) {
	C.QClipboard_connect_FindBufferChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QClipboard_FindBufferChanged
func miqt_exec_callback_QClipboard_FindBufferChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QClipboard) DataChanged() {
	C.QClipboard_DataChanged(this.h)
}
func (this *QClipboard) OnDataChanged(slot func()) {
	C.QClipboard_connect_DataChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QClipboard_DataChanged
func miqt_exec_callback_QClipboard_DataChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
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
	var _ms *C.struct_miqt_string = C.QClipboard_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QClipboard_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QClipboard_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QClipboard_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QClipboard_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QClipboard_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QClipboard_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QClipboard) Clear1(mode QClipboard__Mode) {
	C.QClipboard_Clear1(this.h, (C.uintptr_t)(mode))
}

func (this *QClipboard) Text1(mode QClipboard__Mode) string {
	var _ms *C.struct_miqt_string = C.QClipboard_Text1(this.h, (C.uintptr_t)(mode))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QClipboard) Text2(subtype string, mode QClipboard__Mode) string {
	subtype_ms := miqt_strdupg(subtype)
	defer C.free(subtype_ms)
	var _ms *C.struct_miqt_string = C.QClipboard_Text2(this.h, (*C.struct_miqt_string)(subtype_ms), (C.uintptr_t)(mode))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QClipboard) SetText2(param1 string, mode QClipboard__Mode) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QClipboard_SetText2(this.h, (*C.struct_miqt_string)(param1_ms), (C.uintptr_t)(mode))
}

func (this *QClipboard) MimeData1(mode QClipboard__Mode) *QMimeData {
	_ret := C.QClipboard_MimeData1(this.h, (C.uintptr_t)(mode))
	return newQMimeData_U(unsafe.Pointer(_ret))
}

func (this *QClipboard) SetMimeData2(data *QMimeData, mode QClipboard__Mode) {
	C.QClipboard_SetMimeData2(this.h, data.cPointer(), (C.uintptr_t)(mode))
}

func (this *QClipboard) Image1(mode QClipboard__Mode) *QImage {
	_ret := C.QClipboard_Image1(this.h, (C.uintptr_t)(mode))
	_goptr := newQImage(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QClipboard) Pixmap1(mode QClipboard__Mode) *QPixmap {
	_ret := C.QClipboard_Pixmap1(this.h, (C.uintptr_t)(mode))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QClipboard) SetImage2(param1 *QImage, mode QClipboard__Mode) {
	C.QClipboard_SetImage2(this.h, param1.cPointer(), (C.uintptr_t)(mode))
}

func (this *QClipboard) SetPixmap2(param1 *QPixmap, mode QClipboard__Mode) {
	C.QClipboard_SetPixmap2(this.h, param1.cPointer(), (C.uintptr_t)(mode))
}

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

// newQClipboard constructs the type using only CGO pointers.
func newQClipboard(h *C.QClipboard) *QClipboard {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QClipboard_virtbase(h, &outptr_QObject)

	return &QClipboard{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQClipboard constructs the type using only unsafe pointers.
func UnsafeNewQClipboard(h unsafe.Pointer) *QClipboard {
	return newQClipboard((*C.QClipboard)(h))
}

func (this *QClipboard) MetaObject() *QMetaObject {
	return newQMetaObject(C.QClipboard_metaObject(this.h))
}

func (this *QClipboard) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QClipboard_metacast(this.h, param1_Cstring))
}

func QClipboard_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QClipboard_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QClipboard) Clear() {
	C.QClipboard_clear(this.h)
}

func (this *QClipboard) SupportsSelection() bool {
	return (bool)(C.QClipboard_supportsSelection(this.h))
}

func (this *QClipboard) SupportsFindBuffer() bool {
	return (bool)(C.QClipboard_supportsFindBuffer(this.h))
}

func (this *QClipboard) OwnsSelection() bool {
	return (bool)(C.QClipboard_ownsSelection(this.h))
}

func (this *QClipboard) OwnsClipboard() bool {
	return (bool)(C.QClipboard_ownsClipboard(this.h))
}

func (this *QClipboard) OwnsFindBuffer() bool {
	return (bool)(C.QClipboard_ownsFindBuffer(this.h))
}

func (this *QClipboard) Text() string {
	var _ms C.struct_miqt_string = C.QClipboard_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QClipboard) TextWithSubtype(subtype string) string {
	subtype_ms := C.struct_miqt_string{}
	subtype_ms.data = C.CString(subtype)
	subtype_ms.len = C.size_t(len(subtype))
	defer C.free(unsafe.Pointer(subtype_ms.data))
	var _ms C.struct_miqt_string = C.QClipboard_textWithSubtype(this.h, subtype_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QClipboard) SetText(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QClipboard_setText(this.h, param1_ms)
}

func (this *QClipboard) MimeData() *QMimeData {
	return newQMimeData(C.QClipboard_mimeData(this.h))
}

func (this *QClipboard) SetMimeData(data *QMimeData) {
	C.QClipboard_setMimeData(this.h, data.cPointer())
}

func (this *QClipboard) Image() *QImage {
	_goptr := newQImage(C.QClipboard_image(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QClipboard) Pixmap() *QPixmap {
	_goptr := newQPixmap(C.QClipboard_pixmap(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QClipboard) SetImage(param1 *QImage) {
	C.QClipboard_setImage(this.h, param1.cPointer())
}

func (this *QClipboard) SetPixmap(param1 *QPixmap) {
	C.QClipboard_setPixmap(this.h, param1.cPointer())
}

func (this *QClipboard) Changed(mode QClipboard__Mode) {
	C.QClipboard_changed(this.h, (C.int)(mode))
}
func (this *QClipboard) OnChanged(slot func(mode QClipboard__Mode)) {
	C.QClipboard_connect_changed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QClipboard_changed
func miqt_exec_callback_QClipboard_changed(cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode QClipboard__Mode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QClipboard__Mode)(mode)

	gofunc(slotval1)
}

func (this *QClipboard) SelectionChanged() {
	C.QClipboard_selectionChanged(this.h)
}
func (this *QClipboard) OnSelectionChanged(slot func()) {
	C.QClipboard_connect_selectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QClipboard_selectionChanged
func miqt_exec_callback_QClipboard_selectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QClipboard) FindBufferChanged() {
	C.QClipboard_findBufferChanged(this.h)
}
func (this *QClipboard) OnFindBufferChanged(slot func()) {
	C.QClipboard_connect_findBufferChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QClipboard_findBufferChanged
func miqt_exec_callback_QClipboard_findBufferChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QClipboard) DataChanged() {
	C.QClipboard_dataChanged(this.h)
}
func (this *QClipboard) OnDataChanged(slot func()) {
	C.QClipboard_connect_dataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QClipboard_dataChanged
func miqt_exec_callback_QClipboard_dataChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QClipboard_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QClipboard_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QClipboard_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QClipboard) Clear1(mode QClipboard__Mode) {
	C.QClipboard_clear1(this.h, (C.int)(mode))
}

func (this *QClipboard) Text1(mode QClipboard__Mode) string {
	var _ms C.struct_miqt_string = C.QClipboard_text1(this.h, (C.int)(mode))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QClipboard) Text2(subtype string, mode QClipboard__Mode) string {
	subtype_ms := C.struct_miqt_string{}
	subtype_ms.data = C.CString(subtype)
	subtype_ms.len = C.size_t(len(subtype))
	defer C.free(unsafe.Pointer(subtype_ms.data))
	var _ms C.struct_miqt_string = C.QClipboard_text2(this.h, subtype_ms, (C.int)(mode))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QClipboard) SetText2(param1 string, mode QClipboard__Mode) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QClipboard_setText2(this.h, param1_ms, (C.int)(mode))
}

func (this *QClipboard) MimeData1(mode QClipboard__Mode) *QMimeData {
	return newQMimeData(C.QClipboard_mimeData1(this.h, (C.int)(mode)))
}

func (this *QClipboard) SetMimeData2(data *QMimeData, mode QClipboard__Mode) {
	C.QClipboard_setMimeData2(this.h, data.cPointer(), (C.int)(mode))
}

func (this *QClipboard) Image1(mode QClipboard__Mode) *QImage {
	_goptr := newQImage(C.QClipboard_image1(this.h, (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QClipboard) Pixmap1(mode QClipboard__Mode) *QPixmap {
	_goptr := newQPixmap(C.QClipboard_pixmap1(this.h, (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QClipboard) SetImage2(param1 *QImage, mode QClipboard__Mode) {
	C.QClipboard_setImage2(this.h, param1.cPointer(), (C.int)(mode))
}

func (this *QClipboard) SetPixmap2(param1 *QPixmap, mode QClipboard__Mode) {
	C.QClipboard_setPixmap2(this.h, param1.cPointer(), (C.int)(mode))
}

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

func newQLabel(h *C.QLabel) *QLabel {
	if h == nil {
		return nil
	}
	return &QLabel{h: h, QFrame: newQFrame_U(unsafe.Pointer(h))}
}

func newQLabel_U(h unsafe.Pointer) *QLabel {
	return newQLabel((*C.QLabel)(h))
}

// NewQLabel constructs a new QLabel object.
func NewQLabel() *QLabel {
	ret := C.QLabel_new()
	return newQLabel(ret)
}

// NewQLabel2 constructs a new QLabel object.
func NewQLabel2(text string) *QLabel {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QLabel_new2((*C.struct_miqt_string)(text_ms))
	return newQLabel(ret)
}

// NewQLabel3 constructs a new QLabel object.
func NewQLabel3(parent *QWidget) *QLabel {
	ret := C.QLabel_new3(parent.cPointer())
	return newQLabel(ret)
}

// NewQLabel4 constructs a new QLabel object.
func NewQLabel4(parent *QWidget, f int) *QLabel {
	ret := C.QLabel_new4(parent.cPointer(), f)
	return newQLabel(ret)
}

// NewQLabel5 constructs a new QLabel object.
func NewQLabel5(text string, parent *QWidget) *QLabel {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QLabel_new5((*C.struct_miqt_string)(text_ms), parent.cPointer())
	return newQLabel(ret)
}

// NewQLabel6 constructs a new QLabel object.
func NewQLabel6(text string, parent *QWidget, f int) *QLabel {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QLabel_new6((*C.struct_miqt_string)(text_ms), parent.cPointer(), f)
	return newQLabel(ret)
}

func (this *QLabel) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QLabel_MetaObject(this.h)))
}

func QLabel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QLabel_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLabel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QLabel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLabel) Text() string {
	var _ms *C.struct_miqt_string = C.QLabel_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLabel) Pixmap() *QPixmap {
	return newQPixmap_U(unsafe.Pointer(C.QLabel_Pixmap(this.h)))
}

func (this *QLabel) PixmapWithQtReturnByValueConstant(param1 ReturnByValueConstant) *QPixmap {
	_ret := C.QLabel_PixmapWithQtReturnByValueConstant(this.h, (C.int)(param1))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLabel) Picture() *QPicture {
	return newQPicture_U(unsafe.Pointer(C.QLabel_Picture(this.h)))
}

func (this *QLabel) PictureWithQtReturnByValueConstant(param1 ReturnByValueConstant) *QPicture {
	_ret := C.QLabel_PictureWithQtReturnByValueConstant(this.h, (C.int)(param1))
	_goptr := newQPicture(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLabel) Movie() *QMovie {
	return newQMovie_U(unsafe.Pointer(C.QLabel_Movie(this.h)))
}

func (this *QLabel) TextFormat() TextFormat {
	return (TextFormat)(C.QLabel_TextFormat(this.h))
}

func (this *QLabel) SetTextFormat(textFormat TextFormat) {
	C.QLabel_SetTextFormat(this.h, (C.int)(textFormat))
}

func (this *QLabel) Alignment() int {
	return (int)(C.QLabel_Alignment(this.h))
}

func (this *QLabel) SetAlignment(alignment int) {
	C.QLabel_SetAlignment(this.h, alignment)
}

func (this *QLabel) SetWordWrap(on bool) {
	C.QLabel_SetWordWrap(this.h, (C.bool)(on))
}

func (this *QLabel) WordWrap() bool {
	return (bool)(C.QLabel_WordWrap(this.h))
}

func (this *QLabel) Indent() int {
	return (int)(C.QLabel_Indent(this.h))
}

func (this *QLabel) SetIndent(indent int) {
	C.QLabel_SetIndent(this.h, (C.int)(indent))
}

func (this *QLabel) Margin() int {
	return (int)(C.QLabel_Margin(this.h))
}

func (this *QLabel) SetMargin(margin int) {
	C.QLabel_SetMargin(this.h, (C.int)(margin))
}

func (this *QLabel) HasScaledContents() bool {
	return (bool)(C.QLabel_HasScaledContents(this.h))
}

func (this *QLabel) SetScaledContents(scaledContents bool) {
	C.QLabel_SetScaledContents(this.h, (C.bool)(scaledContents))
}

func (this *QLabel) SizeHint() *QSize {
	_ret := C.QLabel_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLabel) MinimumSizeHint() *QSize {
	_ret := C.QLabel_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLabel) SetBuddy(buddy *QWidget) {
	C.QLabel_SetBuddy(this.h, buddy.cPointer())
}

func (this *QLabel) Buddy() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QLabel_Buddy(this.h)))
}

func (this *QLabel) HeightForWidth(param1 int) int {
	return (int)(C.QLabel_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QLabel) OpenExternalLinks() bool {
	return (bool)(C.QLabel_OpenExternalLinks(this.h))
}

func (this *QLabel) SetOpenExternalLinks(open bool) {
	C.QLabel_SetOpenExternalLinks(this.h, (C.bool)(open))
}

func (this *QLabel) SetTextInteractionFlags(flags int) {
	C.QLabel_SetTextInteractionFlags(this.h, flags)
}

func (this *QLabel) TextInteractionFlags() int {
	return (int)(C.QLabel_TextInteractionFlags(this.h))
}

func (this *QLabel) SetSelection(param1 int, param2 int) {
	C.QLabel_SetSelection(this.h, (C.int)(param1), (C.int)(param2))
}

func (this *QLabel) HasSelectedText() bool {
	return (bool)(C.QLabel_HasSelectedText(this.h))
}

func (this *QLabel) SelectedText() string {
	var _ms *C.struct_miqt_string = C.QLabel_SelectedText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLabel) SelectionStart() int {
	return (int)(C.QLabel_SelectionStart(this.h))
}

func (this *QLabel) SetText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QLabel_SetText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QLabel) SetPixmap(pixmap *QPixmap) {
	C.QLabel_SetPixmap(this.h, pixmap.cPointer())
}

func (this *QLabel) SetPicture(picture *QPicture) {
	C.QLabel_SetPicture(this.h, picture.cPointer())
}

func (this *QLabel) SetMovie(movie *QMovie) {
	C.QLabel_SetMovie(this.h, movie.cPointer())
}

func (this *QLabel) SetNum(num int) {
	C.QLabel_SetNum(this.h, (C.int)(num))
}

func (this *QLabel) SetNumWithNum(num float64) {
	C.QLabel_SetNumWithNum(this.h, (C.double)(num))
}

func (this *QLabel) Clear() {
	C.QLabel_Clear(this.h)
}

func (this *QLabel) LinkActivated(link string) {
	link_ms := miqt_strdupg(link)
	defer C.free(link_ms)
	C.QLabel_LinkActivated(this.h, (*C.struct_miqt_string)(link_ms))
}
func (this *QLabel) OnLinkActivated(slot func(link string)) {
	C.QLabel_connect_LinkActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QLabel_LinkActivated
func miqt_exec_callback_QLabel_LinkActivated(cb *C.void, link *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(link string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var link_ms *C.struct_miqt_string = link
	link_ret := C.GoStringN(&link_ms.data, C.int(int64(link_ms.len)))
	C.free(unsafe.Pointer(link_ms))
	slotval1 := link_ret

	gofunc(slotval1)
}

func (this *QLabel) LinkHovered(link string) {
	link_ms := miqt_strdupg(link)
	defer C.free(link_ms)
	C.QLabel_LinkHovered(this.h, (*C.struct_miqt_string)(link_ms))
}
func (this *QLabel) OnLinkHovered(slot func(link string)) {
	C.QLabel_connect_LinkHovered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QLabel_LinkHovered
func miqt_exec_callback_QLabel_LinkHovered(cb *C.void, link *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(link string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var link_ms *C.struct_miqt_string = link
	link_ret := C.GoStringN(&link_ms.data, C.int(int64(link_ms.len)))
	C.free(unsafe.Pointer(link_ms))
	slotval1 := link_ret

	gofunc(slotval1)
}

func QLabel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QLabel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLabel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QLabel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLabel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QLabel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLabel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QLabel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QLabel) Delete() {
	C.QLabel_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLabel) GoGC() {
	runtime.SetFinalizer(this, func(this *QLabel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

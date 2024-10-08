package qt

/*

#include "gen_qpushbutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPushButton struct {
	h *C.QPushButton
	*QAbstractButton
}

func (this *QPushButton) cPointer() *C.QPushButton {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPushButton(h *C.QPushButton) *QPushButton {
	if h == nil {
		return nil
	}
	return &QPushButton{h: h, QAbstractButton: newQAbstractButton_U(unsafe.Pointer(h))}
}

func newQPushButton_U(h unsafe.Pointer) *QPushButton {
	return newQPushButton((*C.QPushButton)(h))
}

// NewQPushButton constructs a new QPushButton object.
func NewQPushButton() *QPushButton {
	ret := C.QPushButton_new()
	return newQPushButton(ret)
}

// NewQPushButton2 constructs a new QPushButton object.
func NewQPushButton2(text string) *QPushButton {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QPushButton_new2((*C.struct_miqt_string)(text_ms))
	return newQPushButton(ret)
}

// NewQPushButton3 constructs a new QPushButton object.
func NewQPushButton3(icon *QIcon, text string) *QPushButton {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QPushButton_new3(icon.cPointer(), (*C.struct_miqt_string)(text_ms))
	return newQPushButton(ret)
}

// NewQPushButton4 constructs a new QPushButton object.
func NewQPushButton4(parent *QWidget) *QPushButton {
	ret := C.QPushButton_new4(parent.cPointer())
	return newQPushButton(ret)
}

// NewQPushButton5 constructs a new QPushButton object.
func NewQPushButton5(text string, parent *QWidget) *QPushButton {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QPushButton_new5((*C.struct_miqt_string)(text_ms), parent.cPointer())
	return newQPushButton(ret)
}

// NewQPushButton6 constructs a new QPushButton object.
func NewQPushButton6(icon *QIcon, text string, parent *QWidget) *QPushButton {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QPushButton_new6(icon.cPointer(), (*C.struct_miqt_string)(text_ms), parent.cPointer())
	return newQPushButton(ret)
}

func (this *QPushButton) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QPushButton_MetaObject(this.h)))
}

func (this *QPushButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QPushButton_Metacast(this.h, param1_Cstring)
}

func QPushButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPushButton_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPushButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPushButton_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPushButton) SizeHint() *QSize {
	_ret := C.QPushButton_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPushButton) MinimumSizeHint() *QSize {
	_ret := C.QPushButton_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPushButton) AutoDefault() bool {
	return (bool)(C.QPushButton_AutoDefault(this.h))
}

func (this *QPushButton) SetAutoDefault(autoDefault bool) {
	C.QPushButton_SetAutoDefault(this.h, (C.bool)(autoDefault))
}

func (this *QPushButton) IsDefault() bool {
	return (bool)(C.QPushButton_IsDefault(this.h))
}

func (this *QPushButton) SetDefault(defaultVal bool) {
	C.QPushButton_SetDefault(this.h, (C.bool)(defaultVal))
}

func (this *QPushButton) SetMenu(menu *QMenu) {
	C.QPushButton_SetMenu(this.h, menu.cPointer())
}

func (this *QPushButton) Menu() *QMenu {
	return newQMenu_U(unsafe.Pointer(C.QPushButton_Menu(this.h)))
}

func (this *QPushButton) SetFlat(flat bool) {
	C.QPushButton_SetFlat(this.h, (C.bool)(flat))
}

func (this *QPushButton) IsFlat() bool {
	return (bool)(C.QPushButton_IsFlat(this.h))
}

func (this *QPushButton) ShowMenu() {
	C.QPushButton_ShowMenu(this.h)
}

func QPushButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPushButton_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPushButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPushButton_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPushButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPushButton_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPushButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPushButton_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPushButton) Delete() {
	C.QPushButton_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPushButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QPushButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

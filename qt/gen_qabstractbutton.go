package qt

/*

#include "gen_qabstractbutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractButton struct {
	h *C.QAbstractButton
	*QWidget
}

func (this *QAbstractButton) cPointer() *C.QAbstractButton {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractButton(h *C.QAbstractButton) *QAbstractButton {
	if h == nil {
		return nil
	}
	return &QAbstractButton{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQAbstractButton_U(h unsafe.Pointer) *QAbstractButton {
	return newQAbstractButton((*C.QAbstractButton)(h))
}

func (this *QAbstractButton) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QAbstractButton_MetaObject(this.h)))
}

func QAbstractButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractButton_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractButton_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractButton) SetText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QAbstractButton_SetText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QAbstractButton) Text() string {
	var _ms *C.struct_miqt_string = C.QAbstractButton_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractButton) SetIcon(icon *QIcon) {
	C.QAbstractButton_SetIcon(this.h, icon.cPointer())
}

func (this *QAbstractButton) Icon() *QIcon {
	_ret := C.QAbstractButton_Icon(this.h)
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractButton) IconSize() *QSize {
	_ret := C.QAbstractButton_IconSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractButton) SetShortcut(key *QKeySequence) {
	C.QAbstractButton_SetShortcut(this.h, key.cPointer())
}

func (this *QAbstractButton) Shortcut() *QKeySequence {
	_ret := C.QAbstractButton_Shortcut(this.h)
	_goptr := newQKeySequence(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractButton) SetCheckable(checkable bool) {
	C.QAbstractButton_SetCheckable(this.h, (C.bool)(checkable))
}

func (this *QAbstractButton) IsCheckable() bool {
	return (bool)(C.QAbstractButton_IsCheckable(this.h))
}

func (this *QAbstractButton) IsChecked() bool {
	return (bool)(C.QAbstractButton_IsChecked(this.h))
}

func (this *QAbstractButton) SetDown(down bool) {
	C.QAbstractButton_SetDown(this.h, (C.bool)(down))
}

func (this *QAbstractButton) IsDown() bool {
	return (bool)(C.QAbstractButton_IsDown(this.h))
}

func (this *QAbstractButton) SetAutoRepeat(autoRepeat bool) {
	C.QAbstractButton_SetAutoRepeat(this.h, (C.bool)(autoRepeat))
}

func (this *QAbstractButton) AutoRepeat() bool {
	return (bool)(C.QAbstractButton_AutoRepeat(this.h))
}

func (this *QAbstractButton) SetAutoRepeatDelay(autoRepeatDelay int) {
	C.QAbstractButton_SetAutoRepeatDelay(this.h, (C.int)(autoRepeatDelay))
}

func (this *QAbstractButton) AutoRepeatDelay() int {
	return (int)(C.QAbstractButton_AutoRepeatDelay(this.h))
}

func (this *QAbstractButton) SetAutoRepeatInterval(autoRepeatInterval int) {
	C.QAbstractButton_SetAutoRepeatInterval(this.h, (C.int)(autoRepeatInterval))
}

func (this *QAbstractButton) AutoRepeatInterval() int {
	return (int)(C.QAbstractButton_AutoRepeatInterval(this.h))
}

func (this *QAbstractButton) SetAutoExclusive(autoExclusive bool) {
	C.QAbstractButton_SetAutoExclusive(this.h, (C.bool)(autoExclusive))
}

func (this *QAbstractButton) AutoExclusive() bool {
	return (bool)(C.QAbstractButton_AutoExclusive(this.h))
}

func (this *QAbstractButton) Group() *QButtonGroup {
	return newQButtonGroup_U(unsafe.Pointer(C.QAbstractButton_Group(this.h)))
}

func (this *QAbstractButton) SetIconSize(size *QSize) {
	C.QAbstractButton_SetIconSize(this.h, size.cPointer())
}

func (this *QAbstractButton) AnimateClick() {
	C.QAbstractButton_AnimateClick(this.h)
}

func (this *QAbstractButton) Click() {
	C.QAbstractButton_Click(this.h)
}

func (this *QAbstractButton) Toggle() {
	C.QAbstractButton_Toggle(this.h)
}

func (this *QAbstractButton) SetChecked(checked bool) {
	C.QAbstractButton_SetChecked(this.h, (C.bool)(checked))
}

func (this *QAbstractButton) Pressed() {
	C.QAbstractButton_Pressed(this.h)
}
func (this *QAbstractButton) OnPressed(slot func()) {
	C.QAbstractButton_connect_Pressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractButton_Pressed
func miqt_exec_callback_QAbstractButton_Pressed(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractButton) Released() {
	C.QAbstractButton_Released(this.h)
}
func (this *QAbstractButton) OnReleased(slot func()) {
	C.QAbstractButton_connect_Released(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractButton_Released
func miqt_exec_callback_QAbstractButton_Released(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractButton) Clicked() {
	C.QAbstractButton_Clicked(this.h)
}
func (this *QAbstractButton) OnClicked(slot func()) {
	C.QAbstractButton_connect_Clicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractButton_Clicked
func miqt_exec_callback_QAbstractButton_Clicked(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractButton) Toggled(checked bool) {
	C.QAbstractButton_Toggled(this.h, (C.bool)(checked))
}
func (this *QAbstractButton) OnToggled(slot func(checked bool)) {
	C.QAbstractButton_connect_Toggled(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractButton_Toggled
func miqt_exec_callback_QAbstractButton_Toggled(cb *C.void, checked C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(checked bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(checked)

	gofunc(slotval1)
}

func QAbstractButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractButton_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractButton_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractButton_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractButton_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractButton) AnimateClick1(msec int) {
	C.QAbstractButton_AnimateClick1(this.h, (C.int)(msec))
}

func (this *QAbstractButton) Clicked1(checked bool) {
	C.QAbstractButton_Clicked1(this.h, (C.bool)(checked))
}
func (this *QAbstractButton) OnClicked1(slot func(checked bool)) {
	C.QAbstractButton_connect_Clicked1(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractButton_Clicked1
func miqt_exec_callback_QAbstractButton_Clicked1(cb *C.void, checked C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(checked bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(checked)

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QAbstractButton) Delete() {
	C.QAbstractButton_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

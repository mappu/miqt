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
	ret := C.QAbstractButton_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractButton_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractButton_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractButton) SetText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QAbstractButton_SetText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QAbstractButton) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractButton_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractButton) SetIcon(icon *QIcon) {
	C.QAbstractButton_SetIcon(this.h, icon.cPointer())
}

func (this *QAbstractButton) Icon() *QIcon {
	ret := C.QAbstractButton_Icon(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractButton) IconSize() *QSize {
	ret := C.QAbstractButton_IconSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractButton) SetShortcut(key *QKeySequence) {
	C.QAbstractButton_SetShortcut(this.h, key.cPointer())
}

func (this *QAbstractButton) Shortcut() *QKeySequence {
	ret := C.QAbstractButton_Shortcut(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQKeySequence(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QKeySequence) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractButton) SetCheckable(checkable bool) {
	C.QAbstractButton_SetCheckable(this.h, (C.bool)(checkable))
}

func (this *QAbstractButton) IsCheckable() bool {
	ret := C.QAbstractButton_IsCheckable(this.h)
	return (bool)(ret)
}

func (this *QAbstractButton) IsChecked() bool {
	ret := C.QAbstractButton_IsChecked(this.h)
	return (bool)(ret)
}

func (this *QAbstractButton) SetDown(down bool) {
	C.QAbstractButton_SetDown(this.h, (C.bool)(down))
}

func (this *QAbstractButton) IsDown() bool {
	ret := C.QAbstractButton_IsDown(this.h)
	return (bool)(ret)
}

func (this *QAbstractButton) SetAutoRepeat(autoRepeat bool) {
	C.QAbstractButton_SetAutoRepeat(this.h, (C.bool)(autoRepeat))
}

func (this *QAbstractButton) AutoRepeat() bool {
	ret := C.QAbstractButton_AutoRepeat(this.h)
	return (bool)(ret)
}

func (this *QAbstractButton) SetAutoRepeatDelay(autoRepeatDelay int) {
	C.QAbstractButton_SetAutoRepeatDelay(this.h, (C.int)(autoRepeatDelay))
}

func (this *QAbstractButton) AutoRepeatDelay() int {
	ret := C.QAbstractButton_AutoRepeatDelay(this.h)
	return (int)(ret)
}

func (this *QAbstractButton) SetAutoRepeatInterval(autoRepeatInterval int) {
	C.QAbstractButton_SetAutoRepeatInterval(this.h, (C.int)(autoRepeatInterval))
}

func (this *QAbstractButton) AutoRepeatInterval() int {
	ret := C.QAbstractButton_AutoRepeatInterval(this.h)
	return (int)(ret)
}

func (this *QAbstractButton) SetAutoExclusive(autoExclusive bool) {
	C.QAbstractButton_SetAutoExclusive(this.h, (C.bool)(autoExclusive))
}

func (this *QAbstractButton) AutoExclusive() bool {
	ret := C.QAbstractButton_AutoExclusive(this.h)
	return (bool)(ret)
}

func (this *QAbstractButton) Group() *QButtonGroup {
	ret := C.QAbstractButton_Group(this.h)
	return newQButtonGroup_U(unsafe.Pointer(ret))
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
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractButton_connect_Pressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractButton) Released() {
	C.QAbstractButton_Released(this.h)
}

func (this *QAbstractButton) OnReleased(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractButton_connect_Released(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractButton) Clicked() {
	C.QAbstractButton_Clicked(this.h)
}

func (this *QAbstractButton) Toggled(checked bool) {
	C.QAbstractButton_Toggled(this.h, (C.bool)(checked))
}

func (this *QAbstractButton) OnToggled(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractButton_connect_Toggled(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QAbstractButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractButton_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractButton_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractButton_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractButton_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractButton) AnimateClick1(msec int) {
	C.QAbstractButton_AnimateClick1(this.h, (C.int)(msec))
}

func (this *QAbstractButton) Clicked1(checked bool) {
	C.QAbstractButton_Clicked1(this.h, (C.bool)(checked))
}

func (this *QAbstractButton) OnClicked1(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractButton_connect_Clicked1(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractButton) Delete() {
	C.QAbstractButton_Delete(this.h)
}

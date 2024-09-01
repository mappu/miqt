package qt

/*

#include "gen_qbuttongroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

type QButtonGroup struct {
	h *C.QButtonGroup
	*QObject
}

func (this *QButtonGroup) cPointer() *C.QButtonGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func newQButtonGroup(h *C.QButtonGroup) *QButtonGroup {
	if h == nil {
		return nil
	}
	return &QButtonGroup{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQButtonGroup_U(h unsafe.Pointer) *QButtonGroup {
	return newQButtonGroup((*C.QButtonGroup)(h))
}

// NewQButtonGroup constructs a new QButtonGroup object.
func NewQButtonGroup() *QButtonGroup {
	ret := C.QButtonGroup_new()
	return newQButtonGroup(ret)
}

// NewQButtonGroup2 constructs a new QButtonGroup object.
func NewQButtonGroup2(parent *QObject) *QButtonGroup {
	ret := C.QButtonGroup_new2(parent.cPointer())
	return newQButtonGroup(ret)
}

func (this *QButtonGroup) MetaObject() *QMetaObject {
	ret := C.QButtonGroup_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QButtonGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QButtonGroup_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QButtonGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QButtonGroup_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QButtonGroup) SetExclusive(exclusive bool) {
	C.QButtonGroup_SetExclusive(this.h, (C.bool)(exclusive))
}

func (this *QButtonGroup) Exclusive() bool {
	ret := C.QButtonGroup_Exclusive(this.h)
	return (bool)(ret)
}

func (this *QButtonGroup) AddButton(param1 *QAbstractButton) {
	C.QButtonGroup_AddButton(this.h, param1.cPointer())
}

func (this *QButtonGroup) RemoveButton(param1 *QAbstractButton) {
	C.QButtonGroup_RemoveButton(this.h, param1.cPointer())
}

func (this *QButtonGroup) Buttons() []*QAbstractButton {
	var _out **C.QAbstractButton = nil
	var _out_len C.size_t = 0
	C.QButtonGroup_Buttons(this.h, &_out, &_out_len)
	ret := make([]*QAbstractButton, int(_out_len))
	_outCast := (*[0xffff]*C.QAbstractButton)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAbstractButton(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QButtonGroup) CheckedButton() *QAbstractButton {
	ret := C.QButtonGroup_CheckedButton(this.h)
	return newQAbstractButton_U(unsafe.Pointer(ret))
}

func (this *QButtonGroup) Button(id int) *QAbstractButton {
	ret := C.QButtonGroup_Button(this.h, (C.int)(id))
	return newQAbstractButton_U(unsafe.Pointer(ret))
}

func (this *QButtonGroup) SetId(button *QAbstractButton, id int) {
	C.QButtonGroup_SetId(this.h, button.cPointer(), (C.int)(id))
}

func (this *QButtonGroup) Id(button *QAbstractButton) int {
	ret := C.QButtonGroup_Id(this.h, button.cPointer())
	return (int)(ret)
}

func (this *QButtonGroup) CheckedId() int {
	ret := C.QButtonGroup_CheckedId(this.h)
	return (int)(ret)
}

func (this *QButtonGroup) ButtonClicked(param1 *QAbstractButton) {
	C.QButtonGroup_ButtonClicked(this.h, param1.cPointer())
}

func (this *QButtonGroup) OnButtonClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QButtonGroup_connect_ButtonClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QButtonGroup) ButtonPressed(param1 *QAbstractButton) {
	C.QButtonGroup_ButtonPressed(this.h, param1.cPointer())
}

func (this *QButtonGroup) OnButtonPressed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QButtonGroup_connect_ButtonPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QButtonGroup) ButtonReleased(param1 *QAbstractButton) {
	C.QButtonGroup_ButtonReleased(this.h, param1.cPointer())
}

func (this *QButtonGroup) OnButtonReleased(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QButtonGroup_connect_ButtonReleased(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QButtonGroup) ButtonToggled(param1 *QAbstractButton, param2 bool) {
	C.QButtonGroup_ButtonToggled(this.h, param1.cPointer(), (C.bool)(param2))
}

func (this *QButtonGroup) OnButtonToggled(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QButtonGroup_connect_ButtonToggled(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QButtonGroup) IdClicked(param1 int) {
	C.QButtonGroup_IdClicked(this.h, (C.int)(param1))
}

func (this *QButtonGroup) OnIdClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QButtonGroup_connect_IdClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QButtonGroup) IdPressed(param1 int) {
	C.QButtonGroup_IdPressed(this.h, (C.int)(param1))
}

func (this *QButtonGroup) OnIdPressed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QButtonGroup_connect_IdPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QButtonGroup) IdReleased(param1 int) {
	C.QButtonGroup_IdReleased(this.h, (C.int)(param1))
}

func (this *QButtonGroup) OnIdReleased(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QButtonGroup_connect_IdReleased(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QButtonGroup) IdToggled(param1 int, param2 bool) {
	C.QButtonGroup_IdToggled(this.h, (C.int)(param1), (C.bool)(param2))
}

func (this *QButtonGroup) OnIdToggled(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QButtonGroup_connect_IdToggled(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QButtonGroup) ButtonClickedWithInt(param1 int) {
	C.QButtonGroup_ButtonClickedWithInt(this.h, (C.int)(param1))
}

func (this *QButtonGroup) OnButtonClickedWithInt(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QButtonGroup_connect_ButtonClickedWithInt(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QButtonGroup) ButtonPressedWithInt(param1 int) {
	C.QButtonGroup_ButtonPressedWithInt(this.h, (C.int)(param1))
}

func (this *QButtonGroup) OnButtonPressedWithInt(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QButtonGroup_connect_ButtonPressedWithInt(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QButtonGroup) ButtonReleasedWithInt(param1 int) {
	C.QButtonGroup_ButtonReleasedWithInt(this.h, (C.int)(param1))
}

func (this *QButtonGroup) OnButtonReleasedWithInt(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QButtonGroup_connect_ButtonReleasedWithInt(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QButtonGroup) ButtonToggled2(param1 int, param2 bool) {
	C.QButtonGroup_ButtonToggled2(this.h, (C.int)(param1), (C.bool)(param2))
}

func (this *QButtonGroup) OnButtonToggled2(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QButtonGroup_connect_ButtonToggled2(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QButtonGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QButtonGroup_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QButtonGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QButtonGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QButtonGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QButtonGroup_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QButtonGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QButtonGroup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QButtonGroup) AddButton2(param1 *QAbstractButton, id int) {
	C.QButtonGroup_AddButton2(this.h, param1.cPointer(), (C.int)(id))
}

func (this *QButtonGroup) Delete() {
	C.QButtonGroup_Delete(this.h)
}

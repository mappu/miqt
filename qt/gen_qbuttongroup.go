package qt

/*

#include "gen_qbuttongroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func (this *QButtonGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQButtonGroup(h *C.QButtonGroup) *QButtonGroup {
	if h == nil {
		return nil
	}
	return &QButtonGroup{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQButtonGroup(h unsafe.Pointer) *QButtonGroup {
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
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QButtonGroup_MetaObject(this.h)))
}

func (this *QButtonGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QButtonGroup_Metacast(this.h, param1_Cstring))
}

func QButtonGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QButtonGroup_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QButtonGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QButtonGroup_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QButtonGroup) SetExclusive(exclusive bool) {
	C.QButtonGroup_SetExclusive(this.h, (C.bool)(exclusive))
}

func (this *QButtonGroup) Exclusive() bool {
	return (bool)(C.QButtonGroup_Exclusive(this.h))
}

func (this *QButtonGroup) AddButton(param1 *QAbstractButton) {
	C.QButtonGroup_AddButton(this.h, param1.cPointer())
}

func (this *QButtonGroup) RemoveButton(param1 *QAbstractButton) {
	C.QButtonGroup_RemoveButton(this.h, param1.cPointer())
}

func (this *QButtonGroup) Buttons() []*QAbstractButton {
	var _ma *C.struct_miqt_array = C.QButtonGroup_Buttons(this.h)
	_ret := make([]*QAbstractButton, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractButton)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQAbstractButton(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QButtonGroup) CheckedButton() *QAbstractButton {
	return UnsafeNewQAbstractButton(unsafe.Pointer(C.QButtonGroup_CheckedButton(this.h)))
}

func (this *QButtonGroup) Button(id int) *QAbstractButton {
	return UnsafeNewQAbstractButton(unsafe.Pointer(C.QButtonGroup_Button(this.h, (C.int)(id))))
}

func (this *QButtonGroup) SetId(button *QAbstractButton, id int) {
	C.QButtonGroup_SetId(this.h, button.cPointer(), (C.int)(id))
}

func (this *QButtonGroup) Id(button *QAbstractButton) int {
	return (int)(C.QButtonGroup_Id(this.h, button.cPointer()))
}

func (this *QButtonGroup) CheckedId() int {
	return (int)(C.QButtonGroup_CheckedId(this.h))
}

func (this *QButtonGroup) ButtonClicked(param1 *QAbstractButton) {
	C.QButtonGroup_ButtonClicked(this.h, param1.cPointer())
}
func (this *QButtonGroup) OnButtonClicked(slot func(param1 *QAbstractButton)) {
	C.QButtonGroup_connect_ButtonClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ButtonClicked
func miqt_exec_callback_QButtonGroup_ButtonClicked(cb C.intptr_t, param1 *C.QAbstractButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAbstractButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAbstractButton(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QButtonGroup) ButtonPressed(param1 *QAbstractButton) {
	C.QButtonGroup_ButtonPressed(this.h, param1.cPointer())
}
func (this *QButtonGroup) OnButtonPressed(slot func(param1 *QAbstractButton)) {
	C.QButtonGroup_connect_ButtonPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ButtonPressed
func miqt_exec_callback_QButtonGroup_ButtonPressed(cb C.intptr_t, param1 *C.QAbstractButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAbstractButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAbstractButton(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QButtonGroup) ButtonReleased(param1 *QAbstractButton) {
	C.QButtonGroup_ButtonReleased(this.h, param1.cPointer())
}
func (this *QButtonGroup) OnButtonReleased(slot func(param1 *QAbstractButton)) {
	C.QButtonGroup_connect_ButtonReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ButtonReleased
func miqt_exec_callback_QButtonGroup_ButtonReleased(cb C.intptr_t, param1 *C.QAbstractButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAbstractButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAbstractButton(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QButtonGroup) ButtonToggled(param1 *QAbstractButton, param2 bool) {
	C.QButtonGroup_ButtonToggled(this.h, param1.cPointer(), (C.bool)(param2))
}
func (this *QButtonGroup) OnButtonToggled(slot func(param1 *QAbstractButton, param2 bool)) {
	C.QButtonGroup_connect_ButtonToggled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ButtonToggled
func miqt_exec_callback_QButtonGroup_ButtonToggled(cb C.intptr_t, param1 *C.QAbstractButton, param2 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QAbstractButton, param2 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAbstractButton(unsafe.Pointer(param1))
	slotval2 := (bool)(param2)

	gofunc(slotval1, slotval2)
}

func (this *QButtonGroup) IdClicked(param1 int) {
	C.QButtonGroup_IdClicked(this.h, (C.int)(param1))
}
func (this *QButtonGroup) OnIdClicked(slot func(param1 int)) {
	C.QButtonGroup_connect_IdClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_IdClicked
func miqt_exec_callback_QButtonGroup_IdClicked(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) IdPressed(param1 int) {
	C.QButtonGroup_IdPressed(this.h, (C.int)(param1))
}
func (this *QButtonGroup) OnIdPressed(slot func(param1 int)) {
	C.QButtonGroup_connect_IdPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_IdPressed
func miqt_exec_callback_QButtonGroup_IdPressed(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) IdReleased(param1 int) {
	C.QButtonGroup_IdReleased(this.h, (C.int)(param1))
}
func (this *QButtonGroup) OnIdReleased(slot func(param1 int)) {
	C.QButtonGroup_connect_IdReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_IdReleased
func miqt_exec_callback_QButtonGroup_IdReleased(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) IdToggled(param1 int, param2 bool) {
	C.QButtonGroup_IdToggled(this.h, (C.int)(param1), (C.bool)(param2))
}
func (this *QButtonGroup) OnIdToggled(slot func(param1 int, param2 bool)) {
	C.QButtonGroup_connect_IdToggled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_IdToggled
func miqt_exec_callback_QButtonGroup_IdToggled(cb C.intptr_t, param1 C.int, param2 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int, param2 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	slotval2 := (bool)(param2)

	gofunc(slotval1, slotval2)
}

func (this *QButtonGroup) ButtonClickedWithInt(param1 int) {
	C.QButtonGroup_ButtonClickedWithInt(this.h, (C.int)(param1))
}
func (this *QButtonGroup) OnButtonClickedWithInt(slot func(param1 int)) {
	C.QButtonGroup_connect_ButtonClickedWithInt(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ButtonClickedWithInt
func miqt_exec_callback_QButtonGroup_ButtonClickedWithInt(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) ButtonPressedWithInt(param1 int) {
	C.QButtonGroup_ButtonPressedWithInt(this.h, (C.int)(param1))
}
func (this *QButtonGroup) OnButtonPressedWithInt(slot func(param1 int)) {
	C.QButtonGroup_connect_ButtonPressedWithInt(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ButtonPressedWithInt
func miqt_exec_callback_QButtonGroup_ButtonPressedWithInt(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) ButtonReleasedWithInt(param1 int) {
	C.QButtonGroup_ButtonReleasedWithInt(this.h, (C.int)(param1))
}
func (this *QButtonGroup) OnButtonReleasedWithInt(slot func(param1 int)) {
	C.QButtonGroup_connect_ButtonReleasedWithInt(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ButtonReleasedWithInt
func miqt_exec_callback_QButtonGroup_ButtonReleasedWithInt(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QButtonGroup) ButtonToggled2(param1 int, param2 bool) {
	C.QButtonGroup_ButtonToggled2(this.h, (C.int)(param1), (C.bool)(param2))
}
func (this *QButtonGroup) OnButtonToggled2(slot func(param1 int, param2 bool)) {
	C.QButtonGroup_connect_ButtonToggled2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QButtonGroup_ButtonToggled2
func miqt_exec_callback_QButtonGroup_ButtonToggled2(cb C.intptr_t, param1 C.int, param2 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int, param2 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	slotval2 := (bool)(param2)

	gofunc(slotval1, slotval2)
}

func QButtonGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QButtonGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QButtonGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QButtonGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QButtonGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QButtonGroup_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QButtonGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QButtonGroup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QButtonGroup) AddButton2(param1 *QAbstractButton, id int) {
	C.QButtonGroup_AddButton2(this.h, param1.cPointer(), (C.int)(id))
}

// Delete this object from C++ memory.
func (this *QButtonGroup) Delete() {
	C.QButtonGroup_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QButtonGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QButtonGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

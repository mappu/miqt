package qt

/*

#include "gen_qaccessibleobject.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAccessibleObject struct {
	h          *C.QAccessibleObject
	isSubclass bool
	*QAccessibleInterface
}

func (this *QAccessibleObject) cPointer() *C.QAccessibleObject {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleObject) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleObject constructs the type using only CGO pointers.
func newQAccessibleObject(h *C.QAccessibleObject, h_QAccessibleInterface *C.QAccessibleInterface) *QAccessibleObject {
	if h == nil {
		return nil
	}
	return &QAccessibleObject{h: h,
		QAccessibleInterface: newQAccessibleInterface(h_QAccessibleInterface)}
}

// UnsafeNewQAccessibleObject constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleObject(h unsafe.Pointer, h_QAccessibleInterface unsafe.Pointer) *QAccessibleObject {
	if h == nil {
		return nil
	}

	return &QAccessibleObject{h: (*C.QAccessibleObject)(h),
		QAccessibleInterface: UnsafeNewQAccessibleInterface(h_QAccessibleInterface)}
}

func (this *QAccessibleObject) IsValid() bool {
	return (bool)(C.QAccessibleObject_IsValid(this.h))
}

func (this *QAccessibleObject) Object() *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QAccessibleObject_Object(this.h)))
}

func (this *QAccessibleObject) Rect() *QRect {
	_ret := C.QAccessibleObject_Rect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleObject) SetText(t QAccessible__Text, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QAccessibleObject_SetText(this.h, (C.int)(t), text_ms)
}

func (this *QAccessibleObject) ChildAt(x int, y int) *QAccessibleInterface {
	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessibleObject_ChildAt(this.h, (C.int)(x), (C.int)(y))))
}

type QAccessibleApplication struct {
	h          *C.QAccessibleApplication
	isSubclass bool
	*QAccessibleObject
}

func (this *QAccessibleApplication) cPointer() *C.QAccessibleApplication {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAccessibleApplication) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAccessibleApplication constructs the type using only CGO pointers.
func newQAccessibleApplication(h *C.QAccessibleApplication, h_QAccessibleObject *C.QAccessibleObject, h_QAccessibleInterface *C.QAccessibleInterface) *QAccessibleApplication {
	if h == nil {
		return nil
	}
	return &QAccessibleApplication{h: h,
		QAccessibleObject: newQAccessibleObject(h_QAccessibleObject, h_QAccessibleInterface)}
}

// UnsafeNewQAccessibleApplication constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleApplication(h unsafe.Pointer, h_QAccessibleObject unsafe.Pointer, h_QAccessibleInterface unsafe.Pointer) *QAccessibleApplication {
	if h == nil {
		return nil
	}

	return &QAccessibleApplication{h: (*C.QAccessibleApplication)(h),
		QAccessibleObject: UnsafeNewQAccessibleObject(h_QAccessibleObject, h_QAccessibleInterface)}
}

// NewQAccessibleApplication constructs a new QAccessibleApplication object.
func NewQAccessibleApplication() *QAccessibleApplication {
	var outptr_QAccessibleApplication *C.QAccessibleApplication = nil
	var outptr_QAccessibleObject *C.QAccessibleObject = nil
	var outptr_QAccessibleInterface *C.QAccessibleInterface = nil

	C.QAccessibleApplication_new(&outptr_QAccessibleApplication, &outptr_QAccessibleObject, &outptr_QAccessibleInterface)
	ret := newQAccessibleApplication(outptr_QAccessibleApplication, outptr_QAccessibleObject, outptr_QAccessibleInterface)
	ret.isSubclass = true
	return ret
}

func (this *QAccessibleApplication) Window() *QWindow {
	return UnsafeNewQWindow(unsafe.Pointer(C.QAccessibleApplication_Window(this.h)), nil, nil)
}

func (this *QAccessibleApplication) ChildCount() int {
	return (int)(C.QAccessibleApplication_ChildCount(this.h))
}

func (this *QAccessibleApplication) IndexOfChild(param1 *QAccessibleInterface) int {
	return (int)(C.QAccessibleApplication_IndexOfChild(this.h, param1.cPointer()))
}

func (this *QAccessibleApplication) FocusChild() *QAccessibleInterface {
	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessibleApplication_FocusChild(this.h)))
}

func (this *QAccessibleApplication) Parent() *QAccessibleInterface {
	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessibleApplication_Parent(this.h)))
}

func (this *QAccessibleApplication) Child(index int) *QAccessibleInterface {
	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessibleApplication_Child(this.h, (C.int)(index))))
}

func (this *QAccessibleApplication) Text(t QAccessible__Text) string {
	var _ms C.struct_miqt_string = C.QAccessibleApplication_Text(this.h, (C.int)(t))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleApplication) Role() QAccessible__Role {
	return (QAccessible__Role)(C.QAccessibleApplication_Role(this.h))
}

func (this *QAccessibleApplication) State() *QAccessible__State {
	_ret := C.QAccessibleApplication_State(this.h)
	_goptr := newQAccessible__State(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleApplication) callVirtualBase_Window() *QWindow {

	return UnsafeNewQWindow(unsafe.Pointer(C.QAccessibleApplication_virtualbase_Window(unsafe.Pointer(this.h))), nil, nil)
}
func (this *QAccessibleApplication) OnWindow(slot func(super func() *QWindow) *QWindow) {
	C.QAccessibleApplication_override_virtual_Window(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_Window
func miqt_exec_callback_QAccessibleApplication_Window(self *C.QAccessibleApplication, cb C.intptr_t) *C.QWindow {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWindow) *QWindow)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_Window)

	return virtualReturn.cPointer()

}

func (this *QAccessibleApplication) callVirtualBase_ChildCount() int {

	return (int)(C.QAccessibleApplication_virtualbase_ChildCount(unsafe.Pointer(this.h)))

}
func (this *QAccessibleApplication) OnChildCount(slot func(super func() int) int) {
	C.QAccessibleApplication_override_virtual_ChildCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_ChildCount
func miqt_exec_callback_QAccessibleApplication_ChildCount(self *C.QAccessibleApplication, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_ChildCount)

	return (C.int)(virtualReturn)

}

func (this *QAccessibleApplication) callVirtualBase_IndexOfChild(param1 *QAccessibleInterface) int {

	return (int)(C.QAccessibleApplication_virtualbase_IndexOfChild(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QAccessibleApplication) OnIndexOfChild(slot func(super func(param1 *QAccessibleInterface) int, param1 *QAccessibleInterface) int) {
	C.QAccessibleApplication_override_virtual_IndexOfChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_IndexOfChild
func miqt_exec_callback_QAccessibleApplication_IndexOfChild(self *C.QAccessibleApplication, cb C.intptr_t, param1 *C.QAccessibleInterface) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QAccessibleInterface) int, param1 *QAccessibleInterface) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAccessibleInterface(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_IndexOfChild, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAccessibleApplication) callVirtualBase_FocusChild() *QAccessibleInterface {

	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessibleApplication_virtualbase_FocusChild(unsafe.Pointer(this.h))))
}
func (this *QAccessibleApplication) OnFocusChild(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	C.QAccessibleApplication_override_virtual_FocusChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_FocusChild
func miqt_exec_callback_QAccessibleApplication_FocusChild(self *C.QAccessibleApplication, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_FocusChild)

	return virtualReturn.cPointer()

}

func (this *QAccessibleApplication) callVirtualBase_Parent() *QAccessibleInterface {

	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessibleApplication_virtualbase_Parent(unsafe.Pointer(this.h))))
}
func (this *QAccessibleApplication) OnParent(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	C.QAccessibleApplication_override_virtual_Parent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_Parent
func miqt_exec_callback_QAccessibleApplication_Parent(self *C.QAccessibleApplication, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_Parent)

	return virtualReturn.cPointer()

}

func (this *QAccessibleApplication) callVirtualBase_Child(index int) *QAccessibleInterface {

	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessibleApplication_virtualbase_Child(unsafe.Pointer(this.h), (C.int)(index))))
}
func (this *QAccessibleApplication) OnChild(slot func(super func(index int) *QAccessibleInterface, index int) *QAccessibleInterface) {
	C.QAccessibleApplication_override_virtual_Child(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_Child
func miqt_exec_callback_QAccessibleApplication_Child(self *C.QAccessibleApplication, cb C.intptr_t, index C.int) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QAccessibleInterface, index int) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_Child, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAccessibleApplication) callVirtualBase_Text(t QAccessible__Text) string {

	var _ms C.struct_miqt_string = C.QAccessibleApplication_virtualbase_Text(unsafe.Pointer(this.h), (C.int)(t))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QAccessibleApplication) OnText(slot func(super func(t QAccessible__Text) string, t QAccessible__Text) string) {
	C.QAccessibleApplication_override_virtual_Text(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_Text
func miqt_exec_callback_QAccessibleApplication_Text(self *C.QAccessibleApplication, cb C.intptr_t, t C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(t QAccessible__Text) string, t QAccessible__Text) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAccessible__Text)(t)

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_Text, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QAccessibleApplication) callVirtualBase_Role() QAccessible__Role {

	return (QAccessible__Role)(C.QAccessibleApplication_virtualbase_Role(unsafe.Pointer(this.h)))

}
func (this *QAccessibleApplication) OnRole(slot func(super func() QAccessible__Role) QAccessible__Role) {
	C.QAccessibleApplication_override_virtual_Role(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_Role
func miqt_exec_callback_QAccessibleApplication_Role(self *C.QAccessibleApplication, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAccessible__Role) QAccessible__Role)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_Role)

	return (C.int)(virtualReturn)

}

func (this *QAccessibleApplication) callVirtualBase_State() *QAccessible__State {

	_ret := C.QAccessibleApplication_virtualbase_State(unsafe.Pointer(this.h))
	_goptr := newQAccessible__State(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAccessibleApplication) OnState(slot func(super func() *QAccessible__State) *QAccessible__State) {
	C.QAccessibleApplication_override_virtual_State(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_State
func miqt_exec_callback_QAccessibleApplication_State(self *C.QAccessibleApplication, cb C.intptr_t) *C.QAccessible__State {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessible__State) *QAccessible__State)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_State)

	return virtualReturn.cPointer()

}

func (this *QAccessibleApplication) callVirtualBase_IsValid() bool {

	return (bool)(C.QAccessibleApplication_virtualbase_IsValid(unsafe.Pointer(this.h)))

}
func (this *QAccessibleApplication) OnIsValid(slot func(super func() bool) bool) {
	C.QAccessibleApplication_override_virtual_IsValid(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_IsValid
func miqt_exec_callback_QAccessibleApplication_IsValid(self *C.QAccessibleApplication, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_IsValid)

	return (C.bool)(virtualReturn)

}

func (this *QAccessibleApplication) callVirtualBase_Object() *QObject {

	return UnsafeNewQObject(unsafe.Pointer(C.QAccessibleApplication_virtualbase_Object(unsafe.Pointer(this.h))))
}
func (this *QAccessibleApplication) OnObject(slot func(super func() *QObject) *QObject) {
	C.QAccessibleApplication_override_virtual_Object(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_Object
func miqt_exec_callback_QAccessibleApplication_Object(self *C.QAccessibleApplication, cb C.intptr_t) *C.QObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QObject) *QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_Object)

	return virtualReturn.cPointer()

}

func (this *QAccessibleApplication) callVirtualBase_Rect() *QRect {

	_ret := C.QAccessibleApplication_virtualbase_Rect(unsafe.Pointer(this.h))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAccessibleApplication) OnRect(slot func(super func() *QRect) *QRect) {
	C.QAccessibleApplication_override_virtual_Rect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_Rect
func miqt_exec_callback_QAccessibleApplication_Rect(self *C.QAccessibleApplication, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_Rect)

	return virtualReturn.cPointer()

}

func (this *QAccessibleApplication) callVirtualBase_SetText(t QAccessible__Text, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	C.QAccessibleApplication_virtualbase_SetText(unsafe.Pointer(this.h), (C.int)(t), text_ms)

}
func (this *QAccessibleApplication) OnSetText(slot func(super func(t QAccessible__Text, text string), t QAccessible__Text, text string)) {
	C.QAccessibleApplication_override_virtual_SetText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_SetText
func miqt_exec_callback_QAccessibleApplication_SetText(self *C.QAccessibleApplication, cb C.intptr_t, t C.int, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(t QAccessible__Text, text string), t QAccessible__Text, text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAccessible__Text)(t)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval2 := text_ret

	gofunc((&QAccessibleApplication{h: self}).callVirtualBase_SetText, slotval1, slotval2)

}

func (this *QAccessibleApplication) callVirtualBase_ChildAt(x int, y int) *QAccessibleInterface {

	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessibleApplication_virtualbase_ChildAt(unsafe.Pointer(this.h), (C.int)(x), (C.int)(y))))
}
func (this *QAccessibleApplication) OnChildAt(slot func(super func(x int, y int) *QAccessibleInterface, x int, y int) *QAccessibleInterface) {
	C.QAccessibleApplication_override_virtual_ChildAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAccessibleApplication_ChildAt
func miqt_exec_callback_QAccessibleApplication_ChildAt(self *C.QAccessibleApplication, cb C.intptr_t, x C.int, y C.int) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(x int, y int) *QAccessibleInterface, x int, y int) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(x)

	slotval2 := (int)(y)

	virtualReturn := gofunc((&QAccessibleApplication{h: self}).callVirtualBase_ChildAt, slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QAccessibleApplication) Delete() {
	C.QAccessibleApplication_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAccessibleApplication) GoGC() {
	runtime.SetFinalizer(this, func(this *QAccessibleApplication) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

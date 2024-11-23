package qt6

/*

#include "gen_qaccessibleobject.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

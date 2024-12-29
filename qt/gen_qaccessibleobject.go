package qt

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
func newQAccessibleObject(h *C.QAccessibleObject) *QAccessibleObject {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleInterface *C.QAccessibleInterface = nil
	C.QAccessibleObject_virtbase(h, &outptr_QAccessibleInterface)

	return &QAccessibleObject{h: h,
		QAccessibleInterface: newQAccessibleInterface(outptr_QAccessibleInterface)}
}

// UnsafeNewQAccessibleObject constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleObject(h unsafe.Pointer) *QAccessibleObject {
	return newQAccessibleObject((*C.QAccessibleObject)(h))
}

func (this *QAccessibleObject) IsValid() bool {
	return (bool)(C.QAccessibleObject_IsValid(this.h))
}

func (this *QAccessibleObject) Object() *QObject {
	return newQObject(C.QAccessibleObject_Object(this.h))
}

func (this *QAccessibleObject) Rect() *QRect {
	_goptr := newQRect(C.QAccessibleObject_Rect(this.h))
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
	return newQAccessibleInterface(C.QAccessibleObject_ChildAt(this.h, (C.int)(x), (C.int)(y)))
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
func newQAccessibleApplication(h *C.QAccessibleApplication) *QAccessibleApplication {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleObject *C.QAccessibleObject = nil
	C.QAccessibleApplication_virtbase(h, &outptr_QAccessibleObject)

	return &QAccessibleApplication{h: h,
		QAccessibleObject: newQAccessibleObject(outptr_QAccessibleObject)}
}

// UnsafeNewQAccessibleApplication constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleApplication(h unsafe.Pointer) *QAccessibleApplication {
	return newQAccessibleApplication((*C.QAccessibleApplication)(h))
}

// NewQAccessibleApplication constructs a new QAccessibleApplication object.
func NewQAccessibleApplication() *QAccessibleApplication {

	ret := newQAccessibleApplication(C.QAccessibleApplication_new())
	ret.isSubclass = true
	return ret
}

func (this *QAccessibleApplication) Window() *QWindow {
	return newQWindow(C.QAccessibleApplication_Window(this.h))
}

func (this *QAccessibleApplication) ChildCount() int {
	return (int)(C.QAccessibleApplication_ChildCount(this.h))
}

func (this *QAccessibleApplication) IndexOfChild(param1 *QAccessibleInterface) int {
	return (int)(C.QAccessibleApplication_IndexOfChild(this.h, param1.cPointer()))
}

func (this *QAccessibleApplication) FocusChild() *QAccessibleInterface {
	return newQAccessibleInterface(C.QAccessibleApplication_FocusChild(this.h))
}

func (this *QAccessibleApplication) Parent() *QAccessibleInterface {
	return newQAccessibleInterface(C.QAccessibleApplication_Parent(this.h))
}

func (this *QAccessibleApplication) Child(index int) *QAccessibleInterface {
	return newQAccessibleInterface(C.QAccessibleApplication_Child(this.h, (C.int)(index)))
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
	_goptr := newQAccessible__State(C.QAccessibleApplication_State(this.h))
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

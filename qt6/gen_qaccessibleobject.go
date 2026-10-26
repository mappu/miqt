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
	h  *C.QAccessibleObject
	gc *[1]unsafe.Pointer
	*QAccessibleInterface
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleObject) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAccessibleInterface.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	return (bool)(C.QAccessibleObject_isValid(this.h))
}

func (this *QAccessibleObject) Object() *QObject {
	defer runtime.KeepAlive(this)
	return newQObject(C.QAccessibleObject_object(this.h))
}

func (this *QAccessibleObject) Rect() *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QAccessibleObject_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleObject) SetText(t QAccessible__Text, text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QAccessibleObject_setText(this.h, (C.int)(t), text_ms)
}

func (this *QAccessibleObject) ChildAt(x int, y int) *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleObject_childAt(this.h, (C.int)(x), (C.int)(y)))
}

type QAccessibleApplication struct {
	h  *C.QAccessibleApplication
	gc *[1]unsafe.Pointer
	*QAccessibleObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleApplication) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAccessibleObject.miqtSetGC(gc)
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

	return newQAccessibleApplication(C.QAccessibleApplication_new())
}

func (this *QAccessibleApplication) Window() *QWindow {
	defer runtime.KeepAlive(this)
	return newQWindow(C.QAccessibleApplication_window(this.h))
}

func (this *QAccessibleApplication) ChildCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleApplication_childCount(this.h))
}

func (this *QAccessibleApplication) IndexOfChild(param1 *QAccessibleInterface) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (int)(C.QAccessibleApplication_indexOfChild(this.h, param1.cPointer()))
}

func (this *QAccessibleApplication) FocusChild() *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleApplication_focusChild(this.h))
}

func (this *QAccessibleApplication) Parent() *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleApplication_parent(this.h))
}

func (this *QAccessibleApplication) Child(index int) *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleApplication_child(this.h, (C.int)(index)))
}

func (this *QAccessibleApplication) Text(t QAccessible__Text) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleApplication_text(this.h, (C.int)(t))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleApplication) Role() QAccessible__Role {
	defer runtime.KeepAlive(this)
	return (QAccessible__Role)(C.QAccessibleApplication_role(this.h))
}

func (this *QAccessibleApplication) State() *QAccessible__State {
	defer runtime.KeepAlive(this)
	_goptr := newQAccessible__State(C.QAccessibleApplication_state(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QAccessibleApplication) Delete() {
	C.QAccessibleApplication_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QAccessibleApplication) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QAccessibleApplication_delete((*C.QAccessibleApplication)(gc[0]))
	})
	this.miqtSetGC(gc)
}

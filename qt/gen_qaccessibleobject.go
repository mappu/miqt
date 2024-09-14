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
	h *C.QAccessibleObject
	*QAccessibleInterface
}

func (this *QAccessibleObject) cPointer() *C.QAccessibleObject {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleObject(h *C.QAccessibleObject) *QAccessibleObject {
	if h == nil {
		return nil
	}
	return &QAccessibleObject{h: h, QAccessibleInterface: newQAccessibleInterface_U(unsafe.Pointer(h))}
}

func newQAccessibleObject_U(h unsafe.Pointer) *QAccessibleObject {
	return newQAccessibleObject((*C.QAccessibleObject)(h))
}

func (this *QAccessibleObject) IsValid() bool {
	_ret := C.QAccessibleObject_IsValid(this.h)
	return (bool)(_ret)
}

func (this *QAccessibleObject) Object() *QObject {
	_ret := C.QAccessibleObject_Object(this.h)
	return newQObject_U(unsafe.Pointer(_ret))
}

func (this *QAccessibleObject) Rect() *QRect {
	_ret := C.QAccessibleObject_Rect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleObject) SetText(t QAccessible__Text, text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QAccessibleObject_SetText(this.h, (C.uintptr_t)(t), (*C.struct_miqt_string)(text_ms))
}

func (this *QAccessibleObject) ChildAt(x int, y int) *QAccessibleInterface {
	_ret := C.QAccessibleObject_ChildAt(this.h, (C.int)(x), (C.int)(y))
	return newQAccessibleInterface_U(unsafe.Pointer(_ret))
}

type QAccessibleApplication struct {
	h *C.QAccessibleApplication
	*QAccessibleObject
}

func (this *QAccessibleApplication) cPointer() *C.QAccessibleApplication {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleApplication(h *C.QAccessibleApplication) *QAccessibleApplication {
	if h == nil {
		return nil
	}
	return &QAccessibleApplication{h: h, QAccessibleObject: newQAccessibleObject_U(unsafe.Pointer(h))}
}

func newQAccessibleApplication_U(h unsafe.Pointer) *QAccessibleApplication {
	return newQAccessibleApplication((*C.QAccessibleApplication)(h))
}

// NewQAccessibleApplication constructs a new QAccessibleApplication object.
func NewQAccessibleApplication() *QAccessibleApplication {
	ret := C.QAccessibleApplication_new()
	return newQAccessibleApplication(ret)
}

func (this *QAccessibleApplication) Window() *QWindow {
	_ret := C.QAccessibleApplication_Window(this.h)
	return newQWindow_U(unsafe.Pointer(_ret))
}

func (this *QAccessibleApplication) ChildCount() int {
	_ret := C.QAccessibleApplication_ChildCount(this.h)
	return (int)(_ret)
}

func (this *QAccessibleApplication) IndexOfChild(param1 *QAccessibleInterface) int {
	_ret := C.QAccessibleApplication_IndexOfChild(this.h, param1.cPointer())
	return (int)(_ret)
}

func (this *QAccessibleApplication) FocusChild() *QAccessibleInterface {
	_ret := C.QAccessibleApplication_FocusChild(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(_ret))
}

func (this *QAccessibleApplication) Parent() *QAccessibleInterface {
	_ret := C.QAccessibleApplication_Parent(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(_ret))
}

func (this *QAccessibleApplication) Child(index int) *QAccessibleInterface {
	_ret := C.QAccessibleApplication_Child(this.h, (C.int)(index))
	return newQAccessibleInterface_U(unsafe.Pointer(_ret))
}

func (this *QAccessibleApplication) Text(t QAccessible__Text) string {
	var _ms *C.struct_miqt_string = C.QAccessibleApplication_Text(this.h, (C.uintptr_t)(t))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAccessibleApplication) Role() QAccessible__Role {
	_ret := C.QAccessibleApplication_Role(this.h)
	return (QAccessible__Role)(_ret)
}

func (this *QAccessibleApplication) State() *QAccessible__State {
	_ret := C.QAccessibleApplication_State(this.h)
	_goptr := newQAccessible__State(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QAccessibleApplication) Delete() {
	C.QAccessibleApplication_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAccessibleApplication) GoGC() {
	runtime.SetFinalizer(this, func(this *QAccessibleApplication) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

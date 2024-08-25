package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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
	return &QAccessibleObject{h: h, QAccessibleInterface: newQAccessibleInterface_U(unsafe.Pointer(h))}
}

func newQAccessibleObject_U(h unsafe.Pointer) *QAccessibleObject {
	return newQAccessibleObject((*C.QAccessibleObject)(h))
}

func (this *QAccessibleObject) IsValid() bool {
	ret := C.QAccessibleObject_IsValid(this.h)
	return (bool)(ret)
}

func (this *QAccessibleObject) Object() *QObject {
	ret := C.QAccessibleObject_Object(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QAccessibleObject) Rect() *QRect {
	ret := C.QAccessibleObject_Rect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleObject) ChildAt(x int, y int) *QAccessibleInterface {
	ret := C.QAccessibleObject_ChildAt(this.h, (C.int)(x), (C.int)(y))
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
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
	ret := C.QAccessibleApplication_Window(this.h)
	return newQWindow_U(unsafe.Pointer(ret))
}

func (this *QAccessibleApplication) ChildCount() int {
	ret := C.QAccessibleApplication_ChildCount(this.h)
	return (int)(ret)
}

func (this *QAccessibleApplication) IndexOfChild(param1 *QAccessibleInterface) int {
	ret := C.QAccessibleApplication_IndexOfChild(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QAccessibleApplication) FocusChild() *QAccessibleInterface {
	ret := C.QAccessibleApplication_FocusChild(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleApplication) Parent() *QAccessibleInterface {
	ret := C.QAccessibleApplication_Parent(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleApplication) Child(index int) *QAccessibleInterface {
	ret := C.QAccessibleApplication_Child(this.h, (C.int)(index))
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleApplication) Delete() {
	C.QAccessibleApplication_Delete(this.h)
}

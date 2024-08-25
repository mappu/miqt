package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qaccessiblewidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAccessibleWidget struct {
	h *C.QAccessibleWidget
	*QAccessibleObject
	*QAccessibleActionInterface
}

func (this *QAccessibleWidget) cPointer() *C.QAccessibleWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAccessibleWidget(h *C.QAccessibleWidget) *QAccessibleWidget {
	return &QAccessibleWidget{h: h, QAccessibleObject: newQAccessibleObject_U(unsafe.Pointer(h)), QAccessibleActionInterface: newQAccessibleActionInterface_U(unsafe.Pointer(h))}
}

func newQAccessibleWidget_U(h unsafe.Pointer) *QAccessibleWidget {
	return newQAccessibleWidget((*C.QAccessibleWidget)(h))
}

func (this *QAccessibleWidget) IsValid() bool {
	ret := C.QAccessibleWidget_IsValid(this.h)
	return (bool)(ret)
}

func (this *QAccessibleWidget) Window() *QWindow {
	ret := C.QAccessibleWidget_Window(this.h)
	return newQWindow_U(unsafe.Pointer(ret))
}

func (this *QAccessibleWidget) ChildCount() int {
	ret := C.QAccessibleWidget_ChildCount(this.h)
	return (int)(ret)
}

func (this *QAccessibleWidget) IndexOfChild(child *QAccessibleInterface) int {
	ret := C.QAccessibleWidget_IndexOfChild(this.h, child.cPointer())
	return (int)(ret)
}

func (this *QAccessibleWidget) FocusChild() *QAccessibleInterface {
	ret := C.QAccessibleWidget_FocusChild(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleWidget) Rect() *QRect {
	ret := C.QAccessibleWidget_Rect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleWidget) Parent() *QAccessibleInterface {
	ret := C.QAccessibleWidget_Parent(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleWidget) Child(index int) *QAccessibleInterface {
	ret := C.QAccessibleWidget_Child(this.h, (C.int)(index))
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QAccessibleWidget) ForegroundColor() *QColor {
	ret := C.QAccessibleWidget_ForegroundColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleWidget) BackgroundColor() *QColor {
	ret := C.QAccessibleWidget_BackgroundColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAccessibleWidget) ActionNames() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QAccessibleWidget_ActionNames(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAccessibleWidget) DoAction(actionName string) {
	actionName_Cstring := C.CString(actionName)
	defer C.free(unsafe.Pointer(actionName_Cstring))
	C.QAccessibleWidget_DoAction(this.h, actionName_Cstring, C.ulong(len(actionName)))
}

func (this *QAccessibleWidget) KeyBindingsForAction(actionName string) []string {
	actionName_Cstring := C.CString(actionName)
	defer C.free(unsafe.Pointer(actionName_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QAccessibleWidget_KeyBindingsForAction(this.h, actionName_Cstring, C.ulong(len(actionName)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

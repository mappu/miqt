package qt

/*

#include "gen_qaccessiblewidget.h"
#include <stdlib.h>

*/
import "C"

import (
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
	if h == nil {
		return nil
	}
	return &QAccessibleWidget{h: h, QAccessibleObject: newQAccessibleObject_U(unsafe.Pointer(h)), QAccessibleActionInterface: newQAccessibleActionInterface_U(unsafe.Pointer(h))}
}

func newQAccessibleWidget_U(h unsafe.Pointer) *QAccessibleWidget {
	return newQAccessibleWidget((*C.QAccessibleWidget)(h))
}

// NewQAccessibleWidget constructs a new QAccessibleWidget object.
func NewQAccessibleWidget(o *QWidget) *QAccessibleWidget {
	ret := C.QAccessibleWidget_new(o.cPointer())
	return newQAccessibleWidget(ret)
}

// NewQAccessibleWidget2 constructs a new QAccessibleWidget object.
func NewQAccessibleWidget2(o *QWidget, r QAccessible__Role) *QAccessibleWidget {
	ret := C.QAccessibleWidget_new2(o.cPointer(), (C.uintptr_t)(r))
	return newQAccessibleWidget(ret)
}

// NewQAccessibleWidget3 constructs a new QAccessibleWidget object.
func NewQAccessibleWidget3(o *QWidget, r QAccessible__Role, name string) *QAccessibleWidget {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	ret := C.QAccessibleWidget_new3(o.cPointer(), (C.uintptr_t)(r), (*C.struct_miqt_string)(name_ms))
	return newQAccessibleWidget(ret)
}

func (this *QAccessibleWidget) IsValid() bool {
	_ret := C.QAccessibleWidget_IsValid(this.h)
	return (bool)(_ret)
}

func (this *QAccessibleWidget) Window() *QWindow {
	_ret := C.QAccessibleWidget_Window(this.h)
	return newQWindow_U(unsafe.Pointer(_ret))
}

func (this *QAccessibleWidget) ChildCount() int {
	_ret := C.QAccessibleWidget_ChildCount(this.h)
	return (int)(_ret)
}

func (this *QAccessibleWidget) IndexOfChild(child *QAccessibleInterface) int {
	_ret := C.QAccessibleWidget_IndexOfChild(this.h, child.cPointer())
	return (int)(_ret)
}

func (this *QAccessibleWidget) FocusChild() *QAccessibleInterface {
	_ret := C.QAccessibleWidget_FocusChild(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(_ret))
}

func (this *QAccessibleWidget) Rect() *QRect {
	_ret := C.QAccessibleWidget_Rect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) Parent() *QAccessibleInterface {
	_ret := C.QAccessibleWidget_Parent(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(_ret))
}

func (this *QAccessibleWidget) Child(index int) *QAccessibleInterface {
	_ret := C.QAccessibleWidget_Child(this.h, (C.int)(index))
	return newQAccessibleInterface_U(unsafe.Pointer(_ret))
}

func (this *QAccessibleWidget) Text(t QAccessible__Text) string {
	var _ms *C.struct_miqt_string = C.QAccessibleWidget_Text(this.h, (C.uintptr_t)(t))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAccessibleWidget) Role() QAccessible__Role {
	_ret := C.QAccessibleWidget_Role(this.h)
	return (QAccessible__Role)(_ret)
}

func (this *QAccessibleWidget) State() *QAccessible__State {
	_ret := C.QAccessibleWidget_State(this.h)
	_goptr := newQAccessible__State(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) ForegroundColor() *QColor {
	_ret := C.QAccessibleWidget_ForegroundColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) BackgroundColor() *QColor {
	_ret := C.QAccessibleWidget_BackgroundColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) ActionNames() []string {
	var _ma *C.struct_miqt_array = C.QAccessibleWidget_ActionNames(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QAccessibleWidget) DoAction(actionName string) {
	actionName_ms := miqt_strdupg(actionName)
	defer C.free(actionName_ms)
	C.QAccessibleWidget_DoAction(this.h, (*C.struct_miqt_string)(actionName_ms))
}

func (this *QAccessibleWidget) KeyBindingsForAction(actionName string) []string {
	actionName_ms := miqt_strdupg(actionName)
	defer C.free(actionName_ms)
	var _ma *C.struct_miqt_array = C.QAccessibleWidget_KeyBindingsForAction(this.h, (*C.struct_miqt_string)(actionName_ms))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

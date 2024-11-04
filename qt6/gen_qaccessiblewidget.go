package qt6

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

func (this *QAccessibleWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAccessibleWidget(h *C.QAccessibleWidget) *QAccessibleWidget {
	if h == nil {
		return nil
	}
	return &QAccessibleWidget{h: h, QAccessibleObject: UnsafeNewQAccessibleObject(unsafe.Pointer(h)), QAccessibleActionInterface: UnsafeNewQAccessibleActionInterface(unsafe.Pointer(h))}
}

func UnsafeNewQAccessibleWidget(h unsafe.Pointer) *QAccessibleWidget {
	return newQAccessibleWidget((*C.QAccessibleWidget)(h))
}

// NewQAccessibleWidget constructs a new QAccessibleWidget object.
func NewQAccessibleWidget(o *QWidget) *QAccessibleWidget {
	ret := C.QAccessibleWidget_new(o.cPointer())
	return newQAccessibleWidget(ret)
}

// NewQAccessibleWidget2 constructs a new QAccessibleWidget object.
func NewQAccessibleWidget2(o *QWidget, r QAccessible__Role) *QAccessibleWidget {
	ret := C.QAccessibleWidget_new2(o.cPointer(), (C.int)(r))
	return newQAccessibleWidget(ret)
}

// NewQAccessibleWidget3 constructs a new QAccessibleWidget object.
func NewQAccessibleWidget3(o *QWidget, r QAccessible__Role, name string) *QAccessibleWidget {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	ret := C.QAccessibleWidget_new3(o.cPointer(), (C.int)(r), name_ms)
	return newQAccessibleWidget(ret)
}

func (this *QAccessibleWidget) IsValid() bool {
	return (bool)(C.QAccessibleWidget_IsValid(this.h))
}

func (this *QAccessibleWidget) Window() *QWindow {
	return UnsafeNewQWindow(unsafe.Pointer(C.QAccessibleWidget_Window(this.h)))
}

func (this *QAccessibleWidget) ChildCount() int {
	return (int)(C.QAccessibleWidget_ChildCount(this.h))
}

func (this *QAccessibleWidget) IndexOfChild(child *QAccessibleInterface) int {
	return (int)(C.QAccessibleWidget_IndexOfChild(this.h, child.cPointer()))
}

func (this *QAccessibleWidget) FocusChild() *QAccessibleInterface {
	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessibleWidget_FocusChild(this.h)))
}

func (this *QAccessibleWidget) Rect() *QRect {
	_ret := C.QAccessibleWidget_Rect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) Parent() *QAccessibleInterface {
	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessibleWidget_Parent(this.h)))
}

func (this *QAccessibleWidget) Child(index int) *QAccessibleInterface {
	return UnsafeNewQAccessibleInterface(unsafe.Pointer(C.QAccessibleWidget_Child(this.h, (C.int)(index))))
}

func (this *QAccessibleWidget) Text(t QAccessible__Text) string {
	var _ms C.struct_miqt_string = C.QAccessibleWidget_Text(this.h, (C.int)(t))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleWidget) Role() QAccessible__Role {
	return (QAccessible__Role)(C.QAccessibleWidget_Role(this.h))
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

func (this *QAccessibleWidget) InterfaceCast(t QAccessible__InterfaceType) unsafe.Pointer {
	return (unsafe.Pointer)(C.QAccessibleWidget_InterfaceCast(this.h, (C.int)(t)))
}

func (this *QAccessibleWidget) ActionNames() []string {
	var _ma C.struct_miqt_array = C.QAccessibleWidget_ActionNames(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QAccessibleWidget) DoAction(actionName string) {
	actionName_ms := C.struct_miqt_string{}
	actionName_ms.data = C.CString(actionName)
	actionName_ms.len = C.size_t(len(actionName))
	defer C.free(unsafe.Pointer(actionName_ms.data))
	C.QAccessibleWidget_DoAction(this.h, actionName_ms)
}

func (this *QAccessibleWidget) KeyBindingsForAction(actionName string) []string {
	actionName_ms := C.struct_miqt_string{}
	actionName_ms.data = C.CString(actionName)
	actionName_ms.len = C.size_t(len(actionName))
	defer C.free(unsafe.Pointer(actionName_ms.data))
	var _ma C.struct_miqt_array = C.QAccessibleWidget_KeyBindingsForAction(this.h, actionName_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

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
	ret := C.QAccessibleWidget_new2(o.cPointer(), (C.int)(r))
	return newQAccessibleWidget(ret)
}

// NewQAccessibleWidget3 constructs a new QAccessibleWidget object.
func NewQAccessibleWidget3(o *QWidget, r QAccessible__Role, name string) *QAccessibleWidget {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	ret := C.QAccessibleWidget_new3(o.cPointer(), (C.int)(r), (*C.struct_miqt_string)(name_ms))
	return newQAccessibleWidget(ret)
}

func (this *QAccessibleWidget) IsValid() bool {
	return (bool)(C.QAccessibleWidget_IsValid(this.h))
}

func (this *QAccessibleWidget) Window() *QWindow {
	return newQWindow_U(unsafe.Pointer(C.QAccessibleWidget_Window(this.h)))
}

func (this *QAccessibleWidget) ChildCount() int {
	return (int)(C.QAccessibleWidget_ChildCount(this.h))
}

func (this *QAccessibleWidget) IndexOfChild(child *QAccessibleInterface) int {
	return (int)(C.QAccessibleWidget_IndexOfChild(this.h, child.cPointer()))
}

func (this *QAccessibleWidget) FocusChild() *QAccessibleInterface {
	return newQAccessibleInterface_U(unsafe.Pointer(C.QAccessibleWidget_FocusChild(this.h)))
}

func (this *QAccessibleWidget) Rect() *QRect {
	_ret := C.QAccessibleWidget_Rect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) Parent() *QAccessibleInterface {
	return newQAccessibleInterface_U(unsafe.Pointer(C.QAccessibleWidget_Parent(this.h)))
}

func (this *QAccessibleWidget) Child(index int) *QAccessibleInterface {
	return newQAccessibleInterface_U(unsafe.Pointer(C.QAccessibleWidget_Child(this.h, (C.int)(index))))
}

func (this *QAccessibleWidget) Text(t QAccessible__Text) string {
	var _ms *C.struct_miqt_string = C.QAccessibleWidget_Text(this.h, (C.int)(t))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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

func (this *QAccessibleWidget) ActionNames() []string {
	var _ma *C.struct_miqt_array = C.QAccessibleWidget_ActionNames(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
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
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

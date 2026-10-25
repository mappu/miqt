package qt

/*

#include "gen_qaccessiblewidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAccessibleWidget struct {
	h  *C.QAccessibleWidget
	gc *[1]unsafe.Pointer
	*QAccessibleObject
	*QAccessibleActionInterface
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QAccessibleWidget) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QAccessibleObject.miqtSetGC(gc)
	this.QAccessibleActionInterface.miqtSetGC(gc)
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

// newQAccessibleWidget constructs the type using only CGO pointers.
func newQAccessibleWidget(h *C.QAccessibleWidget) *QAccessibleWidget {
	if h == nil {
		return nil
	}
	var outptr_QAccessibleObject *C.QAccessibleObject = nil
	var outptr_QAccessibleActionInterface *C.QAccessibleActionInterface = nil
	C.QAccessibleWidget_virtbase(h, &outptr_QAccessibleObject, &outptr_QAccessibleActionInterface)

	return &QAccessibleWidget{h: h,
		QAccessibleObject:          newQAccessibleObject(outptr_QAccessibleObject),
		QAccessibleActionInterface: newQAccessibleActionInterface(outptr_QAccessibleActionInterface)}
}

// UnsafeNewQAccessibleWidget constructs the type using only unsafe pointers.
func UnsafeNewQAccessibleWidget(h unsafe.Pointer) *QAccessibleWidget {
	return newQAccessibleWidget((*C.QAccessibleWidget)(h))
}

// NewQAccessibleWidget constructs a new QAccessibleWidget object.
func NewQAccessibleWidget(o *QWidget) *QAccessibleWidget {
	defer runtime.KeepAlive(o)

	return newQAccessibleWidget(C.QAccessibleWidget_new(o.cPointer()))
}

// NewQAccessibleWidget2 constructs a new QAccessibleWidget object.
func NewQAccessibleWidget2(o *QWidget, r QAccessible__Role) *QAccessibleWidget {
	defer runtime.KeepAlive(o)

	return newQAccessibleWidget(C.QAccessibleWidget_new2(o.cPointer(), (C.int)(r)))
}

// NewQAccessibleWidget3 constructs a new QAccessibleWidget object.
func NewQAccessibleWidget3(o *QWidget, r QAccessible__Role, name string) *QAccessibleWidget {
	defer runtime.KeepAlive(o)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQAccessibleWidget(C.QAccessibleWidget_new3(o.cPointer(), (C.int)(r), name_ms))
}

func (this *QAccessibleWidget) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QAccessibleWidget_isValid(this.h))
}

func (this *QAccessibleWidget) Window() *QWindow {
	defer runtime.KeepAlive(this)
	return newQWindow(C.QAccessibleWidget_window(this.h))
}

func (this *QAccessibleWidget) ChildCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QAccessibleWidget_childCount(this.h))
}

func (this *QAccessibleWidget) IndexOfChild(child *QAccessibleInterface) int {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(child)
	return (int)(C.QAccessibleWidget_indexOfChild(this.h, child.cPointer()))
}

func (this *QAccessibleWidget) Relations(match QAccessible__RelationFlag) []struct {
	First  *QAccessibleInterface
	Second QAccessible__RelationFlag
} {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAccessibleWidget_relations(this.h, (C.int)(match))
	_ret := make([]struct {
		First  *QAccessibleInterface
		Second QAccessible__RelationFlag
	}, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_map)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _vv_mm C.struct_miqt_map = _outCast[i]
		_vv_First_CArray := (*[0xffff]*C.QAccessibleInterface)(unsafe.Pointer(_vv_mm.keys))
		_vv_Second_CArray := (*[0xffff]C.int)(unsafe.Pointer(_vv_mm.values))
		_vv_entry_First := newQAccessibleInterface(_vv_First_CArray[0])

		_vv_entry_Second := (QAccessible__RelationFlag)(_vv_Second_CArray[0])

		_ret[i] = struct {
			First  *QAccessibleInterface
			Second QAccessible__RelationFlag
		}{First: _vv_entry_First, Second: _vv_entry_Second}
	}
	return _ret
}

func (this *QAccessibleWidget) FocusChild() *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleWidget_focusChild(this.h))
}

func (this *QAccessibleWidget) Rect() *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QAccessibleWidget_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) Parent() *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleWidget_parent(this.h))
}

func (this *QAccessibleWidget) Child(index int) *QAccessibleInterface {
	defer runtime.KeepAlive(this)
	return newQAccessibleInterface(C.QAccessibleWidget_child(this.h, (C.int)(index)))
}

func (this *QAccessibleWidget) Text(t QAccessible__Text) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QAccessibleWidget_text(this.h, (C.int)(t))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAccessibleWidget) Role() QAccessible__Role {
	defer runtime.KeepAlive(this)
	return (QAccessible__Role)(C.QAccessibleWidget_role(this.h))
}

func (this *QAccessibleWidget) State() *QAccessible__State {
	defer runtime.KeepAlive(this)
	_goptr := newQAccessible__State(C.QAccessibleWidget_state(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) ForegroundColor() *QColor {
	defer runtime.KeepAlive(this)
	_goptr := newQColor(C.QAccessibleWidget_foregroundColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) BackgroundColor() *QColor {
	defer runtime.KeepAlive(this)
	_goptr := newQColor(C.QAccessibleWidget_backgroundColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAccessibleWidget) InterfaceCast(t QAccessible__InterfaceType) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	return (unsafe.Pointer)(C.QAccessibleWidget_interfaceCast(this.h, (C.int)(t)))
}

func (this *QAccessibleWidget) ActionNames() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QAccessibleWidget_actionNames(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QAccessibleWidget) DoAction(actionName string) {
	defer runtime.KeepAlive(this)
	actionName_ms := C.struct_miqt_string{}
	actionName_ms.data = C.CString(actionName)
	actionName_ms.len = C.size_t(len(actionName))
	defer C.free(unsafe.Pointer(actionName_ms.data))
	C.QAccessibleWidget_doAction(this.h, actionName_ms)
}

func (this *QAccessibleWidget) KeyBindingsForAction(actionName string) []string {
	defer runtime.KeepAlive(this)
	actionName_ms := C.struct_miqt_string{}
	actionName_ms.data = C.CString(actionName)
	actionName_ms.len = C.size_t(len(actionName))
	defer C.free(unsafe.Pointer(actionName_ms.data))
	var _ma C.struct_miqt_array = C.QAccessibleWidget_keyBindingsForAction(this.h, actionName_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

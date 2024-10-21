package qt6

/*

#include "gen_qmenubar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMenuBar struct {
	h *C.QMenuBar
	*QWidget
}

func (this *QMenuBar) cPointer() *C.QMenuBar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMenuBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMenuBar(h *C.QMenuBar) *QMenuBar {
	if h == nil {
		return nil
	}
	return &QMenuBar{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQMenuBar(h unsafe.Pointer) *QMenuBar {
	return newQMenuBar((*C.QMenuBar)(h))
}

// NewQMenuBar constructs a new QMenuBar object.
func NewQMenuBar() *QMenuBar {
	ret := C.QMenuBar_new()
	return newQMenuBar(ret)
}

// NewQMenuBar2 constructs a new QMenuBar object.
func NewQMenuBar2(parent *QWidget) *QMenuBar {
	ret := C.QMenuBar_new2(parent.cPointer())
	return newQMenuBar(ret)
}

func (this *QMenuBar) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMenuBar_MetaObject(this.h)))
}

func (this *QMenuBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMenuBar_Metacast(this.h, param1_Cstring))
}

func QMenuBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMenuBar) AddMenu(menu *QMenu) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_AddMenu(this.h, menu.cPointer())))
}

func (this *QMenuBar) AddMenuWithTitle(title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return UnsafeNewQMenu(unsafe.Pointer(C.QMenuBar_AddMenuWithTitle(this.h, title_ms)))
}

func (this *QMenuBar) AddMenu2(icon *QIcon, title string) *QMenu {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	return UnsafeNewQMenu(unsafe.Pointer(C.QMenuBar_AddMenu2(this.h, icon.cPointer(), title_ms)))
}

func (this *QMenuBar) AddSeparator() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_AddSeparator(this.h)))
}

func (this *QMenuBar) InsertSeparator(before *QAction) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_InsertSeparator(this.h, before.cPointer())))
}

func (this *QMenuBar) InsertMenu(before *QAction, menu *QMenu) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_InsertMenu(this.h, before.cPointer(), menu.cPointer())))
}

func (this *QMenuBar) Clear() {
	C.QMenuBar_Clear(this.h)
}

func (this *QMenuBar) ActiveAction() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_ActiveAction(this.h)))
}

func (this *QMenuBar) SetActiveAction(action *QAction) {
	C.QMenuBar_SetActiveAction(this.h, action.cPointer())
}

func (this *QMenuBar) SetDefaultUp(defaultUp bool) {
	C.QMenuBar_SetDefaultUp(this.h, (C.bool)(defaultUp))
}

func (this *QMenuBar) IsDefaultUp() bool {
	return (bool)(C.QMenuBar_IsDefaultUp(this.h))
}

func (this *QMenuBar) SizeHint() *QSize {
	_ret := C.QMenuBar_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenuBar) MinimumSizeHint() *QSize {
	_ret := C.QMenuBar_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenuBar) HeightForWidth(param1 int) int {
	return (int)(C.QMenuBar_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QMenuBar) ActionGeometry(param1 *QAction) *QRect {
	_ret := C.QMenuBar_ActionGeometry(this.h, param1.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMenuBar) ActionAt(param1 *QPoint) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QMenuBar_ActionAt(this.h, param1.cPointer())))
}

func (this *QMenuBar) SetCornerWidget(w *QWidget) {
	C.QMenuBar_SetCornerWidget(this.h, w.cPointer())
}

func (this *QMenuBar) CornerWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QMenuBar_CornerWidget(this.h)))
}

func (this *QMenuBar) IsNativeMenuBar() bool {
	return (bool)(C.QMenuBar_IsNativeMenuBar(this.h))
}

func (this *QMenuBar) SetNativeMenuBar(nativeMenuBar bool) {
	C.QMenuBar_SetNativeMenuBar(this.h, (C.bool)(nativeMenuBar))
}

func (this *QMenuBar) SetVisible(visible bool) {
	C.QMenuBar_SetVisible(this.h, (C.bool)(visible))
}

func (this *QMenuBar) Triggered(action *QAction) {
	C.QMenuBar_Triggered(this.h, action.cPointer())
}
func (this *QMenuBar) OnTriggered(slot func(action *QAction)) {
	C.QMenuBar_connect_Triggered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_Triggered
func miqt_exec_callback_QMenuBar_Triggered(cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAction(unsafe.Pointer(action))

	gofunc(slotval1)
}

func (this *QMenuBar) Hovered(action *QAction) {
	C.QMenuBar_Hovered(this.h, action.cPointer())
}
func (this *QMenuBar) OnHovered(slot func(action *QAction)) {
	C.QMenuBar_connect_Hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMenuBar_Hovered
func miqt_exec_callback_QMenuBar_Hovered(cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAction(unsafe.Pointer(action))

	gofunc(slotval1)
}

func QMenuBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMenuBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMenuBar_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMenuBar) SetCornerWidget2(w *QWidget, corner Corner) {
	C.QMenuBar_SetCornerWidget2(this.h, w.cPointer(), (C.int)(corner))
}

func (this *QMenuBar) CornerWidget1(corner Corner) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QMenuBar_CornerWidget1(this.h, (C.int)(corner))))
}

// Delete this object from C++ memory.
func (this *QMenuBar) Delete() {
	C.QMenuBar_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMenuBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QMenuBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

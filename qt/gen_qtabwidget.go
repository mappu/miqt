package qt

/*

#include "gen_qtabwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTabWidget__TabPosition int

const (
	QTabWidget__North QTabWidget__TabPosition = 0
	QTabWidget__South QTabWidget__TabPosition = 1
	QTabWidget__West  QTabWidget__TabPosition = 2
	QTabWidget__East  QTabWidget__TabPosition = 3
)

type QTabWidget__TabShape int

const (
	QTabWidget__Rounded    QTabWidget__TabShape = 0
	QTabWidget__Triangular QTabWidget__TabShape = 1
)

type QTabWidget struct {
	h *C.QTabWidget
	*QWidget
}

func (this *QTabWidget) cPointer() *C.QTabWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTabWidget(h *C.QTabWidget) *QTabWidget {
	if h == nil {
		return nil
	}
	return &QTabWidget{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQTabWidget_U(h unsafe.Pointer) *QTabWidget {
	return newQTabWidget((*C.QTabWidget)(h))
}

// NewQTabWidget constructs a new QTabWidget object.
func NewQTabWidget() *QTabWidget {
	ret := C.QTabWidget_new()
	return newQTabWidget(ret)
}

// NewQTabWidget2 constructs a new QTabWidget object.
func NewQTabWidget2(parent *QWidget) *QTabWidget {
	ret := C.QTabWidget_new2(parent.cPointer())
	return newQTabWidget(ret)
}

func (this *QTabWidget) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QTabWidget_MetaObject(this.h)))
}

func (this *QTabWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QTabWidget_Metacast(this.h, param1_Cstring)
}

func QTabWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTabWidget_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTabWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTabWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTabWidget) AddTab(widget *QWidget, param2 string) int {
	param2_ms := miqt_strdupg(param2)
	defer C.free(param2_ms)
	return (int)(C.QTabWidget_AddTab(this.h, widget.cPointer(), (*C.struct_miqt_string)(param2_ms)))
}

func (this *QTabWidget) AddTab2(widget *QWidget, icon *QIcon, label string) int {
	label_ms := miqt_strdupg(label)
	defer C.free(label_ms)
	return (int)(C.QTabWidget_AddTab2(this.h, widget.cPointer(), icon.cPointer(), (*C.struct_miqt_string)(label_ms)))
}

func (this *QTabWidget) InsertTab(index int, widget *QWidget, param3 string) int {
	param3_ms := miqt_strdupg(param3)
	defer C.free(param3_ms)
	return (int)(C.QTabWidget_InsertTab(this.h, (C.int)(index), widget.cPointer(), (*C.struct_miqt_string)(param3_ms)))
}

func (this *QTabWidget) InsertTab2(index int, widget *QWidget, icon *QIcon, label string) int {
	label_ms := miqt_strdupg(label)
	defer C.free(label_ms)
	return (int)(C.QTabWidget_InsertTab2(this.h, (C.int)(index), widget.cPointer(), icon.cPointer(), (*C.struct_miqt_string)(label_ms)))
}

func (this *QTabWidget) RemoveTab(index int) {
	C.QTabWidget_RemoveTab(this.h, (C.int)(index))
}

func (this *QTabWidget) IsTabEnabled(index int) bool {
	return (bool)(C.QTabWidget_IsTabEnabled(this.h, (C.int)(index)))
}

func (this *QTabWidget) SetTabEnabled(index int, enabled bool) {
	C.QTabWidget_SetTabEnabled(this.h, (C.int)(index), (C.bool)(enabled))
}

func (this *QTabWidget) IsTabVisible(index int) bool {
	return (bool)(C.QTabWidget_IsTabVisible(this.h, (C.int)(index)))
}

func (this *QTabWidget) SetTabVisible(index int, visible bool) {
	C.QTabWidget_SetTabVisible(this.h, (C.int)(index), (C.bool)(visible))
}

func (this *QTabWidget) TabText(index int) string {
	var _ms *C.struct_miqt_string = C.QTabWidget_TabText(this.h, (C.int)(index))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTabWidget) SetTabText(index int, text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QTabWidget_SetTabText(this.h, (C.int)(index), (*C.struct_miqt_string)(text_ms))
}

func (this *QTabWidget) TabIcon(index int) *QIcon {
	_ret := C.QTabWidget_TabIcon(this.h, (C.int)(index))
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabWidget) SetTabIcon(index int, icon *QIcon) {
	C.QTabWidget_SetTabIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QTabWidget) SetTabToolTip(index int, tip string) {
	tip_ms := miqt_strdupg(tip)
	defer C.free(tip_ms)
	C.QTabWidget_SetTabToolTip(this.h, (C.int)(index), (*C.struct_miqt_string)(tip_ms))
}

func (this *QTabWidget) TabToolTip(index int) string {
	var _ms *C.struct_miqt_string = C.QTabWidget_TabToolTip(this.h, (C.int)(index))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTabWidget) SetTabWhatsThis(index int, text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QTabWidget_SetTabWhatsThis(this.h, (C.int)(index), (*C.struct_miqt_string)(text_ms))
}

func (this *QTabWidget) TabWhatsThis(index int) string {
	var _ms *C.struct_miqt_string = C.QTabWidget_TabWhatsThis(this.h, (C.int)(index))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTabWidget) CurrentIndex() int {
	return (int)(C.QTabWidget_CurrentIndex(this.h))
}

func (this *QTabWidget) CurrentWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QTabWidget_CurrentWidget(this.h)))
}

func (this *QTabWidget) Widget(index int) *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QTabWidget_Widget(this.h, (C.int)(index))))
}

func (this *QTabWidget) IndexOf(widget *QWidget) int {
	return (int)(C.QTabWidget_IndexOf(this.h, widget.cPointer()))
}

func (this *QTabWidget) Count() int {
	return (int)(C.QTabWidget_Count(this.h))
}

func (this *QTabWidget) TabPosition() QTabWidget__TabPosition {
	return (QTabWidget__TabPosition)(C.QTabWidget_TabPosition(this.h))
}

func (this *QTabWidget) SetTabPosition(position QTabWidget__TabPosition) {
	C.QTabWidget_SetTabPosition(this.h, (C.int)(position))
}

func (this *QTabWidget) TabsClosable() bool {
	return (bool)(C.QTabWidget_TabsClosable(this.h))
}

func (this *QTabWidget) SetTabsClosable(closeable bool) {
	C.QTabWidget_SetTabsClosable(this.h, (C.bool)(closeable))
}

func (this *QTabWidget) IsMovable() bool {
	return (bool)(C.QTabWidget_IsMovable(this.h))
}

func (this *QTabWidget) SetMovable(movable bool) {
	C.QTabWidget_SetMovable(this.h, (C.bool)(movable))
}

func (this *QTabWidget) TabShape() QTabWidget__TabShape {
	return (QTabWidget__TabShape)(C.QTabWidget_TabShape(this.h))
}

func (this *QTabWidget) SetTabShape(s QTabWidget__TabShape) {
	C.QTabWidget_SetTabShape(this.h, (C.int)(s))
}

func (this *QTabWidget) SizeHint() *QSize {
	_ret := C.QTabWidget_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabWidget) MinimumSizeHint() *QSize {
	_ret := C.QTabWidget_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabWidget) HeightForWidth(width int) int {
	return (int)(C.QTabWidget_HeightForWidth(this.h, (C.int)(width)))
}

func (this *QTabWidget) HasHeightForWidth() bool {
	return (bool)(C.QTabWidget_HasHeightForWidth(this.h))
}

func (this *QTabWidget) SetCornerWidget(w *QWidget) {
	C.QTabWidget_SetCornerWidget(this.h, w.cPointer())
}

func (this *QTabWidget) CornerWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QTabWidget_CornerWidget(this.h)))
}

func (this *QTabWidget) ElideMode() TextElideMode {
	return (TextElideMode)(C.QTabWidget_ElideMode(this.h))
}

func (this *QTabWidget) SetElideMode(mode TextElideMode) {
	C.QTabWidget_SetElideMode(this.h, (C.int)(mode))
}

func (this *QTabWidget) IconSize() *QSize {
	_ret := C.QTabWidget_IconSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabWidget) SetIconSize(size *QSize) {
	C.QTabWidget_SetIconSize(this.h, size.cPointer())
}

func (this *QTabWidget) UsesScrollButtons() bool {
	return (bool)(C.QTabWidget_UsesScrollButtons(this.h))
}

func (this *QTabWidget) SetUsesScrollButtons(useButtons bool) {
	C.QTabWidget_SetUsesScrollButtons(this.h, (C.bool)(useButtons))
}

func (this *QTabWidget) DocumentMode() bool {
	return (bool)(C.QTabWidget_DocumentMode(this.h))
}

func (this *QTabWidget) SetDocumentMode(set bool) {
	C.QTabWidget_SetDocumentMode(this.h, (C.bool)(set))
}

func (this *QTabWidget) TabBarAutoHide() bool {
	return (bool)(C.QTabWidget_TabBarAutoHide(this.h))
}

func (this *QTabWidget) SetTabBarAutoHide(enabled bool) {
	C.QTabWidget_SetTabBarAutoHide(this.h, (C.bool)(enabled))
}

func (this *QTabWidget) Clear() {
	C.QTabWidget_Clear(this.h)
}

func (this *QTabWidget) TabBar() *QTabBar {
	return newQTabBar_U(unsafe.Pointer(C.QTabWidget_TabBar(this.h)))
}

func (this *QTabWidget) SetCurrentIndex(index int) {
	C.QTabWidget_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QTabWidget) SetCurrentWidget(widget *QWidget) {
	C.QTabWidget_SetCurrentWidget(this.h, widget.cPointer())
}

func (this *QTabWidget) CurrentChanged(index int) {
	C.QTabWidget_CurrentChanged(this.h, (C.int)(index))
}
func (this *QTabWidget) OnCurrentChanged(slot func(index int)) {
	C.QTabWidget_connect_CurrentChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTabWidget_CurrentChanged
func miqt_exec_callback_QTabWidget_CurrentChanged(cb *C.void, index C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabWidget) TabCloseRequested(index int) {
	C.QTabWidget_TabCloseRequested(this.h, (C.int)(index))
}
func (this *QTabWidget) OnTabCloseRequested(slot func(index int)) {
	C.QTabWidget_connect_TabCloseRequested(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTabWidget_TabCloseRequested
func miqt_exec_callback_QTabWidget_TabCloseRequested(cb *C.void, index C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabWidget) TabBarClicked(index int) {
	C.QTabWidget_TabBarClicked(this.h, (C.int)(index))
}
func (this *QTabWidget) OnTabBarClicked(slot func(index int)) {
	C.QTabWidget_connect_TabBarClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTabWidget_TabBarClicked
func miqt_exec_callback_QTabWidget_TabBarClicked(cb *C.void, index C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QTabWidget) TabBarDoubleClicked(index int) {
	C.QTabWidget_TabBarDoubleClicked(this.h, (C.int)(index))
}
func (this *QTabWidget) OnTabBarDoubleClicked(slot func(index int)) {
	C.QTabWidget_connect_TabBarDoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTabWidget_TabBarDoubleClicked
func miqt_exec_callback_QTabWidget_TabBarDoubleClicked(cb *C.void, index C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func QTabWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTabWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTabWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTabWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTabWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTabWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTabWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTabWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTabWidget) SetCornerWidget2(w *QWidget, corner Corner) {
	C.QTabWidget_SetCornerWidget2(this.h, w.cPointer(), (C.int)(corner))
}

func (this *QTabWidget) CornerWidget1(corner Corner) *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QTabWidget_CornerWidget1(this.h, (C.int)(corner))))
}

// Delete this object from C++ memory.
func (this *QTabWidget) Delete() {
	C.QTabWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTabWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QTabWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

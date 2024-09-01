package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qdockwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

type QDockWidget struct {
	h *C.QDockWidget
	*QWidget
}

func (this *QDockWidget) cPointer() *C.QDockWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDockWidget(h *C.QDockWidget) *QDockWidget {
	if h == nil {
		return nil
	}
	return &QDockWidget{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQDockWidget_U(h unsafe.Pointer) *QDockWidget {
	return newQDockWidget((*C.QDockWidget)(h))
}

// NewQDockWidget constructs a new QDockWidget object.
func NewQDockWidget(title string) *QDockWidget {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QDockWidget_new(title_Cstring, C.ulong(len(title)))
	return newQDockWidget(ret)
}

// NewQDockWidget2 constructs a new QDockWidget object.
func NewQDockWidget2() *QDockWidget {
	ret := C.QDockWidget_new2()
	return newQDockWidget(ret)
}

// NewQDockWidget3 constructs a new QDockWidget object.
func NewQDockWidget3(title string, parent *QWidget) *QDockWidget {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QDockWidget_new3(title_Cstring, C.ulong(len(title)), parent.cPointer())
	return newQDockWidget(ret)
}

// NewQDockWidget4 constructs a new QDockWidget object.
func NewQDockWidget4(title string, parent *QWidget, flags int) *QDockWidget {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	ret := C.QDockWidget_new4(title_Cstring, C.ulong(len(title)), parent.cPointer(), (C.int)(flags))
	return newQDockWidget(ret)
}

// NewQDockWidget5 constructs a new QDockWidget object.
func NewQDockWidget5(parent *QWidget) *QDockWidget {
	ret := C.QDockWidget_new5(parent.cPointer())
	return newQDockWidget(ret)
}

// NewQDockWidget6 constructs a new QDockWidget object.
func NewQDockWidget6(parent *QWidget, flags int) *QDockWidget {
	ret := C.QDockWidget_new6(parent.cPointer(), (C.int)(flags))
	return newQDockWidget(ret)
}

func (this *QDockWidget) MetaObject() *QMetaObject {
	ret := C.QDockWidget_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QDockWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDockWidget_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDockWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDockWidget_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDockWidget) Widget() *QWidget {
	ret := C.QDockWidget_Widget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QDockWidget) SetWidget(widget *QWidget) {
	C.QDockWidget_SetWidget(this.h, widget.cPointer())
}

func (this *QDockWidget) SetFeatures(features int) {
	C.QDockWidget_SetFeatures(this.h, (C.int)(features))
}

func (this *QDockWidget) Features() int {
	ret := C.QDockWidget_Features(this.h)
	return (int)(ret)
}

func (this *QDockWidget) SetFloating(floating bool) {
	C.QDockWidget_SetFloating(this.h, (C.bool)(floating))
}

func (this *QDockWidget) IsFloating() bool {
	ret := C.QDockWidget_IsFloating(this.h)
	return (bool)(ret)
}

func (this *QDockWidget) SetAllowedAreas(areas int) {
	C.QDockWidget_SetAllowedAreas(this.h, (C.int)(areas))
}

func (this *QDockWidget) AllowedAreas() int {
	ret := C.QDockWidget_AllowedAreas(this.h)
	return (int)(ret)
}

func (this *QDockWidget) SetTitleBarWidget(widget *QWidget) {
	C.QDockWidget_SetTitleBarWidget(this.h, widget.cPointer())
}

func (this *QDockWidget) TitleBarWidget() *QWidget {
	ret := C.QDockWidget_TitleBarWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QDockWidget) IsAreaAllowed(area uintptr) bool {
	ret := C.QDockWidget_IsAreaAllowed(this.h, (C.uintptr_t)(area))
	return (bool)(ret)
}

func (this *QDockWidget) ToggleViewAction() *QAction {
	ret := C.QDockWidget_ToggleViewAction(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QDockWidget) FeaturesChanged(features int) {
	C.QDockWidget_FeaturesChanged(this.h, (C.int)(features))
}

func (this *QDockWidget) OnFeaturesChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDockWidget_connect_FeaturesChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDockWidget) TopLevelChanged(topLevel bool) {
	C.QDockWidget_TopLevelChanged(this.h, (C.bool)(topLevel))
}

func (this *QDockWidget) OnTopLevelChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDockWidget_connect_TopLevelChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDockWidget) AllowedAreasChanged(allowedAreas int) {
	C.QDockWidget_AllowedAreasChanged(this.h, (C.int)(allowedAreas))
}

func (this *QDockWidget) OnAllowedAreasChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDockWidget_connect_AllowedAreasChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDockWidget) VisibilityChanged(visible bool) {
	C.QDockWidget_VisibilityChanged(this.h, (C.bool)(visible))
}

func (this *QDockWidget) OnVisibilityChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDockWidget_connect_VisibilityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDockWidget) DockLocationChanged(area uintptr) {
	C.QDockWidget_DockLocationChanged(this.h, (C.uintptr_t)(area))
}

func (this *QDockWidget) OnDockLocationChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDockWidget_connect_DockLocationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QDockWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDockWidget_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDockWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDockWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDockWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDockWidget_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDockWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDockWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDockWidget) Delete() {
	C.QDockWidget_Delete(this.h)
}

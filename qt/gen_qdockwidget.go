package qt

/*

#include "gen_qdockwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDockWidget__DockWidgetFeature int

const (
	QDockWidget__DockWidgetClosable         QDockWidget__DockWidgetFeature = 1
	QDockWidget__DockWidgetMovable          QDockWidget__DockWidgetFeature = 2
	QDockWidget__DockWidgetFloatable        QDockWidget__DockWidgetFeature = 4
	QDockWidget__DockWidgetVerticalTitleBar QDockWidget__DockWidgetFeature = 8
	QDockWidget__DockWidgetFeatureMask      QDockWidget__DockWidgetFeature = 15
	QDockWidget__AllDockWidgetFeatures      QDockWidget__DockWidgetFeature = 7
	QDockWidget__NoDockWidgetFeatures       QDockWidget__DockWidgetFeature = 0
	QDockWidget__Reserved                   QDockWidget__DockWidgetFeature = 255
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

func (this *QDockWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDockWidget constructs the type using only CGO pointers.
func newQDockWidget(h *C.QDockWidget) *QDockWidget {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QDockWidget_virtbase(h, &outptr_QWidget)

	return &QDockWidget{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQDockWidget constructs the type using only unsafe pointers.
func UnsafeNewQDockWidget(h unsafe.Pointer) *QDockWidget {
	return newQDockWidget((*C.QDockWidget)(h))
}

// NewQDockWidget constructs a new QDockWidget object.
func NewQDockWidget(parent *QWidget) *QDockWidget {

	return newQDockWidget(C.QDockWidget_new(parent.cPointer()))
}

// NewQDockWidget2 constructs a new QDockWidget object.
func NewQDockWidget2(title string) *QDockWidget {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQDockWidget(C.QDockWidget_new2(title_ms))
}

// NewQDockWidget3 constructs a new QDockWidget object.
func NewQDockWidget3() *QDockWidget {

	return newQDockWidget(C.QDockWidget_new3())
}

// NewQDockWidget4 constructs a new QDockWidget object.
func NewQDockWidget4(title string, parent *QWidget) *QDockWidget {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQDockWidget(C.QDockWidget_new4(title_ms, parent.cPointer()))
}

// NewQDockWidget5 constructs a new QDockWidget object.
func NewQDockWidget5(title string, parent *QWidget, flags WindowType) *QDockWidget {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))

	return newQDockWidget(C.QDockWidget_new5(title_ms, parent.cPointer(), (C.int)(flags)))
}

// NewQDockWidget6 constructs a new QDockWidget object.
func NewQDockWidget6(parent *QWidget, flags WindowType) *QDockWidget {

	return newQDockWidget(C.QDockWidget_new6(parent.cPointer(), (C.int)(flags)))
}

func (this *QDockWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QDockWidget_MetaObject(this.h))
}

func (this *QDockWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDockWidget_Metacast(this.h, param1_Cstring))
}

func QDockWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDockWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDockWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDockWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDockWidget) Widget() *QWidget {
	return newQWidget(C.QDockWidget_Widget(this.h))
}

func (this *QDockWidget) SetWidget(widget *QWidget) {
	C.QDockWidget_SetWidget(this.h, widget.cPointer())
}

func (this *QDockWidget) SetFeatures(features QDockWidget__DockWidgetFeature) {
	C.QDockWidget_SetFeatures(this.h, (C.int)(features))
}

func (this *QDockWidget) Features() QDockWidget__DockWidgetFeature {
	return (QDockWidget__DockWidgetFeature)(C.QDockWidget_Features(this.h))
}

func (this *QDockWidget) SetFloating(floating bool) {
	C.QDockWidget_SetFloating(this.h, (C.bool)(floating))
}

func (this *QDockWidget) IsFloating() bool {
	return (bool)(C.QDockWidget_IsFloating(this.h))
}

func (this *QDockWidget) SetAllowedAreas(areas DockWidgetArea) {
	C.QDockWidget_SetAllowedAreas(this.h, (C.int)(areas))
}

func (this *QDockWidget) AllowedAreas() DockWidgetArea {
	return (DockWidgetArea)(C.QDockWidget_AllowedAreas(this.h))
}

func (this *QDockWidget) SetTitleBarWidget(widget *QWidget) {
	C.QDockWidget_SetTitleBarWidget(this.h, widget.cPointer())
}

func (this *QDockWidget) TitleBarWidget() *QWidget {
	return newQWidget(C.QDockWidget_TitleBarWidget(this.h))
}

func (this *QDockWidget) IsAreaAllowed(area DockWidgetArea) bool {
	return (bool)(C.QDockWidget_IsAreaAllowed(this.h, (C.int)(area)))
}

func (this *QDockWidget) ToggleViewAction() *QAction {
	return newQAction(C.QDockWidget_ToggleViewAction(this.h))
}

func (this *QDockWidget) FeaturesChanged(features QDockWidget__DockWidgetFeature) {
	C.QDockWidget_FeaturesChanged(this.h, (C.int)(features))
}
func (this *QDockWidget) OnFeaturesChanged(slot func(features QDockWidget__DockWidgetFeature)) {
	C.QDockWidget_connect_FeaturesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDockWidget_FeaturesChanged
func miqt_exec_callback_QDockWidget_FeaturesChanged(cb C.intptr_t, features C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(features QDockWidget__DockWidgetFeature))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDockWidget__DockWidgetFeature)(features)

	gofunc(slotval1)
}

func (this *QDockWidget) TopLevelChanged(topLevel bool) {
	C.QDockWidget_TopLevelChanged(this.h, (C.bool)(topLevel))
}
func (this *QDockWidget) OnTopLevelChanged(slot func(topLevel bool)) {
	C.QDockWidget_connect_TopLevelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDockWidget_TopLevelChanged
func miqt_exec_callback_QDockWidget_TopLevelChanged(cb C.intptr_t, topLevel C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(topLevel bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(topLevel)

	gofunc(slotval1)
}

func (this *QDockWidget) AllowedAreasChanged(allowedAreas DockWidgetArea) {
	C.QDockWidget_AllowedAreasChanged(this.h, (C.int)(allowedAreas))
}
func (this *QDockWidget) OnAllowedAreasChanged(slot func(allowedAreas DockWidgetArea)) {
	C.QDockWidget_connect_AllowedAreasChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDockWidget_AllowedAreasChanged
func miqt_exec_callback_QDockWidget_AllowedAreasChanged(cb C.intptr_t, allowedAreas C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(allowedAreas DockWidgetArea))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DockWidgetArea)(allowedAreas)

	gofunc(slotval1)
}

func (this *QDockWidget) VisibilityChanged(visible bool) {
	C.QDockWidget_VisibilityChanged(this.h, (C.bool)(visible))
}
func (this *QDockWidget) OnVisibilityChanged(slot func(visible bool)) {
	C.QDockWidget_connect_VisibilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDockWidget_VisibilityChanged
func miqt_exec_callback_QDockWidget_VisibilityChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QDockWidget) DockLocationChanged(area DockWidgetArea) {
	C.QDockWidget_DockLocationChanged(this.h, (C.int)(area))
}
func (this *QDockWidget) OnDockLocationChanged(slot func(area DockWidgetArea)) {
	C.QDockWidget_connect_DockLocationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDockWidget_DockLocationChanged
func miqt_exec_callback_QDockWidget_DockLocationChanged(cb C.intptr_t, area C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(area DockWidgetArea))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DockWidgetArea)(area)

	gofunc(slotval1)
}

func QDockWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDockWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDockWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDockWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDockWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDockWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDockWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDockWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDockWidget) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QDockWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDockWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_ChangeEvent
func miqt_exec_callback_QDockWidget_ChangeEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QDockWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QDockWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_CloseEvent
func miqt_exec_callback_QDockWidget_CloseEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDockWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QDockWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_PaintEvent
func miqt_exec_callback_QDockWidget_PaintEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDockWidget_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDockWidget) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QDockWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_Event
func miqt_exec_callback_QDockWidget_Event(self *C.QDockWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDockWidget) callVirtualBase_DevType() int {

	return (int)(C.QDockWidget_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QDockWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QDockWidget_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_DevType
func miqt_exec_callback_QDockWidget_DevType(self *C.QDockWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDockWidget) callVirtualBase_SetVisible(visible bool) {

	C.QDockWidget_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDockWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDockWidget_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_SetVisible
func miqt_exec_callback_QDockWidget_SetVisible(self *C.QDockWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDockWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDockWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QDockWidget_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDockWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDockWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_SizeHint
func miqt_exec_callback_QDockWidget_SizeHint(self *C.QDockWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDockWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QDockWidget_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDockWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDockWidget_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_MinimumSizeHint
func miqt_exec_callback_QDockWidget_MinimumSizeHint(self *C.QDockWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDockWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDockWidget_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDockWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDockWidget_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_HeightForWidth
func miqt_exec_callback_QDockWidget_HeightForWidth(self *C.QDockWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDockWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDockWidget_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDockWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDockWidget_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_HasHeightForWidth
func miqt_exec_callback_QDockWidget_HasHeightForWidth(self *C.QDockWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDockWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDockWidget_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QDockWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QDockWidget_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_PaintEngine
func miqt_exec_callback_QDockWidget_PaintEngine(self *C.QDockWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDockWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QDockWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDockWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_MousePressEvent
func miqt_exec_callback_QDockWidget_MousePressEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDockWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDockWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_MouseReleaseEvent
func miqt_exec_callback_QDockWidget_MouseReleaseEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDockWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDockWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_MouseDoubleClickEvent
func miqt_exec_callback_QDockWidget_MouseDoubleClickEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDockWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDockWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_MouseMoveEvent
func miqt_exec_callback_QDockWidget_MouseMoveEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDockWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QDockWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_WheelEvent
func miqt_exec_callback_QDockWidget_WheelEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QDockWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDockWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_KeyPressEvent
func miqt_exec_callback_QDockWidget_KeyPressEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDockWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDockWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_KeyReleaseEvent
func miqt_exec_callback_QDockWidget_KeyReleaseEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDockWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDockWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_FocusInEvent
func miqt_exec_callback_QDockWidget_FocusInEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDockWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDockWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_FocusOutEvent
func miqt_exec_callback_QDockWidget_FocusOutEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_EnterEvent(event *QEvent) {

	C.QDockWidget_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDockWidget_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_EnterEvent
func miqt_exec_callback_QDockWidget_EnterEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDockWidget_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDockWidget_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_LeaveEvent
func miqt_exec_callback_QDockWidget_LeaveEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDockWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QDockWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_MoveEvent
func miqt_exec_callback_QDockWidget_MoveEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QDockWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QDockWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_ResizeEvent
func miqt_exec_callback_QDockWidget_ResizeEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QDockWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QDockWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_ContextMenuEvent
func miqt_exec_callback_QDockWidget_ContextMenuEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDockWidget_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QDockWidget_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_TabletEvent
func miqt_exec_callback_QDockWidget_TabletEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDockWidget_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QDockWidget_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_ActionEvent
func miqt_exec_callback_QDockWidget_ActionEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDockWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QDockWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_DragEnterEvent
func miqt_exec_callback_QDockWidget_DragEnterEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDockWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QDockWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_DragMoveEvent
func miqt_exec_callback_QDockWidget_DragMoveEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDockWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QDockWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_DragLeaveEvent
func miqt_exec_callback_QDockWidget_DragLeaveEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDockWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QDockWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_DropEvent
func miqt_exec_callback_QDockWidget_DropEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QDockWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QDockWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_ShowEvent
func miqt_exec_callback_QDockWidget_ShowEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDockWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QDockWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_HideEvent
func miqt_exec_callback_QDockWidget_HideEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDockWidget_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QDockWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QDockWidget_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_NativeEvent
func miqt_exec_callback_QDockWidget_NativeEvent(self *C.QDockWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDockWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDockWidget_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDockWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDockWidget_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_Metric
func miqt_exec_callback_QDockWidget_Metric(self *C.QDockWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDockWidget) callVirtualBase_InitPainter(painter *QPainter) {

	C.QDockWidget_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDockWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QDockWidget_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_InitPainter
func miqt_exec_callback_QDockWidget_InitPainter(self *C.QDockWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDockWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDockWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDockWidget_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDockWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QDockWidget_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_Redirected
func miqt_exec_callback_QDockWidget_Redirected(self *C.QDockWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDockWidget) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QDockWidget_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDockWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QDockWidget_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_SharedPainter
func miqt_exec_callback_QDockWidget_SharedPainter(self *C.QDockWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDockWidget) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDockWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDockWidget) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QDockWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_InputMethodEvent
func miqt_exec_callback_QDockWidget_InputMethodEvent(self *C.QDockWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDockWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QDockWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDockWidget) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QDockWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_InputMethodQuery
func miqt_exec_callback_QDockWidget_InputMethodQuery(self *C.QDockWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDockWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDockWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDockWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDockWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_FocusNextPrevChild
func miqt_exec_callback_QDockWidget_FocusNextPrevChild(self *C.QDockWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QDockWidget) Delete() {
	C.QDockWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDockWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QDockWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

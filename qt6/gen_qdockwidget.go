package qt6

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
	return newQMetaObject(C.QDockWidget_metaObject(this.h))
}

func (this *QDockWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDockWidget_metacast(this.h, param1_Cstring))
}

func QDockWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDockWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDockWidget) Widget() *QWidget {
	return newQWidget(C.QDockWidget_widget(this.h))
}

func (this *QDockWidget) SetWidget(widget *QWidget) {
	C.QDockWidget_setWidget(this.h, widget.cPointer())
}

func (this *QDockWidget) SetFeatures(features QDockWidget__DockWidgetFeature) {
	C.QDockWidget_setFeatures(this.h, (C.int)(features))
}

func (this *QDockWidget) Features() QDockWidget__DockWidgetFeature {
	return (QDockWidget__DockWidgetFeature)(C.QDockWidget_features(this.h))
}

func (this *QDockWidget) SetFloating(floating bool) {
	C.QDockWidget_setFloating(this.h, (C.bool)(floating))
}

func (this *QDockWidget) IsFloating() bool {
	return (bool)(C.QDockWidget_isFloating(this.h))
}

func (this *QDockWidget) SetAllowedAreas(areas DockWidgetArea) {
	C.QDockWidget_setAllowedAreas(this.h, (C.int)(areas))
}

func (this *QDockWidget) AllowedAreas() DockWidgetArea {
	return (DockWidgetArea)(C.QDockWidget_allowedAreas(this.h))
}

func (this *QDockWidget) SetTitleBarWidget(widget *QWidget) {
	C.QDockWidget_setTitleBarWidget(this.h, widget.cPointer())
}

func (this *QDockWidget) TitleBarWidget() *QWidget {
	return newQWidget(C.QDockWidget_titleBarWidget(this.h))
}

func (this *QDockWidget) IsAreaAllowed(area DockWidgetArea) bool {
	return (bool)(C.QDockWidget_isAreaAllowed(this.h, (C.int)(area)))
}

func (this *QDockWidget) ToggleViewAction() *QAction {
	return newQAction(C.QDockWidget_toggleViewAction(this.h))
}

func (this *QDockWidget) FeaturesChanged(features QDockWidget__DockWidgetFeature) {
	C.QDockWidget_featuresChanged(this.h, (C.int)(features))
}
func (this *QDockWidget) OnFeaturesChanged(slot func(features QDockWidget__DockWidgetFeature)) {
	C.QDockWidget_connect_featuresChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDockWidget_featuresChanged
func miqt_exec_callback_QDockWidget_featuresChanged(cb C.intptr_t, features C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(features QDockWidget__DockWidgetFeature))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDockWidget__DockWidgetFeature)(features)

	gofunc(slotval1)
}

func (this *QDockWidget) TopLevelChanged(topLevel bool) {
	C.QDockWidget_topLevelChanged(this.h, (C.bool)(topLevel))
}
func (this *QDockWidget) OnTopLevelChanged(slot func(topLevel bool)) {
	C.QDockWidget_connect_topLevelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDockWidget_topLevelChanged
func miqt_exec_callback_QDockWidget_topLevelChanged(cb C.intptr_t, topLevel C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(topLevel bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(topLevel)

	gofunc(slotval1)
}

func (this *QDockWidget) AllowedAreasChanged(allowedAreas DockWidgetArea) {
	C.QDockWidget_allowedAreasChanged(this.h, (C.int)(allowedAreas))
}
func (this *QDockWidget) OnAllowedAreasChanged(slot func(allowedAreas DockWidgetArea)) {
	C.QDockWidget_connect_allowedAreasChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDockWidget_allowedAreasChanged
func miqt_exec_callback_QDockWidget_allowedAreasChanged(cb C.intptr_t, allowedAreas C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(allowedAreas DockWidgetArea))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DockWidgetArea)(allowedAreas)

	gofunc(slotval1)
}

func (this *QDockWidget) VisibilityChanged(visible bool) {
	C.QDockWidget_visibilityChanged(this.h, (C.bool)(visible))
}
func (this *QDockWidget) OnVisibilityChanged(slot func(visible bool)) {
	C.QDockWidget_connect_visibilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDockWidget_visibilityChanged
func miqt_exec_callback_QDockWidget_visibilityChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QDockWidget) DockLocationChanged(area DockWidgetArea) {
	C.QDockWidget_dockLocationChanged(this.h, (C.int)(area))
}
func (this *QDockWidget) OnDockLocationChanged(slot func(area DockWidgetArea)) {
	C.QDockWidget_connect_dockLocationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDockWidget_dockLocationChanged
func miqt_exec_callback_QDockWidget_dockLocationChanged(cb C.intptr_t, area C.int) {
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
	var _ms C.struct_miqt_string = C.QDockWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDockWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDockWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDockWidget) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QDockWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnchangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDockWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_changeEvent
func miqt_exec_callback_QDockWidget_changeEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QDockWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QDockWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_closeEvent
func miqt_exec_callback_QDockWidget_closeEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDockWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnpaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QDockWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_paintEvent
func miqt_exec_callback_QDockWidget_paintEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDockWidget_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDockWidget) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QDockWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_event
func miqt_exec_callback_QDockWidget_event(self *C.QDockWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDockWidget) callVirtualBase_InitStyleOption(option *QStyleOptionDockWidget) {

	C.QDockWidget_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QDockWidget) OninitStyleOption(slot func(super func(option *QStyleOptionDockWidget), option *QStyleOptionDockWidget)) {
	ok := C.QDockWidget_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_initStyleOption
func miqt_exec_callback_QDockWidget_initStyleOption(self *C.QDockWidget, cb C.intptr_t, option *C.QStyleOptionDockWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionDockWidget), option *QStyleOptionDockWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionDockWidget(option)

	gofunc((&QDockWidget{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QDockWidget) callVirtualBase_DevType() int {

	return (int)(C.QDockWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QDockWidget) OndevType(slot func(super func() int) int) {
	ok := C.QDockWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_devType
func miqt_exec_callback_QDockWidget_devType(self *C.QDockWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDockWidget) callVirtualBase_SetVisible(visible bool) {

	C.QDockWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDockWidget) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDockWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_setVisible
func miqt_exec_callback_QDockWidget_setVisible(self *C.QDockWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDockWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDockWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QDockWidget_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDockWidget) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDockWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_sizeHint
func miqt_exec_callback_QDockWidget_sizeHint(self *C.QDockWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDockWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QDockWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDockWidget) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDockWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_minimumSizeHint
func miqt_exec_callback_QDockWidget_minimumSizeHint(self *C.QDockWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDockWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDockWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDockWidget) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDockWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_heightForWidth
func miqt_exec_callback_QDockWidget_heightForWidth(self *C.QDockWidget, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QDockWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDockWidget) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDockWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_hasHeightForWidth
func miqt_exec_callback_QDockWidget_hasHeightForWidth(self *C.QDockWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDockWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDockWidget_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QDockWidget) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QDockWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_paintEngine
func miqt_exec_callback_QDockWidget_paintEngine(self *C.QDockWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDockWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QDockWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDockWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_mousePressEvent
func miqt_exec_callback_QDockWidget_mousePressEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDockWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDockWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_mouseReleaseEvent
func miqt_exec_callback_QDockWidget_mouseReleaseEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDockWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDockWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_mouseDoubleClickEvent
func miqt_exec_callback_QDockWidget_mouseDoubleClickEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDockWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDockWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_mouseMoveEvent
func miqt_exec_callback_QDockWidget_mouseMoveEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDockWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QDockWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_wheelEvent
func miqt_exec_callback_QDockWidget_wheelEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QDockWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnkeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDockWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_keyPressEvent
func miqt_exec_callback_QDockWidget_keyPressEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDockWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDockWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_keyReleaseEvent
func miqt_exec_callback_QDockWidget_keyReleaseEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDockWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDockWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_focusInEvent
func miqt_exec_callback_QDockWidget_focusInEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDockWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDockWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_focusOutEvent
func miqt_exec_callback_QDockWidget_focusOutEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QDockWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnenterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QDockWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_enterEvent
func miqt_exec_callback_QDockWidget_enterEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDockWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDockWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_leaveEvent
func miqt_exec_callback_QDockWidget_leaveEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDockWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QDockWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_moveEvent
func miqt_exec_callback_QDockWidget_moveEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QDockWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QDockWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_resizeEvent
func miqt_exec_callback_QDockWidget_resizeEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QDockWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QDockWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_contextMenuEvent
func miqt_exec_callback_QDockWidget_contextMenuEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDockWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QDockWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_tabletEvent
func miqt_exec_callback_QDockWidget_tabletEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDockWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QDockWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_actionEvent
func miqt_exec_callback_QDockWidget_actionEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDockWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QDockWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_dragEnterEvent
func miqt_exec_callback_QDockWidget_dragEnterEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDockWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QDockWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_dragMoveEvent
func miqt_exec_callback_QDockWidget_dragMoveEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDockWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QDockWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_dragLeaveEvent
func miqt_exec_callback_QDockWidget_dragLeaveEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDockWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QDockWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_dropEvent
func miqt_exec_callback_QDockWidget_dropEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QDockWidget_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QDockWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_showEvent
func miqt_exec_callback_QDockWidget_showEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDockWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QDockWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_hideEvent
func miqt_exec_callback_QDockWidget_hideEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDockWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDockWidget) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QDockWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_nativeEvent
func miqt_exec_callback_QDockWidget_nativeEvent(self *C.QDockWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDockWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDockWidget_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDockWidget) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDockWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_metric
func miqt_exec_callback_QDockWidget_metric(self *C.QDockWidget, cb C.intptr_t, param1 C.int) C.int {
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

	C.QDockWidget_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDockWidget) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QDockWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_initPainter
func miqt_exec_callback_QDockWidget_initPainter(self *C.QDockWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDockWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDockWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDockWidget_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDockWidget) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QDockWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_redirected
func miqt_exec_callback_QDockWidget_redirected(self *C.QDockWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QDockWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDockWidget) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QDockWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_sharedPainter
func miqt_exec_callback_QDockWidget_sharedPainter(self *C.QDockWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDockWidget) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDockWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDockWidget) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QDockWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_inputMethodEvent
func miqt_exec_callback_QDockWidget_inputMethodEvent(self *C.QDockWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDockWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QDockWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDockWidget) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QDockWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_inputMethodQuery
func miqt_exec_callback_QDockWidget_inputMethodQuery(self *C.QDockWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QDockWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDockWidget) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDockWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_focusNextPrevChild
func miqt_exec_callback_QDockWidget_focusNextPrevChild(self *C.QDockWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDockWidget) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QDockWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDockWidget) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QDockWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_eventFilter
func miqt_exec_callback_QDockWidget_eventFilter(self *C.QDockWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QDockWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDockWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDockWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QDockWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_timerEvent
func miqt_exec_callback_QDockWidget_timerEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDockWidget_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDockWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_childEvent
func miqt_exec_callback_QDockWidget_childEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDockWidget_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDockWidget) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDockWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_customEvent
func miqt_exec_callback_QDockWidget_customEvent(self *C.QDockWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDockWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDockWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDockWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDockWidget) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDockWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_connectNotify
func miqt_exec_callback_QDockWidget_connectNotify(self *C.QDockWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDockWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDockWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDockWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDockWidget) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDockWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDockWidget_disconnectNotify
func miqt_exec_callback_QDockWidget_disconnectNotify(self *C.QDockWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDockWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDockWidget) Delete() {
	C.QDockWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDockWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QDockWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

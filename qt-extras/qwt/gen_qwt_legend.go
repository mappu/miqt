package qwt

/*

#include "gen_qwt_legend.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtLegend struct {
	h *C.QwtLegend
	*QwtAbstractLegend
}

func (this *QwtLegend) cPointer() *C.QwtLegend {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtLegend) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtLegend constructs the type using only CGO pointers.
func newQwtLegend(h *C.QwtLegend) *QwtLegend {
	if h == nil {
		return nil
	}
	var outptr_QwtAbstractLegend *C.QwtAbstractLegend = nil
	C.QwtLegend_virtbase(h, &outptr_QwtAbstractLegend)

	return &QwtLegend{h: h,
		QwtAbstractLegend: newQwtAbstractLegend(outptr_QwtAbstractLegend)}
}

// UnsafeNewQwtLegend constructs the type using only unsafe pointers.
func UnsafeNewQwtLegend(h unsafe.Pointer) *QwtLegend {
	return newQwtLegend((*C.QwtLegend)(h))
}

// NewQwtLegend constructs a new QwtLegend object.
func NewQwtLegend(parent *qt.QWidget) *QwtLegend {

	return newQwtLegend(C.QwtLegend_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtLegend2 constructs a new QwtLegend object.
func NewQwtLegend2() *QwtLegend {

	return newQwtLegend(C.QwtLegend_new2())
}

func (this *QwtLegend) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtLegend_metaObject(this.h)))
}

func (this *QwtLegend) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtLegend_metacast(this.h, param1_Cstring))
}

func QwtLegend_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtLegend_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtLegend_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtLegend_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtLegend) SetMaxColumns(numColums uint) {
	C.QwtLegend_setMaxColumns(this.h, (C.uint)(numColums))
}

func (this *QwtLegend) MaxColumns() uint {
	return (uint)(C.QwtLegend_maxColumns(this.h))
}

func (this *QwtLegend) SetDefaultItemMode(defaultItemMode QwtLegendData__Mode) {
	C.QwtLegend_setDefaultItemMode(this.h, (C.int)(defaultItemMode))
}

func (this *QwtLegend) DefaultItemMode() QwtLegendData__Mode {
	return (QwtLegendData__Mode)(C.QwtLegend_defaultItemMode(this.h))
}

func (this *QwtLegend) ContentsWidget() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtLegend_contentsWidget(this.h)))
}

func (this *QwtLegend) ContentsWidget2() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtLegend_contentsWidget2(this.h)))
}

func (this *QwtLegend) LegendWidget(param1 *qt.QVariant) *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtLegend_legendWidget(this.h, (*C.QVariant)(param1.UnsafePointer()))))
}

func (this *QwtLegend) LegendWidgets(param1 *qt.QVariant) []*qt.QWidget {
	var _ma C.struct_miqt_array = C.QwtLegend_legendWidgets(this.h, (*C.QVariant)(param1.UnsafePointer()))
	_ret := make([]*qt.QWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt.UnsafeNewQWidget(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QwtLegend) ItemInfo(param1 *qt.QWidget) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtLegend_itemInfo(this.h, (*C.QWidget)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtLegend) EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {
	return (bool)(C.QwtLegend_eventFilter(this.h, (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))
}

func (this *QwtLegend) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtLegend_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtLegend) HeightForWidth(width int) int {
	return (int)(C.QwtLegend_heightForWidth(this.h, (C.int)(width)))
}

func (this *QwtLegend) HorizontalScrollBar() *qt.QScrollBar {
	return qt.UnsafeNewQScrollBar(unsafe.Pointer(C.QwtLegend_horizontalScrollBar(this.h)))
}

func (this *QwtLegend) VerticalScrollBar() *qt.QScrollBar {
	return qt.UnsafeNewQScrollBar(unsafe.Pointer(C.QwtLegend_verticalScrollBar(this.h)))
}

func (this *QwtLegend) RenderLegend(param1 *qt.QPainter, param2 *qt.QRectF, fillBackground bool) {
	C.QwtLegend_renderLegend(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()), (C.bool)(fillBackground))
}

func (this *QwtLegend) RenderItem(param1 *qt.QPainter, param2 *qt.QWidget, param3 *qt.QRectF, fillBackground bool) {
	C.QwtLegend_renderItem(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QWidget)(param2.UnsafePointer()), (*C.QRectF)(param3.UnsafePointer()), (C.bool)(fillBackground))
}

func (this *QwtLegend) IsEmpty() bool {
	return (bool)(C.QwtLegend_isEmpty(this.h))
}

func (this *QwtLegend) ScrollExtent(param1 qt.Orientation) int {
	return (int)(C.QwtLegend_scrollExtent(this.h, (C.int)(param1)))
}

func (this *QwtLegend) Clicked(itemInfo *qt.QVariant, index int) {
	C.QwtLegend_clicked(this.h, (*C.QVariant)(itemInfo.UnsafePointer()), (C.int)(index))
}
func (this *QwtLegend) OnClicked(slot func(itemInfo *qt.QVariant, index int)) {
	C.QwtLegend_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtLegend_clicked
func miqt_exec_callback_QwtLegend_clicked(cb C.intptr_t, itemInfo *C.QVariant, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(itemInfo *qt.QVariant, index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQVariant(unsafe.Pointer(itemInfo))

	slotval2 := (int)(index)

	gofunc(slotval1, slotval2)
}

func (this *QwtLegend) Checked(itemInfo *qt.QVariant, on bool, index int) {
	C.QwtLegend_checked(this.h, (*C.QVariant)(itemInfo.UnsafePointer()), (C.bool)(on), (C.int)(index))
}
func (this *QwtLegend) OnChecked(slot func(itemInfo *qt.QVariant, on bool, index int)) {
	C.QwtLegend_connect_checked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtLegend_checked
func miqt_exec_callback_QwtLegend_checked(cb C.intptr_t, itemInfo *C.QVariant, on C.bool, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(itemInfo *qt.QVariant, on bool, index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQVariant(unsafe.Pointer(itemInfo))

	slotval2 := (bool)(on)

	slotval3 := (int)(index)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QwtLegend) UpdateLegend(param1 *qt.QVariant, param2 []QwtLegendData) {
	param2_CArray := (*[0xffff]*C.QwtLegendData)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray))
	for i := range param2 {
		param2_CArray[i] = param2[i].cPointer()
	}
	param2_ma := C.struct_miqt_array{len: C.size_t(len(param2)), data: unsafe.Pointer(param2_CArray)}
	C.QwtLegend_updateLegend(this.h, (*C.QVariant)(param1.UnsafePointer()), param2_ma)
}

func QwtLegend_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtLegend_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtLegend_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtLegend_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtLegend_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtLegend_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtLegend_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtLegend_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// ItemClicked can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) ItemClicked() {

	var _dynamic_cast_ok C.bool = false
	C.QwtLegend_protectedbase_itemClicked(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ItemChecked can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) ItemChecked(param1 bool) {

	var _dynamic_cast_ok C.bool = false
	C.QwtLegend_protectedbase_itemChecked(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(param1))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DrawFrame can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) DrawFrame(param1 *qt.QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QwtLegend_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// InitStyleOption can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) InitStyleOption(option *qt.QStyleOptionFrame) {

	var _dynamic_cast_ok C.bool = false
	C.QwtLegend_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QStyleOptionFrame)(option.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtLegend_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtLegend_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtLegend_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtLegend_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtLegend_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtLegend_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtLegend_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtLegend_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtLegend that was directly constructed.
func (this *QwtLegend) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtLegend_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtLegend) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {

	return (bool)(C.QwtLegend_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QwtLegend) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	ok := C.QwtLegend_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_eventFilter
func miqt_exec_callback_QwtLegend_eventFilter(self *C.QwtLegend, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtLegend) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtLegend_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtLegend) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtLegend_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_sizeHint
func miqt_exec_callback_QwtLegend_sizeHint(self *C.QwtLegend, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtLegend) callVirtualBase_HeightForWidth(width int) int {

	return (int)(C.QwtLegend_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(width)))

}
func (this *QwtLegend) OnHeightForWidth(slot func(super func(width int) int, width int) int) {
	ok := C.QwtLegend_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_heightForWidth
func miqt_exec_callback_QwtLegend_heightForWidth(self *C.QwtLegend, cb C.intptr_t, width C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int) int, width int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtLegend) callVirtualBase_RenderLegend(param1 *qt.QPainter, param2 *qt.QRectF, fillBackground bool) {

	C.QwtLegend_virtualbase_renderLegend(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()), (C.bool)(fillBackground))

}
func (this *QwtLegend) OnRenderLegend(slot func(super func(param1 *qt.QPainter, param2 *qt.QRectF, fillBackground bool), param1 *qt.QPainter, param2 *qt.QRectF, fillBackground bool)) {
	ok := C.QwtLegend_override_virtual_renderLegend(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_renderLegend
func miqt_exec_callback_QwtLegend_renderLegend(self *C.QwtLegend, cb C.intptr_t, param1 *C.QPainter, param2 *C.QRectF, fillBackground C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QRectF, fillBackground bool), param1 *qt.QPainter, param2 *qt.QRectF, fillBackground bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQRectF(unsafe.Pointer(param2))

	slotval3 := (bool)(fillBackground)

	gofunc((&QwtLegend{h: self}).callVirtualBase_RenderLegend, slotval1, slotval2, slotval3)

}

func (this *QwtLegend) callVirtualBase_RenderItem(param1 *qt.QPainter, param2 *qt.QWidget, param3 *qt.QRectF, fillBackground bool) {

	C.QwtLegend_virtualbase_renderItem(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QWidget)(param2.UnsafePointer()), (*C.QRectF)(param3.UnsafePointer()), (C.bool)(fillBackground))

}
func (this *QwtLegend) OnRenderItem(slot func(super func(param1 *qt.QPainter, param2 *qt.QWidget, param3 *qt.QRectF, fillBackground bool), param1 *qt.QPainter, param2 *qt.QWidget, param3 *qt.QRectF, fillBackground bool)) {
	ok := C.QwtLegend_override_virtual_renderItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_renderItem
func miqt_exec_callback_QwtLegend_renderItem(self *C.QwtLegend, cb C.intptr_t, param1 *C.QPainter, param2 *C.QWidget, param3 *C.QRectF, fillBackground C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QWidget, param3 *qt.QRectF, fillBackground bool), param1 *qt.QPainter, param2 *qt.QWidget, param3 *qt.QRectF, fillBackground bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQWidget(unsafe.Pointer(param2))

	slotval3 := qt.UnsafeNewQRectF(unsafe.Pointer(param3))

	slotval4 := (bool)(fillBackground)

	gofunc((&QwtLegend{h: self}).callVirtualBase_RenderItem, slotval1, slotval2, slotval3, slotval4)

}

func (this *QwtLegend) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QwtLegend_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QwtLegend) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QwtLegend_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_isEmpty
func miqt_exec_callback_QwtLegend_isEmpty(self *C.QwtLegend, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QwtLegend) callVirtualBase_ScrollExtent(param1 qt.Orientation) int {

	return (int)(C.QwtLegend_virtualbase_scrollExtent(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtLegend) OnScrollExtent(slot func(super func(param1 qt.Orientation) int, param1 qt.Orientation) int) {
	ok := C.QwtLegend_override_virtual_scrollExtent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_scrollExtent
func miqt_exec_callback_QwtLegend_scrollExtent(self *C.QwtLegend, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.Orientation) int, param1 qt.Orientation) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.Orientation)(param1)

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_ScrollExtent, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtLegend) callVirtualBase_UpdateLegend(param1 *qt.QVariant, param2 []QwtLegendData) {
	param2_CArray := (*[0xffff]*C.QwtLegendData)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray))
	for i := range param2 {
		param2_CArray[i] = param2[i].cPointer()
	}
	param2_ma := C.struct_miqt_array{len: C.size_t(len(param2)), data: unsafe.Pointer(param2_CArray)}

	C.QwtLegend_virtualbase_updateLegend(unsafe.Pointer(this.h), (*C.QVariant)(param1.UnsafePointer()), param2_ma)

}
func (this *QwtLegend) OnUpdateLegend(slot func(super func(param1 *qt.QVariant, param2 []QwtLegendData), param1 *qt.QVariant, param2 []QwtLegendData)) {
	ok := C.QwtLegend_override_virtual_updateLegend(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_updateLegend
func miqt_exec_callback_QwtLegend_updateLegend(self *C.QwtLegend, cb C.intptr_t, param1 *C.QVariant, param2 C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QVariant, param2 []QwtLegendData), param1 *qt.QVariant, param2 []QwtLegendData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQVariant(unsafe.Pointer(param1))

	var param2_ma C.struct_miqt_array = param2
	param2_ret := make([]QwtLegendData, int(param2_ma.len))
	param2_outCast := (*[0xffff]*C.QwtLegendData)(unsafe.Pointer(param2_ma.data)) // hey ya
	for i := 0; i < int(param2_ma.len); i++ {
		param2_lv_goptr := newQwtLegendData(param2_outCast[i])
		param2_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		param2_ret[i] = *param2_lv_goptr
	}
	slotval2 := param2_ret

	gofunc((&QwtLegend{h: self}).callVirtualBase_UpdateLegend, slotval1, slotval2)

}

func (this *QwtLegend) callVirtualBase_CreateWidget(param1 *QwtLegendData) *qt.QWidget {

	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtLegend_virtualbase_createWidget(unsafe.Pointer(this.h), param1.cPointer())))

}
func (this *QwtLegend) OnCreateWidget(slot func(super func(param1 *QwtLegendData) *qt.QWidget, param1 *QwtLegendData) *qt.QWidget) {
	ok := C.QwtLegend_override_virtual_createWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_createWidget
func miqt_exec_callback_QwtLegend_createWidget(self *C.QwtLegend, cb C.intptr_t, param1 *C.QwtLegendData) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtLegendData) *qt.QWidget, param1 *QwtLegendData) *qt.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtLegendData(param1)

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_CreateWidget, slotval1)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}

func (this *QwtLegend) callVirtualBase_UpdateWidget(widget *qt.QWidget, param2 *QwtLegendData) {

	C.QwtLegend_virtualbase_updateWidget(unsafe.Pointer(this.h), (*C.QWidget)(widget.UnsafePointer()), param2.cPointer())

}
func (this *QwtLegend) OnUpdateWidget(slot func(super func(widget *qt.QWidget, param2 *QwtLegendData), widget *qt.QWidget, param2 *QwtLegendData)) {
	ok := C.QwtLegend_override_virtual_updateWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_updateWidget
func miqt_exec_callback_QwtLegend_updateWidget(self *C.QwtLegend, cb C.intptr_t, widget *C.QWidget, param2 *C.QwtLegendData) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(widget *qt.QWidget, param2 *QwtLegendData), widget *qt.QWidget, param2 *QwtLegendData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWidget(unsafe.Pointer(widget))

	slotval2 := newQwtLegendData(param2)

	gofunc((&QwtLegend{h: self}).callVirtualBase_UpdateWidget, slotval1, slotval2)

}

func (this *QwtLegend) callVirtualBase_Event(e *qt.QEvent) bool {

	return (bool)(C.QwtLegend_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QwtLegend) OnEvent(slot func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool) {
	ok := C.QwtLegend_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_event
func miqt_exec_callback_QwtLegend_event(self *C.QwtLegend, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtLegend) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtLegend_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtLegend) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtLegend_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_paintEvent
func miqt_exec_callback_QwtLegend_paintEvent(self *C.QwtLegend, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtLegend{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtLegend_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtLegend) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtLegend_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_changeEvent
func miqt_exec_callback_QwtLegend_changeEvent(self *C.QwtLegend, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtLegend{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_DevType() int {

	return (int)(C.QwtLegend_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtLegend) OnDevType(slot func(super func() int) int) {
	ok := C.QwtLegend_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_devType
func miqt_exec_callback_QwtLegend_devType(self *C.QwtLegend, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtLegend) callVirtualBase_SetVisible(visible bool) {

	C.QwtLegend_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtLegend) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtLegend_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_setVisible
func miqt_exec_callback_QwtLegend_setVisible(self *C.QwtLegend, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtLegend{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtLegend) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtLegend_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtLegend) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtLegend_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_minimumSizeHint
func miqt_exec_callback_QwtLegend_minimumSizeHint(self *C.QwtLegend, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtLegend) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtLegend_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtLegend) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtLegend_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_hasHeightForWidth
func miqt_exec_callback_QwtLegend_hasHeightForWidth(self *C.QwtLegend, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtLegend) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtLegend_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtLegend) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtLegend_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_paintEngine
func miqt_exec_callback_QwtLegend_paintEngine(self *C.QwtLegend, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtLegend) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QwtLegend_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtLegend_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_mousePressEvent
func miqt_exec_callback_QwtLegend_mousePressEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QwtLegend_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtLegend_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_mouseReleaseEvent
func miqt_exec_callback_QwtLegend_mouseReleaseEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtLegend_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtLegend_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_mouseDoubleClickEvent
func miqt_exec_callback_QwtLegend_mouseDoubleClickEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QwtLegend_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtLegend_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_mouseMoveEvent
func miqt_exec_callback_QwtLegend_mouseMoveEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QwtLegend_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QwtLegend_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_wheelEvent
func miqt_exec_callback_QwtLegend_wheelEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QwtLegend_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtLegend_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_keyPressEvent
func miqt_exec_callback_QwtLegend_keyPressEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtLegend_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtLegend_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_keyReleaseEvent
func miqt_exec_callback_QwtLegend_keyReleaseEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtLegend_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtLegend_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_focusInEvent
func miqt_exec_callback_QwtLegend_focusInEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtLegend_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtLegend_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_focusOutEvent
func miqt_exec_callback_QwtLegend_focusOutEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtLegend_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtLegend_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_enterEvent
func miqt_exec_callback_QwtLegend_enterEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtLegend_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtLegend_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_leaveEvent
func miqt_exec_callback_QwtLegend_leaveEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtLegend_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtLegend_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_moveEvent
func miqt_exec_callback_QwtLegend_moveEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QwtLegend_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QwtLegend_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_resizeEvent
func miqt_exec_callback_QwtLegend_resizeEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtLegend_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtLegend_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_closeEvent
func miqt_exec_callback_QwtLegend_closeEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtLegend_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtLegend_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_contextMenuEvent
func miqt_exec_callback_QwtLegend_contextMenuEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtLegend_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtLegend_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_tabletEvent
func miqt_exec_callback_QwtLegend_tabletEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtLegend_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtLegend_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_actionEvent
func miqt_exec_callback_QwtLegend_actionEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtLegend_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtLegend_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_dragEnterEvent
func miqt_exec_callback_QwtLegend_dragEnterEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtLegend_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtLegend_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_dragMoveEvent
func miqt_exec_callback_QwtLegend_dragMoveEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtLegend_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtLegend_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_dragLeaveEvent
func miqt_exec_callback_QwtLegend_dragLeaveEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtLegend_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtLegend_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_dropEvent
func miqt_exec_callback_QwtLegend_dropEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtLegend_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtLegend_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_showEvent
func miqt_exec_callback_QwtLegend_showEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtLegend_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtLegend_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_hideEvent
func miqt_exec_callback_QwtLegend_hideEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtLegend_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtLegend) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtLegend_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_nativeEvent
func miqt_exec_callback_QwtLegend_nativeEvent(self *C.QwtLegend, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtLegend) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtLegend_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtLegend) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtLegend_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_metric
func miqt_exec_callback_QwtLegend_metric(self *C.QwtLegend, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtLegend) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtLegend_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtLegend) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtLegend_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_initPainter
func miqt_exec_callback_QwtLegend_initPainter(self *C.QwtLegend, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtLegend{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtLegend) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtLegend_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtLegend) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtLegend_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_redirected
func miqt_exec_callback_QwtLegend_redirected(self *C.QwtLegend, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtLegend) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtLegend_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtLegend) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtLegend_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_sharedPainter
func miqt_exec_callback_QwtLegend_sharedPainter(self *C.QwtLegend, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtLegend) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtLegend_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtLegend) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtLegend_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_inputMethodEvent
func miqt_exec_callback_QwtLegend_inputMethodEvent(self *C.QwtLegend, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtLegend{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtLegend_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtLegend) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtLegend_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_inputMethodQuery
func miqt_exec_callback_QwtLegend_inputMethodQuery(self *C.QwtLegend, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtLegend) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtLegend_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtLegend) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtLegend_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_focusNextPrevChild
func miqt_exec_callback_QwtLegend_focusNextPrevChild(self *C.QwtLegend, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtLegend{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtLegend) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtLegend_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtLegend_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_timerEvent
func miqt_exec_callback_QwtLegend_timerEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtLegend_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtLegend_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_childEvent
func miqt_exec_callback_QwtLegend_childEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtLegend_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtLegend) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtLegend_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_customEvent
func miqt_exec_callback_QwtLegend_customEvent(self *C.QwtLegend, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtLegend{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtLegend) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtLegend_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtLegend) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtLegend_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_connectNotify
func miqt_exec_callback_QwtLegend_connectNotify(self *C.QwtLegend, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtLegend{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtLegend) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtLegend_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtLegend) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtLegend_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLegend_disconnectNotify
func miqt_exec_callback_QwtLegend_disconnectNotify(self *C.QwtLegend, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtLegend{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtLegend) Delete() {
	C.QwtLegend_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtLegend) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtLegend) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

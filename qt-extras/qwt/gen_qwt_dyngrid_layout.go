package qwt

/*

#include "gen_qwt_dyngrid_layout.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtDynGridLayout struct {
	h *C.QwtDynGridLayout
	*qt.QLayout
}

func (this *QwtDynGridLayout) cPointer() *C.QwtDynGridLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtDynGridLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtDynGridLayout constructs the type using only CGO pointers.
func newQwtDynGridLayout(h *C.QwtDynGridLayout) *QwtDynGridLayout {
	if h == nil {
		return nil
	}
	var outptr_QLayout *C.QLayout = nil
	C.QwtDynGridLayout_virtbase(h, &outptr_QLayout)

	return &QwtDynGridLayout{h: h,
		QLayout: qt.UnsafeNewQLayout(unsafe.Pointer(outptr_QLayout))}
}

// UnsafeNewQwtDynGridLayout constructs the type using only unsafe pointers.
func UnsafeNewQwtDynGridLayout(h unsafe.Pointer) *QwtDynGridLayout {
	return newQwtDynGridLayout((*C.QwtDynGridLayout)(h))
}

// NewQwtDynGridLayout constructs a new QwtDynGridLayout object.
func NewQwtDynGridLayout(param1 *qt.QWidget) *QwtDynGridLayout {

	return newQwtDynGridLayout(C.QwtDynGridLayout_new((*C.QWidget)(param1.UnsafePointer())))
}

// NewQwtDynGridLayout2 constructs a new QwtDynGridLayout object.
func NewQwtDynGridLayout2() *QwtDynGridLayout {

	return newQwtDynGridLayout(C.QwtDynGridLayout_new2())
}

// NewQwtDynGridLayout3 constructs a new QwtDynGridLayout object.
func NewQwtDynGridLayout3(param1 *qt.QWidget, margin int) *QwtDynGridLayout {

	return newQwtDynGridLayout(C.QwtDynGridLayout_new3((*C.QWidget)(param1.UnsafePointer()), (C.int)(margin)))
}

// NewQwtDynGridLayout4 constructs a new QwtDynGridLayout object.
func NewQwtDynGridLayout4(param1 *qt.QWidget, margin int, spacing int) *QwtDynGridLayout {

	return newQwtDynGridLayout(C.QwtDynGridLayout_new4((*C.QWidget)(param1.UnsafePointer()), (C.int)(margin), (C.int)(spacing)))
}

// NewQwtDynGridLayout5 constructs a new QwtDynGridLayout object.
func NewQwtDynGridLayout5(spacing int) *QwtDynGridLayout {

	return newQwtDynGridLayout(C.QwtDynGridLayout_new5((C.int)(spacing)))
}

func (this *QwtDynGridLayout) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtDynGridLayout_metaObject(this.h)))
}

func (this *QwtDynGridLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtDynGridLayout_metacast(this.h, param1_Cstring))
}

func QwtDynGridLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtDynGridLayout_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtDynGridLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtDynGridLayout_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtDynGridLayout) Invalidate() {
	C.QwtDynGridLayout_invalidate(this.h)
}

func (this *QwtDynGridLayout) SetMaxColumns(maxColumns uint) {
	C.QwtDynGridLayout_setMaxColumns(this.h, (C.uint)(maxColumns))
}

func (this *QwtDynGridLayout) MaxColumns() uint {
	return (uint)(C.QwtDynGridLayout_maxColumns(this.h))
}

func (this *QwtDynGridLayout) NumRows() uint {
	return (uint)(C.QwtDynGridLayout_numRows(this.h))
}

func (this *QwtDynGridLayout) NumColumns() uint {
	return (uint)(C.QwtDynGridLayout_numColumns(this.h))
}

func (this *QwtDynGridLayout) AddItem(param1 *qt.QLayoutItem) {
	C.QwtDynGridLayout_addItem(this.h, (*C.QLayoutItem)(param1.UnsafePointer()))
}

func (this *QwtDynGridLayout) ItemAt(index int) *qt.QLayoutItem {
	return qt.UnsafeNewQLayoutItem(unsafe.Pointer(C.QwtDynGridLayout_itemAt(this.h, (C.int)(index))))
}

func (this *QwtDynGridLayout) TakeAt(index int) *qt.QLayoutItem {
	return qt.UnsafeNewQLayoutItem(unsafe.Pointer(C.QwtDynGridLayout_takeAt(this.h, (C.int)(index))))
}

func (this *QwtDynGridLayout) Count() int {
	return (int)(C.QwtDynGridLayout_count(this.h))
}

func (this *QwtDynGridLayout) SetExpandingDirections(expandingDirections qt.Orientation) {
	C.QwtDynGridLayout_setExpandingDirections(this.h, (C.int)(expandingDirections))
}

func (this *QwtDynGridLayout) ExpandingDirections() qt.Orientation {
	return (qt.Orientation)(C.QwtDynGridLayout_expandingDirections(this.h))
}

func (this *QwtDynGridLayout) LayoutItems(param1 *qt.QRect, numColumns uint) []qt.QRect {
	var _ma C.struct_miqt_array = C.QwtDynGridLayout_layoutItems(this.h, (*C.QRect)(param1.UnsafePointer()), (C.uint)(numColumns))
	_ret := make([]qt.QRect, int(_ma.len))
	_outCast := (*[0xffff]*C.QRect)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQRect(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QwtDynGridLayout) MaxItemWidth() int {
	return (int)(C.QwtDynGridLayout_maxItemWidth(this.h))
}

func (this *QwtDynGridLayout) SetGeometry(rect *qt.QRect) {
	C.QwtDynGridLayout_setGeometry(this.h, (*C.QRect)(rect.UnsafePointer()))
}

func (this *QwtDynGridLayout) HasHeightForWidth() bool {
	return (bool)(C.QwtDynGridLayout_hasHeightForWidth(this.h))
}

func (this *QwtDynGridLayout) HeightForWidth(param1 int) int {
	return (int)(C.QwtDynGridLayout_heightForWidth(this.h, (C.int)(param1)))
}

func (this *QwtDynGridLayout) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtDynGridLayout_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtDynGridLayout) IsEmpty() bool {
	return (bool)(C.QwtDynGridLayout_isEmpty(this.h))
}

func (this *QwtDynGridLayout) ItemCount() uint {
	return (uint)(C.QwtDynGridLayout_itemCount(this.h))
}

func (this *QwtDynGridLayout) ColumnsForWidth(width int) uint {
	return (uint)(C.QwtDynGridLayout_columnsForWidth(this.h, (C.int)(width)))
}

func QwtDynGridLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtDynGridLayout_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtDynGridLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtDynGridLayout_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtDynGridLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtDynGridLayout_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtDynGridLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtDynGridLayout_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// LayoutGrid can only be called from a QwtDynGridLayout that was directly constructed.
func (this *QwtDynGridLayout) LayoutGrid(numColumns uint, rowHeight []int, colWidth []int) {
	rowHeight_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(rowHeight))))
	defer C.free(unsafe.Pointer(rowHeight_CArray))
	for i := range rowHeight {
		rowHeight_CArray[i] = (C.int)(rowHeight[i])
	}
	rowHeight_ma := C.struct_miqt_array{len: C.size_t(len(rowHeight)), data: unsafe.Pointer(rowHeight_CArray)}
	colWidth_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(colWidth))))
	defer C.free(unsafe.Pointer(colWidth_CArray))
	for i := range colWidth {
		colWidth_CArray[i] = (C.int)(colWidth[i])
	}
	colWidth_ma := C.struct_miqt_array{len: C.size_t(len(colWidth)), data: unsafe.Pointer(colWidth_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QwtDynGridLayout_protectedbase_layoutGrid(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.uint)(numColumns), rowHeight_ma, colWidth_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// StretchGrid can only be called from a QwtDynGridLayout that was directly constructed.
func (this *QwtDynGridLayout) StretchGrid(rect *qt.QRect, numColumns uint, rowHeight []int, colWidth []int) {
	rowHeight_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(rowHeight))))
	defer C.free(unsafe.Pointer(rowHeight_CArray))
	for i := range rowHeight {
		rowHeight_CArray[i] = (C.int)(rowHeight[i])
	}
	rowHeight_ma := C.struct_miqt_array{len: C.size_t(len(rowHeight)), data: unsafe.Pointer(rowHeight_CArray)}
	colWidth_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(colWidth))))
	defer C.free(unsafe.Pointer(colWidth_CArray))
	for i := range colWidth {
		colWidth_CArray[i] = (C.int)(colWidth[i])
	}
	colWidth_ma := C.struct_miqt_array{len: C.size_t(len(colWidth)), data: unsafe.Pointer(colWidth_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QwtDynGridLayout_protectedbase_stretchGrid(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QRect)(rect.UnsafePointer()), (C.uint)(numColumns), rowHeight_ma, colWidth_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// WidgetEvent can only be called from a QwtDynGridLayout that was directly constructed.
func (this *QwtDynGridLayout) WidgetEvent(param1 *qt.QEvent) {

	var _dynamic_cast_ok C.bool = false
	C.QwtDynGridLayout_protectedbase_widgetEvent(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddChildLayout can only be called from a QwtDynGridLayout that was directly constructed.
func (this *QwtDynGridLayout) AddChildLayout(l *qt.QLayout) {

	var _dynamic_cast_ok C.bool = false
	C.QwtDynGridLayout_protectedbase_addChildLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QLayout)(l.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddChildWidget can only be called from a QwtDynGridLayout that was directly constructed.
func (this *QwtDynGridLayout) AddChildWidget(w *qt.QWidget) {

	var _dynamic_cast_ok C.bool = false
	C.QwtDynGridLayout_protectedbase_addChildWidget(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QWidget)(w.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AdoptLayout can only be called from a QwtDynGridLayout that was directly constructed.
func (this *QwtDynGridLayout) AdoptLayout(layout *qt.QLayout) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtDynGridLayout_protectedbase_adoptLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QLayout)(layout.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// AlignmentRect can only be called from a QwtDynGridLayout that was directly constructed.
func (this *QwtDynGridLayout) AlignmentRect(param1 *qt.QRect) qt.QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtDynGridLayout_protectedbase_alignmentRect(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QRect)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtDynGridLayout that was directly constructed.
func (this *QwtDynGridLayout) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtDynGridLayout_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtDynGridLayout that was directly constructed.
func (this *QwtDynGridLayout) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtDynGridLayout_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtDynGridLayout that was directly constructed.
func (this *QwtDynGridLayout) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtDynGridLayout_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtDynGridLayout that was directly constructed.
func (this *QwtDynGridLayout) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtDynGridLayout_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtDynGridLayout) callVirtualBase_Invalidate() {

	C.QwtDynGridLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QwtDynGridLayout) OnInvalidate(slot func(super func())) {
	ok := C.QwtDynGridLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_invalidate
func miqt_exec_callback_QwtDynGridLayout_invalidate(self *C.QwtDynGridLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QwtDynGridLayout) callVirtualBase_AddItem(param1 *qt.QLayoutItem) {

	C.QwtDynGridLayout_virtualbase_addItem(unsafe.Pointer(this.h), (*C.QLayoutItem)(param1.UnsafePointer()))

}
func (this *QwtDynGridLayout) OnAddItem(slot func(super func(param1 *qt.QLayoutItem), param1 *qt.QLayoutItem)) {
	ok := C.QwtDynGridLayout_override_virtual_addItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_addItem
func miqt_exec_callback_QwtDynGridLayout_addItem(self *C.QwtDynGridLayout, cb C.intptr_t, param1 *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QLayoutItem), param1 *qt.QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQLayoutItem(unsafe.Pointer(param1))

	gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_AddItem, slotval1)

}

func (this *QwtDynGridLayout) callVirtualBase_ItemAt(index int) *qt.QLayoutItem {

	return qt.UnsafeNewQLayoutItem(unsafe.Pointer(C.QwtDynGridLayout_virtualbase_itemAt(unsafe.Pointer(this.h), (C.int)(index))))

}
func (this *QwtDynGridLayout) OnItemAt(slot func(super func(index int) *qt.QLayoutItem, index int) *qt.QLayoutItem) {
	ok := C.QwtDynGridLayout_override_virtual_itemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_itemAt
func miqt_exec_callback_QwtDynGridLayout_itemAt(self *C.QwtDynGridLayout, cb C.intptr_t, index C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *qt.QLayoutItem, index int) *qt.QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return (*C.QLayoutItem)(virtualReturn.UnsafePointer())

}

func (this *QwtDynGridLayout) callVirtualBase_TakeAt(index int) *qt.QLayoutItem {

	return qt.UnsafeNewQLayoutItem(unsafe.Pointer(C.QwtDynGridLayout_virtualbase_takeAt(unsafe.Pointer(this.h), (C.int)(index))))

}
func (this *QwtDynGridLayout) OnTakeAt(slot func(super func(index int) *qt.QLayoutItem, index int) *qt.QLayoutItem) {
	ok := C.QwtDynGridLayout_override_virtual_takeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_takeAt
func miqt_exec_callback_QwtDynGridLayout_takeAt(self *C.QwtDynGridLayout, cb C.intptr_t, index C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *qt.QLayoutItem, index int) *qt.QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_TakeAt, slotval1)

	return (*C.QLayoutItem)(virtualReturn.UnsafePointer())

}

func (this *QwtDynGridLayout) callVirtualBase_Count() int {

	return (int)(C.QwtDynGridLayout_virtualbase_count(unsafe.Pointer(this.h)))

}
func (this *QwtDynGridLayout) OnCount(slot func(super func() int) int) {
	ok := C.QwtDynGridLayout_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_count
func miqt_exec_callback_QwtDynGridLayout_count(self *C.QwtDynGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QwtDynGridLayout) callVirtualBase_ExpandingDirections() qt.Orientation {

	return (qt.Orientation)(C.QwtDynGridLayout_virtualbase_expandingDirections(unsafe.Pointer(this.h)))

}
func (this *QwtDynGridLayout) OnExpandingDirections(slot func(super func() qt.Orientation) qt.Orientation) {
	ok := C.QwtDynGridLayout_override_virtual_expandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_expandingDirections
func miqt_exec_callback_QwtDynGridLayout_expandingDirections(self *C.QwtDynGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() qt.Orientation) qt.Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QwtDynGridLayout) callVirtualBase_MaxItemWidth() int {

	return (int)(C.QwtDynGridLayout_virtualbase_maxItemWidth(unsafe.Pointer(this.h)))

}
func (this *QwtDynGridLayout) OnMaxItemWidth(slot func(super func() int) int) {
	ok := C.QwtDynGridLayout_override_virtual_maxItemWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_maxItemWidth
func miqt_exec_callback_QwtDynGridLayout_maxItemWidth(self *C.QwtDynGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_MaxItemWidth)

	return (C.int)(virtualReturn)

}

func (this *QwtDynGridLayout) callVirtualBase_SetGeometry(rect *qt.QRect) {

	C.QwtDynGridLayout_virtualbase_setGeometry(unsafe.Pointer(this.h), (*C.QRect)(rect.UnsafePointer()))

}
func (this *QwtDynGridLayout) OnSetGeometry(slot func(super func(rect *qt.QRect), rect *qt.QRect)) {
	ok := C.QwtDynGridLayout_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_setGeometry
func miqt_exec_callback_QwtDynGridLayout_setGeometry(self *C.QwtDynGridLayout, cb C.intptr_t, rect *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *qt.QRect), rect *qt.QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRect(unsafe.Pointer(rect))

	gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QwtDynGridLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtDynGridLayout_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtDynGridLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtDynGridLayout_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_hasHeightForWidth
func miqt_exec_callback_QwtDynGridLayout_hasHeightForWidth(self *C.QwtDynGridLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtDynGridLayout) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtDynGridLayout_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtDynGridLayout) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtDynGridLayout_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_heightForWidth
func miqt_exec_callback_QwtDynGridLayout_heightForWidth(self *C.QwtDynGridLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtDynGridLayout) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtDynGridLayout_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtDynGridLayout) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtDynGridLayout_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_sizeHint
func miqt_exec_callback_QwtDynGridLayout_sizeHint(self *C.QwtDynGridLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtDynGridLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QwtDynGridLayout_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QwtDynGridLayout) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QwtDynGridLayout_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_isEmpty
func miqt_exec_callback_QwtDynGridLayout_isEmpty(self *C.QwtDynGridLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QwtDynGridLayout) callVirtualBase_ColumnsForWidth(width int) uint {

	return (uint)(C.QwtDynGridLayout_virtualbase_columnsForWidth(unsafe.Pointer(this.h), (C.int)(width)))

}
func (this *QwtDynGridLayout) OnColumnsForWidth(slot func(super func(width int) uint, width int) uint) {
	ok := C.QwtDynGridLayout_override_virtual_columnsForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_columnsForWidth
func miqt_exec_callback_QwtDynGridLayout_columnsForWidth(self *C.QwtDynGridLayout, cb C.intptr_t, width C.int) C.uint {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int) uint, width int) uint)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_ColumnsForWidth, slotval1)

	return (C.uint)(virtualReturn)

}

func (this *QwtDynGridLayout) callVirtualBase_Geometry() *qt.QRect {

	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtDynGridLayout_virtualbase_geometry(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtDynGridLayout) OnGeometry(slot func(super func() *qt.QRect) *qt.QRect) {
	ok := C.QwtDynGridLayout_override_virtual_geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_geometry
func miqt_exec_callback_QwtDynGridLayout_geometry(self *C.QwtDynGridLayout, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRect) *qt.QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_Geometry)

	return (*C.QRect)(virtualReturn.UnsafePointer())

}

func (this *QwtDynGridLayout) callVirtualBase_MinimumSize() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtDynGridLayout_virtualbase_minimumSize(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtDynGridLayout) OnMinimumSize(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtDynGridLayout_override_virtual_minimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_minimumSize
func miqt_exec_callback_QwtDynGridLayout_minimumSize(self *C.QwtDynGridLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_MinimumSize)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtDynGridLayout) callVirtualBase_MaximumSize() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtDynGridLayout_virtualbase_maximumSize(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtDynGridLayout) OnMaximumSize(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtDynGridLayout_override_virtual_maximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_maximumSize
func miqt_exec_callback_QwtDynGridLayout_maximumSize(self *C.QwtDynGridLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_MaximumSize)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtDynGridLayout) callVirtualBase_IndexOf(param1 *qt.QWidget) int {

	return (int)(C.QwtDynGridLayout_virtualbase_indexOf(unsafe.Pointer(this.h), (*C.QWidget)(param1.UnsafePointer())))

}
func (this *QwtDynGridLayout) OnIndexOf(slot func(super func(param1 *qt.QWidget) int, param1 *qt.QWidget) int) {
	ok := C.QwtDynGridLayout_override_virtual_indexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_indexOf
func miqt_exec_callback_QwtDynGridLayout_indexOf(self *C.QwtDynGridLayout, cb C.intptr_t, param1 *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWidget) int, param1 *qt.QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWidget(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtDynGridLayout) callVirtualBase_ControlTypes() qt.QSizePolicy__ControlType {

	return (qt.QSizePolicy__ControlType)(C.QwtDynGridLayout_virtualbase_controlTypes(unsafe.Pointer(this.h)))

}
func (this *QwtDynGridLayout) OnControlTypes(slot func(super func() qt.QSizePolicy__ControlType) qt.QSizePolicy__ControlType) {
	ok := C.QwtDynGridLayout_override_virtual_controlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_controlTypes
func miqt_exec_callback_QwtDynGridLayout_controlTypes(self *C.QwtDynGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() qt.QSizePolicy__ControlType) qt.QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QwtDynGridLayout) callVirtualBase_Layout() *qt.QLayout {

	return qt.UnsafeNewQLayout(unsafe.Pointer(C.QwtDynGridLayout_virtualbase_layout(unsafe.Pointer(this.h))))

}
func (this *QwtDynGridLayout) OnLayout(slot func(super func() *qt.QLayout) *qt.QLayout) {
	ok := C.QwtDynGridLayout_override_virtual_layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_layout
func miqt_exec_callback_QwtDynGridLayout_layout(self *C.QwtDynGridLayout, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QLayout) *qt.QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_Layout)

	return (*C.QLayout)(virtualReturn.UnsafePointer())

}

func (this *QwtDynGridLayout) callVirtualBase_ChildEvent(e *qt.QChildEvent) {

	C.QwtDynGridLayout_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(e.UnsafePointer()))

}
func (this *QwtDynGridLayout) OnChildEvent(slot func(super func(e *qt.QChildEvent), e *qt.QChildEvent)) {
	ok := C.QwtDynGridLayout_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_childEvent
func miqt_exec_callback_QwtDynGridLayout_childEvent(self *C.QwtDynGridLayout, cb C.intptr_t, e *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QChildEvent), e *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(e))

	gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtDynGridLayout) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtDynGridLayout_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtDynGridLayout) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtDynGridLayout_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_event
func miqt_exec_callback_QwtDynGridLayout_event(self *C.QwtDynGridLayout, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtDynGridLayout) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtDynGridLayout_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtDynGridLayout) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtDynGridLayout_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_eventFilter
func miqt_exec_callback_QwtDynGridLayout_eventFilter(self *C.QwtDynGridLayout, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtDynGridLayout) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtDynGridLayout_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtDynGridLayout) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtDynGridLayout_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_timerEvent
func miqt_exec_callback_QwtDynGridLayout_timerEvent(self *C.QwtDynGridLayout, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtDynGridLayout) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtDynGridLayout_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtDynGridLayout) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtDynGridLayout_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_customEvent
func miqt_exec_callback_QwtDynGridLayout_customEvent(self *C.QwtDynGridLayout, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtDynGridLayout) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtDynGridLayout_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtDynGridLayout) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtDynGridLayout_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_connectNotify
func miqt_exec_callback_QwtDynGridLayout_connectNotify(self *C.QwtDynGridLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtDynGridLayout) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtDynGridLayout_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtDynGridLayout) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtDynGridLayout_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_disconnectNotify
func miqt_exec_callback_QwtDynGridLayout_disconnectNotify(self *C.QwtDynGridLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QwtDynGridLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QwtDynGridLayout_virtualbase_minimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtDynGridLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtDynGridLayout_override_virtual_minimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_minimumHeightForWidth
func miqt_exec_callback_QwtDynGridLayout_minimumHeightForWidth(self *C.QwtDynGridLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtDynGridLayout) callVirtualBase_Widget() *qt.QWidget {

	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtDynGridLayout_virtualbase_widget(unsafe.Pointer(this.h))))

}
func (this *QwtDynGridLayout) OnWidget(slot func(super func() *qt.QWidget) *qt.QWidget) {
	ok := C.QwtDynGridLayout_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_widget
func miqt_exec_callback_QwtDynGridLayout_widget(self *C.QwtDynGridLayout, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QWidget) *qt.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_Widget)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}

func (this *QwtDynGridLayout) callVirtualBase_SpacerItem() *qt.QSpacerItem {

	return qt.UnsafeNewQSpacerItem(unsafe.Pointer(C.QwtDynGridLayout_virtualbase_spacerItem(unsafe.Pointer(this.h))))

}
func (this *QwtDynGridLayout) OnSpacerItem(slot func(super func() *qt.QSpacerItem) *qt.QSpacerItem) {
	ok := C.QwtDynGridLayout_override_virtual_spacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDynGridLayout_spacerItem
func miqt_exec_callback_QwtDynGridLayout_spacerItem(self *C.QwtDynGridLayout, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSpacerItem) *qt.QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDynGridLayout{h: self}).callVirtualBase_SpacerItem)

	return (*C.QSpacerItem)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QwtDynGridLayout) Delete() {
	C.QwtDynGridLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtDynGridLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtDynGridLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

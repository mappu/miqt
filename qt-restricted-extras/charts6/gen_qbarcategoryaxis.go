package charts6

/*

#include "gen_qbarcategoryaxis.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QBarCategoryAxis struct {
	h *C.QBarCategoryAxis
	*QAbstractAxis
}

func (this *QBarCategoryAxis) cPointer() *C.QBarCategoryAxis {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBarCategoryAxis) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBarCategoryAxis constructs the type using only CGO pointers.
func newQBarCategoryAxis(h *C.QBarCategoryAxis) *QBarCategoryAxis {
	if h == nil {
		return nil
	}
	var outptr_QAbstractAxis *C.QAbstractAxis = nil
	C.QBarCategoryAxis_virtbase(h, &outptr_QAbstractAxis)

	return &QBarCategoryAxis{h: h,
		QAbstractAxis: newQAbstractAxis(outptr_QAbstractAxis)}
}

// UnsafeNewQBarCategoryAxis constructs the type using only unsafe pointers.
func UnsafeNewQBarCategoryAxis(h unsafe.Pointer) *QBarCategoryAxis {
	return newQBarCategoryAxis((*C.QBarCategoryAxis)(h))
}

// NewQBarCategoryAxis constructs a new QBarCategoryAxis object.
func NewQBarCategoryAxis() *QBarCategoryAxis {

	return newQBarCategoryAxis(C.QBarCategoryAxis_new())
}

// NewQBarCategoryAxis2 constructs a new QBarCategoryAxis object.
func NewQBarCategoryAxis2(parent *qt6.QObject) *QBarCategoryAxis {

	return newQBarCategoryAxis(C.QBarCategoryAxis_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QBarCategoryAxis) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QBarCategoryAxis_metaObject(this.h)))
}

func (this *QBarCategoryAxis) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBarCategoryAxis_metacast(this.h, param1_Cstring))
}

func QBarCategoryAxis_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBarCategoryAxis_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBarCategoryAxis) Type() QAbstractAxis__AxisType {
	return (QAbstractAxis__AxisType)(C.QBarCategoryAxis_type(this.h))
}

func (this *QBarCategoryAxis) Append(categories []string) {
	categories_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(categories))))
	defer C.free(unsafe.Pointer(categories_CArray))
	for i := range categories {
		categories_i_ms := C.struct_miqt_string{}
		categories_i_ms.data = C.CString(categories[i])
		categories_i_ms.len = C.size_t(len(categories[i]))
		defer C.free(unsafe.Pointer(categories_i_ms.data))
		categories_CArray[i] = categories_i_ms
	}
	categories_ma := C.struct_miqt_array{len: C.size_t(len(categories)), data: unsafe.Pointer(categories_CArray)}
	C.QBarCategoryAxis_append(this.h, categories_ma)
}

func (this *QBarCategoryAxis) AppendWithCategory(category string) {
	category_ms := C.struct_miqt_string{}
	category_ms.data = C.CString(category)
	category_ms.len = C.size_t(len(category))
	defer C.free(unsafe.Pointer(category_ms.data))
	C.QBarCategoryAxis_appendWithCategory(this.h, category_ms)
}

func (this *QBarCategoryAxis) Remove(category string) {
	category_ms := C.struct_miqt_string{}
	category_ms.data = C.CString(category)
	category_ms.len = C.size_t(len(category))
	defer C.free(unsafe.Pointer(category_ms.data))
	C.QBarCategoryAxis_remove(this.h, category_ms)
}

func (this *QBarCategoryAxis) Insert(index int, category string) {
	category_ms := C.struct_miqt_string{}
	category_ms.data = C.CString(category)
	category_ms.len = C.size_t(len(category))
	defer C.free(unsafe.Pointer(category_ms.data))
	C.QBarCategoryAxis_insert(this.h, (C.int)(index), category_ms)
}

func (this *QBarCategoryAxis) Replace(oldCategory string, newCategory string) {
	oldCategory_ms := C.struct_miqt_string{}
	oldCategory_ms.data = C.CString(oldCategory)
	oldCategory_ms.len = C.size_t(len(oldCategory))
	defer C.free(unsafe.Pointer(oldCategory_ms.data))
	newCategory_ms := C.struct_miqt_string{}
	newCategory_ms.data = C.CString(newCategory)
	newCategory_ms.len = C.size_t(len(newCategory))
	defer C.free(unsafe.Pointer(newCategory_ms.data))
	C.QBarCategoryAxis_replace(this.h, oldCategory_ms, newCategory_ms)
}

func (this *QBarCategoryAxis) Clear() {
	C.QBarCategoryAxis_clear(this.h)
}

func (this *QBarCategoryAxis) SetCategories(categories []string) {
	categories_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(categories))))
	defer C.free(unsafe.Pointer(categories_CArray))
	for i := range categories {
		categories_i_ms := C.struct_miqt_string{}
		categories_i_ms.data = C.CString(categories[i])
		categories_i_ms.len = C.size_t(len(categories[i]))
		defer C.free(unsafe.Pointer(categories_i_ms.data))
		categories_CArray[i] = categories_i_ms
	}
	categories_ma := C.struct_miqt_array{len: C.size_t(len(categories)), data: unsafe.Pointer(categories_CArray)}
	C.QBarCategoryAxis_setCategories(this.h, categories_ma)
}

func (this *QBarCategoryAxis) Categories() []string {
	var _ma C.struct_miqt_array = C.QBarCategoryAxis_categories(this.h)
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

func (this *QBarCategoryAxis) Count() int {
	return (int)(C.QBarCategoryAxis_count(this.h))
}

func (this *QBarCategoryAxis) At(index int) string {
	var _ms C.struct_miqt_string = C.QBarCategoryAxis_at(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBarCategoryAxis) SetMin(minCategory string) {
	minCategory_ms := C.struct_miqt_string{}
	minCategory_ms.data = C.CString(minCategory)
	minCategory_ms.len = C.size_t(len(minCategory))
	defer C.free(unsafe.Pointer(minCategory_ms.data))
	C.QBarCategoryAxis_setMin(this.h, minCategory_ms)
}

func (this *QBarCategoryAxis) Min() string {
	var _ms C.struct_miqt_string = C.QBarCategoryAxis_min(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBarCategoryAxis) SetMax(maxCategory string) {
	maxCategory_ms := C.struct_miqt_string{}
	maxCategory_ms.data = C.CString(maxCategory)
	maxCategory_ms.len = C.size_t(len(maxCategory))
	defer C.free(unsafe.Pointer(maxCategory_ms.data))
	C.QBarCategoryAxis_setMax(this.h, maxCategory_ms)
}

func (this *QBarCategoryAxis) Max() string {
	var _ms C.struct_miqt_string = C.QBarCategoryAxis_max(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBarCategoryAxis) SetRange(minCategory string, maxCategory string) {
	minCategory_ms := C.struct_miqt_string{}
	minCategory_ms.data = C.CString(minCategory)
	minCategory_ms.len = C.size_t(len(minCategory))
	defer C.free(unsafe.Pointer(minCategory_ms.data))
	maxCategory_ms := C.struct_miqt_string{}
	maxCategory_ms.data = C.CString(maxCategory)
	maxCategory_ms.len = C.size_t(len(maxCategory))
	defer C.free(unsafe.Pointer(maxCategory_ms.data))
	C.QBarCategoryAxis_setRange(this.h, minCategory_ms, maxCategory_ms)
}

func (this *QBarCategoryAxis) CategoriesChanged() {
	C.QBarCategoryAxis_categoriesChanged(this.h)
}
func (this *QBarCategoryAxis) OnCategoriesChanged(slot func()) {
	C.QBarCategoryAxis_connect_categoriesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarCategoryAxis_categoriesChanged
func miqt_exec_callback_QBarCategoryAxis_categoriesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBarCategoryAxis) MinChanged(min string) {
	min_ms := C.struct_miqt_string{}
	min_ms.data = C.CString(min)
	min_ms.len = C.size_t(len(min))
	defer C.free(unsafe.Pointer(min_ms.data))
	C.QBarCategoryAxis_minChanged(this.h, min_ms)
}
func (this *QBarCategoryAxis) OnMinChanged(slot func(min string)) {
	C.QBarCategoryAxis_connect_minChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarCategoryAxis_minChanged
func miqt_exec_callback_QBarCategoryAxis_minChanged(cb C.intptr_t, min C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(min string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var min_ms C.struct_miqt_string = min
	min_ret := C.GoStringN(min_ms.data, C.int(int64(min_ms.len)))
	C.free(unsafe.Pointer(min_ms.data))
	slotval1 := min_ret

	gofunc(slotval1)
}

func (this *QBarCategoryAxis) MaxChanged(max string) {
	max_ms := C.struct_miqt_string{}
	max_ms.data = C.CString(max)
	max_ms.len = C.size_t(len(max))
	defer C.free(unsafe.Pointer(max_ms.data))
	C.QBarCategoryAxis_maxChanged(this.h, max_ms)
}
func (this *QBarCategoryAxis) OnMaxChanged(slot func(max string)) {
	C.QBarCategoryAxis_connect_maxChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarCategoryAxis_maxChanged
func miqt_exec_callback_QBarCategoryAxis_maxChanged(cb C.intptr_t, max C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(max string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var max_ms C.struct_miqt_string = max
	max_ret := C.GoStringN(max_ms.data, C.int(int64(max_ms.len)))
	C.free(unsafe.Pointer(max_ms.data))
	slotval1 := max_ret

	gofunc(slotval1)
}

func (this *QBarCategoryAxis) RangeChanged(min string, max string) {
	min_ms := C.struct_miqt_string{}
	min_ms.data = C.CString(min)
	min_ms.len = C.size_t(len(min))
	defer C.free(unsafe.Pointer(min_ms.data))
	max_ms := C.struct_miqt_string{}
	max_ms.data = C.CString(max)
	max_ms.len = C.size_t(len(max))
	defer C.free(unsafe.Pointer(max_ms.data))
	C.QBarCategoryAxis_rangeChanged(this.h, min_ms, max_ms)
}
func (this *QBarCategoryAxis) OnRangeChanged(slot func(min string, max string)) {
	C.QBarCategoryAxis_connect_rangeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarCategoryAxis_rangeChanged
func miqt_exec_callback_QBarCategoryAxis_rangeChanged(cb C.intptr_t, min C.struct_miqt_string, max C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(min string, max string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var min_ms C.struct_miqt_string = min
	min_ret := C.GoStringN(min_ms.data, C.int(int64(min_ms.len)))
	C.free(unsafe.Pointer(min_ms.data))
	slotval1 := min_ret
	var max_ms C.struct_miqt_string = max
	max_ret := C.GoStringN(max_ms.data, C.int(int64(max_ms.len)))
	C.free(unsafe.Pointer(max_ms.data))
	slotval2 := max_ret

	gofunc(slotval1, slotval2)
}

func (this *QBarCategoryAxis) CountChanged() {
	C.QBarCategoryAxis_countChanged(this.h)
}
func (this *QBarCategoryAxis) OnCountChanged(slot func()) {
	C.QBarCategoryAxis_connect_countChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarCategoryAxis_countChanged
func miqt_exec_callback_QBarCategoryAxis_countChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QBarCategoryAxis_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBarCategoryAxis_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBarCategoryAxis_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBarCategoryAxis_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QBarCategoryAxis that was directly constructed.
func (this *QBarCategoryAxis) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QBarCategoryAxis_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QBarCategoryAxis that was directly constructed.
func (this *QBarCategoryAxis) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QBarCategoryAxis_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QBarCategoryAxis that was directly constructed.
func (this *QBarCategoryAxis) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QBarCategoryAxis_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QBarCategoryAxis that was directly constructed.
func (this *QBarCategoryAxis) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QBarCategoryAxis_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QBarCategoryAxis) callVirtualBase_Type() QAbstractAxis__AxisType {

	return (QAbstractAxis__AxisType)(C.QBarCategoryAxis_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QBarCategoryAxis) OnType(slot func(super func() QAbstractAxis__AxisType) QAbstractAxis__AxisType) {
	ok := C.QBarCategoryAxis_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarCategoryAxis_type
func miqt_exec_callback_QBarCategoryAxis_type(self *C.QBarCategoryAxis, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractAxis__AxisType) QAbstractAxis__AxisType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBarCategoryAxis{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QBarCategoryAxis) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QBarCategoryAxis_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QBarCategoryAxis) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QBarCategoryAxis_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarCategoryAxis_event
func miqt_exec_callback_QBarCategoryAxis_event(self *C.QBarCategoryAxis, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QBarCategoryAxis{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBarCategoryAxis) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QBarCategoryAxis_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QBarCategoryAxis) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QBarCategoryAxis_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarCategoryAxis_eventFilter
func miqt_exec_callback_QBarCategoryAxis_eventFilter(self *C.QBarCategoryAxis, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QBarCategoryAxis{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QBarCategoryAxis) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QBarCategoryAxis_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QBarCategoryAxis) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QBarCategoryAxis_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarCategoryAxis_timerEvent
func miqt_exec_callback_QBarCategoryAxis_timerEvent(self *C.QBarCategoryAxis, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QBarCategoryAxis{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QBarCategoryAxis) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QBarCategoryAxis_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QBarCategoryAxis) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QBarCategoryAxis_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarCategoryAxis_childEvent
func miqt_exec_callback_QBarCategoryAxis_childEvent(self *C.QBarCategoryAxis, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QBarCategoryAxis{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QBarCategoryAxis) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QBarCategoryAxis_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QBarCategoryAxis) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QBarCategoryAxis_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarCategoryAxis_customEvent
func miqt_exec_callback_QBarCategoryAxis_customEvent(self *C.QBarCategoryAxis, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QBarCategoryAxis{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QBarCategoryAxis) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QBarCategoryAxis_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QBarCategoryAxis) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QBarCategoryAxis_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarCategoryAxis_connectNotify
func miqt_exec_callback_QBarCategoryAxis_connectNotify(self *C.QBarCategoryAxis, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QBarCategoryAxis{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QBarCategoryAxis) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QBarCategoryAxis_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QBarCategoryAxis) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QBarCategoryAxis_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarCategoryAxis_disconnectNotify
func miqt_exec_callback_QBarCategoryAxis_disconnectNotify(self *C.QBarCategoryAxis, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QBarCategoryAxis{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QBarCategoryAxis) Delete() {
	C.QBarCategoryAxis_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBarCategoryAxis) GoGC() {
	runtime.SetFinalizer(this, func(this *QBarCategoryAxis) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

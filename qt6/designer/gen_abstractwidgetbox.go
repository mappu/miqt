package designer

/*

#include "gen_abstractwidgetbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerWidgetBoxInterface__Widget__Type int

const (
	QDesignerWidgetBoxInterface__Widget__Default QDesignerWidgetBoxInterface__Widget__Type = 0
	QDesignerWidgetBoxInterface__Widget__Custom  QDesignerWidgetBoxInterface__Widget__Type = 1
)

type QDesignerWidgetBoxInterface__Category__Type int

const (
	QDesignerWidgetBoxInterface__Category__Default    QDesignerWidgetBoxInterface__Category__Type = 0
	QDesignerWidgetBoxInterface__Category__Scratchpad QDesignerWidgetBoxInterface__Category__Type = 1
)

type QDesignerWidgetBoxInterface struct {
	h *C.QDesignerWidgetBoxInterface
	*qt6.QWidget
}

func (this *QDesignerWidgetBoxInterface) cPointer() *C.QDesignerWidgetBoxInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerWidgetBoxInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerWidgetBoxInterface constructs the type using only CGO pointers.
func newQDesignerWidgetBoxInterface(h *C.QDesignerWidgetBoxInterface) *QDesignerWidgetBoxInterface {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QDesignerWidgetBoxInterface_virtbase(h, &outptr_QWidget)

	return &QDesignerWidgetBoxInterface{h: h,
		QWidget: qt6.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQDesignerWidgetBoxInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerWidgetBoxInterface(h unsafe.Pointer) *QDesignerWidgetBoxInterface {
	return newQDesignerWidgetBoxInterface((*C.QDesignerWidgetBoxInterface)(h))
}

// NewQDesignerWidgetBoxInterface constructs a new QDesignerWidgetBoxInterface object.
func NewQDesignerWidgetBoxInterface(parent *qt6.QWidget) *QDesignerWidgetBoxInterface {

	return newQDesignerWidgetBoxInterface(C.QDesignerWidgetBoxInterface_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQDesignerWidgetBoxInterface2 constructs a new QDesignerWidgetBoxInterface object.
func NewQDesignerWidgetBoxInterface2() *QDesignerWidgetBoxInterface {

	return newQDesignerWidgetBoxInterface(C.QDesignerWidgetBoxInterface_new2())
}

// NewQDesignerWidgetBoxInterface3 constructs a new QDesignerWidgetBoxInterface object.
func NewQDesignerWidgetBoxInterface3(parent *qt6.QWidget, flags qt6.WindowType) *QDesignerWidgetBoxInterface {

	return newQDesignerWidgetBoxInterface(C.QDesignerWidgetBoxInterface_new3((*C.QWidget)(parent.UnsafePointer()), (C.int)(flags)))
}

func (this *QDesignerWidgetBoxInterface) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerWidgetBoxInterface_metaObject(this.h)))
}

func (this *QDesignerWidgetBoxInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerWidgetBoxInterface_metacast(this.h, param1_Cstring))
}

func QDesignerWidgetBoxInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetBoxInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetBoxInterface) CategoryCount() int {
	return (int)(C.QDesignerWidgetBoxInterface_categoryCount(this.h))
}

func (this *QDesignerWidgetBoxInterface) Category(cat_idx int) *QDesignerWidgetBoxInterface__Category {
	_goptr := newQDesignerWidgetBoxInterface__Category(C.QDesignerWidgetBoxInterface_category(this.h, (C.int)(cat_idx)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerWidgetBoxInterface) AddCategory(cat *QDesignerWidgetBoxInterface__Category) {
	C.QDesignerWidgetBoxInterface_addCategory(this.h, cat.cPointer())
}

func (this *QDesignerWidgetBoxInterface) RemoveCategory(cat_idx int) {
	C.QDesignerWidgetBoxInterface_removeCategory(this.h, (C.int)(cat_idx))
}

func (this *QDesignerWidgetBoxInterface) WidgetCount(cat_idx int) int {
	return (int)(C.QDesignerWidgetBoxInterface_widgetCount(this.h, (C.int)(cat_idx)))
}

func (this *QDesignerWidgetBoxInterface) Widget(cat_idx int, wgt_idx int) *QDesignerWidgetBoxInterface__Widget {
	_goptr := newQDesignerWidgetBoxInterface__Widget(C.QDesignerWidgetBoxInterface_widget(this.h, (C.int)(cat_idx), (C.int)(wgt_idx)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerWidgetBoxInterface) AddWidget(cat_idx int, wgt *QDesignerWidgetBoxInterface__Widget) {
	C.QDesignerWidgetBoxInterface_addWidget(this.h, (C.int)(cat_idx), wgt.cPointer())
}

func (this *QDesignerWidgetBoxInterface) RemoveWidget(cat_idx int, wgt_idx int) {
	C.QDesignerWidgetBoxInterface_removeWidget(this.h, (C.int)(cat_idx), (C.int)(wgt_idx))
}

func (this *QDesignerWidgetBoxInterface) FindOrInsertCategory(categoryName string) int {
	categoryName_ms := C.struct_miqt_string{}
	categoryName_ms.data = C.CString(categoryName)
	categoryName_ms.len = C.size_t(len(categoryName))
	defer C.free(unsafe.Pointer(categoryName_ms.data))
	return (int)(C.QDesignerWidgetBoxInterface_findOrInsertCategory(this.h, categoryName_ms))
}

func (this *QDesignerWidgetBoxInterface) DropWidgets(item_list []*QDesignerDnDItemInterface, global_mouse_pos *qt6.QPoint) {
	item_list_CArray := (*[0xffff]*C.QDesignerDnDItemInterface)(C.malloc(C.size_t(8 * len(item_list))))
	defer C.free(unsafe.Pointer(item_list_CArray))
	for i := range item_list {
		item_list_CArray[i] = item_list[i].cPointer()
	}
	item_list_ma := C.struct_miqt_array{len: C.size_t(len(item_list)), data: unsafe.Pointer(item_list_CArray)}
	C.QDesignerWidgetBoxInterface_dropWidgets(this.h, item_list_ma, (*C.QPoint)(global_mouse_pos.UnsafePointer()))
}

func (this *QDesignerWidgetBoxInterface) SetFileName(file_name string) {
	file_name_ms := C.struct_miqt_string{}
	file_name_ms.data = C.CString(file_name)
	file_name_ms.len = C.size_t(len(file_name))
	defer C.free(unsafe.Pointer(file_name_ms.data))
	C.QDesignerWidgetBoxInterface_setFileName(this.h, file_name_ms)
}

func (this *QDesignerWidgetBoxInterface) FileName() string {
	var _ms C.struct_miqt_string = C.QDesignerWidgetBoxInterface_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetBoxInterface) Load() bool {
	return (bool)(C.QDesignerWidgetBoxInterface_load(this.h))
}

func (this *QDesignerWidgetBoxInterface) Save() bool {
	return (bool)(C.QDesignerWidgetBoxInterface_save(this.h))
}

func QDesignerWidgetBoxInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetBoxInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerWidgetBoxInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetBoxInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateMicroFocus can only be called from a QDesignerWidgetBoxInterface that was directly constructed.
func (this *QDesignerWidgetBoxInterface) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerWidgetBoxInterface_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QDesignerWidgetBoxInterface that was directly constructed.
func (this *QDesignerWidgetBoxInterface) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerWidgetBoxInterface_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QDesignerWidgetBoxInterface that was directly constructed.
func (this *QDesignerWidgetBoxInterface) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerWidgetBoxInterface_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QDesignerWidgetBoxInterface that was directly constructed.
func (this *QDesignerWidgetBoxInterface) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerWidgetBoxInterface_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QDesignerWidgetBoxInterface that was directly constructed.
func (this *QDesignerWidgetBoxInterface) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerWidgetBoxInterface_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QDesignerWidgetBoxInterface that was directly constructed.
func (this *QDesignerWidgetBoxInterface) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QDesignerWidgetBoxInterface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDesignerWidgetBoxInterface that was directly constructed.
func (this *QDesignerWidgetBoxInterface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerWidgetBoxInterface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDesignerWidgetBoxInterface that was directly constructed.
func (this *QDesignerWidgetBoxInterface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerWidgetBoxInterface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDesignerWidgetBoxInterface that was directly constructed.
func (this *QDesignerWidgetBoxInterface) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerWidgetBoxInterface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QDesignerWidgetBoxInterface) OnCategoryCount(slot func() int) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_categoryCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_categoryCount
func miqt_exec_callback_QDesignerWidgetBoxInterface_categoryCount(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerWidgetBoxInterface) OnCategory(slot func(cat_idx int) *QDesignerWidgetBoxInterface__Category) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_category(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_category
func miqt_exec_callback_QDesignerWidgetBoxInterface_category(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, cat_idx C.int) *C.QDesignerWidgetBoxInterface__Category {
	gofunc, ok := cgo.Handle(cb).Value().(func(cat_idx int) *QDesignerWidgetBoxInterface__Category)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(cat_idx)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QDesignerWidgetBoxInterface) OnAddCategory(slot func(cat *QDesignerWidgetBoxInterface__Category)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_addCategory(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_addCategory
func miqt_exec_callback_QDesignerWidgetBoxInterface_addCategory(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, cat *C.QDesignerWidgetBoxInterface__Category) {
	gofunc, ok := cgo.Handle(cb).Value().(func(cat *QDesignerWidgetBoxInterface__Category))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerWidgetBoxInterface__Category(cat)

	gofunc(slotval1)

}
func (this *QDesignerWidgetBoxInterface) OnRemoveCategory(slot func(cat_idx int)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_removeCategory(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_removeCategory
func miqt_exec_callback_QDesignerWidgetBoxInterface_removeCategory(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, cat_idx C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(cat_idx int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(cat_idx)

	gofunc(slotval1)

}
func (this *QDesignerWidgetBoxInterface) OnWidgetCount(slot func(cat_idx int) int) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_widgetCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_widgetCount
func miqt_exec_callback_QDesignerWidgetBoxInterface_widgetCount(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, cat_idx C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(cat_idx int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(cat_idx)

	virtualReturn := gofunc(slotval1)

	return (C.int)(virtualReturn)

}
func (this *QDesignerWidgetBoxInterface) OnWidget(slot func(cat_idx int, wgt_idx int) *QDesignerWidgetBoxInterface__Widget) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_widget
func miqt_exec_callback_QDesignerWidgetBoxInterface_widget(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, cat_idx C.int, wgt_idx C.int) *C.QDesignerWidgetBoxInterface__Widget {
	gofunc, ok := cgo.Handle(cb).Value().(func(cat_idx int, wgt_idx int) *QDesignerWidgetBoxInterface__Widget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(cat_idx)

	slotval2 := (int)(wgt_idx)

	virtualReturn := gofunc(slotval1, slotval2)

	return virtualReturn.cPointer()

}
func (this *QDesignerWidgetBoxInterface) OnAddWidget(slot func(cat_idx int, wgt *QDesignerWidgetBoxInterface__Widget)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_addWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_addWidget
func miqt_exec_callback_QDesignerWidgetBoxInterface_addWidget(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, cat_idx C.int, wgt *C.QDesignerWidgetBoxInterface__Widget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(cat_idx int, wgt *QDesignerWidgetBoxInterface__Widget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(cat_idx)

	slotval2 := newQDesignerWidgetBoxInterface__Widget(wgt)

	gofunc(slotval1, slotval2)

}
func (this *QDesignerWidgetBoxInterface) OnRemoveWidget(slot func(cat_idx int, wgt_idx int)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_removeWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_removeWidget
func miqt_exec_callback_QDesignerWidgetBoxInterface_removeWidget(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, cat_idx C.int, wgt_idx C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(cat_idx int, wgt_idx int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(cat_idx)

	slotval2 := (int)(wgt_idx)

	gofunc(slotval1, slotval2)

}
func (this *QDesignerWidgetBoxInterface) OnDropWidgets(slot func(item_list []*QDesignerDnDItemInterface, global_mouse_pos *qt6.QPoint)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_dropWidgets(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_dropWidgets
func miqt_exec_callback_QDesignerWidgetBoxInterface_dropWidgets(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, item_list C.struct_miqt_array, global_mouse_pos *C.QPoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item_list []*QDesignerDnDItemInterface, global_mouse_pos *qt6.QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var item_list_ma C.struct_miqt_array = item_list
	item_list_ret := make([]*QDesignerDnDItemInterface, int(item_list_ma.len))
	item_list_outCast := (*[0xffff]*C.QDesignerDnDItemInterface)(unsafe.Pointer(item_list_ma.data)) // hey ya
	for i := 0; i < int(item_list_ma.len); i++ {
		item_list_ret[i] = newQDesignerDnDItemInterface(item_list_outCast[i])
	}
	slotval1 := item_list_ret

	slotval2 := qt6.UnsafeNewQPoint(unsafe.Pointer(global_mouse_pos))

	gofunc(slotval1, slotval2)

}
func (this *QDesignerWidgetBoxInterface) OnSetFileName(slot func(file_name string)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_setFileName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_setFileName
func miqt_exec_callback_QDesignerWidgetBoxInterface_setFileName(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, file_name C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(file_name string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var file_name_ms C.struct_miqt_string = file_name
	file_name_ret := C.GoStringN(file_name_ms.data, C.int(int64(file_name_ms.len)))
	C.free(unsafe.Pointer(file_name_ms.data))
	slotval1 := file_name_ret

	gofunc(slotval1)

}
func (this *QDesignerWidgetBoxInterface) OnFileName(slot func() string) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_fileName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_fileName
func miqt_exec_callback_QDesignerWidgetBoxInterface_fileName(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QDesignerWidgetBoxInterface) OnLoad(slot func() bool) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_load(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_load
func miqt_exec_callback_QDesignerWidgetBoxInterface_load(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QDesignerWidgetBoxInterface) OnSave(slot func() bool) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_save(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_save
func miqt_exec_callback_QDesignerWidgetBoxInterface_save(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_DevType() int {

	return (int)(C.QDesignerWidgetBoxInterface_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QDesignerWidgetBoxInterface) OnDevType(slot func(super func() int) int) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_devType
func miqt_exec_callback_QDesignerWidgetBoxInterface_devType(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_SetVisible(visible bool) {

	C.QDesignerWidgetBoxInterface_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDesignerWidgetBoxInterface) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_setVisible
func miqt_exec_callback_QDesignerWidgetBoxInterface_setVisible(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QDesignerWidgetBoxInterface_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesignerWidgetBoxInterface) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_sizeHint
func miqt_exec_callback_QDesignerWidgetBoxInterface_sizeHint(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QDesignerWidgetBoxInterface_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesignerWidgetBoxInterface) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_minimumSizeHint
func miqt_exec_callback_QDesignerWidgetBoxInterface_minimumSizeHint(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDesignerWidgetBoxInterface_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDesignerWidgetBoxInterface) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_heightForWidth
func miqt_exec_callback_QDesignerWidgetBoxInterface_heightForWidth(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDesignerWidgetBoxInterface_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDesignerWidgetBoxInterface) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_hasHeightForWidth
func miqt_exec_callback_QDesignerWidgetBoxInterface_hasHeightForWidth(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QDesignerWidgetBoxInterface_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QDesignerWidgetBoxInterface) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_paintEngine
func miqt_exec_callback_QDesignerWidgetBoxInterface_paintEngine(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QDesignerWidgetBoxInterface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerWidgetBoxInterface) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_event
func miqt_exec_callback_QDesignerWidgetBoxInterface_event(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_mousePressEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_mousePressEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_mouseReleaseEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_mouseReleaseEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_mouseDoubleClickEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_mouseDoubleClickEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_mouseMoveEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_mouseMoveEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_wheelEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_wheelEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_keyPressEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_keyPressEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_keyReleaseEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_keyReleaseEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_focusInEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_focusInEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_focusOutEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_focusOutEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_enterEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_enterEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_leaveEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_leaveEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_paintEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_paintEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_moveEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_moveEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_resizeEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_resizeEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_closeEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_closeEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_ContextMenuEvent(event *qt6.QContextMenuEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnContextMenuEvent(slot func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_contextMenuEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_contextMenuEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_tabletEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_tabletEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_actionEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_actionEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_dragEnterEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_dragEnterEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_dragMoveEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_dragMoveEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_dragLeaveEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_dragLeaveEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_dropEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_dropEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_showEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_showEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_hideEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_hideEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDesignerWidgetBoxInterface_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDesignerWidgetBoxInterface) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_nativeEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_nativeEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_changeEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_changeEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDesignerWidgetBoxInterface_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDesignerWidgetBoxInterface) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_metric
func miqt_exec_callback_QDesignerWidgetBoxInterface_metric(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QDesignerWidgetBoxInterface_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_initPainter
func miqt_exec_callback_QDesignerWidgetBoxInterface_initPainter(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QDesignerWidgetBoxInterface_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QDesignerWidgetBoxInterface) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_redirected
func miqt_exec_callback_QDesignerWidgetBoxInterface_redirected(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QDesignerWidgetBoxInterface_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QDesignerWidgetBoxInterface) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_sharedPainter
func miqt_exec_callback_QDesignerWidgetBoxInterface_sharedPainter(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_inputMethodEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_inputMethodEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QDesignerWidgetBoxInterface_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesignerWidgetBoxInterface) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_inputMethodQuery
func miqt_exec_callback_QDesignerWidgetBoxInterface_inputMethodQuery(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDesignerWidgetBoxInterface_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDesignerWidgetBoxInterface) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_focusNextPrevChild
func miqt_exec_callback_QDesignerWidgetBoxInterface_focusNextPrevChild(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QDesignerWidgetBoxInterface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerWidgetBoxInterface) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_eventFilter
func miqt_exec_callback_QDesignerWidgetBoxInterface_eventFilter(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_timerEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_timerEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_childEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_childEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QDesignerWidgetBoxInterface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_customEvent
func miqt_exec_callback_QDesignerWidgetBoxInterface_customEvent(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerWidgetBoxInterface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_connectNotify
func miqt_exec_callback_QDesignerWidgetBoxInterface_connectNotify(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerWidgetBoxInterface) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerWidgetBoxInterface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerWidgetBoxInterface) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerWidgetBoxInterface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetBoxInterface_disconnectNotify
func miqt_exec_callback_QDesignerWidgetBoxInterface_disconnectNotify(self *C.QDesignerWidgetBoxInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerWidgetBoxInterface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerWidgetBoxInterface) Delete() {
	C.QDesignerWidgetBoxInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerWidgetBoxInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerWidgetBoxInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDesignerWidgetBoxInterface__Widget struct {
	h *C.QDesignerWidgetBoxInterface__Widget
}

func (this *QDesignerWidgetBoxInterface__Widget) cPointer() *C.QDesignerWidgetBoxInterface__Widget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerWidgetBoxInterface__Widget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerWidgetBoxInterface__Widget constructs the type using only CGO pointers.
func newQDesignerWidgetBoxInterface__Widget(h *C.QDesignerWidgetBoxInterface__Widget) *QDesignerWidgetBoxInterface__Widget {
	if h == nil {
		return nil
	}

	return &QDesignerWidgetBoxInterface__Widget{h: h}
}

// UnsafeNewQDesignerWidgetBoxInterface__Widget constructs the type using only unsafe pointers.
func UnsafeNewQDesignerWidgetBoxInterface__Widget(h unsafe.Pointer) *QDesignerWidgetBoxInterface__Widget {
	return newQDesignerWidgetBoxInterface__Widget((*C.QDesignerWidgetBoxInterface__Widget)(h))
}

// NewQDesignerWidgetBoxInterface__Widget constructs a new QDesignerWidgetBoxInterface::Widget object.
func NewQDesignerWidgetBoxInterface__Widget() *QDesignerWidgetBoxInterface__Widget {

	return newQDesignerWidgetBoxInterface__Widget(C.QDesignerWidgetBoxInterface__Widget_new())
}

// NewQDesignerWidgetBoxInterface__Widget2 constructs a new QDesignerWidgetBoxInterface::Widget object.
func NewQDesignerWidgetBoxInterface__Widget2(w *QDesignerWidgetBoxInterface__Widget) *QDesignerWidgetBoxInterface__Widget {

	return newQDesignerWidgetBoxInterface__Widget(C.QDesignerWidgetBoxInterface__Widget_new2(w.cPointer()))
}

// NewQDesignerWidgetBoxInterface__Widget3 constructs a new QDesignerWidgetBoxInterface::Widget object.
func NewQDesignerWidgetBoxInterface__Widget3(aname string) *QDesignerWidgetBoxInterface__Widget {
	aname_ms := C.struct_miqt_string{}
	aname_ms.data = C.CString(aname)
	aname_ms.len = C.size_t(len(aname))
	defer C.free(unsafe.Pointer(aname_ms.data))

	return newQDesignerWidgetBoxInterface__Widget(C.QDesignerWidgetBoxInterface__Widget_new3(aname_ms))
}

// NewQDesignerWidgetBoxInterface__Widget4 constructs a new QDesignerWidgetBoxInterface::Widget object.
func NewQDesignerWidgetBoxInterface__Widget4(aname string, xml string) *QDesignerWidgetBoxInterface__Widget {
	aname_ms := C.struct_miqt_string{}
	aname_ms.data = C.CString(aname)
	aname_ms.len = C.size_t(len(aname))
	defer C.free(unsafe.Pointer(aname_ms.data))
	xml_ms := C.struct_miqt_string{}
	xml_ms.data = C.CString(xml)
	xml_ms.len = C.size_t(len(xml))
	defer C.free(unsafe.Pointer(xml_ms.data))

	return newQDesignerWidgetBoxInterface__Widget(C.QDesignerWidgetBoxInterface__Widget_new4(aname_ms, xml_ms))
}

// NewQDesignerWidgetBoxInterface__Widget5 constructs a new QDesignerWidgetBoxInterface::Widget object.
func NewQDesignerWidgetBoxInterface__Widget5(aname string, xml string, icon_name string) *QDesignerWidgetBoxInterface__Widget {
	aname_ms := C.struct_miqt_string{}
	aname_ms.data = C.CString(aname)
	aname_ms.len = C.size_t(len(aname))
	defer C.free(unsafe.Pointer(aname_ms.data))
	xml_ms := C.struct_miqt_string{}
	xml_ms.data = C.CString(xml)
	xml_ms.len = C.size_t(len(xml))
	defer C.free(unsafe.Pointer(xml_ms.data))
	icon_name_ms := C.struct_miqt_string{}
	icon_name_ms.data = C.CString(icon_name)
	icon_name_ms.len = C.size_t(len(icon_name))
	defer C.free(unsafe.Pointer(icon_name_ms.data))

	return newQDesignerWidgetBoxInterface__Widget(C.QDesignerWidgetBoxInterface__Widget_new5(aname_ms, xml_ms, icon_name_ms))
}

// NewQDesignerWidgetBoxInterface__Widget6 constructs a new QDesignerWidgetBoxInterface::Widget object.
func NewQDesignerWidgetBoxInterface__Widget6(aname string, xml string, icon_name string, atype QDesignerWidgetBoxInterface__Widget__Type) *QDesignerWidgetBoxInterface__Widget {
	aname_ms := C.struct_miqt_string{}
	aname_ms.data = C.CString(aname)
	aname_ms.len = C.size_t(len(aname))
	defer C.free(unsafe.Pointer(aname_ms.data))
	xml_ms := C.struct_miqt_string{}
	xml_ms.data = C.CString(xml)
	xml_ms.len = C.size_t(len(xml))
	defer C.free(unsafe.Pointer(xml_ms.data))
	icon_name_ms := C.struct_miqt_string{}
	icon_name_ms.data = C.CString(icon_name)
	icon_name_ms.len = C.size_t(len(icon_name))
	defer C.free(unsafe.Pointer(icon_name_ms.data))

	return newQDesignerWidgetBoxInterface__Widget(C.QDesignerWidgetBoxInterface__Widget_new6(aname_ms, xml_ms, icon_name_ms, (C.int)(atype)))
}

func (this *QDesignerWidgetBoxInterface__Widget) OperatorAssign(w *QDesignerWidgetBoxInterface__Widget) {
	C.QDesignerWidgetBoxInterface__Widget_operatorAssign(this.h, w.cPointer())
}

func (this *QDesignerWidgetBoxInterface__Widget) Name() string {
	var _ms C.struct_miqt_string = C.QDesignerWidgetBoxInterface__Widget_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetBoxInterface__Widget) SetName(aname string) {
	aname_ms := C.struct_miqt_string{}
	aname_ms.data = C.CString(aname)
	aname_ms.len = C.size_t(len(aname))
	defer C.free(unsafe.Pointer(aname_ms.data))
	C.QDesignerWidgetBoxInterface__Widget_setName(this.h, aname_ms)
}

func (this *QDesignerWidgetBoxInterface__Widget) DomXml() string {
	var _ms C.struct_miqt_string = C.QDesignerWidgetBoxInterface__Widget_domXml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetBoxInterface__Widget) SetDomXml(xml string) {
	xml_ms := C.struct_miqt_string{}
	xml_ms.data = C.CString(xml)
	xml_ms.len = C.size_t(len(xml))
	defer C.free(unsafe.Pointer(xml_ms.data))
	C.QDesignerWidgetBoxInterface__Widget_setDomXml(this.h, xml_ms)
}

func (this *QDesignerWidgetBoxInterface__Widget) IconName() string {
	var _ms C.struct_miqt_string = C.QDesignerWidgetBoxInterface__Widget_iconName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetBoxInterface__Widget) SetIconName(icon_name string) {
	icon_name_ms := C.struct_miqt_string{}
	icon_name_ms.data = C.CString(icon_name)
	icon_name_ms.len = C.size_t(len(icon_name))
	defer C.free(unsafe.Pointer(icon_name_ms.data))
	C.QDesignerWidgetBoxInterface__Widget_setIconName(this.h, icon_name_ms)
}

func (this *QDesignerWidgetBoxInterface__Widget) Type() QDesignerWidgetBoxInterface__Widget__Type {
	return (QDesignerWidgetBoxInterface__Widget__Type)(C.QDesignerWidgetBoxInterface__Widget_type(this.h))
}

func (this *QDesignerWidgetBoxInterface__Widget) SetType(atype QDesignerWidgetBoxInterface__Widget__Type) {
	C.QDesignerWidgetBoxInterface__Widget_setType(this.h, (C.int)(atype))
}

func (this *QDesignerWidgetBoxInterface__Widget) IsNull() bool {
	return (bool)(C.QDesignerWidgetBoxInterface__Widget_isNull(this.h))
}

// Delete this object from C++ memory.
func (this *QDesignerWidgetBoxInterface__Widget) Delete() {
	C.QDesignerWidgetBoxInterface__Widget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerWidgetBoxInterface__Widget) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerWidgetBoxInterface__Widget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDesignerWidgetBoxInterface__Category struct {
	h *C.QDesignerWidgetBoxInterface__Category
}

func (this *QDesignerWidgetBoxInterface__Category) cPointer() *C.QDesignerWidgetBoxInterface__Category {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerWidgetBoxInterface__Category) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerWidgetBoxInterface__Category constructs the type using only CGO pointers.
func newQDesignerWidgetBoxInterface__Category(h *C.QDesignerWidgetBoxInterface__Category) *QDesignerWidgetBoxInterface__Category {
	if h == nil {
		return nil
	}

	return &QDesignerWidgetBoxInterface__Category{h: h}
}

// UnsafeNewQDesignerWidgetBoxInterface__Category constructs the type using only unsafe pointers.
func UnsafeNewQDesignerWidgetBoxInterface__Category(h unsafe.Pointer) *QDesignerWidgetBoxInterface__Category {
	return newQDesignerWidgetBoxInterface__Category((*C.QDesignerWidgetBoxInterface__Category)(h))
}

// NewQDesignerWidgetBoxInterface__Category constructs a new QDesignerWidgetBoxInterface::Category object.
func NewQDesignerWidgetBoxInterface__Category() *QDesignerWidgetBoxInterface__Category {

	return newQDesignerWidgetBoxInterface__Category(C.QDesignerWidgetBoxInterface__Category_new())
}

// NewQDesignerWidgetBoxInterface__Category2 constructs a new QDesignerWidgetBoxInterface::Category object.
func NewQDesignerWidgetBoxInterface__Category2(param1 *QDesignerWidgetBoxInterface__Category) *QDesignerWidgetBoxInterface__Category {

	return newQDesignerWidgetBoxInterface__Category(C.QDesignerWidgetBoxInterface__Category_new2(param1.cPointer()))
}

// NewQDesignerWidgetBoxInterface__Category3 constructs a new QDesignerWidgetBoxInterface::Category object.
func NewQDesignerWidgetBoxInterface__Category3(aname string) *QDesignerWidgetBoxInterface__Category {
	aname_ms := C.struct_miqt_string{}
	aname_ms.data = C.CString(aname)
	aname_ms.len = C.size_t(len(aname))
	defer C.free(unsafe.Pointer(aname_ms.data))

	return newQDesignerWidgetBoxInterface__Category(C.QDesignerWidgetBoxInterface__Category_new3(aname_ms))
}

// NewQDesignerWidgetBoxInterface__Category4 constructs a new QDesignerWidgetBoxInterface::Category object.
func NewQDesignerWidgetBoxInterface__Category4(aname string, atype QDesignerWidgetBoxInterface__Category__Type) *QDesignerWidgetBoxInterface__Category {
	aname_ms := C.struct_miqt_string{}
	aname_ms.data = C.CString(aname)
	aname_ms.len = C.size_t(len(aname))
	defer C.free(unsafe.Pointer(aname_ms.data))

	return newQDesignerWidgetBoxInterface__Category(C.QDesignerWidgetBoxInterface__Category_new4(aname_ms, (C.int)(atype)))
}

func (this *QDesignerWidgetBoxInterface__Category) Name() string {
	var _ms C.struct_miqt_string = C.QDesignerWidgetBoxInterface__Category_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetBoxInterface__Category) SetName(aname string) {
	aname_ms := C.struct_miqt_string{}
	aname_ms.data = C.CString(aname)
	aname_ms.len = C.size_t(len(aname))
	defer C.free(unsafe.Pointer(aname_ms.data))
	C.QDesignerWidgetBoxInterface__Category_setName(this.h, aname_ms)
}

func (this *QDesignerWidgetBoxInterface__Category) WidgetCount() int {
	return (int)(C.QDesignerWidgetBoxInterface__Category_widgetCount(this.h))
}

func (this *QDesignerWidgetBoxInterface__Category) Widget(idx int) *QDesignerWidgetBoxInterface__Widget {
	_goptr := newQDesignerWidgetBoxInterface__Widget(C.QDesignerWidgetBoxInterface__Category_widget(this.h, (C.int)(idx)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerWidgetBoxInterface__Category) RemoveWidget(idx int) {
	C.QDesignerWidgetBoxInterface__Category_removeWidget(this.h, (C.int)(idx))
}

func (this *QDesignerWidgetBoxInterface__Category) AddWidget(awidget *QDesignerWidgetBoxInterface__Widget) {
	C.QDesignerWidgetBoxInterface__Category_addWidget(this.h, awidget.cPointer())
}

func (this *QDesignerWidgetBoxInterface__Category) Type() QDesignerWidgetBoxInterface__Category__Type {
	return (QDesignerWidgetBoxInterface__Category__Type)(C.QDesignerWidgetBoxInterface__Category_type(this.h))
}

func (this *QDesignerWidgetBoxInterface__Category) SetType(atype QDesignerWidgetBoxInterface__Category__Type) {
	C.QDesignerWidgetBoxInterface__Category_setType(this.h, (C.int)(atype))
}

func (this *QDesignerWidgetBoxInterface__Category) IsNull() bool {
	return (bool)(C.QDesignerWidgetBoxInterface__Category_isNull(this.h))
}

func (this *QDesignerWidgetBoxInterface__Category) OperatorAssign(param1 *QDesignerWidgetBoxInterface__Category) {
	C.QDesignerWidgetBoxInterface__Category_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerWidgetBoxInterface__Category) Delete() {
	C.QDesignerWidgetBoxInterface__Category_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerWidgetBoxInterface__Category) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerWidgetBoxInterface__Category) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package designer

/*

#include "gen_membersheet.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerMemberSheetExtension struct {
	h *C.QDesignerMemberSheetExtension
}

func (this *QDesignerMemberSheetExtension) cPointer() *C.QDesignerMemberSheetExtension {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerMemberSheetExtension) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerMemberSheetExtension constructs the type using only CGO pointers.
func newQDesignerMemberSheetExtension(h *C.QDesignerMemberSheetExtension) *QDesignerMemberSheetExtension {
	if h == nil {
		return nil
	}

	return &QDesignerMemberSheetExtension{h: h}
}

// UnsafeNewQDesignerMemberSheetExtension constructs the type using only unsafe pointers.
func UnsafeNewQDesignerMemberSheetExtension(h unsafe.Pointer) *QDesignerMemberSheetExtension {
	return newQDesignerMemberSheetExtension((*C.QDesignerMemberSheetExtension)(h))
}

// NewQDesignerMemberSheetExtension constructs a new QDesignerMemberSheetExtension object.
func NewQDesignerMemberSheetExtension() *QDesignerMemberSheetExtension {

	return newQDesignerMemberSheetExtension(C.QDesignerMemberSheetExtension_new())
}

func (this *QDesignerMemberSheetExtension) Count() int {
	return (int)(C.QDesignerMemberSheetExtension_count(this.h))
}

func (this *QDesignerMemberSheetExtension) IndexOf(name string) int {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (int)(C.QDesignerMemberSheetExtension_indexOf(this.h, name_ms))
}

func (this *QDesignerMemberSheetExtension) MemberName(index int) string {
	var _ms C.struct_miqt_string = C.QDesignerMemberSheetExtension_memberName(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerMemberSheetExtension) MemberGroup(index int) string {
	var _ms C.struct_miqt_string = C.QDesignerMemberSheetExtension_memberGroup(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerMemberSheetExtension) SetMemberGroup(index int, group string) {
	group_ms := C.struct_miqt_string{}
	group_ms.data = C.CString(group)
	group_ms.len = C.size_t(len(group))
	defer C.free(unsafe.Pointer(group_ms.data))
	C.QDesignerMemberSheetExtension_setMemberGroup(this.h, (C.int)(index), group_ms)
}

func (this *QDesignerMemberSheetExtension) IsVisible(index int) bool {
	return (bool)(C.QDesignerMemberSheetExtension_isVisible(this.h, (C.int)(index)))
}

func (this *QDesignerMemberSheetExtension) SetVisible(index int, b bool) {
	C.QDesignerMemberSheetExtension_setVisible(this.h, (C.int)(index), (C.bool)(b))
}

func (this *QDesignerMemberSheetExtension) IsSignal(index int) bool {
	return (bool)(C.QDesignerMemberSheetExtension_isSignal(this.h, (C.int)(index)))
}

func (this *QDesignerMemberSheetExtension) IsSlot(index int) bool {
	return (bool)(C.QDesignerMemberSheetExtension_isSlot(this.h, (C.int)(index)))
}

func (this *QDesignerMemberSheetExtension) InheritedFromWidget(index int) bool {
	return (bool)(C.QDesignerMemberSheetExtension_inheritedFromWidget(this.h, (C.int)(index)))
}

func (this *QDesignerMemberSheetExtension) DeclaredInClass(index int) string {
	var _ms C.struct_miqt_string = C.QDesignerMemberSheetExtension_declaredInClass(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerMemberSheetExtension) Signature(index int) string {
	var _ms C.struct_miqt_string = C.QDesignerMemberSheetExtension_signature(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerMemberSheetExtension) ParameterTypes(index int) [][]byte {
	var _ma C.struct_miqt_array = C.QDesignerMemberSheetExtension_parameterTypes(this.h, (C.int)(index))
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QDesignerMemberSheetExtension) ParameterNames(index int) [][]byte {
	var _ma C.struct_miqt_array = C.QDesignerMemberSheetExtension_parameterNames(this.h, (C.int)(index))
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}
func (this *QDesignerMemberSheetExtension) OnCount(slot func() int) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_count
func miqt_exec_callback_QDesignerMemberSheetExtension_count(self *C.QDesignerMemberSheetExtension, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerMemberSheetExtension) OnIndexOf(slot func(name string) int) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_indexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_indexOf
func miqt_exec_callback_QDesignerMemberSheetExtension_indexOf(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, name C.struct_miqt_string) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	virtualReturn := gofunc(slotval1)

	return (C.int)(virtualReturn)

}
func (this *QDesignerMemberSheetExtension) OnMemberName(slot func(index int) string) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_memberName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_memberName
func miqt_exec_callback_QDesignerMemberSheetExtension_memberName(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, index C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QDesignerMemberSheetExtension) OnMemberGroup(slot func(index int) string) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_memberGroup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_memberGroup
func miqt_exec_callback_QDesignerMemberSheetExtension_memberGroup(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, index C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QDesignerMemberSheetExtension) OnSetMemberGroup(slot func(index int, group string)) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_setMemberGroup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_setMemberGroup
func miqt_exec_callback_QDesignerMemberSheetExtension_setMemberGroup(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, index C.int, group C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, group string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	var group_ms C.struct_miqt_string = group
	group_ret := C.GoStringN(group_ms.data, C.int(int64(group_ms.len)))
	C.free(unsafe.Pointer(group_ms.data))
	slotval2 := group_ret

	gofunc(slotval1, slotval2)

}
func (this *QDesignerMemberSheetExtension) OnIsVisible(slot func(index int) bool) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_isVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_isVisible
func miqt_exec_callback_QDesignerMemberSheetExtension_isVisible(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerMemberSheetExtension) OnSetVisible(slot func(index int, b bool)) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_setVisible
func miqt_exec_callback_QDesignerMemberSheetExtension_setVisible(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, index C.int, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := (bool)(b)

	gofunc(slotval1, slotval2)

}
func (this *QDesignerMemberSheetExtension) OnIsSignal(slot func(index int) bool) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_isSignal(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_isSignal
func miqt_exec_callback_QDesignerMemberSheetExtension_isSignal(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerMemberSheetExtension) OnIsSlot(slot func(index int) bool) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_isSlot(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_isSlot
func miqt_exec_callback_QDesignerMemberSheetExtension_isSlot(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerMemberSheetExtension) OnInheritedFromWidget(slot func(index int) bool) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_inheritedFromWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_inheritedFromWidget
func miqt_exec_callback_QDesignerMemberSheetExtension_inheritedFromWidget(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, index C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerMemberSheetExtension) OnDeclaredInClass(slot func(index int) string) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_declaredInClass(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_declaredInClass
func miqt_exec_callback_QDesignerMemberSheetExtension_declaredInClass(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, index C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QDesignerMemberSheetExtension) OnSignature(slot func(index int) string) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_signature(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_signature
func miqt_exec_callback_QDesignerMemberSheetExtension_signature(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, index C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QDesignerMemberSheetExtension) OnParameterTypes(slot func(index int) [][]byte) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_parameterTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_parameterTypes
func miqt_exec_callback_QDesignerMemberSheetExtension_parameterTypes(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, index C.int) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) [][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_alias := C.struct_miqt_string{}
		if len(virtualReturn[i]) > 0 {
			virtualReturn_i_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn[i][0]))
		} else {
			virtualReturn_i_alias.data = (*C.char)(unsafe.Pointer(nil))
		}
		virtualReturn_i_alias.len = C.size_t(len(virtualReturn[i]))
		virtualReturn_CArray[i] = virtualReturn_i_alias
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}
func (this *QDesignerMemberSheetExtension) OnParameterNames(slot func(index int) [][]byte) {
	ok := C.QDesignerMemberSheetExtension_override_virtual_parameterNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMemberSheetExtension_parameterNames
func miqt_exec_callback_QDesignerMemberSheetExtension_parameterNames(self *C.QDesignerMemberSheetExtension, cb C.intptr_t, index C.int) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) [][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_alias := C.struct_miqt_string{}
		if len(virtualReturn[i]) > 0 {
			virtualReturn_i_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn[i][0]))
		} else {
			virtualReturn_i_alias.data = (*C.char)(unsafe.Pointer(nil))
		}
		virtualReturn_i_alias.len = C.size_t(len(virtualReturn[i]))
		virtualReturn_CArray[i] = virtualReturn_i_alias
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QDesignerMemberSheetExtension) Delete() {
	C.QDesignerMemberSheetExtension_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerMemberSheetExtension) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerMemberSheetExtension) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

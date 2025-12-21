package designer

/*

#include "gen_membersheet.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func (this *QDesignerMemberSheetExtension) OperatorAssign(param1 *QDesignerMemberSheetExtension) {
	C.QDesignerMemberSheetExtension_operatorAssign(this.h, param1.cPointer())
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

package designer

/*

#include "gen_abstractpromotioninterface.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDesignerPromotionInterface struct {
	h *C.QDesignerPromotionInterface
}

func (this *QDesignerPromotionInterface) cPointer() *C.QDesignerPromotionInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerPromotionInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerPromotionInterface constructs the type using only CGO pointers.
func newQDesignerPromotionInterface(h *C.QDesignerPromotionInterface) *QDesignerPromotionInterface {
	if h == nil {
		return nil
	}

	return &QDesignerPromotionInterface{h: h}
}

// UnsafeNewQDesignerPromotionInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerPromotionInterface(h unsafe.Pointer) *QDesignerPromotionInterface {
	return newQDesignerPromotionInterface((*C.QDesignerPromotionInterface)(h))
}

func (this *QDesignerPromotionInterface) PromotedClasses() []QDesignerPromotionInterface__PromotedClass {
	var _ma C.struct_miqt_array = C.QDesignerPromotionInterface_promotedClasses(this.h)
	_ret := make([]QDesignerPromotionInterface__PromotedClass, int(_ma.len))
	_outCast := (*[0xffff]*C.QDesignerPromotionInterface__PromotedClass)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDesignerPromotionInterface__PromotedClass(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDesignerPromotionInterface) ReferencedPromotedClassNames() map[string]struct{} {
	var _ma C.struct_miqt_array = C.QDesignerPromotionInterface_referencedPromotedClassNames(this.h)
	_ret := make(map[string]struct{}, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _sv_ms C.struct_miqt_string = _outCast[i]
		_sv_ret := C.GoStringN(_sv_ms.data, C.int(int64(_sv_ms.len)))
		C.free(unsafe.Pointer(_sv_ms.data))
		_element := _sv_ret
		_ret[_element] = struct{}{}
	}
	return _ret
}

func (this *QDesignerPromotionInterface) PromotionBaseClasses() []*QDesignerWidgetDataBaseItemInterface {
	var _ma C.struct_miqt_array = C.QDesignerPromotionInterface_promotionBaseClasses(this.h)
	_ret := make([]*QDesignerWidgetDataBaseItemInterface, int(_ma.len))
	_outCast := (*[0xffff]*C.QDesignerWidgetDataBaseItemInterface)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQDesignerWidgetDataBaseItemInterface(_outCast[i])
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QDesignerPromotionInterface) Delete() {
	C.QDesignerPromotionInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerPromotionInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerPromotionInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDesignerPromotionInterface__PromotedClass struct {
	h *C.QDesignerPromotionInterface__PromotedClass
}

func (this *QDesignerPromotionInterface__PromotedClass) cPointer() *C.QDesignerPromotionInterface__PromotedClass {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerPromotionInterface__PromotedClass) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerPromotionInterface__PromotedClass constructs the type using only CGO pointers.
func newQDesignerPromotionInterface__PromotedClass(h *C.QDesignerPromotionInterface__PromotedClass) *QDesignerPromotionInterface__PromotedClass {
	if h == nil {
		return nil
	}

	return &QDesignerPromotionInterface__PromotedClass{h: h}
}

// UnsafeNewQDesignerPromotionInterface__PromotedClass constructs the type using only unsafe pointers.
func UnsafeNewQDesignerPromotionInterface__PromotedClass(h unsafe.Pointer) *QDesignerPromotionInterface__PromotedClass {
	return newQDesignerPromotionInterface__PromotedClass((*C.QDesignerPromotionInterface__PromotedClass)(h))
}

func (this *QDesignerPromotionInterface__PromotedClass) BaseItem() *QDesignerWidgetDataBaseItemInterface {
	return newQDesignerWidgetDataBaseItemInterface(C.QDesignerPromotionInterface__PromotedClass_baseItem(this.h))
}

func (this *QDesignerPromotionInterface__PromotedClass) SetBaseItem(baseItem *QDesignerWidgetDataBaseItemInterface) {
	C.QDesignerPromotionInterface__PromotedClass_setBaseItem(this.h, baseItem.cPointer())
}

func (this *QDesignerPromotionInterface__PromotedClass) PromotedItem() *QDesignerWidgetDataBaseItemInterface {
	return newQDesignerWidgetDataBaseItemInterface(C.QDesignerPromotionInterface__PromotedClass_promotedItem(this.h))
}

func (this *QDesignerPromotionInterface__PromotedClass) SetPromotedItem(promotedItem *QDesignerWidgetDataBaseItemInterface) {
	C.QDesignerPromotionInterface__PromotedClass_setPromotedItem(this.h, promotedItem.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerPromotionInterface__PromotedClass) Delete() {
	C.QDesignerPromotionInterface__PromotedClass_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerPromotionInterface__PromotedClass) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerPromotionInterface__PromotedClass) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

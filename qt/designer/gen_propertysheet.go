package designer

/*

#include "gen_propertysheet.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QDesignerPropertySheetExtension struct {
	h  *C.QDesignerPropertySheetExtension
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDesignerPropertySheetExtension) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QDesignerPropertySheetExtension) cPointer() *C.QDesignerPropertySheetExtension {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerPropertySheetExtension) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerPropertySheetExtension constructs the type using only CGO pointers.
func newQDesignerPropertySheetExtension(h *C.QDesignerPropertySheetExtension) *QDesignerPropertySheetExtension {
	if h == nil {
		return nil
	}

	return &QDesignerPropertySheetExtension{h: h}
}

// UnsafeNewQDesignerPropertySheetExtension constructs the type using only unsafe pointers.
func UnsafeNewQDesignerPropertySheetExtension(h unsafe.Pointer) *QDesignerPropertySheetExtension {
	return newQDesignerPropertySheetExtension((*C.QDesignerPropertySheetExtension)(h))
}

func (this *QDesignerPropertySheetExtension) Count() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QDesignerPropertySheetExtension_count(this.h))
}

func (this *QDesignerPropertySheetExtension) IndexOf(name string) int {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (int)(C.QDesignerPropertySheetExtension_indexOf(this.h, name_ms))
}

func (this *QDesignerPropertySheetExtension) PropertyName(index int) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDesignerPropertySheetExtension_propertyName(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerPropertySheetExtension) PropertyGroup(index int) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDesignerPropertySheetExtension_propertyGroup(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerPropertySheetExtension) SetPropertyGroup(index int, group string) {
	defer runtime.KeepAlive(this)
	group_ms := C.struct_miqt_string{}
	group_ms.data = C.CString(group)
	group_ms.len = C.size_t(len(group))
	defer C.free(unsafe.Pointer(group_ms.data))
	C.QDesignerPropertySheetExtension_setPropertyGroup(this.h, (C.int)(index), group_ms)
}

func (this *QDesignerPropertySheetExtension) HasReset(index int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDesignerPropertySheetExtension_hasReset(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) Reset(index int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDesignerPropertySheetExtension_reset(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) IsVisible(index int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDesignerPropertySheetExtension_isVisible(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) SetVisible(index int, b bool) {
	defer runtime.KeepAlive(this)
	C.QDesignerPropertySheetExtension_setVisible(this.h, (C.int)(index), (C.bool)(b))
}

func (this *QDesignerPropertySheetExtension) IsAttribute(index int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDesignerPropertySheetExtension_isAttribute(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) SetAttribute(index int, b bool) {
	defer runtime.KeepAlive(this)
	C.QDesignerPropertySheetExtension_setAttribute(this.h, (C.int)(index), (C.bool)(b))
}

func (this *QDesignerPropertySheetExtension) Property(index int) *qt.QVariant {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QDesignerPropertySheetExtension_property(this.h, (C.int)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerPropertySheetExtension) SetProperty(index int, value *qt.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	C.QDesignerPropertySheetExtension_setProperty(this.h, (C.int)(index), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerPropertySheetExtension) IsChanged(index int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDesignerPropertySheetExtension_isChanged(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) SetChanged(index int, changed bool) {
	defer runtime.KeepAlive(this)
	C.QDesignerPropertySheetExtension_setChanged(this.h, (C.int)(index), (C.bool)(changed))
}

func (this *QDesignerPropertySheetExtension) IsEnabled(index int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDesignerPropertySheetExtension_isEnabled(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) OperatorAssign(param1 *QDesignerPropertySheetExtension) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QDesignerPropertySheetExtension_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerPropertySheetExtension) Delete() {
	C.QDesignerPropertySheetExtension_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDesignerPropertySheetExtension) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDesignerPropertySheetExtension_delete((*C.QDesignerPropertySheetExtension)(gc[0]))
	})
	this.miqtSetGC(gc)
}

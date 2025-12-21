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
	h *C.QDesignerPropertySheetExtension
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
	return (int)(C.QDesignerPropertySheetExtension_count(this.h))
}

func (this *QDesignerPropertySheetExtension) IndexOf(name string) int {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (int)(C.QDesignerPropertySheetExtension_indexOf(this.h, name_ms))
}

func (this *QDesignerPropertySheetExtension) PropertyName(index int) string {
	var _ms C.struct_miqt_string = C.QDesignerPropertySheetExtension_propertyName(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerPropertySheetExtension) PropertyGroup(index int) string {
	var _ms C.struct_miqt_string = C.QDesignerPropertySheetExtension_propertyGroup(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerPropertySheetExtension) SetPropertyGroup(index int, group string) {
	group_ms := C.struct_miqt_string{}
	group_ms.data = C.CString(group)
	group_ms.len = C.size_t(len(group))
	defer C.free(unsafe.Pointer(group_ms.data))
	C.QDesignerPropertySheetExtension_setPropertyGroup(this.h, (C.int)(index), group_ms)
}

func (this *QDesignerPropertySheetExtension) HasReset(index int) bool {
	return (bool)(C.QDesignerPropertySheetExtension_hasReset(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) Reset(index int) bool {
	return (bool)(C.QDesignerPropertySheetExtension_reset(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) IsVisible(index int) bool {
	return (bool)(C.QDesignerPropertySheetExtension_isVisible(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) SetVisible(index int, b bool) {
	C.QDesignerPropertySheetExtension_setVisible(this.h, (C.int)(index), (C.bool)(b))
}

func (this *QDesignerPropertySheetExtension) IsAttribute(index int) bool {
	return (bool)(C.QDesignerPropertySheetExtension_isAttribute(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) SetAttribute(index int, b bool) {
	C.QDesignerPropertySheetExtension_setAttribute(this.h, (C.int)(index), (C.bool)(b))
}

func (this *QDesignerPropertySheetExtension) Property(index int) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QDesignerPropertySheetExtension_property(this.h, (C.int)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerPropertySheetExtension) SetProperty(index int, value *qt.QVariant) {
	C.QDesignerPropertySheetExtension_setProperty(this.h, (C.int)(index), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerPropertySheetExtension) IsChanged(index int) bool {
	return (bool)(C.QDesignerPropertySheetExtension_isChanged(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) SetChanged(index int, changed bool) {
	C.QDesignerPropertySheetExtension_setChanged(this.h, (C.int)(index), (C.bool)(changed))
}

func (this *QDesignerPropertySheetExtension) IsEnabled(index int) bool {
	return (bool)(C.QDesignerPropertySheetExtension_isEnabled(this.h, (C.int)(index)))
}

func (this *QDesignerPropertySheetExtension) OperatorAssign(param1 *QDesignerPropertySheetExtension) {
	C.QDesignerPropertySheetExtension_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerPropertySheetExtension) Delete() {
	C.QDesignerPropertySheetExtension_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerPropertySheetExtension) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerPropertySheetExtension) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package designer

/*

#include "gen_abstractsettings.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QDesignerSettingsInterface struct {
	h *C.QDesignerSettingsInterface
}

func (this *QDesignerSettingsInterface) cPointer() *C.QDesignerSettingsInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerSettingsInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerSettingsInterface constructs the type using only CGO pointers.
func newQDesignerSettingsInterface(h *C.QDesignerSettingsInterface) *QDesignerSettingsInterface {
	if h == nil {
		return nil
	}

	return &QDesignerSettingsInterface{h: h}
}

// UnsafeNewQDesignerSettingsInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerSettingsInterface(h unsafe.Pointer) *QDesignerSettingsInterface {
	return newQDesignerSettingsInterface((*C.QDesignerSettingsInterface)(h))
}

func (this *QDesignerSettingsInterface) BeginGroup(prefix string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QDesignerSettingsInterface_beginGroup(this.h, prefix_ms)
}

func (this *QDesignerSettingsInterface) EndGroup() {
	C.QDesignerSettingsInterface_endGroup(this.h)
}

func (this *QDesignerSettingsInterface) Contains(key string) bool {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return (bool)(C.QDesignerSettingsInterface_contains(this.h, key_ms))
}

func (this *QDesignerSettingsInterface) SetValue(key string, value *qt.QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QDesignerSettingsInterface_setValue(this.h, key_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerSettingsInterface) Value(key string, defaultValue *qt.QVariant) *qt.QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QDesignerSettingsInterface_value(this.h, key_ms, (*C.QVariant)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerSettingsInterface) Remove(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QDesignerSettingsInterface_remove(this.h, key_ms)
}

func (this *QDesignerSettingsInterface) OperatorAssign(param1 *QDesignerSettingsInterface) {
	C.QDesignerSettingsInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerSettingsInterface) Delete() {
	C.QDesignerSettingsInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerSettingsInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerSettingsInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt

/*

#include "gen_qscrollerproperties.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScrollerProperties struct {
	h *C.QScrollerProperties
}

func (this *QScrollerProperties) cPointer() *C.QScrollerProperties {
	if this == nil {
		return nil
	}
	return this.h
}

func newQScrollerProperties(h *C.QScrollerProperties) *QScrollerProperties {
	if h == nil {
		return nil
	}
	return &QScrollerProperties{h: h}
}

func newQScrollerProperties_U(h unsafe.Pointer) *QScrollerProperties {
	return newQScrollerProperties((*C.QScrollerProperties)(h))
}

// NewQScrollerProperties constructs a new QScrollerProperties object.
func NewQScrollerProperties() *QScrollerProperties {
	ret := C.QScrollerProperties_new()
	return newQScrollerProperties(ret)
}

// NewQScrollerProperties2 constructs a new QScrollerProperties object.
func NewQScrollerProperties2(sp *QScrollerProperties) *QScrollerProperties {
	ret := C.QScrollerProperties_new2(sp.cPointer())
	return newQScrollerProperties(ret)
}

func (this *QScrollerProperties) OperatorAssign(sp *QScrollerProperties) {
	C.QScrollerProperties_OperatorAssign(this.h, sp.cPointer())
}

func (this *QScrollerProperties) OperatorEqual(sp *QScrollerProperties) bool {
	ret := C.QScrollerProperties_OperatorEqual(this.h, sp.cPointer())
	return (bool)(ret)
}

func (this *QScrollerProperties) OperatorNotEqual(sp *QScrollerProperties) bool {
	ret := C.QScrollerProperties_OperatorNotEqual(this.h, sp.cPointer())
	return (bool)(ret)
}

func QScrollerProperties_SetDefaultScrollerProperties(sp *QScrollerProperties) {
	C.QScrollerProperties_SetDefaultScrollerProperties(sp.cPointer())
}

func QScrollerProperties_UnsetDefaultScrollerProperties() {
	C.QScrollerProperties_UnsetDefaultScrollerProperties()
}

func (this *QScrollerProperties) ScrollMetric(metric uintptr) *QVariant {
	ret := C.QScrollerProperties_ScrollMetric(this.h, (C.uintptr_t)(metric))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScrollerProperties) SetScrollMetric(metric uintptr, value *QVariant) {
	C.QScrollerProperties_SetScrollMetric(this.h, (C.uintptr_t)(metric), value.cPointer())
}

func (this *QScrollerProperties) Delete() {
	C.QScrollerProperties_Delete(this.h)
}

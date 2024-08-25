package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsizepolicy.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSizePolicy struct {
	h *C.QSizePolicy
}

func (this *QSizePolicy) cPointer() *C.QSizePolicy {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSizePolicy(h *C.QSizePolicy) *QSizePolicy {
	return &QSizePolicy{h: h}
}

func newQSizePolicy_U(h unsafe.Pointer) *QSizePolicy {
	return newQSizePolicy((*C.QSizePolicy)(h))
}

// NewQSizePolicy constructs a new QSizePolicy object.
func NewQSizePolicy() *QSizePolicy {
	ret := C.QSizePolicy_new()
	return newQSizePolicy(ret)
}

// NewQSizePolicy2 constructs a new QSizePolicy object.
func NewQSizePolicy2(param1 *QSizePolicy) *QSizePolicy {
	ret := C.QSizePolicy_new2(param1.cPointer())
	return newQSizePolicy(ret)
}

func (this *QSizePolicy) SetHeightForWidth(b bool) {
	C.QSizePolicy_SetHeightForWidth(this.h, (C.bool)(b))
}

func (this *QSizePolicy) HasHeightForWidth() bool {
	ret := C.QSizePolicy_HasHeightForWidth(this.h)
	return (bool)(ret)
}

func (this *QSizePolicy) SetWidthForHeight(b bool) {
	C.QSizePolicy_SetWidthForHeight(this.h, (C.bool)(b))
}

func (this *QSizePolicy) HasWidthForHeight() bool {
	ret := C.QSizePolicy_HasWidthForHeight(this.h)
	return (bool)(ret)
}

func (this *QSizePolicy) OperatorEqual(s *QSizePolicy) bool {
	ret := C.QSizePolicy_OperatorEqual(this.h, s.cPointer())
	return (bool)(ret)
}

func (this *QSizePolicy) OperatorNotEqual(s *QSizePolicy) bool {
	ret := C.QSizePolicy_OperatorNotEqual(this.h, s.cPointer())
	return (bool)(ret)
}

func (this *QSizePolicy) HorizontalStretch() int {
	ret := C.QSizePolicy_HorizontalStretch(this.h)
	return (int)(ret)
}

func (this *QSizePolicy) VerticalStretch() int {
	ret := C.QSizePolicy_VerticalStretch(this.h)
	return (int)(ret)
}

func (this *QSizePolicy) SetHorizontalStretch(stretchFactor int) {
	C.QSizePolicy_SetHorizontalStretch(this.h, (C.int)(stretchFactor))
}

func (this *QSizePolicy) SetVerticalStretch(stretchFactor int) {
	C.QSizePolicy_SetVerticalStretch(this.h, (C.int)(stretchFactor))
}

func (this *QSizePolicy) RetainSizeWhenHidden() bool {
	ret := C.QSizePolicy_RetainSizeWhenHidden(this.h)
	return (bool)(ret)
}

func (this *QSizePolicy) SetRetainSizeWhenHidden(retainSize bool) {
	C.QSizePolicy_SetRetainSizeWhenHidden(this.h, (C.bool)(retainSize))
}

func (this *QSizePolicy) Transpose() {
	C.QSizePolicy_Transpose(this.h)
}

func (this *QSizePolicy) Transposed() *QSizePolicy {
	ret := C.QSizePolicy_Transposed(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizePolicy(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizePolicy) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSizePolicy) Delete() {
	C.QSizePolicy_Delete(this.h)
}

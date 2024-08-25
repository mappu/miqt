package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qkeysequence.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QKeySequence struct {
	h *C.QKeySequence
}

func (this *QKeySequence) cPointer() *C.QKeySequence {
	if this == nil {
		return nil
	}
	return this.h
}

func newQKeySequence(h *C.QKeySequence) *QKeySequence {
	return &QKeySequence{h: h}
}

func newQKeySequence_U(h unsafe.Pointer) *QKeySequence {
	return newQKeySequence((*C.QKeySequence)(h))
}

// NewQKeySequence constructs a new QKeySequence object.
func NewQKeySequence() *QKeySequence {
	ret := C.QKeySequence_new()
	return newQKeySequence(ret)
}

// NewQKeySequence2 constructs a new QKeySequence object.
func NewQKeySequence2(k1 int) *QKeySequence {
	ret := C.QKeySequence_new2((C.int)(k1))
	return newQKeySequence(ret)
}

// NewQKeySequence3 constructs a new QKeySequence object.
func NewQKeySequence3(ks *QKeySequence) *QKeySequence {
	ret := C.QKeySequence_new3(ks.cPointer())
	return newQKeySequence(ret)
}

// NewQKeySequence4 constructs a new QKeySequence object.
func NewQKeySequence4(k1 int, k2 int) *QKeySequence {
	ret := C.QKeySequence_new4((C.int)(k1), (C.int)(k2))
	return newQKeySequence(ret)
}

// NewQKeySequence5 constructs a new QKeySequence object.
func NewQKeySequence5(k1 int, k2 int, k3 int) *QKeySequence {
	ret := C.QKeySequence_new5((C.int)(k1), (C.int)(k2), (C.int)(k3))
	return newQKeySequence(ret)
}

// NewQKeySequence6 constructs a new QKeySequence object.
func NewQKeySequence6(k1 int, k2 int, k3 int, k4 int) *QKeySequence {
	ret := C.QKeySequence_new6((C.int)(k1), (C.int)(k2), (C.int)(k3), (C.int)(k4))
	return newQKeySequence(ret)
}

func (this *QKeySequence) Count() int {
	ret := C.QKeySequence_Count(this.h)
	return (int)(ret)
}

func (this *QKeySequence) IsEmpty() bool {
	ret := C.QKeySequence_IsEmpty(this.h)
	return (bool)(ret)
}

func QKeySequence_Mnemonic(text string) *QKeySequence {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QKeySequence_Mnemonic(text_Cstring, C.ulong(len(text)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQKeySequence(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QKeySequence) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QKeySequence) OperatorSubscript(i uint) int {
	ret := C.QKeySequence_OperatorSubscript(this.h, (C.uint)(i))
	return (int)(ret)
}

func (this *QKeySequence) OperatorAssign(other *QKeySequence) {
	C.QKeySequence_OperatorAssign(this.h, other.cPointer())
}

func (this *QKeySequence) Swap(other *QKeySequence) {
	C.QKeySequence_Swap(this.h, other.cPointer())
}

func (this *QKeySequence) OperatorEqual(other *QKeySequence) bool {
	ret := C.QKeySequence_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QKeySequence) OperatorNotEqual(other *QKeySequence) bool {
	ret := C.QKeySequence_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QKeySequence) OperatorLesser(ks *QKeySequence) bool {
	ret := C.QKeySequence_OperatorLesser(this.h, ks.cPointer())
	return (bool)(ret)
}

func (this *QKeySequence) OperatorGreater(other *QKeySequence) bool {
	ret := C.QKeySequence_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QKeySequence) OperatorLesserOrEqual(other *QKeySequence) bool {
	ret := C.QKeySequence_OperatorLesserOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QKeySequence) OperatorGreaterOrEqual(other *QKeySequence) bool {
	ret := C.QKeySequence_OperatorGreaterOrEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QKeySequence) IsDetached() bool {
	ret := C.QKeySequence_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QKeySequence) Delete() {
	C.QKeySequence_Delete(this.h)
}

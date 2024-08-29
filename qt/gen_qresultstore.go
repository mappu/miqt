package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qresultstore.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtPrivate__ResultItem struct {
	h *C.QtPrivate__ResultItem
}

func (this *QtPrivate__ResultItem) cPointer() *C.QtPrivate__ResultItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__ResultItem(h *C.QtPrivate__ResultItem) *QtPrivate__ResultItem {
	return &QtPrivate__ResultItem{h: h}
}

func newQtPrivate__ResultItem_U(h unsafe.Pointer) *QtPrivate__ResultItem {
	return newQtPrivate__ResultItem((*C.QtPrivate__ResultItem)(h))
}

// NewQtPrivate__ResultItem constructs a new QtPrivate::ResultItem object.
func NewQtPrivate__ResultItem() *QtPrivate__ResultItem {
	ret := C.QtPrivate__ResultItem_new()
	return newQtPrivate__ResultItem(ret)
}

func (this *QtPrivate__ResultItem) IsValid() bool {
	ret := C.QtPrivate__ResultItem_IsValid(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__ResultItem) IsVector() bool {
	ret := C.QtPrivate__ResultItem_IsVector(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__ResultItem) Count() int {
	ret := C.QtPrivate__ResultItem_Count(this.h)
	return (int)(ret)
}

func (this *QtPrivate__ResultItem) Delete() {
	C.QtPrivate__ResultItem_Delete(this.h)
}

type QtPrivate__ResultIteratorBase struct {
	h *C.QtPrivate__ResultIteratorBase
}

func (this *QtPrivate__ResultIteratorBase) cPointer() *C.QtPrivate__ResultIteratorBase {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__ResultIteratorBase(h *C.QtPrivate__ResultIteratorBase) *QtPrivate__ResultIteratorBase {
	return &QtPrivate__ResultIteratorBase{h: h}
}

func newQtPrivate__ResultIteratorBase_U(h unsafe.Pointer) *QtPrivate__ResultIteratorBase {
	return newQtPrivate__ResultIteratorBase((*C.QtPrivate__ResultIteratorBase)(h))
}

// NewQtPrivate__ResultIteratorBase constructs a new QtPrivate::ResultIteratorBase object.
func NewQtPrivate__ResultIteratorBase() *QtPrivate__ResultIteratorBase {
	ret := C.QtPrivate__ResultIteratorBase_new()
	return newQtPrivate__ResultIteratorBase(ret)
}

func (this *QtPrivate__ResultIteratorBase) VectorIndex() int {
	ret := C.QtPrivate__ResultIteratorBase_VectorIndex(this.h)
	return (int)(ret)
}

func (this *QtPrivate__ResultIteratorBase) ResultIndex() int {
	ret := C.QtPrivate__ResultIteratorBase_ResultIndex(this.h)
	return (int)(ret)
}

func (this *QtPrivate__ResultIteratorBase) OperatorPlusPlus() *QtPrivate__ResultIteratorBase {
	ret := C.QtPrivate__ResultIteratorBase_OperatorPlusPlus(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQtPrivate__ResultIteratorBase(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QtPrivate__ResultIteratorBase) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QtPrivate__ResultIteratorBase) BatchSize() int {
	ret := C.QtPrivate__ResultIteratorBase_BatchSize(this.h)
	return (int)(ret)
}

func (this *QtPrivate__ResultIteratorBase) BatchedAdvance() {
	C.QtPrivate__ResultIteratorBase_BatchedAdvance(this.h)
}

func (this *QtPrivate__ResultIteratorBase) OperatorEqual(other *QtPrivate__ResultIteratorBase) bool {
	ret := C.QtPrivate__ResultIteratorBase_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QtPrivate__ResultIteratorBase) OperatorNotEqual(other *QtPrivate__ResultIteratorBase) bool {
	ret := C.QtPrivate__ResultIteratorBase_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QtPrivate__ResultIteratorBase) IsVector() bool {
	ret := C.QtPrivate__ResultIteratorBase_IsVector(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__ResultIteratorBase) CanIncrementVectorIndex() bool {
	ret := C.QtPrivate__ResultIteratorBase_CanIncrementVectorIndex(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__ResultIteratorBase) Delete() {
	C.QtPrivate__ResultIteratorBase_Delete(this.h)
}

type QtPrivate__ResultStoreBase struct {
	h *C.QtPrivate__ResultStoreBase
}

func (this *QtPrivate__ResultStoreBase) cPointer() *C.QtPrivate__ResultStoreBase {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__ResultStoreBase(h *C.QtPrivate__ResultStoreBase) *QtPrivate__ResultStoreBase {
	return &QtPrivate__ResultStoreBase{h: h}
}

func newQtPrivate__ResultStoreBase_U(h unsafe.Pointer) *QtPrivate__ResultStoreBase {
	return newQtPrivate__ResultStoreBase((*C.QtPrivate__ResultStoreBase)(h))
}

// NewQtPrivate__ResultStoreBase constructs a new QtPrivate::ResultStoreBase object.
func NewQtPrivate__ResultStoreBase() *QtPrivate__ResultStoreBase {
	ret := C.QtPrivate__ResultStoreBase_new()
	return newQtPrivate__ResultStoreBase(ret)
}

// NewQtPrivate__ResultStoreBase2 constructs a new QtPrivate::ResultStoreBase object.
func NewQtPrivate__ResultStoreBase2(param1 *QtPrivate__ResultStoreBase) *QtPrivate__ResultStoreBase {
	ret := C.QtPrivate__ResultStoreBase_new2(param1.cPointer())
	return newQtPrivate__ResultStoreBase(ret)
}

func (this *QtPrivate__ResultStoreBase) SetFilterMode(enable bool) {
	C.QtPrivate__ResultStoreBase_SetFilterMode(this.h, (C.bool)(enable))
}

func (this *QtPrivate__ResultStoreBase) FilterMode() bool {
	ret := C.QtPrivate__ResultStoreBase_FilterMode(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__ResultStoreBase) Begin() *QtPrivate__ResultIteratorBase {
	ret := C.QtPrivate__ResultStoreBase_Begin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQtPrivate__ResultIteratorBase(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QtPrivate__ResultIteratorBase) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QtPrivate__ResultStoreBase) End() *QtPrivate__ResultIteratorBase {
	ret := C.QtPrivate__ResultStoreBase_End(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQtPrivate__ResultIteratorBase(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QtPrivate__ResultIteratorBase) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QtPrivate__ResultStoreBase) HasNextResult() bool {
	ret := C.QtPrivate__ResultStoreBase_HasNextResult(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__ResultStoreBase) ResultAt(index int) *QtPrivate__ResultIteratorBase {
	ret := C.QtPrivate__ResultStoreBase_ResultAt(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQtPrivate__ResultIteratorBase(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QtPrivate__ResultIteratorBase) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QtPrivate__ResultStoreBase) Contains(index int) bool {
	ret := C.QtPrivate__ResultStoreBase_Contains(this.h, (C.int)(index))
	return (bool)(ret)
}

func (this *QtPrivate__ResultStoreBase) Count() int {
	ret := C.QtPrivate__ResultStoreBase_Count(this.h)
	return (int)(ret)
}

func (this *QtPrivate__ResultStoreBase) AddCanceledResult(index int) int {
	ret := C.QtPrivate__ResultStoreBase_AddCanceledResult(this.h, (C.int)(index))
	return (int)(ret)
}

func (this *QtPrivate__ResultStoreBase) Delete() {
	C.QtPrivate__ResultStoreBase_Delete(this.h)
}

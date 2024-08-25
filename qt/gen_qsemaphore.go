package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsemaphore.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QSemaphore struct {
	h *C.QSemaphore
}

func (this *QSemaphore) cPointer() *C.QSemaphore {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSemaphore(h *C.QSemaphore) *QSemaphore {
	return &QSemaphore{h: h}
}

func newQSemaphore_U(h unsafe.Pointer) *QSemaphore {
	return newQSemaphore((*C.QSemaphore)(h))
}

// NewQSemaphore constructs a new QSemaphore object.
func NewQSemaphore() *QSemaphore {
	ret := C.QSemaphore_new()
	return newQSemaphore(ret)
}

// NewQSemaphore2 constructs a new QSemaphore object.
func NewQSemaphore2(n int) *QSemaphore {
	ret := C.QSemaphore_new2((C.int)(n))
	return newQSemaphore(ret)
}

func (this *QSemaphore) Acquire() {
	C.QSemaphore_Acquire(this.h)
}

func (this *QSemaphore) TryAcquire() bool {
	ret := C.QSemaphore_TryAcquire(this.h)
	return (bool)(ret)
}

func (this *QSemaphore) TryAcquire2(n int, timeout int) bool {
	ret := C.QSemaphore_TryAcquire2(this.h, (C.int)(n), (C.int)(timeout))
	return (bool)(ret)
}

func (this *QSemaphore) Release() {
	C.QSemaphore_Release(this.h)
}

func (this *QSemaphore) Available() int {
	ret := C.QSemaphore_Available(this.h)
	return (int)(ret)
}

func (this *QSemaphore) Acquire1(n int) {
	C.QSemaphore_Acquire1(this.h, (C.int)(n))
}

func (this *QSemaphore) TryAcquire1(n int) bool {
	ret := C.QSemaphore_TryAcquire1(this.h, (C.int)(n))
	return (bool)(ret)
}

func (this *QSemaphore) Release1(n int) {
	C.QSemaphore_Release1(this.h, (C.int)(n))
}

func (this *QSemaphore) Delete() {
	C.QSemaphore_Delete(this.h)
}

type QSemaphoreReleaser struct {
	h *C.QSemaphoreReleaser
}

func (this *QSemaphoreReleaser) cPointer() *C.QSemaphoreReleaser {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSemaphoreReleaser(h *C.QSemaphoreReleaser) *QSemaphoreReleaser {
	return &QSemaphoreReleaser{h: h}
}

func newQSemaphoreReleaser_U(h unsafe.Pointer) *QSemaphoreReleaser {
	return newQSemaphoreReleaser((*C.QSemaphoreReleaser)(h))
}

// NewQSemaphoreReleaser constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser() *QSemaphoreReleaser {
	ret := C.QSemaphoreReleaser_new()
	return newQSemaphoreReleaser(ret)
}

// NewQSemaphoreReleaser2 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser2(sem *QSemaphore) *QSemaphoreReleaser {
	ret := C.QSemaphoreReleaser_new2(sem.cPointer())
	return newQSemaphoreReleaser(ret)
}

// NewQSemaphoreReleaser3 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser3(sem *QSemaphore) *QSemaphoreReleaser {
	ret := C.QSemaphoreReleaser_new3(sem.cPointer())
	return newQSemaphoreReleaser(ret)
}

// NewQSemaphoreReleaser4 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser4(sem *QSemaphore, n int) *QSemaphoreReleaser {
	ret := C.QSemaphoreReleaser_new4(sem.cPointer(), (C.int)(n))
	return newQSemaphoreReleaser(ret)
}

// NewQSemaphoreReleaser5 constructs a new QSemaphoreReleaser object.
func NewQSemaphoreReleaser5(sem *QSemaphore, n int) *QSemaphoreReleaser {
	ret := C.QSemaphoreReleaser_new5(sem.cPointer(), (C.int)(n))
	return newQSemaphoreReleaser(ret)
}

func (this *QSemaphoreReleaser) Swap(other *QSemaphoreReleaser) {
	C.QSemaphoreReleaser_Swap(this.h, other.cPointer())
}

func (this *QSemaphoreReleaser) Semaphore() *QSemaphore {
	ret := C.QSemaphoreReleaser_Semaphore(this.h)
	return newQSemaphore_U(unsafe.Pointer(ret))
}

func (this *QSemaphoreReleaser) Cancel() *QSemaphore {
	ret := C.QSemaphoreReleaser_Cancel(this.h)
	return newQSemaphore_U(unsafe.Pointer(ret))
}

func (this *QSemaphoreReleaser) Delete() {
	C.QSemaphoreReleaser_Delete(this.h)
}

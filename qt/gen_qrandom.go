package qt

/*

#include "gen_qrandom.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRandomGenerator struct {
	h          *C.QRandomGenerator
	isSubclass bool
}

func (this *QRandomGenerator) cPointer() *C.QRandomGenerator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRandomGenerator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRandomGenerator constructs the type using only CGO pointers.
func newQRandomGenerator(h *C.QRandomGenerator) *QRandomGenerator {
	if h == nil {
		return nil
	}
	return &QRandomGenerator{h: h}
}

// UnsafeNewQRandomGenerator constructs the type using only unsafe pointers.
func UnsafeNewQRandomGenerator(h unsafe.Pointer) *QRandomGenerator {
	if h == nil {
		return nil
	}

	return &QRandomGenerator{h: (*C.QRandomGenerator)(h)}
}

// NewQRandomGenerator constructs a new QRandomGenerator object.
func NewQRandomGenerator() *QRandomGenerator {
	var outptr_QRandomGenerator *C.QRandomGenerator = nil

	C.QRandomGenerator_new(&outptr_QRandomGenerator)
	ret := newQRandomGenerator(outptr_QRandomGenerator)
	ret.isSubclass = true
	return ret
}

// NewQRandomGenerator2 constructs a new QRandomGenerator object.
func NewQRandomGenerator2(seedBuffer *uint, lenVal int64) *QRandomGenerator {
	var outptr_QRandomGenerator *C.QRandomGenerator = nil

	C.QRandomGenerator_new2((*C.uint)(unsafe.Pointer(seedBuffer)), (C.ptrdiff_t)(lenVal), &outptr_QRandomGenerator)
	ret := newQRandomGenerator(outptr_QRandomGenerator)
	ret.isSubclass = true
	return ret
}

// NewQRandomGenerator3 constructs a new QRandomGenerator object.
func NewQRandomGenerator3(begin *uint, end *uint) *QRandomGenerator {
	var outptr_QRandomGenerator *C.QRandomGenerator = nil

	C.QRandomGenerator_new3((*C.uint)(unsafe.Pointer(begin)), (*C.uint)(unsafe.Pointer(end)), &outptr_QRandomGenerator)
	ret := newQRandomGenerator(outptr_QRandomGenerator)
	ret.isSubclass = true
	return ret
}

// NewQRandomGenerator4 constructs a new QRandomGenerator object.
func NewQRandomGenerator4(other *QRandomGenerator) *QRandomGenerator {
	var outptr_QRandomGenerator *C.QRandomGenerator = nil

	C.QRandomGenerator_new4(other.cPointer(), &outptr_QRandomGenerator)
	ret := newQRandomGenerator(outptr_QRandomGenerator)
	ret.isSubclass = true
	return ret
}

// NewQRandomGenerator5 constructs a new QRandomGenerator object.
func NewQRandomGenerator5(seedValue uint) *QRandomGenerator {
	var outptr_QRandomGenerator *C.QRandomGenerator = nil

	C.QRandomGenerator_new5((C.uint)(seedValue), &outptr_QRandomGenerator)
	ret := newQRandomGenerator(outptr_QRandomGenerator)
	ret.isSubclass = true
	return ret
}

func (this *QRandomGenerator) OperatorAssign(other *QRandomGenerator) {
	C.QRandomGenerator_OperatorAssign(this.h, other.cPointer())
}

func (this *QRandomGenerator) Generate() uint {
	return (uint)(C.QRandomGenerator_Generate(this.h))
}

func (this *QRandomGenerator) Generate64() uint64 {
	return (uint64)(C.QRandomGenerator_Generate64(this.h))
}

func (this *QRandomGenerator) GenerateDouble() float64 {
	return (float64)(C.QRandomGenerator_GenerateDouble(this.h))
}

func (this *QRandomGenerator) Bounded(highest float64) float64 {
	return (float64)(C.QRandomGenerator_Bounded(this.h, (C.double)(highest)))
}

func (this *QRandomGenerator) BoundedWithHighest(highest uint) uint {
	return (uint)(C.QRandomGenerator_BoundedWithHighest(this.h, (C.uint)(highest)))
}

func (this *QRandomGenerator) Bounded2(lowest uint, highest uint) uint {
	return (uint)(C.QRandomGenerator_Bounded2(this.h, (C.uint)(lowest), (C.uint)(highest)))
}

func (this *QRandomGenerator) Bounded3(highest int) int {
	return (int)(C.QRandomGenerator_Bounded3(this.h, (C.int)(highest)))
}

func (this *QRandomGenerator) Bounded4(lowest int, highest int) int {
	return (int)(C.QRandomGenerator_Bounded4(this.h, (C.int)(lowest), (C.int)(highest)))
}

func (this *QRandomGenerator) Generate2(begin *uint, end *uint) {
	C.QRandomGenerator_Generate2(this.h, (*C.uint)(unsafe.Pointer(begin)), (*C.uint)(unsafe.Pointer(end)))
}

func (this *QRandomGenerator) OperatorCall() uint {
	return (uint)(C.QRandomGenerator_OperatorCall(this.h))
}

func (this *QRandomGenerator) Seed() {
	C.QRandomGenerator_Seed(this.h)
}

func (this *QRandomGenerator) Discard(z uint64) {
	C.QRandomGenerator_Discard(this.h, (C.ulonglong)(z))
}

func QRandomGenerator_Min() uint {
	return (uint)(C.QRandomGenerator_Min())
}

func QRandomGenerator_Max() uint {
	return (uint)(C.QRandomGenerator_Max())
}

func QRandomGenerator_System() *QRandomGenerator {
	return newQRandomGenerator(C.QRandomGenerator_System())
}

func QRandomGenerator_Global() *QRandomGenerator {
	return newQRandomGenerator(C.QRandomGenerator_Global())
}

func QRandomGenerator_SecurelySeeded() *QRandomGenerator {
	_goptr := newQRandomGenerator(C.QRandomGenerator_SecurelySeeded())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRandomGenerator) Seed1(s uint) {
	C.QRandomGenerator_Seed1(this.h, (C.uint)(s))
}

// Delete this object from C++ memory.
func (this *QRandomGenerator) Delete() {
	C.QRandomGenerator_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRandomGenerator) GoGC() {
	runtime.SetFinalizer(this, func(this *QRandomGenerator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QRandomGenerator64 struct {
	h          *C.QRandomGenerator64
	isSubclass bool
	*QRandomGenerator
}

func (this *QRandomGenerator64) cPointer() *C.QRandomGenerator64 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRandomGenerator64) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRandomGenerator64 constructs the type using only CGO pointers.
func newQRandomGenerator64(h *C.QRandomGenerator64, h_QRandomGenerator *C.QRandomGenerator) *QRandomGenerator64 {
	if h == nil {
		return nil
	}
	return &QRandomGenerator64{h: h,
		QRandomGenerator: newQRandomGenerator(h_QRandomGenerator)}
}

// UnsafeNewQRandomGenerator64 constructs the type using only unsafe pointers.
func UnsafeNewQRandomGenerator64(h unsafe.Pointer, h_QRandomGenerator unsafe.Pointer) *QRandomGenerator64 {
	if h == nil {
		return nil
	}

	return &QRandomGenerator64{h: (*C.QRandomGenerator64)(h),
		QRandomGenerator: UnsafeNewQRandomGenerator(h_QRandomGenerator)}
}

// NewQRandomGenerator64 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator64() *QRandomGenerator64 {
	var outptr_QRandomGenerator64 *C.QRandomGenerator64 = nil
	var outptr_QRandomGenerator *C.QRandomGenerator = nil

	C.QRandomGenerator64_new(&outptr_QRandomGenerator64, &outptr_QRandomGenerator)
	ret := newQRandomGenerator64(outptr_QRandomGenerator64, outptr_QRandomGenerator)
	ret.isSubclass = true
	return ret
}

// NewQRandomGenerator642 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator642(seedBuffer *uint, lenVal int64) *QRandomGenerator64 {
	var outptr_QRandomGenerator64 *C.QRandomGenerator64 = nil
	var outptr_QRandomGenerator *C.QRandomGenerator = nil

	C.QRandomGenerator64_new2((*C.uint)(unsafe.Pointer(seedBuffer)), (C.ptrdiff_t)(lenVal), &outptr_QRandomGenerator64, &outptr_QRandomGenerator)
	ret := newQRandomGenerator64(outptr_QRandomGenerator64, outptr_QRandomGenerator)
	ret.isSubclass = true
	return ret
}

// NewQRandomGenerator643 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator643(begin *uint, end *uint) *QRandomGenerator64 {
	var outptr_QRandomGenerator64 *C.QRandomGenerator64 = nil
	var outptr_QRandomGenerator *C.QRandomGenerator = nil

	C.QRandomGenerator64_new3((*C.uint)(unsafe.Pointer(begin)), (*C.uint)(unsafe.Pointer(end)), &outptr_QRandomGenerator64, &outptr_QRandomGenerator)
	ret := newQRandomGenerator64(outptr_QRandomGenerator64, outptr_QRandomGenerator)
	ret.isSubclass = true
	return ret
}

// NewQRandomGenerator644 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator644(other *QRandomGenerator) *QRandomGenerator64 {
	var outptr_QRandomGenerator64 *C.QRandomGenerator64 = nil
	var outptr_QRandomGenerator *C.QRandomGenerator = nil

	C.QRandomGenerator64_new4(other.cPointer(), &outptr_QRandomGenerator64, &outptr_QRandomGenerator)
	ret := newQRandomGenerator64(outptr_QRandomGenerator64, outptr_QRandomGenerator)
	ret.isSubclass = true
	return ret
}

// NewQRandomGenerator645 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator645(param1 *QRandomGenerator64) *QRandomGenerator64 {
	var outptr_QRandomGenerator64 *C.QRandomGenerator64 = nil
	var outptr_QRandomGenerator *C.QRandomGenerator = nil

	C.QRandomGenerator64_new5(param1.cPointer(), &outptr_QRandomGenerator64, &outptr_QRandomGenerator)
	ret := newQRandomGenerator64(outptr_QRandomGenerator64, outptr_QRandomGenerator)
	ret.isSubclass = true
	return ret
}

// NewQRandomGenerator646 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator646(seedValue uint) *QRandomGenerator64 {
	var outptr_QRandomGenerator64 *C.QRandomGenerator64 = nil
	var outptr_QRandomGenerator *C.QRandomGenerator = nil

	C.QRandomGenerator64_new6((C.uint)(seedValue), &outptr_QRandomGenerator64, &outptr_QRandomGenerator)
	ret := newQRandomGenerator64(outptr_QRandomGenerator64, outptr_QRandomGenerator)
	ret.isSubclass = true
	return ret
}

func (this *QRandomGenerator64) Generate() uint64 {
	return (uint64)(C.QRandomGenerator64_Generate(this.h))
}

func (this *QRandomGenerator64) OperatorCall() uint64 {
	return (uint64)(C.QRandomGenerator64_OperatorCall(this.h))
}

func (this *QRandomGenerator64) Discard(z uint64) {
	C.QRandomGenerator64_Discard(this.h, (C.ulonglong)(z))
}

func QRandomGenerator64_Min() uint64 {
	return (uint64)(C.QRandomGenerator64_Min())
}

func QRandomGenerator64_Max() uint64 {
	return (uint64)(C.QRandomGenerator64_Max())
}

func QRandomGenerator64_System() *QRandomGenerator64 {
	return newQRandomGenerator64(C.QRandomGenerator64_System(), nil)
}

func QRandomGenerator64_Global() *QRandomGenerator64 {
	return newQRandomGenerator64(C.QRandomGenerator64_Global(), nil)
}

func QRandomGenerator64_SecurelySeeded() *QRandomGenerator64 {
	_goptr := newQRandomGenerator64(C.QRandomGenerator64_SecurelySeeded(), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRandomGenerator64) OperatorAssign(param1 *QRandomGenerator64) {
	C.QRandomGenerator64_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QRandomGenerator64) Delete() {
	C.QRandomGenerator64_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRandomGenerator64) GoGC() {
	runtime.SetFinalizer(this, func(this *QRandomGenerator64) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

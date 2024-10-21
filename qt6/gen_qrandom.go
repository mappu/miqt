package qt6

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
	h *C.QRandomGenerator
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

func newQRandomGenerator(h *C.QRandomGenerator) *QRandomGenerator {
	if h == nil {
		return nil
	}
	return &QRandomGenerator{h: h}
}

func UnsafeNewQRandomGenerator(h unsafe.Pointer) *QRandomGenerator {
	return newQRandomGenerator((*C.QRandomGenerator)(h))
}

// NewQRandomGenerator constructs a new QRandomGenerator object.
func NewQRandomGenerator() *QRandomGenerator {
	ret := C.QRandomGenerator_new()
	return newQRandomGenerator(ret)
}

// NewQRandomGenerator2 constructs a new QRandomGenerator object.
func NewQRandomGenerator2(seedBuffer *uint, lenVal int64) *QRandomGenerator {
	ret := C.QRandomGenerator_new2((*C.uint)(unsafe.Pointer(seedBuffer)), (C.ptrdiff_t)(lenVal))
	return newQRandomGenerator(ret)
}

// NewQRandomGenerator3 constructs a new QRandomGenerator object.
func NewQRandomGenerator3(begin *uint, end *uint) *QRandomGenerator {
	ret := C.QRandomGenerator_new3((*C.uint)(unsafe.Pointer(begin)), (*C.uint)(unsafe.Pointer(end)))
	return newQRandomGenerator(ret)
}

// NewQRandomGenerator4 constructs a new QRandomGenerator object.
func NewQRandomGenerator4(other *QRandomGenerator) *QRandomGenerator {
	ret := C.QRandomGenerator_new4(other.cPointer())
	return newQRandomGenerator(ret)
}

// NewQRandomGenerator5 constructs a new QRandomGenerator object.
func NewQRandomGenerator5(seedValue uint) *QRandomGenerator {
	ret := C.QRandomGenerator_new5((C.uint)(seedValue))
	return newQRandomGenerator(ret)
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

func (this *QRandomGenerator) Bounded5(highest uint64) uint64 {
	return (uint64)(C.QRandomGenerator_Bounded5(this.h, (C.ulonglong)(highest)))
}

func (this *QRandomGenerator) Bounded6(lowest uint64, highest uint64) uint64 {
	return (uint64)(C.QRandomGenerator_Bounded6(this.h, (C.ulonglong)(lowest), (C.ulonglong)(highest)))
}

func (this *QRandomGenerator) Bounded7(highest int64) int64 {
	return (int64)(C.QRandomGenerator_Bounded7(this.h, (C.longlong)(highest)))
}

func (this *QRandomGenerator) Bounded8(lowest int64, highest int64) int64 {
	return (int64)(C.QRandomGenerator_Bounded8(this.h, (C.longlong)(lowest), (C.longlong)(highest)))
}

func (this *QRandomGenerator) Bounded9(lowest int, highest int64) int64 {
	return (int64)(C.QRandomGenerator_Bounded9(this.h, (C.int)(lowest), (C.longlong)(highest)))
}

func (this *QRandomGenerator) Bounded10(lowest int64, highest int) int64 {
	return (int64)(C.QRandomGenerator_Bounded10(this.h, (C.longlong)(lowest), (C.int)(highest)))
}

func (this *QRandomGenerator) Bounded11(lowest uint, highest uint64) uint64 {
	return (uint64)(C.QRandomGenerator_Bounded11(this.h, (C.uint)(lowest), (C.ulonglong)(highest)))
}

func (this *QRandomGenerator) Bounded12(lowest uint64, highest uint) uint64 {
	return (uint64)(C.QRandomGenerator_Bounded12(this.h, (C.ulonglong)(lowest), (C.uint)(highest)))
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
	return UnsafeNewQRandomGenerator(unsafe.Pointer(C.QRandomGenerator_System()))
}

func QRandomGenerator_Global() *QRandomGenerator {
	return UnsafeNewQRandomGenerator(unsafe.Pointer(C.QRandomGenerator_Global()))
}

func QRandomGenerator_SecurelySeeded() *QRandomGenerator {
	_ret := C.QRandomGenerator_SecurelySeeded()
	_goptr := newQRandomGenerator(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRandomGenerator) Seed1(s uint) {
	C.QRandomGenerator_Seed1(this.h, (C.uint)(s))
}

// Delete this object from C++ memory.
func (this *QRandomGenerator) Delete() {
	C.QRandomGenerator_Delete(this.h)
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
	h *C.QRandomGenerator64
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

func newQRandomGenerator64(h *C.QRandomGenerator64) *QRandomGenerator64 {
	if h == nil {
		return nil
	}
	return &QRandomGenerator64{h: h, QRandomGenerator: UnsafeNewQRandomGenerator(unsafe.Pointer(h))}
}

func UnsafeNewQRandomGenerator64(h unsafe.Pointer) *QRandomGenerator64 {
	return newQRandomGenerator64((*C.QRandomGenerator64)(h))
}

// NewQRandomGenerator64 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator64() *QRandomGenerator64 {
	ret := C.QRandomGenerator64_new()
	return newQRandomGenerator64(ret)
}

// NewQRandomGenerator642 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator642(seedBuffer *uint, lenVal int64) *QRandomGenerator64 {
	ret := C.QRandomGenerator64_new2((*C.uint)(unsafe.Pointer(seedBuffer)), (C.ptrdiff_t)(lenVal))
	return newQRandomGenerator64(ret)
}

// NewQRandomGenerator643 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator643(begin *uint, end *uint) *QRandomGenerator64 {
	ret := C.QRandomGenerator64_new3((*C.uint)(unsafe.Pointer(begin)), (*C.uint)(unsafe.Pointer(end)))
	return newQRandomGenerator64(ret)
}

// NewQRandomGenerator644 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator644(other *QRandomGenerator) *QRandomGenerator64 {
	ret := C.QRandomGenerator64_new4(other.cPointer())
	return newQRandomGenerator64(ret)
}

// NewQRandomGenerator645 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator645(param1 *QRandomGenerator64) *QRandomGenerator64 {
	ret := C.QRandomGenerator64_new5(param1.cPointer())
	return newQRandomGenerator64(ret)
}

// NewQRandomGenerator646 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator646(seedValue uint) *QRandomGenerator64 {
	ret := C.QRandomGenerator64_new6((C.uint)(seedValue))
	return newQRandomGenerator64(ret)
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
	return UnsafeNewQRandomGenerator64(unsafe.Pointer(C.QRandomGenerator64_System()))
}

func QRandomGenerator64_Global() *QRandomGenerator64 {
	return UnsafeNewQRandomGenerator64(unsafe.Pointer(C.QRandomGenerator64_Global()))
}

func QRandomGenerator64_SecurelySeeded() *QRandomGenerator64 {
	_ret := C.QRandomGenerator64_SecurelySeeded()
	_goptr := newQRandomGenerator64(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRandomGenerator64) OperatorAssign(param1 *QRandomGenerator64) {
	C.QRandomGenerator64_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QRandomGenerator64) Delete() {
	C.QRandomGenerator64_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRandomGenerator64) GoGC() {
	runtime.SetFinalizer(this, func(this *QRandomGenerator64) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

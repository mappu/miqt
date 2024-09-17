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
	h *C.QRandomGenerator
}

func (this *QRandomGenerator) cPointer() *C.QRandomGenerator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRandomGenerator(h *C.QRandomGenerator) *QRandomGenerator {
	if h == nil {
		return nil
	}
	return &QRandomGenerator{h: h}
}

func newQRandomGenerator_U(h unsafe.Pointer) *QRandomGenerator {
	return newQRandomGenerator((*C.QRandomGenerator)(h))
}

// NewQRandomGenerator constructs a new QRandomGenerator object.
func NewQRandomGenerator() *QRandomGenerator {
	ret := C.QRandomGenerator_new()
	return newQRandomGenerator(ret)
}

// NewQRandomGenerator2 constructs a new QRandomGenerator object.
func NewQRandomGenerator2(seedBuffer *uint, lenVal uint64) *QRandomGenerator {
	ret := C.QRandomGenerator_new2((*C.uint)(unsafe.Pointer(seedBuffer)), (C.size_t)(lenVal))
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

func (this *QRandomGenerator) Generate2(begin *uint, end *uint) {
	C.QRandomGenerator_Generate2(this.h, (*C.uint)(unsafe.Pointer(begin)), (*C.uint)(unsafe.Pointer(end)))
}

func (this *QRandomGenerator) OperatorCall() uint32 {
	return (uint32)(C.QRandomGenerator_OperatorCall(this.h))
}

func (this *QRandomGenerator) Seed() {
	C.QRandomGenerator_Seed(this.h)
}

func (this *QRandomGenerator) Discard(z uint64) {
	C.QRandomGenerator_Discard(this.h, (C.ulonglong)(z))
}

func QRandomGenerator_Min() uint32 {
	return (uint32)(C.QRandomGenerator_Min())
}

func QRandomGenerator_Max() uint32 {
	return (uint32)(C.QRandomGenerator_Max())
}

func QRandomGenerator_System() *QRandomGenerator {
	return newQRandomGenerator_U(unsafe.Pointer(C.QRandomGenerator_System()))
}

func QRandomGenerator_Global() *QRandomGenerator {
	return newQRandomGenerator_U(unsafe.Pointer(C.QRandomGenerator_Global()))
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

func newQRandomGenerator64(h *C.QRandomGenerator64) *QRandomGenerator64 {
	if h == nil {
		return nil
	}
	return &QRandomGenerator64{h: h, QRandomGenerator: newQRandomGenerator_U(unsafe.Pointer(h))}
}

func newQRandomGenerator64_U(h unsafe.Pointer) *QRandomGenerator64 {
	return newQRandomGenerator64((*C.QRandomGenerator64)(h))
}

// NewQRandomGenerator64 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator64() *QRandomGenerator64 {
	ret := C.QRandomGenerator64_new()
	return newQRandomGenerator64(ret)
}

// NewQRandomGenerator642 constructs a new QRandomGenerator64 object.
func NewQRandomGenerator642(seedBuffer *uint, lenVal uint64) *QRandomGenerator64 {
	ret := C.QRandomGenerator64_new2((*C.uint)(unsafe.Pointer(seedBuffer)), (C.size_t)(lenVal))
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
	return newQRandomGenerator64_U(unsafe.Pointer(C.QRandomGenerator64_System()))
}

func QRandomGenerator64_Global() *QRandomGenerator64 {
	return newQRandomGenerator64_U(unsafe.Pointer(C.QRandomGenerator64_Global()))
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

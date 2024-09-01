package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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
	ret := C.QRandomGenerator_Generate(this.h)
	return (uint)(ret)
}

func (this *QRandomGenerator) Generate64() uint64 {
	ret := C.QRandomGenerator_Generate64(this.h)
	return (uint64)(ret)
}

func (this *QRandomGenerator) GenerateDouble() float64 {
	ret := C.QRandomGenerator_GenerateDouble(this.h)
	return (float64)(ret)
}

func (this *QRandomGenerator) Bounded(highest float64) float64 {
	ret := C.QRandomGenerator_Bounded(this.h, (C.double)(highest))
	return (float64)(ret)
}

func (this *QRandomGenerator) BoundedWithHighest(highest uint) uint {
	ret := C.QRandomGenerator_BoundedWithHighest(this.h, (C.uint)(highest))
	return (uint)(ret)
}

func (this *QRandomGenerator) Bounded2(lowest uint, highest uint) uint {
	ret := C.QRandomGenerator_Bounded2(this.h, (C.uint)(lowest), (C.uint)(highest))
	return (uint)(ret)
}

func (this *QRandomGenerator) Bounded3(highest int) int {
	ret := C.QRandomGenerator_Bounded3(this.h, (C.int)(highest))
	return (int)(ret)
}

func (this *QRandomGenerator) Bounded4(lowest int, highest int) int {
	ret := C.QRandomGenerator_Bounded4(this.h, (C.int)(lowest), (C.int)(highest))
	return (int)(ret)
}

func (this *QRandomGenerator) Generate2(begin *uint, end *uint) {
	C.QRandomGenerator_Generate2(this.h, (*C.uint)(unsafe.Pointer(begin)), (*C.uint)(unsafe.Pointer(end)))
}

func (this *QRandomGenerator) OperatorCall() uint32 {
	ret := C.QRandomGenerator_OperatorCall(this.h)
	return (uint32)(ret)
}

func (this *QRandomGenerator) Seed() {
	C.QRandomGenerator_Seed(this.h)
}

func (this *QRandomGenerator) Discard(z uint64) {
	C.QRandomGenerator_Discard(this.h, (C.ulonglong)(z))
}

func QRandomGenerator_Min() uint32 {
	ret := C.QRandomGenerator_Min()
	return (uint32)(ret)
}

func QRandomGenerator_Max() uint32 {
	ret := C.QRandomGenerator_Max()
	return (uint32)(ret)
}

func QRandomGenerator_System() *QRandomGenerator {
	ret := C.QRandomGenerator_System()
	return newQRandomGenerator_U(unsafe.Pointer(ret))
}

func QRandomGenerator_Global() *QRandomGenerator {
	ret := C.QRandomGenerator_Global()
	return newQRandomGenerator_U(unsafe.Pointer(ret))
}

func QRandomGenerator_SecurelySeeded() *QRandomGenerator {
	ret := C.QRandomGenerator_SecurelySeeded()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRandomGenerator(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRandomGenerator) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRandomGenerator) Seed1(s uint) {
	C.QRandomGenerator_Seed1(this.h, (C.uint)(s))
}

func (this *QRandomGenerator) Delete() {
	C.QRandomGenerator_Delete(this.h)
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
	ret := C.QRandomGenerator64_Generate(this.h)
	return (uint64)(ret)
}

func (this *QRandomGenerator64) OperatorCall() uint64 {
	ret := C.QRandomGenerator64_OperatorCall(this.h)
	return (uint64)(ret)
}

func (this *QRandomGenerator64) Discard(z uint64) {
	C.QRandomGenerator64_Discard(this.h, (C.ulonglong)(z))
}

func QRandomGenerator64_Min() uint64 {
	ret := C.QRandomGenerator64_Min()
	return (uint64)(ret)
}

func QRandomGenerator64_Max() uint64 {
	ret := C.QRandomGenerator64_Max()
	return (uint64)(ret)
}

func QRandomGenerator64_System() *QRandomGenerator64 {
	ret := C.QRandomGenerator64_System()
	return newQRandomGenerator64_U(unsafe.Pointer(ret))
}

func QRandomGenerator64_Global() *QRandomGenerator64 {
	ret := C.QRandomGenerator64_Global()
	return newQRandomGenerator64_U(unsafe.Pointer(ret))
}

func QRandomGenerator64_SecurelySeeded() *QRandomGenerator64 {
	ret := C.QRandomGenerator64_SecurelySeeded()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRandomGenerator64(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRandomGenerator64) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRandomGenerator64) OperatorAssign(param1 *QRandomGenerator64) {
	C.QRandomGenerator64_OperatorAssign(this.h, param1.cPointer())
}

func (this *QRandomGenerator64) Delete() {
	C.QRandomGenerator64_Delete(this.h)
}

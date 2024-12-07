package multimedia

/*

#include "gen_qmediatimerange.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMediaTimeInterval struct {
	h          *C.QMediaTimeInterval
	isSubclass bool
}

func (this *QMediaTimeInterval) cPointer() *C.QMediaTimeInterval {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaTimeInterval) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaTimeInterval constructs the type using only CGO pointers.
func newQMediaTimeInterval(h *C.QMediaTimeInterval) *QMediaTimeInterval {
	if h == nil {
		return nil
	}

	return &QMediaTimeInterval{h: h}
}

// UnsafeNewQMediaTimeInterval constructs the type using only unsafe pointers.
func UnsafeNewQMediaTimeInterval(h unsafe.Pointer) *QMediaTimeInterval {
	return newQMediaTimeInterval((*C.QMediaTimeInterval)(h))
}

// NewQMediaTimeInterval constructs a new QMediaTimeInterval object.
func NewQMediaTimeInterval() *QMediaTimeInterval {

	ret := newQMediaTimeInterval(C.QMediaTimeInterval_new())
	ret.isSubclass = true
	return ret
}

// NewQMediaTimeInterval2 constructs a new QMediaTimeInterval object.
func NewQMediaTimeInterval2(start int64, end int64) *QMediaTimeInterval {

	ret := newQMediaTimeInterval(C.QMediaTimeInterval_new2((C.longlong)(start), (C.longlong)(end)))
	ret.isSubclass = true
	return ret
}

// NewQMediaTimeInterval3 constructs a new QMediaTimeInterval object.
func NewQMediaTimeInterval3(param1 *QMediaTimeInterval) *QMediaTimeInterval {

	ret := newQMediaTimeInterval(C.QMediaTimeInterval_new3(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QMediaTimeInterval) OperatorAssign(param1 *QMediaTimeInterval) {
	C.QMediaTimeInterval_OperatorAssign(this.h, param1.cPointer())
}

func (this *QMediaTimeInterval) Start() int64 {
	return (int64)(C.QMediaTimeInterval_Start(this.h))
}

func (this *QMediaTimeInterval) End() int64 {
	return (int64)(C.QMediaTimeInterval_End(this.h))
}

func (this *QMediaTimeInterval) Contains(time int64) bool {
	return (bool)(C.QMediaTimeInterval_Contains(this.h, (C.longlong)(time)))
}

func (this *QMediaTimeInterval) IsNormal() bool {
	return (bool)(C.QMediaTimeInterval_IsNormal(this.h))
}

func (this *QMediaTimeInterval) Normalized() *QMediaTimeInterval {
	_goptr := newQMediaTimeInterval(C.QMediaTimeInterval_Normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaTimeInterval) Translated(offset int64) *QMediaTimeInterval {
	_goptr := newQMediaTimeInterval(C.QMediaTimeInterval_Translated(this.h, (C.longlong)(offset)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QMediaTimeInterval) Delete() {
	C.QMediaTimeInterval_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaTimeInterval) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaTimeInterval) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMediaTimeRange struct {
	h          *C.QMediaTimeRange
	isSubclass bool
}

func (this *QMediaTimeRange) cPointer() *C.QMediaTimeRange {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaTimeRange) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaTimeRange constructs the type using only CGO pointers.
func newQMediaTimeRange(h *C.QMediaTimeRange) *QMediaTimeRange {
	if h == nil {
		return nil
	}

	return &QMediaTimeRange{h: h}
}

// UnsafeNewQMediaTimeRange constructs the type using only unsafe pointers.
func UnsafeNewQMediaTimeRange(h unsafe.Pointer) *QMediaTimeRange {
	return newQMediaTimeRange((*C.QMediaTimeRange)(h))
}

// NewQMediaTimeRange constructs a new QMediaTimeRange object.
func NewQMediaTimeRange() *QMediaTimeRange {

	ret := newQMediaTimeRange(C.QMediaTimeRange_new())
	ret.isSubclass = true
	return ret
}

// NewQMediaTimeRange2 constructs a new QMediaTimeRange object.
func NewQMediaTimeRange2(start int64, end int64) *QMediaTimeRange {

	ret := newQMediaTimeRange(C.QMediaTimeRange_new2((C.longlong)(start), (C.longlong)(end)))
	ret.isSubclass = true
	return ret
}

// NewQMediaTimeRange3 constructs a new QMediaTimeRange object.
func NewQMediaTimeRange3(param1 *QMediaTimeInterval) *QMediaTimeRange {

	ret := newQMediaTimeRange(C.QMediaTimeRange_new3(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQMediaTimeRange4 constructs a new QMediaTimeRange object.
func NewQMediaTimeRange4(rangeVal *QMediaTimeRange) *QMediaTimeRange {

	ret := newQMediaTimeRange(C.QMediaTimeRange_new4(rangeVal.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QMediaTimeRange) OperatorAssign(param1 *QMediaTimeRange) {
	C.QMediaTimeRange_OperatorAssign(this.h, param1.cPointer())
}

func (this *QMediaTimeRange) OperatorAssignWithQMediaTimeInterval(param1 *QMediaTimeInterval) {
	C.QMediaTimeRange_OperatorAssignWithQMediaTimeInterval(this.h, param1.cPointer())
}

func (this *QMediaTimeRange) EarliestTime() int64 {
	return (int64)(C.QMediaTimeRange_EarliestTime(this.h))
}

func (this *QMediaTimeRange) LatestTime() int64 {
	return (int64)(C.QMediaTimeRange_LatestTime(this.h))
}

func (this *QMediaTimeRange) Intervals() []QMediaTimeInterval {
	var _ma C.struct_miqt_array = C.QMediaTimeRange_Intervals(this.h)
	_ret := make([]QMediaTimeInterval, int(_ma.len))
	_outCast := (*[0xffff]*C.QMediaTimeInterval)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQMediaTimeInterval(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMediaTimeRange) IsEmpty() bool {
	return (bool)(C.QMediaTimeRange_IsEmpty(this.h))
}

func (this *QMediaTimeRange) IsContinuous() bool {
	return (bool)(C.QMediaTimeRange_IsContinuous(this.h))
}

func (this *QMediaTimeRange) Contains(time int64) bool {
	return (bool)(C.QMediaTimeRange_Contains(this.h, (C.longlong)(time)))
}

func (this *QMediaTimeRange) AddInterval(start int64, end int64) {
	C.QMediaTimeRange_AddInterval(this.h, (C.longlong)(start), (C.longlong)(end))
}

func (this *QMediaTimeRange) AddIntervalWithInterval(interval *QMediaTimeInterval) {
	C.QMediaTimeRange_AddIntervalWithInterval(this.h, interval.cPointer())
}

func (this *QMediaTimeRange) AddTimeRange(param1 *QMediaTimeRange) {
	C.QMediaTimeRange_AddTimeRange(this.h, param1.cPointer())
}

func (this *QMediaTimeRange) RemoveInterval(start int64, end int64) {
	C.QMediaTimeRange_RemoveInterval(this.h, (C.longlong)(start), (C.longlong)(end))
}

func (this *QMediaTimeRange) RemoveIntervalWithInterval(interval *QMediaTimeInterval) {
	C.QMediaTimeRange_RemoveIntervalWithInterval(this.h, interval.cPointer())
}

func (this *QMediaTimeRange) RemoveTimeRange(param1 *QMediaTimeRange) {
	C.QMediaTimeRange_RemoveTimeRange(this.h, param1.cPointer())
}

func (this *QMediaTimeRange) OperatorPlusAssign(param1 *QMediaTimeRange) *QMediaTimeRange {
	return newQMediaTimeRange(C.QMediaTimeRange_OperatorPlusAssign(this.h, param1.cPointer()))
}

func (this *QMediaTimeRange) OperatorPlusAssignWithQMediaTimeInterval(param1 *QMediaTimeInterval) *QMediaTimeRange {
	return newQMediaTimeRange(C.QMediaTimeRange_OperatorPlusAssignWithQMediaTimeInterval(this.h, param1.cPointer()))
}

func (this *QMediaTimeRange) OperatorMinusAssign(param1 *QMediaTimeRange) *QMediaTimeRange {
	return newQMediaTimeRange(C.QMediaTimeRange_OperatorMinusAssign(this.h, param1.cPointer()))
}

func (this *QMediaTimeRange) OperatorMinusAssignWithQMediaTimeInterval(param1 *QMediaTimeInterval) *QMediaTimeRange {
	return newQMediaTimeRange(C.QMediaTimeRange_OperatorMinusAssignWithQMediaTimeInterval(this.h, param1.cPointer()))
}

func (this *QMediaTimeRange) Clear() {
	C.QMediaTimeRange_Clear(this.h)
}

// Delete this object from C++ memory.
func (this *QMediaTimeRange) Delete() {
	C.QMediaTimeRange_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaTimeRange) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaTimeRange) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

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
func NewQMediaTimeRange3(param1 *QMediaTimeRange__Interval) *QMediaTimeRange {

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

func (this *QMediaTimeRange) Swap(other *QMediaTimeRange) {
	C.QMediaTimeRange_Swap(this.h, other.cPointer())
}

func (this *QMediaTimeRange) Detach() {
	C.QMediaTimeRange_Detach(this.h)
}

func (this *QMediaTimeRange) OperatorAssignWithQMediaTimeRangeInterval(param1 *QMediaTimeRange__Interval) {
	C.QMediaTimeRange_OperatorAssignWithQMediaTimeRangeInterval(this.h, param1.cPointer())
}

func (this *QMediaTimeRange) EarliestTime() int64 {
	return (int64)(C.QMediaTimeRange_EarliestTime(this.h))
}

func (this *QMediaTimeRange) LatestTime() int64 {
	return (int64)(C.QMediaTimeRange_LatestTime(this.h))
}

func (this *QMediaTimeRange) Intervals() []QMediaTimeRange__Interval {
	var _ma C.struct_miqt_array = C.QMediaTimeRange_Intervals(this.h)
	_ret := make([]QMediaTimeRange__Interval, int(_ma.len))
	_outCast := (*[0xffff]*C.QMediaTimeRange__Interval)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQMediaTimeRange__Interval(_outCast[i])
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

func (this *QMediaTimeRange) AddIntervalWithInterval(interval *QMediaTimeRange__Interval) {
	C.QMediaTimeRange_AddIntervalWithInterval(this.h, interval.cPointer())
}

func (this *QMediaTimeRange) AddTimeRange(param1 *QMediaTimeRange) {
	C.QMediaTimeRange_AddTimeRange(this.h, param1.cPointer())
}

func (this *QMediaTimeRange) RemoveInterval(start int64, end int64) {
	C.QMediaTimeRange_RemoveInterval(this.h, (C.longlong)(start), (C.longlong)(end))
}

func (this *QMediaTimeRange) RemoveIntervalWithInterval(interval *QMediaTimeRange__Interval) {
	C.QMediaTimeRange_RemoveIntervalWithInterval(this.h, interval.cPointer())
}

func (this *QMediaTimeRange) RemoveTimeRange(param1 *QMediaTimeRange) {
	C.QMediaTimeRange_RemoveTimeRange(this.h, param1.cPointer())
}

func (this *QMediaTimeRange) OperatorPlusAssign(param1 *QMediaTimeRange) *QMediaTimeRange {
	return newQMediaTimeRange(C.QMediaTimeRange_OperatorPlusAssign(this.h, param1.cPointer()))
}

func (this *QMediaTimeRange) OperatorPlusAssignWithQMediaTimeRangeInterval(param1 *QMediaTimeRange__Interval) *QMediaTimeRange {
	return newQMediaTimeRange(C.QMediaTimeRange_OperatorPlusAssignWithQMediaTimeRangeInterval(this.h, param1.cPointer()))
}

func (this *QMediaTimeRange) OperatorMinusAssign(param1 *QMediaTimeRange) *QMediaTimeRange {
	return newQMediaTimeRange(C.QMediaTimeRange_OperatorMinusAssign(this.h, param1.cPointer()))
}

func (this *QMediaTimeRange) OperatorMinusAssignWithQMediaTimeRangeInterval(param1 *QMediaTimeRange__Interval) *QMediaTimeRange {
	return newQMediaTimeRange(C.QMediaTimeRange_OperatorMinusAssignWithQMediaTimeRangeInterval(this.h, param1.cPointer()))
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

type QMediaTimeRange__Interval struct {
	h          *C.QMediaTimeRange__Interval
	isSubclass bool
}

func (this *QMediaTimeRange__Interval) cPointer() *C.QMediaTimeRange__Interval {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaTimeRange__Interval) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaTimeRange__Interval constructs the type using only CGO pointers.
func newQMediaTimeRange__Interval(h *C.QMediaTimeRange__Interval) *QMediaTimeRange__Interval {
	if h == nil {
		return nil
	}

	return &QMediaTimeRange__Interval{h: h}
}

// UnsafeNewQMediaTimeRange__Interval constructs the type using only unsafe pointers.
func UnsafeNewQMediaTimeRange__Interval(h unsafe.Pointer) *QMediaTimeRange__Interval {
	return newQMediaTimeRange__Interval((*C.QMediaTimeRange__Interval)(h))
}

// NewQMediaTimeRange__Interval constructs a new QMediaTimeRange::Interval object.
func NewQMediaTimeRange__Interval() *QMediaTimeRange__Interval {

	ret := newQMediaTimeRange__Interval(C.QMediaTimeRange__Interval_new())
	ret.isSubclass = true
	return ret
}

// NewQMediaTimeRange__Interval2 constructs a new QMediaTimeRange::Interval object.
func NewQMediaTimeRange__Interval2(start int64, end int64) *QMediaTimeRange__Interval {

	ret := newQMediaTimeRange__Interval(C.QMediaTimeRange__Interval_new2((C.longlong)(start), (C.longlong)(end)))
	ret.isSubclass = true
	return ret
}

// NewQMediaTimeRange__Interval3 constructs a new QMediaTimeRange::Interval object.
func NewQMediaTimeRange__Interval3(param1 *QMediaTimeRange__Interval) *QMediaTimeRange__Interval {

	ret := newQMediaTimeRange__Interval(C.QMediaTimeRange__Interval_new3(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QMediaTimeRange__Interval) Start() int64 {
	return (int64)(C.QMediaTimeRange__Interval_Start(this.h))
}

func (this *QMediaTimeRange__Interval) End() int64 {
	return (int64)(C.QMediaTimeRange__Interval_End(this.h))
}

func (this *QMediaTimeRange__Interval) Contains(time int64) bool {
	return (bool)(C.QMediaTimeRange__Interval_Contains(this.h, (C.longlong)(time)))
}

func (this *QMediaTimeRange__Interval) IsNormal() bool {
	return (bool)(C.QMediaTimeRange__Interval_IsNormal(this.h))
}

func (this *QMediaTimeRange__Interval) Normalized() *QMediaTimeRange__Interval {
	_goptr := newQMediaTimeRange__Interval(C.QMediaTimeRange__Interval_Normalized(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaTimeRange__Interval) Translated(offset int64) *QMediaTimeRange__Interval {
	_goptr := newQMediaTimeRange__Interval(C.QMediaTimeRange__Interval_Translated(this.h, (C.longlong)(offset)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QMediaTimeRange__Interval) Delete() {
	C.QMediaTimeRange__Interval_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaTimeRange__Interval) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaTimeRange__Interval) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

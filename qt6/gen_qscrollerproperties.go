package qt6

/*

#include "gen_qscrollerproperties.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScrollerProperties__OvershootPolicy int

const (
	QScrollerProperties__OvershootWhenScrollable QScrollerProperties__OvershootPolicy = 0
	QScrollerProperties__OvershootAlwaysOff      QScrollerProperties__OvershootPolicy = 1
	QScrollerProperties__OvershootAlwaysOn       QScrollerProperties__OvershootPolicy = 2
)

type QScrollerProperties__FrameRates int

const (
	QScrollerProperties__Standard QScrollerProperties__FrameRates = 0
	QScrollerProperties__Fps60    QScrollerProperties__FrameRates = 1
	QScrollerProperties__Fps30    QScrollerProperties__FrameRates = 2
	QScrollerProperties__Fps20    QScrollerProperties__FrameRates = 3
)

type QScrollerProperties__ScrollMetric int

const (
	QScrollerProperties__MousePressEventDelay           QScrollerProperties__ScrollMetric = 0
	QScrollerProperties__DragStartDistance              QScrollerProperties__ScrollMetric = 1
	QScrollerProperties__DragVelocitySmoothingFactor    QScrollerProperties__ScrollMetric = 2
	QScrollerProperties__AxisLockThreshold              QScrollerProperties__ScrollMetric = 3
	QScrollerProperties__ScrollingCurve                 QScrollerProperties__ScrollMetric = 4
	QScrollerProperties__DecelerationFactor             QScrollerProperties__ScrollMetric = 5
	QScrollerProperties__MinimumVelocity                QScrollerProperties__ScrollMetric = 6
	QScrollerProperties__MaximumVelocity                QScrollerProperties__ScrollMetric = 7
	QScrollerProperties__MaximumClickThroughVelocity    QScrollerProperties__ScrollMetric = 8
	QScrollerProperties__AcceleratingFlickMaximumTime   QScrollerProperties__ScrollMetric = 9
	QScrollerProperties__AcceleratingFlickSpeedupFactor QScrollerProperties__ScrollMetric = 10
	QScrollerProperties__SnapPositionRatio              QScrollerProperties__ScrollMetric = 11
	QScrollerProperties__SnapTime                       QScrollerProperties__ScrollMetric = 12
	QScrollerProperties__OvershootDragResistanceFactor  QScrollerProperties__ScrollMetric = 13
	QScrollerProperties__OvershootDragDistanceFactor    QScrollerProperties__ScrollMetric = 14
	QScrollerProperties__OvershootScrollDistanceFactor  QScrollerProperties__ScrollMetric = 15
	QScrollerProperties__OvershootScrollTime            QScrollerProperties__ScrollMetric = 16
	QScrollerProperties__HorizontalOvershootPolicy      QScrollerProperties__ScrollMetric = 17
	QScrollerProperties__VerticalOvershootPolicy        QScrollerProperties__ScrollMetric = 18
	QScrollerProperties__FrameRate                      QScrollerProperties__ScrollMetric = 19
	QScrollerProperties__ScrollMetricCount              QScrollerProperties__ScrollMetric = 20
)

type QScrollerProperties struct {
	h          *C.QScrollerProperties
	isSubclass bool
}

func (this *QScrollerProperties) cPointer() *C.QScrollerProperties {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScrollerProperties) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScrollerProperties constructs the type using only CGO pointers.
func newQScrollerProperties(h *C.QScrollerProperties) *QScrollerProperties {
	if h == nil {
		return nil
	}
	return &QScrollerProperties{h: h}
}

// UnsafeNewQScrollerProperties constructs the type using only unsafe pointers.
func UnsafeNewQScrollerProperties(h unsafe.Pointer) *QScrollerProperties {
	if h == nil {
		return nil
	}

	return &QScrollerProperties{h: (*C.QScrollerProperties)(h)}
}

// NewQScrollerProperties constructs a new QScrollerProperties object.
func NewQScrollerProperties() *QScrollerProperties {
	var outptr_QScrollerProperties *C.QScrollerProperties = nil

	C.QScrollerProperties_new(&outptr_QScrollerProperties)
	ret := newQScrollerProperties(outptr_QScrollerProperties)
	ret.isSubclass = true
	return ret
}

// NewQScrollerProperties2 constructs a new QScrollerProperties object.
func NewQScrollerProperties2(sp *QScrollerProperties) *QScrollerProperties {
	var outptr_QScrollerProperties *C.QScrollerProperties = nil

	C.QScrollerProperties_new2(sp.cPointer(), &outptr_QScrollerProperties)
	ret := newQScrollerProperties(outptr_QScrollerProperties)
	ret.isSubclass = true
	return ret
}

func (this *QScrollerProperties) OperatorAssign(sp *QScrollerProperties) {
	C.QScrollerProperties_OperatorAssign(this.h, sp.cPointer())
}

func (this *QScrollerProperties) OperatorEqual(sp *QScrollerProperties) bool {
	return (bool)(C.QScrollerProperties_OperatorEqual(this.h, sp.cPointer()))
}

func (this *QScrollerProperties) OperatorNotEqual(sp *QScrollerProperties) bool {
	return (bool)(C.QScrollerProperties_OperatorNotEqual(this.h, sp.cPointer()))
}

func QScrollerProperties_SetDefaultScrollerProperties(sp *QScrollerProperties) {
	C.QScrollerProperties_SetDefaultScrollerProperties(sp.cPointer())
}

func QScrollerProperties_UnsetDefaultScrollerProperties() {
	C.QScrollerProperties_UnsetDefaultScrollerProperties()
}

func (this *QScrollerProperties) ScrollMetric(metric QScrollerProperties__ScrollMetric) *QVariant {
	_ret := C.QScrollerProperties_ScrollMetric(this.h, (C.int)(metric))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollerProperties) SetScrollMetric(metric QScrollerProperties__ScrollMetric, value *QVariant) {
	C.QScrollerProperties_SetScrollMetric(this.h, (C.int)(metric), value.cPointer())
}

// Delete this object from C++ memory.
func (this *QScrollerProperties) Delete() {
	C.QScrollerProperties_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScrollerProperties) GoGC() {
	runtime.SetFinalizer(this, func(this *QScrollerProperties) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt

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
	QScrollerProperties__OvershootPolicy__OvershootWhenScrollable QScrollerProperties__OvershootPolicy = 0
	QScrollerProperties__OvershootPolicy__OvershootAlwaysOff      QScrollerProperties__OvershootPolicy = 1
	QScrollerProperties__OvershootPolicy__OvershootAlwaysOn       QScrollerProperties__OvershootPolicy = 2
)

type QScrollerProperties__FrameRates int

const (
	QScrollerProperties__FrameRates__Standard QScrollerProperties__FrameRates = 0
	QScrollerProperties__FrameRates__Fps60    QScrollerProperties__FrameRates = 1
	QScrollerProperties__FrameRates__Fps30    QScrollerProperties__FrameRates = 2
	QScrollerProperties__FrameRates__Fps20    QScrollerProperties__FrameRates = 3
)

type QScrollerProperties__ScrollMetric int

const (
	QScrollerProperties__ScrollMetric__MousePressEventDelay           QScrollerProperties__ScrollMetric = 0
	QScrollerProperties__ScrollMetric__DragStartDistance              QScrollerProperties__ScrollMetric = 1
	QScrollerProperties__ScrollMetric__DragVelocitySmoothingFactor    QScrollerProperties__ScrollMetric = 2
	QScrollerProperties__ScrollMetric__AxisLockThreshold              QScrollerProperties__ScrollMetric = 3
	QScrollerProperties__ScrollMetric__ScrollingCurve                 QScrollerProperties__ScrollMetric = 4
	QScrollerProperties__ScrollMetric__DecelerationFactor             QScrollerProperties__ScrollMetric = 5
	QScrollerProperties__ScrollMetric__MinimumVelocity                QScrollerProperties__ScrollMetric = 6
	QScrollerProperties__ScrollMetric__MaximumVelocity                QScrollerProperties__ScrollMetric = 7
	QScrollerProperties__ScrollMetric__MaximumClickThroughVelocity    QScrollerProperties__ScrollMetric = 8
	QScrollerProperties__ScrollMetric__AcceleratingFlickMaximumTime   QScrollerProperties__ScrollMetric = 9
	QScrollerProperties__ScrollMetric__AcceleratingFlickSpeedupFactor QScrollerProperties__ScrollMetric = 10
	QScrollerProperties__ScrollMetric__SnapPositionRatio              QScrollerProperties__ScrollMetric = 11
	QScrollerProperties__ScrollMetric__SnapTime                       QScrollerProperties__ScrollMetric = 12
	QScrollerProperties__ScrollMetric__OvershootDragResistanceFactor  QScrollerProperties__ScrollMetric = 13
	QScrollerProperties__ScrollMetric__OvershootDragDistanceFactor    QScrollerProperties__ScrollMetric = 14
	QScrollerProperties__ScrollMetric__OvershootScrollDistanceFactor  QScrollerProperties__ScrollMetric = 15
	QScrollerProperties__ScrollMetric__OvershootScrollTime            QScrollerProperties__ScrollMetric = 16
	QScrollerProperties__ScrollMetric__HorizontalOvershootPolicy      QScrollerProperties__ScrollMetric = 17
	QScrollerProperties__ScrollMetric__VerticalOvershootPolicy        QScrollerProperties__ScrollMetric = 18
	QScrollerProperties__ScrollMetric__FrameRate                      QScrollerProperties__ScrollMetric = 19
	QScrollerProperties__ScrollMetric__ScrollMetricCount              QScrollerProperties__ScrollMetric = 20
)

type QScrollerProperties struct {
	h *C.QScrollerProperties
}

func (this *QScrollerProperties) cPointer() *C.QScrollerProperties {
	if this == nil {
		return nil
	}
	return this.h
}

func newQScrollerProperties(h *C.QScrollerProperties) *QScrollerProperties {
	if h == nil {
		return nil
	}
	return &QScrollerProperties{h: h}
}

func newQScrollerProperties_U(h unsafe.Pointer) *QScrollerProperties {
	return newQScrollerProperties((*C.QScrollerProperties)(h))
}

// NewQScrollerProperties constructs a new QScrollerProperties object.
func NewQScrollerProperties() *QScrollerProperties {
	ret := C.QScrollerProperties_new()
	return newQScrollerProperties(ret)
}

// NewQScrollerProperties2 constructs a new QScrollerProperties object.
func NewQScrollerProperties2(sp *QScrollerProperties) *QScrollerProperties {
	ret := C.QScrollerProperties_new2(sp.cPointer())
	return newQScrollerProperties(ret)
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
	_ret := C.QScrollerProperties_ScrollMetric(this.h, (C.uintptr_t)(metric))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollerProperties) SetScrollMetric(metric QScrollerProperties__ScrollMetric, value *QVariant) {
	C.QScrollerProperties_SetScrollMetric(this.h, (C.uintptr_t)(metric), value.cPointer())
}

// Delete this object from C++ memory.
func (this *QScrollerProperties) Delete() {
	C.QScrollerProperties_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScrollerProperties) GoGC() {
	runtime.SetFinalizer(this, func(this *QScrollerProperties) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt6

/*

#include "gen_qsizepolicy.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSizePolicy__PolicyFlag int

const (
	QSizePolicy__GrowFlag   QSizePolicy__PolicyFlag = 1
	QSizePolicy__ExpandFlag QSizePolicy__PolicyFlag = 2
	QSizePolicy__ShrinkFlag QSizePolicy__PolicyFlag = 4
	QSizePolicy__IgnoreFlag QSizePolicy__PolicyFlag = 8
)

type QSizePolicy__Policy int

const (
	QSizePolicy__Fixed            QSizePolicy__Policy = 0
	QSizePolicy__Minimum          QSizePolicy__Policy = 1
	QSizePolicy__Maximum          QSizePolicy__Policy = 4
	QSizePolicy__Preferred        QSizePolicy__Policy = 5
	QSizePolicy__MinimumExpanding QSizePolicy__Policy = 3
	QSizePolicy__Expanding        QSizePolicy__Policy = 7
	QSizePolicy__Ignored          QSizePolicy__Policy = 13
)

type QSizePolicy__ControlType int

const (
	QSizePolicy__DefaultType QSizePolicy__ControlType = 1
	QSizePolicy__ButtonBox   QSizePolicy__ControlType = 2
	QSizePolicy__CheckBox    QSizePolicy__ControlType = 4
	QSizePolicy__ComboBox    QSizePolicy__ControlType = 8
	QSizePolicy__Frame       QSizePolicy__ControlType = 16
	QSizePolicy__GroupBox    QSizePolicy__ControlType = 32
	QSizePolicy__Label       QSizePolicy__ControlType = 64
	QSizePolicy__Line        QSizePolicy__ControlType = 128
	QSizePolicy__LineEdit    QSizePolicy__ControlType = 256
	QSizePolicy__PushButton  QSizePolicy__ControlType = 512
	QSizePolicy__RadioButton QSizePolicy__ControlType = 1024
	QSizePolicy__Slider      QSizePolicy__ControlType = 2048
	QSizePolicy__SpinBox     QSizePolicy__ControlType = 4096
	QSizePolicy__TabWidget   QSizePolicy__ControlType = 8192
	QSizePolicy__ToolButton  QSizePolicy__ControlType = 16384
)

type QSizePolicy struct {
	h          *C.QSizePolicy
	isSubclass bool
}

func (this *QSizePolicy) cPointer() *C.QSizePolicy {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSizePolicy) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSizePolicy constructs the type using only CGO pointers.
func newQSizePolicy(h *C.QSizePolicy) *QSizePolicy {
	if h == nil {
		return nil
	}

	return &QSizePolicy{h: h}
}

// UnsafeNewQSizePolicy constructs the type using only unsafe pointers.
func UnsafeNewQSizePolicy(h unsafe.Pointer) *QSizePolicy {
	return newQSizePolicy((*C.QSizePolicy)(h))
}

// NewQSizePolicy constructs a new QSizePolicy object.
func NewQSizePolicy() *QSizePolicy {

	ret := newQSizePolicy(C.QSizePolicy_new())
	ret.isSubclass = true
	return ret
}

// NewQSizePolicy2 constructs a new QSizePolicy object.
func NewQSizePolicy2(horizontal QSizePolicy__Policy, vertical QSizePolicy__Policy) *QSizePolicy {

	ret := newQSizePolicy(C.QSizePolicy_new2((C.int)(horizontal), (C.int)(vertical)))
	ret.isSubclass = true
	return ret
}

// NewQSizePolicy3 constructs a new QSizePolicy object.
func NewQSizePolicy3(param1 *QSizePolicy) *QSizePolicy {

	ret := newQSizePolicy(C.QSizePolicy_new3(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQSizePolicy4 constructs a new QSizePolicy object.
func NewQSizePolicy4(horizontal QSizePolicy__Policy, vertical QSizePolicy__Policy, typeVal QSizePolicy__ControlType) *QSizePolicy {

	ret := newQSizePolicy(C.QSizePolicy_new4((C.int)(horizontal), (C.int)(vertical), (C.int)(typeVal)))
	ret.isSubclass = true
	return ret
}

func (this *QSizePolicy) HorizontalPolicy() QSizePolicy__Policy {
	return (QSizePolicy__Policy)(C.QSizePolicy_HorizontalPolicy(this.h))
}

func (this *QSizePolicy) VerticalPolicy() QSizePolicy__Policy {
	return (QSizePolicy__Policy)(C.QSizePolicy_VerticalPolicy(this.h))
}

func (this *QSizePolicy) ControlType() QSizePolicy__ControlType {
	return (QSizePolicy__ControlType)(C.QSizePolicy_ControlType(this.h))
}

func (this *QSizePolicy) SetHorizontalPolicy(d QSizePolicy__Policy) {
	C.QSizePolicy_SetHorizontalPolicy(this.h, (C.int)(d))
}

func (this *QSizePolicy) SetVerticalPolicy(d QSizePolicy__Policy) {
	C.QSizePolicy_SetVerticalPolicy(this.h, (C.int)(d))
}

func (this *QSizePolicy) SetControlType(typeVal QSizePolicy__ControlType) {
	C.QSizePolicy_SetControlType(this.h, (C.int)(typeVal))
}

func (this *QSizePolicy) ExpandingDirections() Orientation {
	return (Orientation)(C.QSizePolicy_ExpandingDirections(this.h))
}

func (this *QSizePolicy) SetHeightForWidth(b bool) {
	C.QSizePolicy_SetHeightForWidth(this.h, (C.bool)(b))
}

func (this *QSizePolicy) HasHeightForWidth() bool {
	return (bool)(C.QSizePolicy_HasHeightForWidth(this.h))
}

func (this *QSizePolicy) SetWidthForHeight(b bool) {
	C.QSizePolicy_SetWidthForHeight(this.h, (C.bool)(b))
}

func (this *QSizePolicy) HasWidthForHeight() bool {
	return (bool)(C.QSizePolicy_HasWidthForHeight(this.h))
}

func (this *QSizePolicy) OperatorEqual(s *QSizePolicy) bool {
	return (bool)(C.QSizePolicy_OperatorEqual(this.h, s.cPointer()))
}

func (this *QSizePolicy) OperatorNotEqual(s *QSizePolicy) bool {
	return (bool)(C.QSizePolicy_OperatorNotEqual(this.h, s.cPointer()))
}

func (this *QSizePolicy) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QSizePolicy_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSizePolicy) HorizontalStretch() int {
	return (int)(C.QSizePolicy_HorizontalStretch(this.h))
}

func (this *QSizePolicy) VerticalStretch() int {
	return (int)(C.QSizePolicy_VerticalStretch(this.h))
}

func (this *QSizePolicy) SetHorizontalStretch(stretchFactor int) {
	C.QSizePolicy_SetHorizontalStretch(this.h, (C.int)(stretchFactor))
}

func (this *QSizePolicy) SetVerticalStretch(stretchFactor int) {
	C.QSizePolicy_SetVerticalStretch(this.h, (C.int)(stretchFactor))
}

func (this *QSizePolicy) RetainSizeWhenHidden() bool {
	return (bool)(C.QSizePolicy_RetainSizeWhenHidden(this.h))
}

func (this *QSizePolicy) SetRetainSizeWhenHidden(retainSize bool) {
	C.QSizePolicy_SetRetainSizeWhenHidden(this.h, (C.bool)(retainSize))
}

func (this *QSizePolicy) Transpose() {
	C.QSizePolicy_Transpose(this.h)
}

func (this *QSizePolicy) Transposed() *QSizePolicy {
	_goptr := newQSizePolicy(C.QSizePolicy_Transposed(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSizePolicy) Delete() {
	C.QSizePolicy_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSizePolicy) GoGC() {
	runtime.SetFinalizer(this, func(this *QSizePolicy) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

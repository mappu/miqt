package qt6

/*

#include "gen_qgraphicslinearlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGraphicsLinearLayout struct {
	h *C.QGraphicsLinearLayout
	*QGraphicsLayout
}

func (this *QGraphicsLinearLayout) cPointer() *C.QGraphicsLinearLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsLinearLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGraphicsLinearLayout(h *C.QGraphicsLinearLayout) *QGraphicsLinearLayout {
	if h == nil {
		return nil
	}
	return &QGraphicsLinearLayout{h: h, QGraphicsLayout: UnsafeNewQGraphicsLayout(unsafe.Pointer(h))}
}

func UnsafeNewQGraphicsLinearLayout(h unsafe.Pointer) *QGraphicsLinearLayout {
	return newQGraphicsLinearLayout((*C.QGraphicsLinearLayout)(h))
}

// NewQGraphicsLinearLayout constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout() *QGraphicsLinearLayout {
	ret := C.QGraphicsLinearLayout_new()
	return newQGraphicsLinearLayout(ret)
}

// NewQGraphicsLinearLayout2 constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout2(orientation Orientation) *QGraphicsLinearLayout {
	ret := C.QGraphicsLinearLayout_new2((C.int)(orientation))
	return newQGraphicsLinearLayout(ret)
}

// NewQGraphicsLinearLayout3 constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout3(parent *QGraphicsLayoutItem) *QGraphicsLinearLayout {
	ret := C.QGraphicsLinearLayout_new3(parent.cPointer())
	return newQGraphicsLinearLayout(ret)
}

// NewQGraphicsLinearLayout4 constructs a new QGraphicsLinearLayout object.
func NewQGraphicsLinearLayout4(orientation Orientation, parent *QGraphicsLayoutItem) *QGraphicsLinearLayout {
	ret := C.QGraphicsLinearLayout_new4((C.int)(orientation), parent.cPointer())
	return newQGraphicsLinearLayout(ret)
}

func (this *QGraphicsLinearLayout) SetOrientation(orientation Orientation) {
	C.QGraphicsLinearLayout_SetOrientation(this.h, (C.int)(orientation))
}

func (this *QGraphicsLinearLayout) Orientation() Orientation {
	return (Orientation)(C.QGraphicsLinearLayout_Orientation(this.h))
}

func (this *QGraphicsLinearLayout) AddItem(item *QGraphicsLayoutItem) {
	C.QGraphicsLinearLayout_AddItem(this.h, item.cPointer())
}

func (this *QGraphicsLinearLayout) AddStretch() {
	C.QGraphicsLinearLayout_AddStretch(this.h)
}

func (this *QGraphicsLinearLayout) InsertItem(index int, item *QGraphicsLayoutItem) {
	C.QGraphicsLinearLayout_InsertItem(this.h, (C.int)(index), item.cPointer())
}

func (this *QGraphicsLinearLayout) InsertStretch(index int) {
	C.QGraphicsLinearLayout_InsertStretch(this.h, (C.int)(index))
}

func (this *QGraphicsLinearLayout) RemoveItem(item *QGraphicsLayoutItem) {
	C.QGraphicsLinearLayout_RemoveItem(this.h, item.cPointer())
}

func (this *QGraphicsLinearLayout) RemoveAt(index int) {
	C.QGraphicsLinearLayout_RemoveAt(this.h, (C.int)(index))
}

func (this *QGraphicsLinearLayout) SetSpacing(spacing float64) {
	C.QGraphicsLinearLayout_SetSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsLinearLayout) Spacing() float64 {
	return (float64)(C.QGraphicsLinearLayout_Spacing(this.h))
}

func (this *QGraphicsLinearLayout) SetItemSpacing(index int, spacing float64) {
	C.QGraphicsLinearLayout_SetItemSpacing(this.h, (C.int)(index), (C.double)(spacing))
}

func (this *QGraphicsLinearLayout) ItemSpacing(index int) float64 {
	return (float64)(C.QGraphicsLinearLayout_ItemSpacing(this.h, (C.int)(index)))
}

func (this *QGraphicsLinearLayout) SetStretchFactor(item *QGraphicsLayoutItem, stretch int) {
	C.QGraphicsLinearLayout_SetStretchFactor(this.h, item.cPointer(), (C.int)(stretch))
}

func (this *QGraphicsLinearLayout) StretchFactor(item *QGraphicsLayoutItem) int {
	return (int)(C.QGraphicsLinearLayout_StretchFactor(this.h, item.cPointer()))
}

func (this *QGraphicsLinearLayout) SetAlignment(item *QGraphicsLayoutItem, alignment AlignmentFlag) {
	C.QGraphicsLinearLayout_SetAlignment(this.h, item.cPointer(), (C.int)(alignment))
}

func (this *QGraphicsLinearLayout) Alignment(item *QGraphicsLayoutItem) AlignmentFlag {
	return (AlignmentFlag)(C.QGraphicsLinearLayout_Alignment(this.h, item.cPointer()))
}

func (this *QGraphicsLinearLayout) SetGeometry(rect *QRectF) {
	C.QGraphicsLinearLayout_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsLinearLayout) Count() int {
	return (int)(C.QGraphicsLinearLayout_Count(this.h))
}

func (this *QGraphicsLinearLayout) ItemAt(index int) *QGraphicsLayoutItem {
	return UnsafeNewQGraphicsLayoutItem(unsafe.Pointer(C.QGraphicsLinearLayout_ItemAt(this.h, (C.int)(index))))
}

func (this *QGraphicsLinearLayout) Invalidate() {
	C.QGraphicsLinearLayout_Invalidate(this.h)
}

func (this *QGraphicsLinearLayout) SizeHint(which SizeHint) *QSizeF {
	_ret := C.QGraphicsLinearLayout_SizeHint(this.h, (C.int)(which))
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLinearLayout) Dump() {
	C.QGraphicsLinearLayout_Dump(this.h)
}

func (this *QGraphicsLinearLayout) AddStretch1(stretch int) {
	C.QGraphicsLinearLayout_AddStretch1(this.h, (C.int)(stretch))
}

func (this *QGraphicsLinearLayout) InsertStretch2(index int, stretch int) {
	C.QGraphicsLinearLayout_InsertStretch2(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QGraphicsLinearLayout) SizeHint2(which SizeHint, constraint *QSizeF) *QSizeF {
	_ret := C.QGraphicsLinearLayout_SizeHint2(this.h, (C.int)(which), constraint.cPointer())
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLinearLayout) Dump1(indent int) {
	C.QGraphicsLinearLayout_Dump1(this.h, (C.int)(indent))
}

// Delete this object from C++ memory.
func (this *QGraphicsLinearLayout) Delete() {
	C.QGraphicsLinearLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsLinearLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsLinearLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

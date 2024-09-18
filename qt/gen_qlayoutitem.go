package qt

/*

#include "gen_qlayoutitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLayoutItem struct {
	h *C.QLayoutItem
}

func (this *QLayoutItem) cPointer() *C.QLayoutItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQLayoutItem(h *C.QLayoutItem) *QLayoutItem {
	if h == nil {
		return nil
	}
	return &QLayoutItem{h: h}
}

func newQLayoutItem_U(h unsafe.Pointer) *QLayoutItem {
	return newQLayoutItem((*C.QLayoutItem)(h))
}

func (this *QLayoutItem) SizeHint() *QSize {
	_ret := C.QLayoutItem_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayoutItem) MinimumSize() *QSize {
	_ret := C.QLayoutItem_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayoutItem) MaximumSize() *QSize {
	_ret := C.QLayoutItem_MaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayoutItem) ExpandingDirections() int {
	return (int)(C.QLayoutItem_ExpandingDirections(this.h))
}

func (this *QLayoutItem) SetGeometry(geometry *QRect) {
	C.QLayoutItem_SetGeometry(this.h, geometry.cPointer())
}

func (this *QLayoutItem) Geometry() *QRect {
	_ret := C.QLayoutItem_Geometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayoutItem) IsEmpty() bool {
	return (bool)(C.QLayoutItem_IsEmpty(this.h))
}

func (this *QLayoutItem) HasHeightForWidth() bool {
	return (bool)(C.QLayoutItem_HasHeightForWidth(this.h))
}

func (this *QLayoutItem) HeightForWidth(param1 int) int {
	return (int)(C.QLayoutItem_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QLayoutItem) MinimumHeightForWidth(param1 int) int {
	return (int)(C.QLayoutItem_MinimumHeightForWidth(this.h, (C.int)(param1)))
}

func (this *QLayoutItem) Invalidate() {
	C.QLayoutItem_Invalidate(this.h)
}

func (this *QLayoutItem) Widget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QLayoutItem_Widget(this.h)))
}

func (this *QLayoutItem) Layout() *QLayout {
	return newQLayout_U(unsafe.Pointer(C.QLayoutItem_Layout(this.h)))
}

func (this *QLayoutItem) SpacerItem() *QSpacerItem {
	return newQSpacerItem_U(unsafe.Pointer(C.QLayoutItem_SpacerItem(this.h)))
}

func (this *QLayoutItem) Alignment() int {
	return (int)(C.QLayoutItem_Alignment(this.h))
}

func (this *QLayoutItem) SetAlignment(a int) {
	C.QLayoutItem_SetAlignment(this.h, (C.int)(a))
}

func (this *QLayoutItem) ControlTypes() int {
	return (int)(C.QLayoutItem_ControlTypes(this.h))
}

// Delete this object from C++ memory.
func (this *QLayoutItem) Delete() {
	C.QLayoutItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLayoutItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QLayoutItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSpacerItem struct {
	h *C.QSpacerItem
	*QLayoutItem
}

func (this *QSpacerItem) cPointer() *C.QSpacerItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSpacerItem(h *C.QSpacerItem) *QSpacerItem {
	if h == nil {
		return nil
	}
	return &QSpacerItem{h: h, QLayoutItem: newQLayoutItem_U(unsafe.Pointer(h))}
}

func newQSpacerItem_U(h unsafe.Pointer) *QSpacerItem {
	return newQSpacerItem((*C.QSpacerItem)(h))
}

// NewQSpacerItem constructs a new QSpacerItem object.
func NewQSpacerItem(w int, h int) *QSpacerItem {
	ret := C.QSpacerItem_new((C.int)(w), (C.int)(h))
	return newQSpacerItem(ret)
}

// NewQSpacerItem2 constructs a new QSpacerItem object.
func NewQSpacerItem2(param1 *QSpacerItem) *QSpacerItem {
	ret := C.QSpacerItem_new2(param1.cPointer())
	return newQSpacerItem(ret)
}

// NewQSpacerItem3 constructs a new QSpacerItem object.
func NewQSpacerItem3(w int, h int, hData QSizePolicy__Policy) *QSpacerItem {
	ret := C.QSpacerItem_new3((C.int)(w), (C.int)(h), (C.int)(hData))
	return newQSpacerItem(ret)
}

// NewQSpacerItem4 constructs a new QSpacerItem object.
func NewQSpacerItem4(w int, h int, hData QSizePolicy__Policy, vData QSizePolicy__Policy) *QSpacerItem {
	ret := C.QSpacerItem_new4((C.int)(w), (C.int)(h), (C.int)(hData), (C.int)(vData))
	return newQSpacerItem(ret)
}

func (this *QSpacerItem) ChangeSize(w int, h int) {
	C.QSpacerItem_ChangeSize(this.h, (C.int)(w), (C.int)(h))
}

func (this *QSpacerItem) SizeHint() *QSize {
	_ret := C.QSpacerItem_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) MinimumSize() *QSize {
	_ret := C.QSpacerItem_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) MaximumSize() *QSize {
	_ret := C.QSpacerItem_MaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) ExpandingDirections() int {
	return (int)(C.QSpacerItem_ExpandingDirections(this.h))
}

func (this *QSpacerItem) IsEmpty() bool {
	return (bool)(C.QSpacerItem_IsEmpty(this.h))
}

func (this *QSpacerItem) SetGeometry(geometry *QRect) {
	C.QSpacerItem_SetGeometry(this.h, geometry.cPointer())
}

func (this *QSpacerItem) Geometry() *QRect {
	_ret := C.QSpacerItem_Geometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) SpacerItem() *QSpacerItem {
	return newQSpacerItem_U(unsafe.Pointer(C.QSpacerItem_SpacerItem(this.h)))
}

func (this *QSpacerItem) SizePolicy() *QSizePolicy {
	_ret := C.QSpacerItem_SizePolicy(this.h)
	_goptr := newQSizePolicy(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) ChangeSize3(w int, h int, hData QSizePolicy__Policy) {
	C.QSpacerItem_ChangeSize3(this.h, (C.int)(w), (C.int)(h), (C.int)(hData))
}

func (this *QSpacerItem) ChangeSize4(w int, h int, hData QSizePolicy__Policy, vData QSizePolicy__Policy) {
	C.QSpacerItem_ChangeSize4(this.h, (C.int)(w), (C.int)(h), (C.int)(hData), (C.int)(vData))
}

// Delete this object from C++ memory.
func (this *QSpacerItem) Delete() {
	C.QSpacerItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSpacerItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QSpacerItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWidgetItem struct {
	h *C.QWidgetItem
	*QLayoutItem
}

func (this *QWidgetItem) cPointer() *C.QWidgetItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQWidgetItem(h *C.QWidgetItem) *QWidgetItem {
	if h == nil {
		return nil
	}
	return &QWidgetItem{h: h, QLayoutItem: newQLayoutItem_U(unsafe.Pointer(h))}
}

func newQWidgetItem_U(h unsafe.Pointer) *QWidgetItem {
	return newQWidgetItem((*C.QWidgetItem)(h))
}

// NewQWidgetItem constructs a new QWidgetItem object.
func NewQWidgetItem(w *QWidget) *QWidgetItem {
	ret := C.QWidgetItem_new(w.cPointer())
	return newQWidgetItem(ret)
}

func (this *QWidgetItem) SizeHint() *QSize {
	_ret := C.QWidgetItem_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItem) MinimumSize() *QSize {
	_ret := C.QWidgetItem_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItem) MaximumSize() *QSize {
	_ret := C.QWidgetItem_MaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItem) ExpandingDirections() int {
	return (int)(C.QWidgetItem_ExpandingDirections(this.h))
}

func (this *QWidgetItem) IsEmpty() bool {
	return (bool)(C.QWidgetItem_IsEmpty(this.h))
}

func (this *QWidgetItem) SetGeometry(geometry *QRect) {
	C.QWidgetItem_SetGeometry(this.h, geometry.cPointer())
}

func (this *QWidgetItem) Geometry() *QRect {
	_ret := C.QWidgetItem_Geometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItem) Widget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidgetItem_Widget(this.h)))
}

func (this *QWidgetItem) HasHeightForWidth() bool {
	return (bool)(C.QWidgetItem_HasHeightForWidth(this.h))
}

func (this *QWidgetItem) HeightForWidth(param1 int) int {
	return (int)(C.QWidgetItem_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QWidgetItem) ControlTypes() int {
	return (int)(C.QWidgetItem_ControlTypes(this.h))
}

// Delete this object from C++ memory.
func (this *QWidgetItem) Delete() {
	C.QWidgetItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWidgetItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QWidgetItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWidgetItemV2 struct {
	h *C.QWidgetItemV2
	*QWidgetItem
}

func (this *QWidgetItemV2) cPointer() *C.QWidgetItemV2 {
	if this == nil {
		return nil
	}
	return this.h
}

func newQWidgetItemV2(h *C.QWidgetItemV2) *QWidgetItemV2 {
	if h == nil {
		return nil
	}
	return &QWidgetItemV2{h: h, QWidgetItem: newQWidgetItem_U(unsafe.Pointer(h))}
}

func newQWidgetItemV2_U(h unsafe.Pointer) *QWidgetItemV2 {
	return newQWidgetItemV2((*C.QWidgetItemV2)(h))
}

// NewQWidgetItemV2 constructs a new QWidgetItemV2 object.
func NewQWidgetItemV2(widget *QWidget) *QWidgetItemV2 {
	ret := C.QWidgetItemV2_new(widget.cPointer())
	return newQWidgetItemV2(ret)
}

func (this *QWidgetItemV2) SizeHint() *QSize {
	_ret := C.QWidgetItemV2_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItemV2) MinimumSize() *QSize {
	_ret := C.QWidgetItemV2_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItemV2) MaximumSize() *QSize {
	_ret := C.QWidgetItemV2_MaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItemV2) HeightForWidth(width int) int {
	return (int)(C.QWidgetItemV2_HeightForWidth(this.h, (C.int)(width)))
}

// Delete this object from C++ memory.
func (this *QWidgetItemV2) Delete() {
	C.QWidgetItemV2_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWidgetItemV2) GoGC() {
	runtime.SetFinalizer(this, func(this *QWidgetItemV2) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

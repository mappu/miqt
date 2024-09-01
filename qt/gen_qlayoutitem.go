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
	ret := C.QLayoutItem_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLayoutItem) MinimumSize() *QSize {
	ret := C.QLayoutItem_MinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLayoutItem) MaximumSize() *QSize {
	ret := C.QLayoutItem_MaximumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLayoutItem) ExpandingDirections() int {
	ret := C.QLayoutItem_ExpandingDirections(this.h)
	return (int)(ret)
}

func (this *QLayoutItem) SetGeometry(geometry *QRect) {
	C.QLayoutItem_SetGeometry(this.h, geometry.cPointer())
}

func (this *QLayoutItem) Geometry() *QRect {
	ret := C.QLayoutItem_Geometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLayoutItem) IsEmpty() bool {
	ret := C.QLayoutItem_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QLayoutItem) HasHeightForWidth() bool {
	ret := C.QLayoutItem_HasHeightForWidth(this.h)
	return (bool)(ret)
}

func (this *QLayoutItem) HeightForWidth(param1 int) int {
	ret := C.QLayoutItem_HeightForWidth(this.h, (C.int)(param1))
	return (int)(ret)
}

func (this *QLayoutItem) MinimumHeightForWidth(param1 int) int {
	ret := C.QLayoutItem_MinimumHeightForWidth(this.h, (C.int)(param1))
	return (int)(ret)
}

func (this *QLayoutItem) Invalidate() {
	C.QLayoutItem_Invalidate(this.h)
}

func (this *QLayoutItem) Widget() *QWidget {
	ret := C.QLayoutItem_Widget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QLayoutItem) Layout() *QLayout {
	ret := C.QLayoutItem_Layout(this.h)
	return newQLayout_U(unsafe.Pointer(ret))
}

func (this *QLayoutItem) SpacerItem() *QSpacerItem {
	ret := C.QLayoutItem_SpacerItem(this.h)
	return newQSpacerItem_U(unsafe.Pointer(ret))
}

func (this *QLayoutItem) Alignment() int {
	ret := C.QLayoutItem_Alignment(this.h)
	return (int)(ret)
}

func (this *QLayoutItem) SetAlignment(a int) {
	C.QLayoutItem_SetAlignment(this.h, (C.int)(a))
}

func (this *QLayoutItem) ControlTypes() int {
	ret := C.QLayoutItem_ControlTypes(this.h)
	return (int)(ret)
}

func (this *QLayoutItem) Delete() {
	C.QLayoutItem_Delete(this.h)
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
func NewQSpacerItem3(w int, h int, hData uintptr) *QSpacerItem {
	ret := C.QSpacerItem_new3((C.int)(w), (C.int)(h), (C.uintptr_t)(hData))
	return newQSpacerItem(ret)
}

// NewQSpacerItem4 constructs a new QSpacerItem object.
func NewQSpacerItem4(w int, h int, hData uintptr, vData uintptr) *QSpacerItem {
	ret := C.QSpacerItem_new4((C.int)(w), (C.int)(h), (C.uintptr_t)(hData), (C.uintptr_t)(vData))
	return newQSpacerItem(ret)
}

func (this *QSpacerItem) ChangeSize(w int, h int) {
	C.QSpacerItem_ChangeSize(this.h, (C.int)(w), (C.int)(h))
}

func (this *QSpacerItem) SizeHint() *QSize {
	ret := C.QSpacerItem_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSpacerItem) MinimumSize() *QSize {
	ret := C.QSpacerItem_MinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSpacerItem) MaximumSize() *QSize {
	ret := C.QSpacerItem_MaximumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSpacerItem) ExpandingDirections() int {
	ret := C.QSpacerItem_ExpandingDirections(this.h)
	return (int)(ret)
}

func (this *QSpacerItem) IsEmpty() bool {
	ret := C.QSpacerItem_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QSpacerItem) SetGeometry(geometry *QRect) {
	C.QSpacerItem_SetGeometry(this.h, geometry.cPointer())
}

func (this *QSpacerItem) Geometry() *QRect {
	ret := C.QSpacerItem_Geometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSpacerItem) SpacerItem() *QSpacerItem {
	ret := C.QSpacerItem_SpacerItem(this.h)
	return newQSpacerItem_U(unsafe.Pointer(ret))
}

func (this *QSpacerItem) SizePolicy() *QSizePolicy {
	ret := C.QSpacerItem_SizePolicy(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizePolicy(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizePolicy) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSpacerItem) ChangeSize3(w int, h int, hData uintptr) {
	C.QSpacerItem_ChangeSize3(this.h, (C.int)(w), (C.int)(h), (C.uintptr_t)(hData))
}

func (this *QSpacerItem) ChangeSize4(w int, h int, hData uintptr, vData uintptr) {
	C.QSpacerItem_ChangeSize4(this.h, (C.int)(w), (C.int)(h), (C.uintptr_t)(hData), (C.uintptr_t)(vData))
}

func (this *QSpacerItem) Delete() {
	C.QSpacerItem_Delete(this.h)
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
	ret := C.QWidgetItem_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidgetItem) MinimumSize() *QSize {
	ret := C.QWidgetItem_MinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidgetItem) MaximumSize() *QSize {
	ret := C.QWidgetItem_MaximumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidgetItem) ExpandingDirections() int {
	ret := C.QWidgetItem_ExpandingDirections(this.h)
	return (int)(ret)
}

func (this *QWidgetItem) IsEmpty() bool {
	ret := C.QWidgetItem_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QWidgetItem) SetGeometry(geometry *QRect) {
	C.QWidgetItem_SetGeometry(this.h, geometry.cPointer())
}

func (this *QWidgetItem) Geometry() *QRect {
	ret := C.QWidgetItem_Geometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidgetItem) Widget() *QWidget {
	ret := C.QWidgetItem_Widget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QWidgetItem) HasHeightForWidth() bool {
	ret := C.QWidgetItem_HasHeightForWidth(this.h)
	return (bool)(ret)
}

func (this *QWidgetItem) HeightForWidth(param1 int) int {
	ret := C.QWidgetItem_HeightForWidth(this.h, (C.int)(param1))
	return (int)(ret)
}

func (this *QWidgetItem) ControlTypes() int {
	ret := C.QWidgetItem_ControlTypes(this.h)
	return (int)(ret)
}

func (this *QWidgetItem) Delete() {
	C.QWidgetItem_Delete(this.h)
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
	ret := C.QWidgetItemV2_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidgetItemV2) MinimumSize() *QSize {
	ret := C.QWidgetItemV2_MinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidgetItemV2) MaximumSize() *QSize {
	ret := C.QWidgetItemV2_MaximumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWidgetItemV2) HeightForWidth(width int) int {
	ret := C.QWidgetItemV2_HeightForWidth(this.h, (C.int)(width))
	return (int)(ret)
}

func (this *QWidgetItemV2) Delete() {
	C.QWidgetItemV2_Delete(this.h)
}

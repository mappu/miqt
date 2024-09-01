package qt

/*

#include "gen_qgraphicsanchorlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QGraphicsAnchor struct {
	h *C.QGraphicsAnchor
	*QObject
}

func (this *QGraphicsAnchor) cPointer() *C.QGraphicsAnchor {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsAnchor(h *C.QGraphicsAnchor) *QGraphicsAnchor {
	if h == nil {
		return nil
	}
	return &QGraphicsAnchor{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQGraphicsAnchor_U(h unsafe.Pointer) *QGraphicsAnchor {
	return newQGraphicsAnchor((*C.QGraphicsAnchor)(h))
}

func (this *QGraphicsAnchor) MetaObject() *QMetaObject {
	ret := C.QGraphicsAnchor_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsAnchor_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsAnchor_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsAnchor_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsAnchor_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsAnchor) SetSpacing(spacing float64) {
	C.QGraphicsAnchor_SetSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchor) UnsetSpacing() {
	C.QGraphicsAnchor_UnsetSpacing(this.h)
}

func (this *QGraphicsAnchor) Spacing() float64 {
	ret := C.QGraphicsAnchor_Spacing(this.h)
	return (float64)(ret)
}

func (this *QGraphicsAnchor) SetSizePolicy(policy uintptr) {
	C.QGraphicsAnchor_SetSizePolicy(this.h, (C.uintptr_t)(policy))
}

func (this *QGraphicsAnchor) SizePolicy() uintptr {
	ret := C.QGraphicsAnchor_SizePolicy(this.h)
	return (uintptr)(ret)
}

func QGraphicsAnchor_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsAnchor_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsAnchor_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsAnchor_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsAnchor_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsAnchor_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsAnchor_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsAnchor_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsAnchor) Delete() {
	C.QGraphicsAnchor_Delete(this.h)
}

type QGraphicsAnchorLayout struct {
	h *C.QGraphicsAnchorLayout
	*QGraphicsLayout
}

func (this *QGraphicsAnchorLayout) cPointer() *C.QGraphicsAnchorLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsAnchorLayout(h *C.QGraphicsAnchorLayout) *QGraphicsAnchorLayout {
	if h == nil {
		return nil
	}
	return &QGraphicsAnchorLayout{h: h, QGraphicsLayout: newQGraphicsLayout_U(unsafe.Pointer(h))}
}

func newQGraphicsAnchorLayout_U(h unsafe.Pointer) *QGraphicsAnchorLayout {
	return newQGraphicsAnchorLayout((*C.QGraphicsAnchorLayout)(h))
}

// NewQGraphicsAnchorLayout constructs a new QGraphicsAnchorLayout object.
func NewQGraphicsAnchorLayout() *QGraphicsAnchorLayout {
	ret := C.QGraphicsAnchorLayout_new()
	return newQGraphicsAnchorLayout(ret)
}

// NewQGraphicsAnchorLayout2 constructs a new QGraphicsAnchorLayout object.
func NewQGraphicsAnchorLayout2(parent *QGraphicsLayoutItem) *QGraphicsAnchorLayout {
	ret := C.QGraphicsAnchorLayout_new2(parent.cPointer())
	return newQGraphicsAnchorLayout(ret)
}

func (this *QGraphicsAnchorLayout) AddAnchor(firstItem *QGraphicsLayoutItem, firstEdge uintptr, secondItem *QGraphicsLayoutItem, secondEdge uintptr) *QGraphicsAnchor {
	ret := C.QGraphicsAnchorLayout_AddAnchor(this.h, firstItem.cPointer(), (C.uintptr_t)(firstEdge), secondItem.cPointer(), (C.uintptr_t)(secondEdge))
	return newQGraphicsAnchor_U(unsafe.Pointer(ret))
}

func (this *QGraphicsAnchorLayout) Anchor(firstItem *QGraphicsLayoutItem, firstEdge uintptr, secondItem *QGraphicsLayoutItem, secondEdge uintptr) *QGraphicsAnchor {
	ret := C.QGraphicsAnchorLayout_Anchor(this.h, firstItem.cPointer(), (C.uintptr_t)(firstEdge), secondItem.cPointer(), (C.uintptr_t)(secondEdge))
	return newQGraphicsAnchor_U(unsafe.Pointer(ret))
}

func (this *QGraphicsAnchorLayout) AddCornerAnchors(firstItem *QGraphicsLayoutItem, firstCorner uintptr, secondItem *QGraphicsLayoutItem, secondCorner uintptr) {
	C.QGraphicsAnchorLayout_AddCornerAnchors(this.h, firstItem.cPointer(), (C.uintptr_t)(firstCorner), secondItem.cPointer(), (C.uintptr_t)(secondCorner))
}

func (this *QGraphicsAnchorLayout) AddAnchors(firstItem *QGraphicsLayoutItem, secondItem *QGraphicsLayoutItem) {
	C.QGraphicsAnchorLayout_AddAnchors(this.h, firstItem.cPointer(), secondItem.cPointer())
}

func (this *QGraphicsAnchorLayout) SetHorizontalSpacing(spacing float64) {
	C.QGraphicsAnchorLayout_SetHorizontalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchorLayout) SetVerticalSpacing(spacing float64) {
	C.QGraphicsAnchorLayout_SetVerticalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchorLayout) SetSpacing(spacing float64) {
	C.QGraphicsAnchorLayout_SetSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchorLayout) HorizontalSpacing() float64 {
	ret := C.QGraphicsAnchorLayout_HorizontalSpacing(this.h)
	return (float64)(ret)
}

func (this *QGraphicsAnchorLayout) VerticalSpacing() float64 {
	ret := C.QGraphicsAnchorLayout_VerticalSpacing(this.h)
	return (float64)(ret)
}

func (this *QGraphicsAnchorLayout) RemoveAt(index int) {
	C.QGraphicsAnchorLayout_RemoveAt(this.h, (C.int)(index))
}

func (this *QGraphicsAnchorLayout) SetGeometry(rect *QRectF) {
	C.QGraphicsAnchorLayout_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsAnchorLayout) Count() int {
	ret := C.QGraphicsAnchorLayout_Count(this.h)
	return (int)(ret)
}

func (this *QGraphicsAnchorLayout) ItemAt(index int) *QGraphicsLayoutItem {
	ret := C.QGraphicsAnchorLayout_ItemAt(this.h, (C.int)(index))
	return newQGraphicsLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsAnchorLayout) Invalidate() {
	C.QGraphicsAnchorLayout_Invalidate(this.h)
}

func (this *QGraphicsAnchorLayout) AddAnchors3(firstItem *QGraphicsLayoutItem, secondItem *QGraphicsLayoutItem, orientations int) {
	C.QGraphicsAnchorLayout_AddAnchors3(this.h, firstItem.cPointer(), secondItem.cPointer(), (C.int)(orientations))
}

func (this *QGraphicsAnchorLayout) Delete() {
	C.QGraphicsAnchorLayout_Delete(this.h)
}

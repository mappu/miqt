package qt6

/*

#include "gen_qlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLayout__SizeConstraint int

const (
	QLayout__SetDefaultConstraint QLayout__SizeConstraint = 0
	QLayout__SetNoConstraint      QLayout__SizeConstraint = 1
	QLayout__SetMinimumSize       QLayout__SizeConstraint = 2
	QLayout__SetFixedSize         QLayout__SizeConstraint = 3
	QLayout__SetMaximumSize       QLayout__SizeConstraint = 4
	QLayout__SetMinAndMaxSize     QLayout__SizeConstraint = 5
)

type QLayout struct {
	h          *C.QLayout
	isSubclass bool
	*QObject
	*QLayoutItem
}

func (this *QLayout) cPointer() *C.QLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLayout constructs the type using only CGO pointers.
func newQLayout(h *C.QLayout, h_QObject *C.QObject, h_QLayoutItem *C.QLayoutItem) *QLayout {
	if h == nil {
		return nil
	}
	return &QLayout{h: h,
		QObject:     newQObject(h_QObject),
		QLayoutItem: newQLayoutItem(h_QLayoutItem)}
}

// UnsafeNewQLayout constructs the type using only unsafe pointers.
func UnsafeNewQLayout(h unsafe.Pointer, h_QObject unsafe.Pointer, h_QLayoutItem unsafe.Pointer) *QLayout {
	if h == nil {
		return nil
	}

	return &QLayout{h: (*C.QLayout)(h),
		QObject:     UnsafeNewQObject(h_QObject),
		QLayoutItem: UnsafeNewQLayoutItem(h_QLayoutItem)}
}

func (this *QLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QLayout_MetaObject(this.h)))
}

func (this *QLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLayout_Metacast(this.h, param1_Cstring))
}

func QLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLayout) Spacing() int {
	return (int)(C.QLayout_Spacing(this.h))
}

func (this *QLayout) SetSpacing(spacing int) {
	C.QLayout_SetSpacing(this.h, (C.int)(spacing))
}

func (this *QLayout) SetContentsMargins(left int, top int, right int, bottom int) {
	C.QLayout_SetContentsMargins(this.h, (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))
}

func (this *QLayout) SetContentsMarginsWithMargins(margins *QMargins) {
	C.QLayout_SetContentsMarginsWithMargins(this.h, margins.cPointer())
}

func (this *QLayout) UnsetContentsMargins() {
	C.QLayout_UnsetContentsMargins(this.h)
}

func (this *QLayout) GetContentsMargins(left *int, top *int, right *int, bottom *int) {
	C.QLayout_GetContentsMargins(this.h, (*C.int)(unsafe.Pointer(left)), (*C.int)(unsafe.Pointer(top)), (*C.int)(unsafe.Pointer(right)), (*C.int)(unsafe.Pointer(bottom)))
}

func (this *QLayout) ContentsMargins() *QMargins {
	_ret := C.QLayout_ContentsMargins(this.h)
	_goptr := newQMargins(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) ContentsRect() *QRect {
	_ret := C.QLayout_ContentsRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) SetAlignment(w *QWidget, alignment AlignmentFlag) bool {
	return (bool)(C.QLayout_SetAlignment(this.h, w.cPointer(), (C.int)(alignment)))
}

func (this *QLayout) SetAlignment2(l *QLayout, alignment AlignmentFlag) bool {
	return (bool)(C.QLayout_SetAlignment2(this.h, l.cPointer(), (C.int)(alignment)))
}

func (this *QLayout) SetSizeConstraint(sizeConstraint QLayout__SizeConstraint) {
	C.QLayout_SetSizeConstraint(this.h, (C.int)(sizeConstraint))
}

func (this *QLayout) SizeConstraint() QLayout__SizeConstraint {
	return (QLayout__SizeConstraint)(C.QLayout_SizeConstraint(this.h))
}

func (this *QLayout) SetMenuBar(w *QWidget) {
	C.QLayout_SetMenuBar(this.h, w.cPointer())
}

func (this *QLayout) MenuBar() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QLayout_MenuBar(this.h)), nil, nil)
}

func (this *QLayout) ParentWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QLayout_ParentWidget(this.h)), nil, nil)
}

func (this *QLayout) Invalidate() {
	C.QLayout_Invalidate(this.h)
}

func (this *QLayout) Geometry() *QRect {
	_ret := C.QLayout_Geometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) Activate() bool {
	return (bool)(C.QLayout_Activate(this.h))
}

func (this *QLayout) Update() {
	C.QLayout_Update(this.h)
}

func (this *QLayout) AddWidget(w *QWidget) {
	C.QLayout_AddWidget(this.h, w.cPointer())
}

func (this *QLayout) AddItem(param1 *QLayoutItem) {
	C.QLayout_AddItem(this.h, param1.cPointer())
}

func (this *QLayout) RemoveWidget(w *QWidget) {
	C.QLayout_RemoveWidget(this.h, w.cPointer())
}

func (this *QLayout) RemoveItem(param1 *QLayoutItem) {
	C.QLayout_RemoveItem(this.h, param1.cPointer())
}

func (this *QLayout) ExpandingDirections() Orientation {
	return (Orientation)(C.QLayout_ExpandingDirections(this.h))
}

func (this *QLayout) MinimumSize() *QSize {
	_ret := C.QLayout_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) MaximumSize() *QSize {
	_ret := C.QLayout_MaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) SetGeometry(geometry *QRect) {
	C.QLayout_SetGeometry(this.h, geometry.cPointer())
}

func (this *QLayout) ItemAt(index int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QLayout_ItemAt(this.h, (C.int)(index))))
}

func (this *QLayout) TakeAt(index int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QLayout_TakeAt(this.h, (C.int)(index))))
}

func (this *QLayout) IndexOf(param1 *QWidget) int {
	return (int)(C.QLayout_IndexOf(this.h, param1.cPointer()))
}

func (this *QLayout) IndexOfWithQLayoutItem(param1 *QLayoutItem) int {
	return (int)(C.QLayout_IndexOfWithQLayoutItem(this.h, param1.cPointer()))
}

func (this *QLayout) Count() int {
	return (int)(C.QLayout_Count(this.h))
}

func (this *QLayout) IsEmpty() bool {
	return (bool)(C.QLayout_IsEmpty(this.h))
}

func (this *QLayout) ControlTypes() QSizePolicy__ControlType {
	return (QSizePolicy__ControlType)(C.QLayout_ControlTypes(this.h))
}

func (this *QLayout) ReplaceWidget(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QLayout_ReplaceWidget(this.h, from.cPointer(), to.cPointer(), (C.int)(options))))
}

func (this *QLayout) TotalMinimumHeightForWidth(w int) int {
	return (int)(C.QLayout_TotalMinimumHeightForWidth(this.h, (C.int)(w)))
}

func (this *QLayout) TotalHeightForWidth(w int) int {
	return (int)(C.QLayout_TotalHeightForWidth(this.h, (C.int)(w)))
}

func (this *QLayout) TotalMinimumSize() *QSize {
	_ret := C.QLayout_TotalMinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) TotalMaximumSize() *QSize {
	_ret := C.QLayout_TotalMaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) TotalSizeHint() *QSize {
	_ret := C.QLayout_TotalSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) Layout() *QLayout {
	return UnsafeNewQLayout(unsafe.Pointer(C.QLayout_Layout(this.h)), nil, nil)
}

func (this *QLayout) SetEnabled(enabled bool) {
	C.QLayout_SetEnabled(this.h, (C.bool)(enabled))
}

func (this *QLayout) IsEnabled() bool {
	return (bool)(C.QLayout_IsEnabled(this.h))
}

func QLayout_ClosestAcceptableSize(w *QWidget, s *QSize) *QSize {
	_ret := C.QLayout_ClosestAcceptableSize(w.cPointer(), s.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QLayout) Delete() {
	C.QLayout_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt

/*

#include "gen_qstackedlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QStackedLayout__StackingMode int

const (
	QStackedLayout__StackOne QStackedLayout__StackingMode = 0
	QStackedLayout__StackAll QStackedLayout__StackingMode = 1
)

type QStackedLayout struct {
	h *C.QStackedLayout
	*QLayout
}

func (this *QStackedLayout) cPointer() *C.QStackedLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStackedLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQStackedLayout(h *C.QStackedLayout) *QStackedLayout {
	if h == nil {
		return nil
	}
	return &QStackedLayout{h: h, QLayout: UnsafeNewQLayout(unsafe.Pointer(h))}
}

func UnsafeNewQStackedLayout(h unsafe.Pointer) *QStackedLayout {
	return newQStackedLayout((*C.QStackedLayout)(h))
}

// NewQStackedLayout constructs a new QStackedLayout object.
func NewQStackedLayout(parent *QWidget) *QStackedLayout {
	ret := C.QStackedLayout_new(parent.cPointer())
	return newQStackedLayout(ret)
}

// NewQStackedLayout2 constructs a new QStackedLayout object.
func NewQStackedLayout2() *QStackedLayout {
	ret := C.QStackedLayout_new2()
	return newQStackedLayout(ret)
}

// NewQStackedLayout3 constructs a new QStackedLayout object.
func NewQStackedLayout3(parentLayout *QLayout) *QStackedLayout {
	ret := C.QStackedLayout_new3(parentLayout.cPointer())
	return newQStackedLayout(ret)
}

func (this *QStackedLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QStackedLayout_MetaObject(this.h)))
}

func (this *QStackedLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStackedLayout_Metacast(this.h, param1_Cstring))
}

func QStackedLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStackedLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStackedLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStackedLayout_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStackedLayout) AddWidget(w *QWidget) int {
	return (int)(C.QStackedLayout_AddWidget(this.h, w.cPointer()))
}

func (this *QStackedLayout) InsertWidget(index int, w *QWidget) int {
	return (int)(C.QStackedLayout_InsertWidget(this.h, (C.int)(index), w.cPointer()))
}

func (this *QStackedLayout) CurrentWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QStackedLayout_CurrentWidget(this.h)))
}

func (this *QStackedLayout) CurrentIndex() int {
	return (int)(C.QStackedLayout_CurrentIndex(this.h))
}

func (this *QStackedLayout) Widget(param1 int) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QStackedLayout_Widget(this.h, (C.int)(param1))))
}

func (this *QStackedLayout) Count() int {
	return (int)(C.QStackedLayout_Count(this.h))
}

func (this *QStackedLayout) StackingMode() QStackedLayout__StackingMode {
	return (QStackedLayout__StackingMode)(C.QStackedLayout_StackingMode(this.h))
}

func (this *QStackedLayout) SetStackingMode(stackingMode QStackedLayout__StackingMode) {
	C.QStackedLayout_SetStackingMode(this.h, (C.int)(stackingMode))
}

func (this *QStackedLayout) AddItem(item *QLayoutItem) {
	C.QStackedLayout_AddItem(this.h, item.cPointer())
}

func (this *QStackedLayout) SizeHint() *QSize {
	_ret := C.QStackedLayout_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStackedLayout) MinimumSize() *QSize {
	_ret := C.QStackedLayout_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStackedLayout) ItemAt(param1 int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QStackedLayout_ItemAt(this.h, (C.int)(param1))))
}

func (this *QStackedLayout) TakeAt(param1 int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QStackedLayout_TakeAt(this.h, (C.int)(param1))))
}

func (this *QStackedLayout) SetGeometry(rect *QRect) {
	C.QStackedLayout_SetGeometry(this.h, rect.cPointer())
}

func (this *QStackedLayout) HasHeightForWidth() bool {
	return (bool)(C.QStackedLayout_HasHeightForWidth(this.h))
}

func (this *QStackedLayout) HeightForWidth(width int) int {
	return (int)(C.QStackedLayout_HeightForWidth(this.h, (C.int)(width)))
}

func (this *QStackedLayout) WidgetRemoved(index int) {
	C.QStackedLayout_WidgetRemoved(this.h, (C.int)(index))
}
func (this *QStackedLayout) OnWidgetRemoved(slot func(index int)) {
	C.QStackedLayout_connect_WidgetRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_WidgetRemoved
func miqt_exec_callback_QStackedLayout_WidgetRemoved(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QStackedLayout) CurrentChanged(index int) {
	C.QStackedLayout_CurrentChanged(this.h, (C.int)(index))
}
func (this *QStackedLayout) OnCurrentChanged(slot func(index int)) {
	C.QStackedLayout_connect_CurrentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_CurrentChanged
func miqt_exec_callback_QStackedLayout_CurrentChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QStackedLayout) SetCurrentIndex(index int) {
	C.QStackedLayout_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QStackedLayout) SetCurrentWidget(w *QWidget) {
	C.QStackedLayout_SetCurrentWidget(this.h, w.cPointer())
}

func QStackedLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStackedLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStackedLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedLayout_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStackedLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QStackedLayout) Delete() {
	C.QStackedLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStackedLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QStackedLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

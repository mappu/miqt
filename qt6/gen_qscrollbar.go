package qt6

/*

#include "gen_qscrollbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScrollBar struct {
	h *C.QScrollBar
	*QAbstractSlider
}

func (this *QScrollBar) cPointer() *C.QScrollBar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScrollBar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQScrollBar(h *C.QScrollBar) *QScrollBar {
	if h == nil {
		return nil
	}
	return &QScrollBar{h: h, QAbstractSlider: UnsafeNewQAbstractSlider(unsafe.Pointer(h))}
}

func UnsafeNewQScrollBar(h unsafe.Pointer) *QScrollBar {
	return newQScrollBar((*C.QScrollBar)(h))
}

// NewQScrollBar constructs a new QScrollBar object.
func NewQScrollBar() *QScrollBar {
	ret := C.QScrollBar_new()
	return newQScrollBar(ret)
}

// NewQScrollBar2 constructs a new QScrollBar object.
func NewQScrollBar2(param1 Orientation) *QScrollBar {
	ret := C.QScrollBar_new2((C.int)(param1))
	return newQScrollBar(ret)
}

// NewQScrollBar3 constructs a new QScrollBar object.
func NewQScrollBar3(parent *QWidget) *QScrollBar {
	ret := C.QScrollBar_new3(parent.cPointer())
	return newQScrollBar(ret)
}

// NewQScrollBar4 constructs a new QScrollBar object.
func NewQScrollBar4(param1 Orientation, parent *QWidget) *QScrollBar {
	ret := C.QScrollBar_new4((C.int)(param1), parent.cPointer())
	return newQScrollBar(ret)
}

func (this *QScrollBar) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QScrollBar_MetaObject(this.h)))
}

func (this *QScrollBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScrollBar_Metacast(this.h, param1_Cstring))
}

func QScrollBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScrollBar_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScrollBar) SizeHint() *QSize {
	_ret := C.QScrollBar_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollBar) Event(event *QEvent) bool {
	return (bool)(C.QScrollBar_Event(this.h, event.cPointer()))
}

func QScrollBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollBar_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScrollBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScrollBar_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QScrollBar) Delete() {
	C.QScrollBar_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScrollBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QScrollBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt

/*

#include "gen_qslider.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSlider__TickPosition int

const (
	QSlider__NoTicks        QSlider__TickPosition = 0
	QSlider__TicksAbove     QSlider__TickPosition = 1
	QSlider__TicksLeft      QSlider__TickPosition = 1
	QSlider__TicksBelow     QSlider__TickPosition = 2
	QSlider__TicksRight     QSlider__TickPosition = 2
	QSlider__TicksBothSides QSlider__TickPosition = 3
)

type QSlider struct {
	h *C.QSlider
	*QAbstractSlider
}

func (this *QSlider) cPointer() *C.QSlider {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSlider(h *C.QSlider) *QSlider {
	if h == nil {
		return nil
	}
	return &QSlider{h: h, QAbstractSlider: newQAbstractSlider_U(unsafe.Pointer(h))}
}

func newQSlider_U(h unsafe.Pointer) *QSlider {
	return newQSlider((*C.QSlider)(h))
}

// NewQSlider constructs a new QSlider object.
func NewQSlider() *QSlider {
	ret := C.QSlider_new()
	return newQSlider(ret)
}

// NewQSlider2 constructs a new QSlider object.
func NewQSlider2(orientation Orientation) *QSlider {
	ret := C.QSlider_new2((C.int)(orientation))
	return newQSlider(ret)
}

// NewQSlider3 constructs a new QSlider object.
func NewQSlider3(parent *QWidget) *QSlider {
	ret := C.QSlider_new3(parent.cPointer())
	return newQSlider(ret)
}

// NewQSlider4 constructs a new QSlider object.
func NewQSlider4(orientation Orientation, parent *QWidget) *QSlider {
	ret := C.QSlider_new4((C.int)(orientation), parent.cPointer())
	return newQSlider(ret)
}

func (this *QSlider) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QSlider_MetaObject(this.h)))
}

func QSlider_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSlider_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSlider_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSlider_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSlider) SizeHint() *QSize {
	_ret := C.QSlider_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSlider) MinimumSizeHint() *QSize {
	_ret := C.QSlider_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSlider) SetTickPosition(position QSlider__TickPosition) {
	C.QSlider_SetTickPosition(this.h, (C.int)(position))
}

func (this *QSlider) TickPosition() QSlider__TickPosition {
	return (QSlider__TickPosition)(C.QSlider_TickPosition(this.h))
}

func (this *QSlider) SetTickInterval(ti int) {
	C.QSlider_SetTickInterval(this.h, (C.int)(ti))
}

func (this *QSlider) TickInterval() int {
	return (int)(C.QSlider_TickInterval(this.h))
}

func (this *QSlider) Event(event *QEvent) bool {
	return (bool)(C.QSlider_Event(this.h, event.cPointer()))
}

func QSlider_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSlider_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSlider_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSlider_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSlider_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSlider_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSlider_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSlider_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSlider) Delete() {
	C.QSlider_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSlider) GoGC() {
	runtime.SetFinalizer(this, func(this *QSlider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

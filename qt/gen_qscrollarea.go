package qt

/*

#include "gen_qscrollarea.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScrollArea struct {
	h *C.QScrollArea
	*QAbstractScrollArea
}

func (this *QScrollArea) cPointer() *C.QScrollArea {
	if this == nil {
		return nil
	}
	return this.h
}

func newQScrollArea(h *C.QScrollArea) *QScrollArea {
	if h == nil {
		return nil
	}
	return &QScrollArea{h: h, QAbstractScrollArea: newQAbstractScrollArea_U(unsafe.Pointer(h))}
}

func newQScrollArea_U(h unsafe.Pointer) *QScrollArea {
	return newQScrollArea((*C.QScrollArea)(h))
}

// NewQScrollArea constructs a new QScrollArea object.
func NewQScrollArea() *QScrollArea {
	ret := C.QScrollArea_new()
	return newQScrollArea(ret)
}

// NewQScrollArea2 constructs a new QScrollArea object.
func NewQScrollArea2(parent *QWidget) *QScrollArea {
	ret := C.QScrollArea_new2(parent.cPointer())
	return newQScrollArea(ret)
}

func (this *QScrollArea) MetaObject() *QMetaObject {
	_ret := C.QScrollArea_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QScrollArea_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QScrollArea_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScrollArea_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QScrollArea_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QScrollArea) Widget() *QWidget {
	_ret := C.QScrollArea_Widget(this.h)
	return newQWidget_U(unsafe.Pointer(_ret))
}

func (this *QScrollArea) SetWidget(widget *QWidget) {
	C.QScrollArea_SetWidget(this.h, widget.cPointer())
}

func (this *QScrollArea) TakeWidget() *QWidget {
	_ret := C.QScrollArea_TakeWidget(this.h)
	return newQWidget_U(unsafe.Pointer(_ret))
}

func (this *QScrollArea) WidgetResizable() bool {
	_ret := C.QScrollArea_WidgetResizable(this.h)
	return (bool)(_ret)
}

func (this *QScrollArea) SetWidgetResizable(resizable bool) {
	C.QScrollArea_SetWidgetResizable(this.h, (C.bool)(resizable))
}

func (this *QScrollArea) SizeHint() *QSize {
	_ret := C.QScrollArea_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollArea) FocusNextPrevChild(next bool) bool {
	_ret := C.QScrollArea_FocusNextPrevChild(this.h, (C.bool)(next))
	return (bool)(_ret)
}

func (this *QScrollArea) Alignment() int {
	_ret := C.QScrollArea_Alignment(this.h)
	return (int)(_ret)
}

func (this *QScrollArea) SetAlignment(alignment int) {
	C.QScrollArea_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QScrollArea) EnsureVisible(x int, y int) {
	C.QScrollArea_EnsureVisible(this.h, (C.int)(x), (C.int)(y))
}

func (this *QScrollArea) EnsureWidgetVisible(childWidget *QWidget) {
	C.QScrollArea_EnsureWidgetVisible(this.h, childWidget.cPointer())
}

func QScrollArea_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QScrollArea_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScrollArea_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QScrollArea_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScrollArea_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QScrollArea_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScrollArea_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QScrollArea_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QScrollArea) EnsureVisible3(x int, y int, xmargin int) {
	C.QScrollArea_EnsureVisible3(this.h, (C.int)(x), (C.int)(y), (C.int)(xmargin))
}

func (this *QScrollArea) EnsureVisible4(x int, y int, xmargin int, ymargin int) {
	C.QScrollArea_EnsureVisible4(this.h, (C.int)(x), (C.int)(y), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QScrollArea) EnsureWidgetVisible2(childWidget *QWidget, xmargin int) {
	C.QScrollArea_EnsureWidgetVisible2(this.h, childWidget.cPointer(), (C.int)(xmargin))
}

func (this *QScrollArea) EnsureWidgetVisible3(childWidget *QWidget, xmargin int, ymargin int) {
	C.QScrollArea_EnsureWidgetVisible3(this.h, childWidget.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

// Delete this object from C++ memory.
func (this *QScrollArea) Delete() {
	C.QScrollArea_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScrollArea) GoGC() {
	runtime.SetFinalizer(this, func(this *QScrollArea) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

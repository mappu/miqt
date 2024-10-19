package qt

/*

#include "gen_qfocusframe.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFocusFrame struct {
	h *C.QFocusFrame
	*QWidget
}

func (this *QFocusFrame) cPointer() *C.QFocusFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFocusFrame) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQFocusFrame(h *C.QFocusFrame) *QFocusFrame {
	if h == nil {
		return nil
	}
	return &QFocusFrame{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQFocusFrame(h unsafe.Pointer) *QFocusFrame {
	return newQFocusFrame((*C.QFocusFrame)(h))
}

// NewQFocusFrame constructs a new QFocusFrame object.
func NewQFocusFrame() *QFocusFrame {
	ret := C.QFocusFrame_new()
	return newQFocusFrame(ret)
}

// NewQFocusFrame2 constructs a new QFocusFrame object.
func NewQFocusFrame2(parent *QWidget) *QFocusFrame {
	ret := C.QFocusFrame_new2(parent.cPointer())
	return newQFocusFrame(ret)
}

func (this *QFocusFrame) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QFocusFrame_MetaObject(this.h)))
}

func (this *QFocusFrame) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFocusFrame_Metacast(this.h, param1_Cstring))
}

func QFocusFrame_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFocusFrame_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFocusFrame) SetWidget(widget *QWidget) {
	C.QFocusFrame_SetWidget(this.h, widget.cPointer())
}

func (this *QFocusFrame) Widget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QFocusFrame_Widget(this.h)))
}

func QFocusFrame_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFocusFrame_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFocusFrame_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFocusFrame_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFocusFrame_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFocusFrame) Delete() {
	C.QFocusFrame_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFocusFrame) GoGC() {
	runtime.SetFinalizer(this, func(this *QFocusFrame) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt

/*

#include "gen_qwidgetaction.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QWidgetAction struct {
	h *C.QWidgetAction
	*QAction
}

func (this *QWidgetAction) cPointer() *C.QWidgetAction {
	if this == nil {
		return nil
	}
	return this.h
}

func newQWidgetAction(h *C.QWidgetAction) *QWidgetAction {
	if h == nil {
		return nil
	}
	return &QWidgetAction{h: h, QAction: newQAction_U(unsafe.Pointer(h))}
}

func newQWidgetAction_U(h unsafe.Pointer) *QWidgetAction {
	return newQWidgetAction((*C.QWidgetAction)(h))
}

// NewQWidgetAction constructs a new QWidgetAction object.
func NewQWidgetAction(parent *QObject) *QWidgetAction {
	ret := C.QWidgetAction_new(parent.cPointer())
	return newQWidgetAction(ret)
}

func (this *QWidgetAction) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QWidgetAction_MetaObject(this.h)))
}

func QWidgetAction_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QWidgetAction_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWidgetAction_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QWidgetAction_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWidgetAction) SetDefaultWidget(w *QWidget) {
	C.QWidgetAction_SetDefaultWidget(this.h, w.cPointer())
}

func (this *QWidgetAction) DefaultWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidgetAction_DefaultWidget(this.h)))
}

func (this *QWidgetAction) RequestWidget(parent *QWidget) *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QWidgetAction_RequestWidget(this.h, parent.cPointer())))
}

func (this *QWidgetAction) ReleaseWidget(widget *QWidget) {
	C.QWidgetAction_ReleaseWidget(this.h, widget.cPointer())
}

func QWidgetAction_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWidgetAction_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWidgetAction_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWidgetAction_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWidgetAction_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWidgetAction_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWidgetAction_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWidgetAction_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWidgetAction) Delete() {
	C.QWidgetAction_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWidgetAction) GoGC() {
	runtime.SetFinalizer(this, func(this *QWidgetAction) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

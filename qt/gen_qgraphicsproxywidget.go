package qt

/*

#include "gen_qgraphicsproxywidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGraphicsProxyWidget__ int

const (
	QGraphicsProxyWidget__Type QGraphicsProxyWidget__ = 12
)

type QGraphicsProxyWidget struct {
	h *C.QGraphicsProxyWidget
	*QGraphicsWidget
}

func (this *QGraphicsProxyWidget) cPointer() *C.QGraphicsProxyWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsProxyWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGraphicsProxyWidget(h *C.QGraphicsProxyWidget) *QGraphicsProxyWidget {
	if h == nil {
		return nil
	}
	return &QGraphicsProxyWidget{h: h, QGraphicsWidget: UnsafeNewQGraphicsWidget(unsafe.Pointer(h))}
}

func UnsafeNewQGraphicsProxyWidget(h unsafe.Pointer) *QGraphicsProxyWidget {
	return newQGraphicsProxyWidget((*C.QGraphicsProxyWidget)(h))
}

// NewQGraphicsProxyWidget constructs a new QGraphicsProxyWidget object.
func NewQGraphicsProxyWidget() *QGraphicsProxyWidget {
	ret := C.QGraphicsProxyWidget_new()
	return newQGraphicsProxyWidget(ret)
}

// NewQGraphicsProxyWidget2 constructs a new QGraphicsProxyWidget object.
func NewQGraphicsProxyWidget2(parent *QGraphicsItem) *QGraphicsProxyWidget {
	ret := C.QGraphicsProxyWidget_new2(parent.cPointer())
	return newQGraphicsProxyWidget(ret)
}

// NewQGraphicsProxyWidget3 constructs a new QGraphicsProxyWidget object.
func NewQGraphicsProxyWidget3(parent *QGraphicsItem, wFlags WindowType) *QGraphicsProxyWidget {
	ret := C.QGraphicsProxyWidget_new3(parent.cPointer(), (C.int)(wFlags))
	return newQGraphicsProxyWidget(ret)
}

func (this *QGraphicsProxyWidget) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsProxyWidget_MetaObject(this.h)))
}

func (this *QGraphicsProxyWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QGraphicsProxyWidget_Metacast(this.h, param1_Cstring)
}

func QGraphicsProxyWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsProxyWidget_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsProxyWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsProxyWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGraphicsProxyWidget) SetWidget(widget *QWidget) {
	C.QGraphicsProxyWidget_SetWidget(this.h, widget.cPointer())
}

func (this *QGraphicsProxyWidget) Widget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QGraphicsProxyWidget_Widget(this.h)))
}

func (this *QGraphicsProxyWidget) SubWidgetRect(widget *QWidget) *QRectF {
	_ret := C.QGraphicsProxyWidget_SubWidgetRect(this.h, widget.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsProxyWidget) SetGeometry(rect *QRectF) {
	C.QGraphicsProxyWidget_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsProxyWidget) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsProxyWidget_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsProxyWidget) Type() int {
	return (int)(C.QGraphicsProxyWidget_Type(this.h))
}

func (this *QGraphicsProxyWidget) CreateProxyForChildWidget(child *QWidget) *QGraphicsProxyWidget {
	return UnsafeNewQGraphicsProxyWidget(unsafe.Pointer(C.QGraphicsProxyWidget_CreateProxyForChildWidget(this.h, child.cPointer())))
}

func QGraphicsProxyWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsProxyWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsProxyWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsProxyWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsProxyWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsProxyWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsProxyWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsProxyWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGraphicsProxyWidget) Delete() {
	C.QGraphicsProxyWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsProxyWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsProxyWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

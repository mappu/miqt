package qt

/*

#include "gen_qdrag.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDrag struct {
	h *C.QDrag
	*QObject
}

func (this *QDrag) cPointer() *C.QDrag {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDrag(h *C.QDrag) *QDrag {
	if h == nil {
		return nil
	}
	return &QDrag{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQDrag_U(h unsafe.Pointer) *QDrag {
	return newQDrag((*C.QDrag)(h))
}

// NewQDrag constructs a new QDrag object.
func NewQDrag(dragSource *QObject) *QDrag {
	ret := C.QDrag_new(dragSource.cPointer())
	return newQDrag(ret)
}

func (this *QDrag) MetaObject() *QMetaObject {
	ret := C.QDrag_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QDrag_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDrag_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDrag_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDrag_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDrag) SetMimeData(data *QMimeData) {
	C.QDrag_SetMimeData(this.h, data.cPointer())
}

func (this *QDrag) MimeData() *QMimeData {
	ret := C.QDrag_MimeData(this.h)
	return newQMimeData_U(unsafe.Pointer(ret))
}

func (this *QDrag) SetPixmap(pixmap *QPixmap) {
	C.QDrag_SetPixmap(this.h, pixmap.cPointer())
}

func (this *QDrag) Pixmap() *QPixmap {
	ret := C.QDrag_Pixmap(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDrag) SetHotSpot(hotspot *QPoint) {
	C.QDrag_SetHotSpot(this.h, hotspot.cPointer())
}

func (this *QDrag) HotSpot() *QPoint {
	ret := C.QDrag_HotSpot(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDrag) Source() *QObject {
	ret := C.QDrag_Source(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QDrag) Target() *QObject {
	ret := C.QDrag_Target(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QDrag) Start() DropAction {
	ret := C.QDrag_Start(this.h)
	return (DropAction)(ret)
}

func (this *QDrag) Exec() DropAction {
	ret := C.QDrag_Exec(this.h)
	return (DropAction)(ret)
}

func (this *QDrag) Exec2(supportedActions int, defaultAction DropAction) DropAction {
	ret := C.QDrag_Exec2(this.h, (C.int)(supportedActions), (C.uintptr_t)(defaultAction))
	return (DropAction)(ret)
}

func (this *QDrag) SetDragCursor(cursor *QPixmap, action DropAction) {
	C.QDrag_SetDragCursor(this.h, cursor.cPointer(), (C.uintptr_t)(action))
}

func (this *QDrag) DragCursor(action DropAction) *QPixmap {
	ret := C.QDrag_DragCursor(this.h, (C.uintptr_t)(action))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDrag) SupportedActions() int {
	ret := C.QDrag_SupportedActions(this.h)
	return (int)(ret)
}

func (this *QDrag) DefaultAction() DropAction {
	ret := C.QDrag_DefaultAction(this.h)
	return (DropAction)(ret)
}

func QDrag_Cancel() {
	C.QDrag_Cancel()
}

func (this *QDrag) ActionChanged(action DropAction) {
	C.QDrag_ActionChanged(this.h, (C.uintptr_t)(action))
}

func (this *QDrag) OnActionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDrag_connect_ActionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDrag) TargetChanged(newTarget *QObject) {
	C.QDrag_TargetChanged(this.h, newTarget.cPointer())
}

func (this *QDrag) OnTargetChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDrag_connect_TargetChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QDrag_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDrag_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDrag_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDrag_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDrag_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDrag_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDrag_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDrag_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDrag) Start1(supportedActions int) DropAction {
	ret := C.QDrag_Start1(this.h, (C.int)(supportedActions))
	return (DropAction)(ret)
}

func (this *QDrag) Exec1(supportedActions int) DropAction {
	ret := C.QDrag_Exec1(this.h, (C.int)(supportedActions))
	return (DropAction)(ret)
}

func (this *QDrag) Delete() {
	C.QDrag_Delete(this.h)
}

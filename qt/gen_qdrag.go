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

func (this *QDrag) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQDrag(h *C.QDrag) *QDrag {
	if h == nil {
		return nil
	}
	return &QDrag{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQDrag(h unsafe.Pointer) *QDrag {
	return newQDrag((*C.QDrag)(h))
}

// NewQDrag constructs a new QDrag object.
func NewQDrag(dragSource *QObject) *QDrag {
	ret := C.QDrag_new(dragSource.cPointer())
	return newQDrag(ret)
}

func (this *QDrag) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDrag_MetaObject(this.h)))
}

func (this *QDrag) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDrag_Metacast(this.h, param1_Cstring))
}

func QDrag_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDrag_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDrag) SetMimeData(data *QMimeData) {
	C.QDrag_SetMimeData(this.h, data.cPointer())
}

func (this *QDrag) MimeData() *QMimeData {
	return UnsafeNewQMimeData(unsafe.Pointer(C.QDrag_MimeData(this.h)))
}

func (this *QDrag) SetPixmap(pixmap *QPixmap) {
	C.QDrag_SetPixmap(this.h, pixmap.cPointer())
}

func (this *QDrag) Pixmap() *QPixmap {
	_ret := C.QDrag_Pixmap(this.h)
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDrag) SetHotSpot(hotspot *QPoint) {
	C.QDrag_SetHotSpot(this.h, hotspot.cPointer())
}

func (this *QDrag) HotSpot() *QPoint {
	_ret := C.QDrag_HotSpot(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDrag) Source() *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QDrag_Source(this.h)))
}

func (this *QDrag) Target() *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QDrag_Target(this.h)))
}

func (this *QDrag) Start() DropAction {
	return (DropAction)(C.QDrag_Start(this.h))
}

func (this *QDrag) Exec() DropAction {
	return (DropAction)(C.QDrag_Exec(this.h))
}

func (this *QDrag) Exec2(supportedActions DropAction, defaultAction DropAction) DropAction {
	return (DropAction)(C.QDrag_Exec2(this.h, (C.int)(supportedActions), (C.int)(defaultAction)))
}

func (this *QDrag) SetDragCursor(cursor *QPixmap, action DropAction) {
	C.QDrag_SetDragCursor(this.h, cursor.cPointer(), (C.int)(action))
}

func (this *QDrag) DragCursor(action DropAction) *QPixmap {
	_ret := C.QDrag_DragCursor(this.h, (C.int)(action))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDrag) SupportedActions() DropAction {
	return (DropAction)(C.QDrag_SupportedActions(this.h))
}

func (this *QDrag) DefaultAction() DropAction {
	return (DropAction)(C.QDrag_DefaultAction(this.h))
}

func QDrag_Cancel() {
	C.QDrag_Cancel()
}

func (this *QDrag) ActionChanged(action DropAction) {
	C.QDrag_ActionChanged(this.h, (C.int)(action))
}
func (this *QDrag) OnActionChanged(slot func(action DropAction)) {
	C.QDrag_connect_ActionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_ActionChanged
func miqt_exec_callback_QDrag_ActionChanged(cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(action)

	gofunc(slotval1)
}

func (this *QDrag) TargetChanged(newTarget *QObject) {
	C.QDrag_TargetChanged(this.h, newTarget.cPointer())
}
func (this *QDrag) OnTargetChanged(slot func(newTarget *QObject)) {
	C.QDrag_connect_TargetChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_TargetChanged
func miqt_exec_callback_QDrag_TargetChanged(cb C.intptr_t, newTarget *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newTarget *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(newTarget))

	gofunc(slotval1)
}

func QDrag_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDrag_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDrag_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDrag_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDrag) Start1(supportedActions DropAction) DropAction {
	return (DropAction)(C.QDrag_Start1(this.h, (C.int)(supportedActions)))
}

func (this *QDrag) Exec1(supportedActions DropAction) DropAction {
	return (DropAction)(C.QDrag_Exec1(this.h, (C.int)(supportedActions)))
}

// Delete this object from C++ memory.
func (this *QDrag) Delete() {
	C.QDrag_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDrag) GoGC() {
	runtime.SetFinalizer(this, func(this *QDrag) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

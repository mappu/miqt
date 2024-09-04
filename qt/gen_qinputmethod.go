package qt

/*

#include "gen_qinputmethod.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QInputMethod__Action int

const (
	QInputMethod__Action__Click       QInputMethod__Action = 0
	QInputMethod__Action__ContextMenu QInputMethod__Action = 1
)

type QInputMethod struct {
	h *C.QInputMethod
	*QObject
}

func (this *QInputMethod) cPointer() *C.QInputMethod {
	if this == nil {
		return nil
	}
	return this.h
}

func newQInputMethod(h *C.QInputMethod) *QInputMethod {
	if h == nil {
		return nil
	}
	return &QInputMethod{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQInputMethod_U(h unsafe.Pointer) *QInputMethod {
	return newQInputMethod((*C.QInputMethod)(h))
}

func (this *QInputMethod) MetaObject() *QMetaObject {
	ret := C.QInputMethod_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QInputMethod_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputMethod_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputMethod_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputMethod_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QInputMethod) InputItemTransform() *QTransform {
	ret := C.QInputMethod_InputItemTransform(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QInputMethod) SetInputItemTransform(transform *QTransform) {
	C.QInputMethod_SetInputItemTransform(this.h, transform.cPointer())
}

func (this *QInputMethod) InputItemRectangle() *QRectF {
	ret := C.QInputMethod_InputItemRectangle(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QInputMethod) SetInputItemRectangle(rect *QRectF) {
	C.QInputMethod_SetInputItemRectangle(this.h, rect.cPointer())
}

func (this *QInputMethod) CursorRectangle() *QRectF {
	ret := C.QInputMethod_CursorRectangle(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QInputMethod) AnchorRectangle() *QRectF {
	ret := C.QInputMethod_AnchorRectangle(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QInputMethod) KeyboardRectangle() *QRectF {
	ret := C.QInputMethod_KeyboardRectangle(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QInputMethod) InputItemClipRectangle() *QRectF {
	ret := C.QInputMethod_InputItemClipRectangle(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QInputMethod) IsVisible() bool {
	ret := C.QInputMethod_IsVisible(this.h)
	return (bool)(ret)
}

func (this *QInputMethod) SetVisible(visible bool) {
	C.QInputMethod_SetVisible(this.h, (C.bool)(visible))
}

func (this *QInputMethod) IsAnimating() bool {
	ret := C.QInputMethod_IsAnimating(this.h)
	return (bool)(ret)
}

func (this *QInputMethod) Locale() *QLocale {
	ret := C.QInputMethod_Locale(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLocale(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLocale) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QInputMethod) InputDirection() LayoutDirection {
	ret := C.QInputMethod_InputDirection(this.h)
	return (LayoutDirection)(ret)
}

func QInputMethod_QueryFocusObject(query InputMethodQuery, argument QVariant) *QVariant {
	ret := C.QInputMethod_QueryFocusObject((C.uintptr_t)(query), argument.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QInputMethod) Show() {
	C.QInputMethod_Show(this.h)
}

func (this *QInputMethod) Hide() {
	C.QInputMethod_Hide(this.h)
}

func (this *QInputMethod) Update(queries int) {
	C.QInputMethod_Update(this.h, (C.int)(queries))
}

func (this *QInputMethod) Reset() {
	C.QInputMethod_Reset(this.h)
}

func (this *QInputMethod) Commit() {
	C.QInputMethod_Commit(this.h)
}

func (this *QInputMethod) InvokeAction(a QInputMethod__Action, cursorPosition int) {
	C.QInputMethod_InvokeAction(this.h, (C.uintptr_t)(a), (C.int)(cursorPosition))
}

func (this *QInputMethod) CursorRectangleChanged() {
	C.QInputMethod_CursorRectangleChanged(this.h)
}

func (this *QInputMethod) OnCursorRectangleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputMethod_connect_CursorRectangleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputMethod) AnchorRectangleChanged() {
	C.QInputMethod_AnchorRectangleChanged(this.h)
}

func (this *QInputMethod) OnAnchorRectangleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputMethod_connect_AnchorRectangleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputMethod) KeyboardRectangleChanged() {
	C.QInputMethod_KeyboardRectangleChanged(this.h)
}

func (this *QInputMethod) OnKeyboardRectangleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputMethod_connect_KeyboardRectangleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputMethod) InputItemClipRectangleChanged() {
	C.QInputMethod_InputItemClipRectangleChanged(this.h)
}

func (this *QInputMethod) OnInputItemClipRectangleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputMethod_connect_InputItemClipRectangleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputMethod) VisibleChanged() {
	C.QInputMethod_VisibleChanged(this.h)
}

func (this *QInputMethod) OnVisibleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputMethod_connect_VisibleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputMethod) AnimatingChanged() {
	C.QInputMethod_AnimatingChanged(this.h)
}

func (this *QInputMethod) OnAnimatingChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputMethod_connect_AnimatingChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputMethod) LocaleChanged() {
	C.QInputMethod_LocaleChanged(this.h)
}

func (this *QInputMethod) OnLocaleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputMethod_connect_LocaleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QInputMethod) InputDirectionChanged(newDirection LayoutDirection) {
	C.QInputMethod_InputDirectionChanged(this.h, (C.uintptr_t)(newDirection))
}

func (this *QInputMethod) OnInputDirectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QInputMethod_connect_InputDirectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QInputMethod_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputMethod_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputMethod_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputMethod_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputMethod_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputMethod_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QInputMethod_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputMethod_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

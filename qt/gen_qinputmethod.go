package qt

/*

#include "gen_qinputmethod.h"
#include <stdlib.h>

*/
import "C"

import (
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
	return newQMetaObject_U(unsafe.Pointer(C.QInputMethod_MetaObject(this.h)))
}

func QInputMethod_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QInputMethod_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QInputMethod_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QInputMethod_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QInputMethod) InputItemTransform() *QTransform {
	_ret := C.QInputMethod_InputItemTransform(this.h)
	_goptr := newQTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) SetInputItemTransform(transform *QTransform) {
	C.QInputMethod_SetInputItemTransform(this.h, transform.cPointer())
}

func (this *QInputMethod) InputItemRectangle() *QRectF {
	_ret := C.QInputMethod_InputItemRectangle(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) SetInputItemRectangle(rect *QRectF) {
	C.QInputMethod_SetInputItemRectangle(this.h, rect.cPointer())
}

func (this *QInputMethod) CursorRectangle() *QRectF {
	_ret := C.QInputMethod_CursorRectangle(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) AnchorRectangle() *QRectF {
	_ret := C.QInputMethod_AnchorRectangle(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) KeyboardRectangle() *QRectF {
	_ret := C.QInputMethod_KeyboardRectangle(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) InputItemClipRectangle() *QRectF {
	_ret := C.QInputMethod_InputItemClipRectangle(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) IsVisible() bool {
	return (bool)(C.QInputMethod_IsVisible(this.h))
}

func (this *QInputMethod) SetVisible(visible bool) {
	C.QInputMethod_SetVisible(this.h, (C.bool)(visible))
}

func (this *QInputMethod) IsAnimating() bool {
	return (bool)(C.QInputMethod_IsAnimating(this.h))
}

func (this *QInputMethod) Locale() *QLocale {
	_ret := C.QInputMethod_Locale(this.h)
	_goptr := newQLocale(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) InputDirection() LayoutDirection {
	return (LayoutDirection)(C.QInputMethod_InputDirection(this.h))
}

func QInputMethod_QueryFocusObject(query InputMethodQuery, argument QVariant) *QVariant {
	_ret := C.QInputMethod_QueryFocusObject((C.int)(query), argument.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
	C.QInputMethod_InvokeAction(this.h, (C.int)(a), (C.int)(cursorPosition))
}

func (this *QInputMethod) CursorRectangleChanged() {
	C.QInputMethod_CursorRectangleChanged(this.h)
}
func (this *QInputMethod) OnCursorRectangleChanged(slot func()) {
	C.QInputMethod_connect_CursorRectangleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QInputMethod_CursorRectangleChanged
func miqt_exec_callback_QInputMethod_CursorRectangleChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) AnchorRectangleChanged() {
	C.QInputMethod_AnchorRectangleChanged(this.h)
}
func (this *QInputMethod) OnAnchorRectangleChanged(slot func()) {
	C.QInputMethod_connect_AnchorRectangleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QInputMethod_AnchorRectangleChanged
func miqt_exec_callback_QInputMethod_AnchorRectangleChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) KeyboardRectangleChanged() {
	C.QInputMethod_KeyboardRectangleChanged(this.h)
}
func (this *QInputMethod) OnKeyboardRectangleChanged(slot func()) {
	C.QInputMethod_connect_KeyboardRectangleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QInputMethod_KeyboardRectangleChanged
func miqt_exec_callback_QInputMethod_KeyboardRectangleChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) InputItemClipRectangleChanged() {
	C.QInputMethod_InputItemClipRectangleChanged(this.h)
}
func (this *QInputMethod) OnInputItemClipRectangleChanged(slot func()) {
	C.QInputMethod_connect_InputItemClipRectangleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QInputMethod_InputItemClipRectangleChanged
func miqt_exec_callback_QInputMethod_InputItemClipRectangleChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) VisibleChanged() {
	C.QInputMethod_VisibleChanged(this.h)
}
func (this *QInputMethod) OnVisibleChanged(slot func()) {
	C.QInputMethod_connect_VisibleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QInputMethod_VisibleChanged
func miqt_exec_callback_QInputMethod_VisibleChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) AnimatingChanged() {
	C.QInputMethod_AnimatingChanged(this.h)
}
func (this *QInputMethod) OnAnimatingChanged(slot func()) {
	C.QInputMethod_connect_AnimatingChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QInputMethod_AnimatingChanged
func miqt_exec_callback_QInputMethod_AnimatingChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) LocaleChanged() {
	C.QInputMethod_LocaleChanged(this.h)
}
func (this *QInputMethod) OnLocaleChanged(slot func()) {
	C.QInputMethod_connect_LocaleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QInputMethod_LocaleChanged
func miqt_exec_callback_QInputMethod_LocaleChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) InputDirectionChanged(newDirection LayoutDirection) {
	C.QInputMethod_InputDirectionChanged(this.h, (C.int)(newDirection))
}
func (this *QInputMethod) OnInputDirectionChanged(slot func(newDirection LayoutDirection)) {
	C.QInputMethod_connect_InputDirectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QInputMethod_InputDirectionChanged
func miqt_exec_callback_QInputMethod_InputDirectionChanged(cb *C.void, newDirection C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(newDirection LayoutDirection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (LayoutDirection)(newDirection)

	gofunc(slotval1)
}

func QInputMethod_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QInputMethod_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QInputMethod_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QInputMethod_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QInputMethod_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QInputMethod_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QInputMethod_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QInputMethod_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

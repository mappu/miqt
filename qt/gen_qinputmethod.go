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
	QInputMethod__Click       QInputMethod__Action = 0
	QInputMethod__ContextMenu QInputMethod__Action = 1
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

func (this *QInputMethod) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQInputMethod constructs the type using only CGO pointers.
func newQInputMethod(h *C.QInputMethod) *QInputMethod {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QInputMethod_virtbase(h, &outptr_QObject)

	return &QInputMethod{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQInputMethod constructs the type using only unsafe pointers.
func UnsafeNewQInputMethod(h unsafe.Pointer) *QInputMethod {
	return newQInputMethod((*C.QInputMethod)(h))
}

func (this *QInputMethod) MetaObject() *QMetaObject {
	return newQMetaObject(C.QInputMethod_metaObject(this.h))
}

func (this *QInputMethod) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QInputMethod_metacast(this.h, param1_Cstring))
}

func QInputMethod_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QInputMethod_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputMethod_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QInputMethod_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputMethod) InputItemTransform() *QTransform {
	_goptr := newQTransform(C.QInputMethod_inputItemTransform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) SetInputItemTransform(transform *QTransform) {
	C.QInputMethod_setInputItemTransform(this.h, transform.cPointer())
}

func (this *QInputMethod) InputItemRectangle() *QRectF {
	_goptr := newQRectF(C.QInputMethod_inputItemRectangle(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) SetInputItemRectangle(rect *QRectF) {
	C.QInputMethod_setInputItemRectangle(this.h, rect.cPointer())
}

func (this *QInputMethod) CursorRectangle() *QRectF {
	_goptr := newQRectF(C.QInputMethod_cursorRectangle(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) AnchorRectangle() *QRectF {
	_goptr := newQRectF(C.QInputMethod_anchorRectangle(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) KeyboardRectangle() *QRectF {
	_goptr := newQRectF(C.QInputMethod_keyboardRectangle(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) InputItemClipRectangle() *QRectF {
	_goptr := newQRectF(C.QInputMethod_inputItemClipRectangle(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) IsVisible() bool {
	return (bool)(C.QInputMethod_isVisible(this.h))
}

func (this *QInputMethod) SetVisible(visible bool) {
	C.QInputMethod_setVisible(this.h, (C.bool)(visible))
}

func (this *QInputMethod) IsAnimating() bool {
	return (bool)(C.QInputMethod_isAnimating(this.h))
}

func (this *QInputMethod) Locale() *QLocale {
	_goptr := newQLocale(C.QInputMethod_locale(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) InputDirection() LayoutDirection {
	return (LayoutDirection)(C.QInputMethod_inputDirection(this.h))
}

func QInputMethod_QueryFocusObject(query InputMethodQuery, argument QVariant) *QVariant {
	_goptr := newQVariant(C.QInputMethod_queryFocusObject((C.int)(query), argument.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethod) Show() {
	C.QInputMethod_show(this.h)
}

func (this *QInputMethod) Hide() {
	C.QInputMethod_hide(this.h)
}

func (this *QInputMethod) Update(queries InputMethodQuery) {
	C.QInputMethod_update(this.h, (C.int)(queries))
}

func (this *QInputMethod) Reset() {
	C.QInputMethod_reset(this.h)
}

func (this *QInputMethod) Commit() {
	C.QInputMethod_commit(this.h)
}

func (this *QInputMethod) InvokeAction(a QInputMethod__Action, cursorPosition int) {
	C.QInputMethod_invokeAction(this.h, (C.int)(a), (C.int)(cursorPosition))
}

func (this *QInputMethod) CursorRectangleChanged() {
	C.QInputMethod_cursorRectangleChanged(this.h)
}
func (this *QInputMethod) OnCursorRectangleChanged(slot func()) {
	C.QInputMethod_connect_cursorRectangleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputMethod_cursorRectangleChanged
func miqt_exec_callback_QInputMethod_cursorRectangleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) AnchorRectangleChanged() {
	C.QInputMethod_anchorRectangleChanged(this.h)
}
func (this *QInputMethod) OnAnchorRectangleChanged(slot func()) {
	C.QInputMethod_connect_anchorRectangleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputMethod_anchorRectangleChanged
func miqt_exec_callback_QInputMethod_anchorRectangleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) KeyboardRectangleChanged() {
	C.QInputMethod_keyboardRectangleChanged(this.h)
}
func (this *QInputMethod) OnKeyboardRectangleChanged(slot func()) {
	C.QInputMethod_connect_keyboardRectangleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputMethod_keyboardRectangleChanged
func miqt_exec_callback_QInputMethod_keyboardRectangleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) InputItemClipRectangleChanged() {
	C.QInputMethod_inputItemClipRectangleChanged(this.h)
}
func (this *QInputMethod) OnInputItemClipRectangleChanged(slot func()) {
	C.QInputMethod_connect_inputItemClipRectangleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputMethod_inputItemClipRectangleChanged
func miqt_exec_callback_QInputMethod_inputItemClipRectangleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) VisibleChanged() {
	C.QInputMethod_visibleChanged(this.h)
}
func (this *QInputMethod) OnVisibleChanged(slot func()) {
	C.QInputMethod_connect_visibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputMethod_visibleChanged
func miqt_exec_callback_QInputMethod_visibleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) AnimatingChanged() {
	C.QInputMethod_animatingChanged(this.h)
}
func (this *QInputMethod) OnAnimatingChanged(slot func()) {
	C.QInputMethod_connect_animatingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputMethod_animatingChanged
func miqt_exec_callback_QInputMethod_animatingChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) LocaleChanged() {
	C.QInputMethod_localeChanged(this.h)
}
func (this *QInputMethod) OnLocaleChanged(slot func()) {
	C.QInputMethod_connect_localeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputMethod_localeChanged
func miqt_exec_callback_QInputMethod_localeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QInputMethod) InputDirectionChanged(newDirection LayoutDirection) {
	C.QInputMethod_inputDirectionChanged(this.h, (C.int)(newDirection))
}
func (this *QInputMethod) OnInputDirectionChanged(slot func(newDirection LayoutDirection)) {
	C.QInputMethod_connect_inputDirectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QInputMethod_inputDirectionChanged
func miqt_exec_callback_QInputMethod_inputDirectionChanged(cb C.intptr_t, newDirection C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newDirection LayoutDirection))
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
	var _ms C.struct_miqt_string = C.QInputMethod_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputMethod_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputMethod_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputMethod_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputMethod_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QInputMethod_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QInputMethod_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

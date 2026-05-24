package qwt

/*

#include "gen_qwt_event_pattern.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtEventPattern__MousePatternCode int

const (
	QwtEventPattern__MouseSelect1      QwtEventPattern__MousePatternCode = 0
	QwtEventPattern__MouseSelect2      QwtEventPattern__MousePatternCode = 1
	QwtEventPattern__MouseSelect3      QwtEventPattern__MousePatternCode = 2
	QwtEventPattern__MouseSelect4      QwtEventPattern__MousePatternCode = 3
	QwtEventPattern__MouseSelect5      QwtEventPattern__MousePatternCode = 4
	QwtEventPattern__MouseSelect6      QwtEventPattern__MousePatternCode = 5
	QwtEventPattern__MousePatternCount QwtEventPattern__MousePatternCode = 6
)

type QwtEventPattern__KeyPatternCode int

const (
	QwtEventPattern__KeySelect1      QwtEventPattern__KeyPatternCode = 0
	QwtEventPattern__KeySelect2      QwtEventPattern__KeyPatternCode = 1
	QwtEventPattern__KeyAbort        QwtEventPattern__KeyPatternCode = 2
	QwtEventPattern__KeyLeft         QwtEventPattern__KeyPatternCode = 3
	QwtEventPattern__KeyRight        QwtEventPattern__KeyPatternCode = 4
	QwtEventPattern__KeyUp           QwtEventPattern__KeyPatternCode = 5
	QwtEventPattern__KeyDown         QwtEventPattern__KeyPatternCode = 6
	QwtEventPattern__KeyRedo         QwtEventPattern__KeyPatternCode = 7
	QwtEventPattern__KeyUndo         QwtEventPattern__KeyPatternCode = 8
	QwtEventPattern__KeyHome         QwtEventPattern__KeyPatternCode = 9
	QwtEventPattern__KeyPatternCount QwtEventPattern__KeyPatternCode = 10
)

type QwtEventPattern struct {
	h *C.QwtEventPattern
}

func (this *QwtEventPattern) cPointer() *C.QwtEventPattern {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtEventPattern) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtEventPattern constructs the type using only CGO pointers.
func newQwtEventPattern(h *C.QwtEventPattern) *QwtEventPattern {
	if h == nil {
		return nil
	}

	return &QwtEventPattern{h: h}
}

// UnsafeNewQwtEventPattern constructs the type using only unsafe pointers.
func UnsafeNewQwtEventPattern(h unsafe.Pointer) *QwtEventPattern {
	return newQwtEventPattern((*C.QwtEventPattern)(h))
}

// NewQwtEventPattern constructs a new QwtEventPattern object.
func NewQwtEventPattern() *QwtEventPattern {

	return newQwtEventPattern(C.QwtEventPattern_new())
}

// NewQwtEventPattern2 constructs a new QwtEventPattern object.
func NewQwtEventPattern2(param1 *QwtEventPattern) *QwtEventPattern {

	return newQwtEventPattern(C.QwtEventPattern_new2(param1.cPointer()))
}

func (this *QwtEventPattern) InitMousePattern(numButtons int) {
	C.QwtEventPattern_initMousePattern(this.h, (C.int)(numButtons))
}

func (this *QwtEventPattern) InitKeyPattern() {
	C.QwtEventPattern_initKeyPattern(this.h)
}

func (this *QwtEventPattern) SetMousePattern(param1 QwtEventPattern__MousePatternCode, button qt.MouseButton) {
	C.QwtEventPattern_setMousePattern(this.h, (C.int)(param1), (C.int)(button))
}

func (this *QwtEventPattern) SetKeyPattern(param1 QwtEventPattern__KeyPatternCode, key int) {
	C.QwtEventPattern_setKeyPattern(this.h, (C.int)(param1), (C.int)(key))
}

func (this *QwtEventPattern) SetMousePatternWithMousePattern(mousePattern []QwtEventPattern__MousePattern) {
	mousePattern_CArray := (*[0xffff]*C.QwtEventPattern__MousePattern)(C.malloc(C.size_t(8 * len(mousePattern))))
	defer C.free(unsafe.Pointer(mousePattern_CArray))
	for i := range mousePattern {
		mousePattern_CArray[i] = mousePattern[i].cPointer()
	}
	mousePattern_ma := C.struct_miqt_array{len: C.size_t(len(mousePattern)), data: unsafe.Pointer(mousePattern_CArray)}
	C.QwtEventPattern_setMousePatternWithMousePattern(this.h, mousePattern_ma)
}

func (this *QwtEventPattern) SetKeyPatternWithKeyPattern(keyPattern []QwtEventPattern__KeyPattern) {
	keyPattern_CArray := (*[0xffff]*C.QwtEventPattern__KeyPattern)(C.malloc(C.size_t(8 * len(keyPattern))))
	defer C.free(unsafe.Pointer(keyPattern_CArray))
	for i := range keyPattern {
		keyPattern_CArray[i] = keyPattern[i].cPointer()
	}
	keyPattern_ma := C.struct_miqt_array{len: C.size_t(len(keyPattern)), data: unsafe.Pointer(keyPattern_CArray)}
	C.QwtEventPattern_setKeyPatternWithKeyPattern(this.h, keyPattern_ma)
}

func (this *QwtEventPattern) MousePattern() []QwtEventPattern__MousePattern {
	var _ma C.struct_miqt_array = C.QwtEventPattern_mousePattern(this.h)
	_ret := make([]QwtEventPattern__MousePattern, int(_ma.len))
	_outCast := (*[0xffff]*C.QwtEventPattern__MousePattern)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQwtEventPattern__MousePattern(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QwtEventPattern) KeyPattern() []QwtEventPattern__KeyPattern {
	var _ma C.struct_miqt_array = C.QwtEventPattern_keyPattern(this.h)
	_ret := make([]QwtEventPattern__KeyPattern, int(_ma.len))
	_outCast := (*[0xffff]*C.QwtEventPattern__KeyPattern)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQwtEventPattern__KeyPattern(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QwtEventPattern) MousePattern2() []QwtEventPattern__MousePattern {
	var _ma C.struct_miqt_array = C.QwtEventPattern_mousePattern2(this.h)
	_ret := make([]QwtEventPattern__MousePattern, int(_ma.len))
	_outCast := (*[0xffff]*C.QwtEventPattern__MousePattern)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQwtEventPattern__MousePattern(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QwtEventPattern) KeyPattern2() []QwtEventPattern__KeyPattern {
	var _ma C.struct_miqt_array = C.QwtEventPattern_keyPattern2(this.h)
	_ret := make([]QwtEventPattern__KeyPattern, int(_ma.len))
	_outCast := (*[0xffff]*C.QwtEventPattern__KeyPattern)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQwtEventPattern__KeyPattern(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QwtEventPattern) MouseMatch(param1 QwtEventPattern__MousePatternCode, param2 *qt.QMouseEvent) bool {
	return (bool)(C.QwtEventPattern_mouseMatch(this.h, (C.int)(param1), (*C.QMouseEvent)(param2.UnsafePointer())))
}

func (this *QwtEventPattern) KeyMatch(param1 QwtEventPattern__KeyPatternCode, param2 *qt.QKeyEvent) bool {
	return (bool)(C.QwtEventPattern_keyMatch(this.h, (C.int)(param1), (*C.QKeyEvent)(param2.UnsafePointer())))
}

func (this *QwtEventPattern) OperatorAssign(param1 *QwtEventPattern) {
	C.QwtEventPattern_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtEventPattern) SetMousePattern2(param1 QwtEventPattern__MousePatternCode, button qt.MouseButton, param3 qt.KeyboardModifier) {
	C.QwtEventPattern_setMousePattern2(this.h, (C.int)(param1), (C.int)(button), (C.int)(param3))
}

func (this *QwtEventPattern) SetKeyPattern2(param1 QwtEventPattern__KeyPatternCode, key int, modifiers qt.KeyboardModifier) {
	C.QwtEventPattern_setKeyPattern2(this.h, (C.int)(param1), (C.int)(key), (C.int)(modifiers))
}

func (this *QwtEventPattern) callVirtualBase_MouseMatch2(param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool {

	return (bool)(C.QwtEventPattern_virtualbase_mouseMatch2(unsafe.Pointer(this.h), param1.cPointer(), (*C.QMouseEvent)(param2.UnsafePointer())))

}
func (this *QwtEventPattern) OnMouseMatch2(slot func(super func(param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool, param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool) {
	ok := C.QwtEventPattern_override_virtual_mouseMatch2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtEventPattern_mouseMatch2
func miqt_exec_callback_QwtEventPattern_mouseMatch2(self *C.QwtEventPattern, cb C.intptr_t, param1 *C.QwtEventPattern__MousePattern, param2 *C.QMouseEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool, param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern__MousePattern(param1)

	slotval2 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtEventPattern{h: self}).callVirtualBase_MouseMatch2, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtEventPattern) callVirtualBase_KeyMatch2(param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool {

	return (bool)(C.QwtEventPattern_virtualbase_keyMatch2(unsafe.Pointer(this.h), param1.cPointer(), (*C.QKeyEvent)(param2.UnsafePointer())))

}
func (this *QwtEventPattern) OnKeyMatch2(slot func(super func(param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool, param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool) {
	ok := C.QwtEventPattern_override_virtual_keyMatch2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtEventPattern_keyMatch2
func miqt_exec_callback_QwtEventPattern_keyMatch2(self *C.QwtEventPattern, cb C.intptr_t, param1 *C.QwtEventPattern__KeyPattern, param2 *C.QKeyEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool, param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern__KeyPattern(param1)

	slotval2 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtEventPattern{h: self}).callVirtualBase_KeyMatch2, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QwtEventPattern) Delete() {
	C.QwtEventPattern_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtEventPattern) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtEventPattern) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtEventPattern__MousePattern struct {
	h *C.QwtEventPattern__MousePattern
}

func (this *QwtEventPattern__MousePattern) cPointer() *C.QwtEventPattern__MousePattern {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtEventPattern__MousePattern) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtEventPattern__MousePattern constructs the type using only CGO pointers.
func newQwtEventPattern__MousePattern(h *C.QwtEventPattern__MousePattern) *QwtEventPattern__MousePattern {
	if h == nil {
		return nil
	}

	return &QwtEventPattern__MousePattern{h: h}
}

// UnsafeNewQwtEventPattern__MousePattern constructs the type using only unsafe pointers.
func UnsafeNewQwtEventPattern__MousePattern(h unsafe.Pointer) *QwtEventPattern__MousePattern {
	return newQwtEventPattern__MousePattern((*C.QwtEventPattern__MousePattern)(h))
}

// NewQwtEventPattern__MousePattern constructs a new QwtEventPattern::MousePattern object.
func NewQwtEventPattern__MousePattern() *QwtEventPattern__MousePattern {

	return newQwtEventPattern__MousePattern(C.QwtEventPattern__MousePattern_new())
}

// NewQwtEventPattern__MousePattern2 constructs a new QwtEventPattern::MousePattern object.
func NewQwtEventPattern__MousePattern2(param1 *QwtEventPattern__MousePattern) *QwtEventPattern__MousePattern {

	return newQwtEventPattern__MousePattern(C.QwtEventPattern__MousePattern_new2(param1.cPointer()))
}

// NewQwtEventPattern__MousePattern3 constructs a new QwtEventPattern::MousePattern object.
func NewQwtEventPattern__MousePattern3(btn qt.MouseButton) *QwtEventPattern__MousePattern {

	return newQwtEventPattern__MousePattern(C.QwtEventPattern__MousePattern_new3((C.int)(btn)))
}

// NewQwtEventPattern__MousePattern4 constructs a new QwtEventPattern::MousePattern object.
func NewQwtEventPattern__MousePattern4(btn qt.MouseButton, modifierCodes qt.KeyboardModifier) *QwtEventPattern__MousePattern {

	return newQwtEventPattern__MousePattern(C.QwtEventPattern__MousePattern_new4((C.int)(btn), (C.int)(modifierCodes)))
}

func (this *QwtEventPattern__MousePattern) Button() qt.MouseButton {
	return (qt.MouseButton)(C.QwtEventPattern__MousePattern_button(this.h))
}

func (this *QwtEventPattern__MousePattern) SetButton(button qt.MouseButton) {
	C.QwtEventPattern__MousePattern_setButton(this.h, (C.int)(button))
}

func (this *QwtEventPattern__MousePattern) Modifiers() qt.KeyboardModifier {
	return (qt.KeyboardModifier)(C.QwtEventPattern__MousePattern_modifiers(this.h))
}

func (this *QwtEventPattern__MousePattern) SetModifiers(modifiers qt.KeyboardModifier) {
	C.QwtEventPattern__MousePattern_setModifiers(this.h, (C.int)(modifiers))
}

// Delete this object from C++ memory.
func (this *QwtEventPattern__MousePattern) Delete() {
	C.QwtEventPattern__MousePattern_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtEventPattern__MousePattern) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtEventPattern__MousePattern) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtEventPattern__KeyPattern struct {
	h *C.QwtEventPattern__KeyPattern
}

func (this *QwtEventPattern__KeyPattern) cPointer() *C.QwtEventPattern__KeyPattern {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtEventPattern__KeyPattern) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtEventPattern__KeyPattern constructs the type using only CGO pointers.
func newQwtEventPattern__KeyPattern(h *C.QwtEventPattern__KeyPattern) *QwtEventPattern__KeyPattern {
	if h == nil {
		return nil
	}

	return &QwtEventPattern__KeyPattern{h: h}
}

// UnsafeNewQwtEventPattern__KeyPattern constructs the type using only unsafe pointers.
func UnsafeNewQwtEventPattern__KeyPattern(h unsafe.Pointer) *QwtEventPattern__KeyPattern {
	return newQwtEventPattern__KeyPattern((*C.QwtEventPattern__KeyPattern)(h))
}

// NewQwtEventPattern__KeyPattern constructs a new QwtEventPattern::KeyPattern object.
func NewQwtEventPattern__KeyPattern() *QwtEventPattern__KeyPattern {

	return newQwtEventPattern__KeyPattern(C.QwtEventPattern__KeyPattern_new())
}

// NewQwtEventPattern__KeyPattern2 constructs a new QwtEventPattern::KeyPattern object.
func NewQwtEventPattern__KeyPattern2(param1 *QwtEventPattern__KeyPattern) *QwtEventPattern__KeyPattern {

	return newQwtEventPattern__KeyPattern(C.QwtEventPattern__KeyPattern_new2(param1.cPointer()))
}

// NewQwtEventPattern__KeyPattern3 constructs a new QwtEventPattern::KeyPattern object.
func NewQwtEventPattern__KeyPattern3(keyCode int) *QwtEventPattern__KeyPattern {

	return newQwtEventPattern__KeyPattern(C.QwtEventPattern__KeyPattern_new3((C.int)(keyCode)))
}

// NewQwtEventPattern__KeyPattern4 constructs a new QwtEventPattern::KeyPattern object.
func NewQwtEventPattern__KeyPattern4(keyCode int, modifierCodes qt.KeyboardModifier) *QwtEventPattern__KeyPattern {

	return newQwtEventPattern__KeyPattern(C.QwtEventPattern__KeyPattern_new4((C.int)(keyCode), (C.int)(modifierCodes)))
}

func (this *QwtEventPattern__KeyPattern) Key() int {
	return (int)(C.QwtEventPattern__KeyPattern_key(this.h))
}

func (this *QwtEventPattern__KeyPattern) SetKey(key int) {
	C.QwtEventPattern__KeyPattern_setKey(this.h, (C.int)(key))
}

func (this *QwtEventPattern__KeyPattern) Modifiers() qt.KeyboardModifier {
	return (qt.KeyboardModifier)(C.QwtEventPattern__KeyPattern_modifiers(this.h))
}

func (this *QwtEventPattern__KeyPattern) SetModifiers(modifiers qt.KeyboardModifier) {
	C.QwtEventPattern__KeyPattern_setModifiers(this.h, (C.int)(modifiers))
}

// Delete this object from C++ memory.
func (this *QwtEventPattern__KeyPattern) Delete() {
	C.QwtEventPattern__KeyPattern_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtEventPattern__KeyPattern) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtEventPattern__KeyPattern) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

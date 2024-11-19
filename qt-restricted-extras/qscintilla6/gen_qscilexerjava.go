package qscintilla6

/*

#include "gen_qscilexerjava.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerJava struct {
	h          *C.QsciLexerJava
	isSubclass bool
	*QsciLexerCPP
}

func (this *QsciLexerJava) cPointer() *C.QsciLexerJava {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerJava) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerJava constructs the type using only CGO pointers.
func newQsciLexerJava(h *C.QsciLexerJava, h_QsciLexerCPP *C.QsciLexerCPP, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerJava {
	if h == nil {
		return nil
	}
	return &QsciLexerJava{h: h,
		QsciLexerCPP: newQsciLexerCPP(h_QsciLexerCPP, h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerJava constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerJava(h unsafe.Pointer, h_QsciLexerCPP unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerJava {
	if h == nil {
		return nil
	}

	return &QsciLexerJava{h: (*C.QsciLexerJava)(h),
		QsciLexerCPP: UnsafeNewQsciLexerCPP(h_QsciLexerCPP, h_QsciLexer, h_QObject)}
}

// NewQsciLexerJava constructs a new QsciLexerJava object.
func NewQsciLexerJava() *QsciLexerJava {
	var outptr_QsciLexerJava *C.QsciLexerJava = nil
	var outptr_QsciLexerCPP *C.QsciLexerCPP = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerJava_new(&outptr_QsciLexerJava, &outptr_QsciLexerCPP, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerJava(outptr_QsciLexerJava, outptr_QsciLexerCPP, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerJava2 constructs a new QsciLexerJava object.
func NewQsciLexerJava2(parent *qt6.QObject) *QsciLexerJava {
	var outptr_QsciLexerJava *C.QsciLexerJava = nil
	var outptr_QsciLexerCPP *C.QsciLexerCPP = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerJava_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerJava, &outptr_QsciLexerCPP, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerJava(outptr_QsciLexerJava, outptr_QsciLexerCPP, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerJava) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerJava_MetaObject(this.h)))
}

func (this *QsciLexerJava) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerJava_Metacast(this.h, param1_Cstring))
}

func QsciLexerJava_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJava_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerJava) Language() string {
	_ret := C.QsciLexerJava_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerJava) Keywords(set int) string {
	_ret := C.QsciLexerJava_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func QsciLexerJava_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJava_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerJava_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJava_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerJava) callVirtualBase_SetFoldAtElse(fold bool) {

	C.QsciLexerJava_virtualbase_SetFoldAtElse(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerJava) OnSetFoldAtElse(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerJava_override_virtual_SetFoldAtElse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerJava_SetFoldAtElse
func miqt_exec_callback_QsciLexerJava_SetFoldAtElse(self *C.QsciLexerJava, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerJava{h: self}).callVirtualBase_SetFoldAtElse, slotval1)

}

func (this *QsciLexerJava) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerJava_virtualbase_SetFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerJava) OnSetFoldComments(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerJava_override_virtual_SetFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerJava_SetFoldComments
func miqt_exec_callback_QsciLexerJava_SetFoldComments(self *C.QsciLexerJava, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerJava{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerJava) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerJava_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerJava) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerJava_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerJava_SetFoldCompact
func miqt_exec_callback_QsciLexerJava_SetFoldCompact(self *C.QsciLexerJava, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerJava{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}

func (this *QsciLexerJava) callVirtualBase_SetFoldPreprocessor(fold bool) {

	C.QsciLexerJava_virtualbase_SetFoldPreprocessor(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerJava) OnSetFoldPreprocessor(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerJava_override_virtual_SetFoldPreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerJava_SetFoldPreprocessor
func miqt_exec_callback_QsciLexerJava_SetFoldPreprocessor(self *C.QsciLexerJava, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerJava{h: self}).callVirtualBase_SetFoldPreprocessor, slotval1)

}

func (this *QsciLexerJava) callVirtualBase_SetStylePreprocessor(style bool) {

	C.QsciLexerJava_virtualbase_SetStylePreprocessor(unsafe.Pointer(this.h), (C.bool)(style))

}
func (this *QsciLexerJava) OnSetStylePreprocessor(slot func(super func(style bool), style bool)) {
	C.QsciLexerJava_override_virtual_SetStylePreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerJava_SetStylePreprocessor
func miqt_exec_callback_QsciLexerJava_SetStylePreprocessor(self *C.QsciLexerJava, cb C.intptr_t, style C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style bool), style bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(style)

	gofunc((&QsciLexerJava{h: self}).callVirtualBase_SetStylePreprocessor, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexerJava) Delete() {
	C.QsciLexerJava_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerJava) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerJava) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qscintilla6

/*

#include "gen_qscilexeridl.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerIDL struct {
	h          *C.QsciLexerIDL
	isSubclass bool
	*QsciLexerCPP
}

func (this *QsciLexerIDL) cPointer() *C.QsciLexerIDL {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerIDL) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerIDL constructs the type using only CGO pointers.
func newQsciLexerIDL(h *C.QsciLexerIDL, h_QsciLexerCPP *C.QsciLexerCPP, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerIDL {
	if h == nil {
		return nil
	}
	return &QsciLexerIDL{h: h,
		QsciLexerCPP: newQsciLexerCPP(h_QsciLexerCPP, h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerIDL constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerIDL(h unsafe.Pointer, h_QsciLexerCPP unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerIDL {
	if h == nil {
		return nil
	}

	return &QsciLexerIDL{h: (*C.QsciLexerIDL)(h),
		QsciLexerCPP: UnsafeNewQsciLexerCPP(h_QsciLexerCPP, h_QsciLexer, h_QObject)}
}

// NewQsciLexerIDL constructs a new QsciLexerIDL object.
func NewQsciLexerIDL() *QsciLexerIDL {
	var outptr_QsciLexerIDL *C.QsciLexerIDL = nil
	var outptr_QsciLexerCPP *C.QsciLexerCPP = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerIDL_new(&outptr_QsciLexerIDL, &outptr_QsciLexerCPP, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerIDL(outptr_QsciLexerIDL, outptr_QsciLexerCPP, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerIDL2 constructs a new QsciLexerIDL object.
func NewQsciLexerIDL2(parent *qt6.QObject) *QsciLexerIDL {
	var outptr_QsciLexerIDL *C.QsciLexerIDL = nil
	var outptr_QsciLexerCPP *C.QsciLexerCPP = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerIDL_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerIDL, &outptr_QsciLexerCPP, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerIDL(outptr_QsciLexerIDL, outptr_QsciLexerCPP, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerIDL) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerIDL_MetaObject(this.h)))
}

func (this *QsciLexerIDL) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerIDL_Metacast(this.h, param1_Cstring))
}

func QsciLexerIDL_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerIDL_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerIDL) Language() string {
	_ret := C.QsciLexerIDL_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerIDL) DefaultColor(style int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerIDL_DefaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerIDL) Keywords(set int) string {
	_ret := C.QsciLexerIDL_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerIDL) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerIDL_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerIDL_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerIDL_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerIDL_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerIDL_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerIDL) callVirtualBase_SetFoldAtElse(fold bool) {

	C.QsciLexerIDL_virtualbase_SetFoldAtElse(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerIDL) OnSetFoldAtElse(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerIDL_override_virtual_SetFoldAtElse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerIDL_SetFoldAtElse
func miqt_exec_callback_QsciLexerIDL_SetFoldAtElse(self *C.QsciLexerIDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetFoldAtElse, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerIDL_virtualbase_SetFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerIDL) OnSetFoldComments(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerIDL_override_virtual_SetFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerIDL_SetFoldComments
func miqt_exec_callback_QsciLexerIDL_SetFoldComments(self *C.QsciLexerIDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerIDL_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerIDL) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerIDL_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerIDL_SetFoldCompact
func miqt_exec_callback_QsciLexerIDL_SetFoldCompact(self *C.QsciLexerIDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_SetFoldPreprocessor(fold bool) {

	C.QsciLexerIDL_virtualbase_SetFoldPreprocessor(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerIDL) OnSetFoldPreprocessor(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerIDL_override_virtual_SetFoldPreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerIDL_SetFoldPreprocessor
func miqt_exec_callback_QsciLexerIDL_SetFoldPreprocessor(self *C.QsciLexerIDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetFoldPreprocessor, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_SetStylePreprocessor(style bool) {

	C.QsciLexerIDL_virtualbase_SetStylePreprocessor(unsafe.Pointer(this.h), (C.bool)(style))

}
func (this *QsciLexerIDL) OnSetStylePreprocessor(slot func(super func(style bool), style bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerIDL_override_virtual_SetStylePreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerIDL_SetStylePreprocessor
func miqt_exec_callback_QsciLexerIDL_SetStylePreprocessor(self *C.QsciLexerIDL, cb C.intptr_t, style C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style bool), style bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(style)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetStylePreprocessor, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexerIDL) Delete() {
	C.QsciLexerIDL_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerIDL) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerIDL) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

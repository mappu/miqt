package qscintilla

/*

#include "gen_qscilexerxml.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerXML struct {
	h          *C.QsciLexerXML
	isSubclass bool
	*QsciLexerHTML
}

func (this *QsciLexerXML) cPointer() *C.QsciLexerXML {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerXML) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerXML constructs the type using only CGO pointers.
func newQsciLexerXML(h *C.QsciLexerXML, h_QsciLexerHTML *C.QsciLexerHTML, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerXML {
	if h == nil {
		return nil
	}
	return &QsciLexerXML{h: h,
		QsciLexerHTML: newQsciLexerHTML(h_QsciLexerHTML, h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerXML constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerXML(h unsafe.Pointer, h_QsciLexerHTML unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerXML {
	if h == nil {
		return nil
	}

	return &QsciLexerXML{h: (*C.QsciLexerXML)(h),
		QsciLexerHTML: UnsafeNewQsciLexerHTML(h_QsciLexerHTML, h_QsciLexer, h_QObject)}
}

// NewQsciLexerXML constructs a new QsciLexerXML object.
func NewQsciLexerXML() *QsciLexerXML {
	var outptr_QsciLexerXML *C.QsciLexerXML = nil
	var outptr_QsciLexerHTML *C.QsciLexerHTML = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerXML_new(&outptr_QsciLexerXML, &outptr_QsciLexerHTML, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerXML(outptr_QsciLexerXML, outptr_QsciLexerHTML, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerXML2 constructs a new QsciLexerXML object.
func NewQsciLexerXML2(parent *qt.QObject) *QsciLexerXML {
	var outptr_QsciLexerXML *C.QsciLexerXML = nil
	var outptr_QsciLexerHTML *C.QsciLexerHTML = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerXML_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerXML, &outptr_QsciLexerHTML, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerXML(outptr_QsciLexerXML, outptr_QsciLexerHTML, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerXML) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerXML_MetaObject(this.h)))
}

func (this *QsciLexerXML) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerXML_Metacast(this.h, param1_Cstring))
}

func QsciLexerXML_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerXML_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerXML_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerXML_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerXML) Language() string {
	_ret := C.QsciLexerXML_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerXML) Lexer() string {
	_ret := C.QsciLexerXML_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerXML) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerXML_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerXML) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerXML_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerXML) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerXML_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerXML) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerXML_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerXML) Keywords(set int) string {
	_ret := C.QsciLexerXML_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerXML) RefreshProperties() {
	C.QsciLexerXML_RefreshProperties(this.h)
}

func (this *QsciLexerXML) SetScriptsStyled(styled bool) {
	C.QsciLexerXML_SetScriptsStyled(this.h, (C.bool)(styled))
}

func (this *QsciLexerXML) ScriptsStyled() bool {
	return (bool)(C.QsciLexerXML_ScriptsStyled(this.h))
}

func QsciLexerXML_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerXML_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerXML_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerXML_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerXML_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerXML_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerXML_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerXML_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerXML) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerXML_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerXML) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerXML_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerXML_SetFoldCompact
func miqt_exec_callback_QsciLexerXML_SetFoldCompact(self *C.QsciLexerXML, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerXML{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}

func (this *QsciLexerXML) callVirtualBase_SetFoldPreprocessor(fold bool) {

	C.QsciLexerXML_virtualbase_SetFoldPreprocessor(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerXML) OnSetFoldPreprocessor(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerXML_override_virtual_SetFoldPreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerXML_SetFoldPreprocessor
func miqt_exec_callback_QsciLexerXML_SetFoldPreprocessor(self *C.QsciLexerXML, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerXML{h: self}).callVirtualBase_SetFoldPreprocessor, slotval1)

}

func (this *QsciLexerXML) callVirtualBase_SetCaseSensitiveTags(sens bool) {

	C.QsciLexerXML_virtualbase_SetCaseSensitiveTags(unsafe.Pointer(this.h), (C.bool)(sens))

}
func (this *QsciLexerXML) OnSetCaseSensitiveTags(slot func(super func(sens bool), sens bool)) {
	C.QsciLexerXML_override_virtual_SetCaseSensitiveTags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerXML_SetCaseSensitiveTags
func miqt_exec_callback_QsciLexerXML_SetCaseSensitiveTags(self *C.QsciLexerXML, cb C.intptr_t, sens C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sens bool), sens bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(sens)

	gofunc((&QsciLexerXML{h: self}).callVirtualBase_SetCaseSensitiveTags, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexerXML) Delete() {
	C.QsciLexerXML_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerXML) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerXML) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

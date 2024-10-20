package qscintilla

/*

#include "gen_qscilexercsharp.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerCSharp struct {
	h *C.QsciLexerCSharp
	*QsciLexerCPP
}

func (this *QsciLexerCSharp) cPointer() *C.QsciLexerCSharp {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerCSharp) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerCSharp(h *C.QsciLexerCSharp) *QsciLexerCSharp {
	if h == nil {
		return nil
	}
	return &QsciLexerCSharp{h: h, QsciLexerCPP: UnsafeNewQsciLexerCPP(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerCSharp(h unsafe.Pointer) *QsciLexerCSharp {
	return newQsciLexerCSharp((*C.QsciLexerCSharp)(h))
}

// NewQsciLexerCSharp constructs a new QsciLexerCSharp object.
func NewQsciLexerCSharp() *QsciLexerCSharp {
	ret := C.QsciLexerCSharp_new()
	return newQsciLexerCSharp(ret)
}

// NewQsciLexerCSharp2 constructs a new QsciLexerCSharp object.
func NewQsciLexerCSharp2(parent *qt.QObject) *QsciLexerCSharp {
	ret := C.QsciLexerCSharp_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerCSharp(ret)
}

func (this *QsciLexerCSharp) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerCSharp_MetaObject(this.h)))
}

func (this *QsciLexerCSharp) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerCSharp_Metacast(this.h, param1_Cstring))
}

func QsciLexerCSharp_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSharp_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSharp_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSharp_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCSharp) Language() string {
	_ret := C.QsciLexerCSharp_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCSharp) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerCSharp_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCSharp) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerCSharp_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerCSharp) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerCSharp_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCSharp) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerCSharp_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCSharp) Keywords(set int) string {
	_ret := C.QsciLexerCSharp_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerCSharp) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerCSharp_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSharp_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSharp_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSharp_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSharp_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSharp_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSharp_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSharp_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSharp_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerCSharp) Delete() {
	C.QsciLexerCSharp_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerCSharp) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerCSharp) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

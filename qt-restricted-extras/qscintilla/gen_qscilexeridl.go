package qscintilla

/*

#include "gen_qscilexeridl.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerIDL struct {
	h *C.QsciLexerIDL
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

func newQsciLexerIDL(h *C.QsciLexerIDL) *QsciLexerIDL {
	if h == nil {
		return nil
	}
	return &QsciLexerIDL{h: h, QsciLexerCPP: UnsafeNewQsciLexerCPP(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerIDL(h unsafe.Pointer) *QsciLexerIDL {
	return newQsciLexerIDL((*C.QsciLexerIDL)(h))
}

// NewQsciLexerIDL constructs a new QsciLexerIDL object.
func NewQsciLexerIDL() *QsciLexerIDL {
	ret := C.QsciLexerIDL_new()
	return newQsciLexerIDL(ret)
}

// NewQsciLexerIDL2 constructs a new QsciLexerIDL object.
func NewQsciLexerIDL2(parent *qt.QObject) *QsciLexerIDL {
	ret := C.QsciLexerIDL_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerIDL(ret)
}

func (this *QsciLexerIDL) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerIDL_MetaObject(this.h)))
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

func QsciLexerIDL_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerIDL_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerIDL) Language() string {
	_ret := C.QsciLexerIDL_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerIDL) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerIDL_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
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

func QsciLexerIDL_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerIDL_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerIDL_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerIDL_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerIDL) Delete() {
	C.QsciLexerIDL_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerIDL) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerIDL) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

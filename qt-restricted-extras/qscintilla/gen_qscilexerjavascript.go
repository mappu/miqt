package qscintilla

/*

#include "gen_qscilexerjavascript.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerJavaScript struct {
	h *C.QsciLexerJavaScript
	*QsciLexerCPP
}

func (this *QsciLexerJavaScript) cPointer() *C.QsciLexerJavaScript {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerJavaScript) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerJavaScript(h *C.QsciLexerJavaScript) *QsciLexerJavaScript {
	if h == nil {
		return nil
	}
	return &QsciLexerJavaScript{h: h, QsciLexerCPP: UnsafeNewQsciLexerCPP(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerJavaScript(h unsafe.Pointer) *QsciLexerJavaScript {
	return newQsciLexerJavaScript((*C.QsciLexerJavaScript)(h))
}

// NewQsciLexerJavaScript constructs a new QsciLexerJavaScript object.
func NewQsciLexerJavaScript() *QsciLexerJavaScript {
	ret := C.QsciLexerJavaScript_new()
	return newQsciLexerJavaScript(ret)
}

// NewQsciLexerJavaScript2 constructs a new QsciLexerJavaScript object.
func NewQsciLexerJavaScript2(parent *qt.QObject) *QsciLexerJavaScript {
	ret := C.QsciLexerJavaScript_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerJavaScript(ret)
}

func (this *QsciLexerJavaScript) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerJavaScript_MetaObject(this.h)))
}

func (this *QsciLexerJavaScript) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerJavaScript_Metacast(this.h, param1_Cstring))
}

func QsciLexerJavaScript_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJavaScript_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerJavaScript_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJavaScript_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerJavaScript) Language() string {
	_ret := C.QsciLexerJavaScript_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerJavaScript) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerJavaScript_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerJavaScript) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerJavaScript_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerJavaScript) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerJavaScript_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerJavaScript) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerJavaScript_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerJavaScript) Keywords(set int) string {
	_ret := C.QsciLexerJavaScript_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerJavaScript) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerJavaScript_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerJavaScript_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJavaScript_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerJavaScript_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJavaScript_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerJavaScript_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJavaScript_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerJavaScript_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJavaScript_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerJavaScript) Delete() {
	C.QsciLexerJavaScript_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerJavaScript) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerJavaScript) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

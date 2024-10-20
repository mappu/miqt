package qscintilla

/*

#include "gen_qscilexerxml.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerXML struct {
	h *C.QsciLexerXML
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

func newQsciLexerXML(h *C.QsciLexerXML) *QsciLexerXML {
	if h == nil {
		return nil
	}
	return &QsciLexerXML{h: h, QsciLexerHTML: UnsafeNewQsciLexerHTML(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerXML(h unsafe.Pointer) *QsciLexerXML {
	return newQsciLexerXML((*C.QsciLexerXML)(h))
}

// NewQsciLexerXML constructs a new QsciLexerXML object.
func NewQsciLexerXML() *QsciLexerXML {
	ret := C.QsciLexerXML_new()
	return newQsciLexerXML(ret)
}

// NewQsciLexerXML2 constructs a new QsciLexerXML object.
func NewQsciLexerXML2(parent *qt.QObject) *QsciLexerXML {
	ret := C.QsciLexerXML_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerXML(ret)
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

// Delete this object from C++ memory.
func (this *QsciLexerXML) Delete() {
	C.QsciLexerXML_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerXML) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerXML) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

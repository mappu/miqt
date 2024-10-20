package qscintilla

/*

#include "gen_qscilexermakefile.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerMakefile__ int

const (
	QsciLexerMakefile__Default      QsciLexerMakefile__ = 0
	QsciLexerMakefile__Comment      QsciLexerMakefile__ = 1
	QsciLexerMakefile__Preprocessor QsciLexerMakefile__ = 2
	QsciLexerMakefile__Variable     QsciLexerMakefile__ = 3
	QsciLexerMakefile__Operator     QsciLexerMakefile__ = 4
	QsciLexerMakefile__Target       QsciLexerMakefile__ = 5
	QsciLexerMakefile__Error        QsciLexerMakefile__ = 9
)

type QsciLexerMakefile struct {
	h *C.QsciLexerMakefile
	*QsciLexer
}

func (this *QsciLexerMakefile) cPointer() *C.QsciLexerMakefile {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerMakefile) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerMakefile(h *C.QsciLexerMakefile) *QsciLexerMakefile {
	if h == nil {
		return nil
	}
	return &QsciLexerMakefile{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerMakefile(h unsafe.Pointer) *QsciLexerMakefile {
	return newQsciLexerMakefile((*C.QsciLexerMakefile)(h))
}

// NewQsciLexerMakefile constructs a new QsciLexerMakefile object.
func NewQsciLexerMakefile() *QsciLexerMakefile {
	ret := C.QsciLexerMakefile_new()
	return newQsciLexerMakefile(ret)
}

// NewQsciLexerMakefile2 constructs a new QsciLexerMakefile object.
func NewQsciLexerMakefile2(parent *qt.QObject) *QsciLexerMakefile {
	ret := C.QsciLexerMakefile_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerMakefile(ret)
}

func (this *QsciLexerMakefile) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerMakefile_MetaObject(this.h)))
}

func (this *QsciLexerMakefile) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerMakefile_Metacast(this.h, param1_Cstring))
}

func QsciLexerMakefile_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMakefile_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMakefile_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMakefile_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerMakefile) Language() string {
	_ret := C.QsciLexerMakefile_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMakefile) Lexer() string {
	_ret := C.QsciLexerMakefile_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMakefile) WordCharacters() string {
	_ret := C.QsciLexerMakefile_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMakefile) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerMakefile_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMakefile) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerMakefile_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerMakefile) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerMakefile_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMakefile) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerMakefile_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMakefile) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerMakefile_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMakefile_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMakefile_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMakefile_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMakefile_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMakefile_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMakefile_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMakefile_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMakefile_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerMakefile) Delete() {
	C.QsciLexerMakefile_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerMakefile) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerMakefile) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qscintilla

/*

#include "gen_qscilexerdiff.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerDiff__ int

const (
	QsciLexerDiff__Default              QsciLexerDiff__ = 0
	QsciLexerDiff__Comment              QsciLexerDiff__ = 1
	QsciLexerDiff__Command              QsciLexerDiff__ = 2
	QsciLexerDiff__Header               QsciLexerDiff__ = 3
	QsciLexerDiff__Position             QsciLexerDiff__ = 4
	QsciLexerDiff__LineRemoved          QsciLexerDiff__ = 5
	QsciLexerDiff__LineAdded            QsciLexerDiff__ = 6
	QsciLexerDiff__LineChanged          QsciLexerDiff__ = 7
	QsciLexerDiff__AddingPatchAdded     QsciLexerDiff__ = 8
	QsciLexerDiff__RemovingPatchAdded   QsciLexerDiff__ = 9
	QsciLexerDiff__AddingPatchRemoved   QsciLexerDiff__ = 10
	QsciLexerDiff__RemovingPatchRemoved QsciLexerDiff__ = 11
)

type QsciLexerDiff struct {
	h *C.QsciLexerDiff
	*QsciLexer
}

func (this *QsciLexerDiff) cPointer() *C.QsciLexerDiff {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerDiff) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerDiff(h *C.QsciLexerDiff) *QsciLexerDiff {
	if h == nil {
		return nil
	}
	return &QsciLexerDiff{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerDiff(h unsafe.Pointer) *QsciLexerDiff {
	return newQsciLexerDiff((*C.QsciLexerDiff)(h))
}

// NewQsciLexerDiff constructs a new QsciLexerDiff object.
func NewQsciLexerDiff() *QsciLexerDiff {
	ret := C.QsciLexerDiff_new()
	return newQsciLexerDiff(ret)
}

// NewQsciLexerDiff2 constructs a new QsciLexerDiff object.
func NewQsciLexerDiff2(parent *qt.QObject) *QsciLexerDiff {
	ret := C.QsciLexerDiff_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerDiff(ret)
}

func (this *QsciLexerDiff) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerDiff_MetaObject(this.h)))
}

func (this *QsciLexerDiff) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerDiff_Metacast(this.h, param1_Cstring))
}

func QsciLexerDiff_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerDiff_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerDiff_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerDiff_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerDiff) Language() string {
	_ret := C.QsciLexerDiff_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerDiff) Lexer() string {
	_ret := C.QsciLexerDiff_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerDiff) WordCharacters() string {
	_ret := C.QsciLexerDiff_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerDiff) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerDiff_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerDiff) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerDiff_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerDiff_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerDiff_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerDiff_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerDiff_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerDiff_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerDiff_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerDiff_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerDiff_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerDiff) Delete() {
	C.QsciLexerDiff_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerDiff) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerDiff) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qscintilla

/*

#include "gen_qscilexerbatch.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerBatch__ int

const (
	QsciLexerBatch__Default         QsciLexerBatch__ = 0
	QsciLexerBatch__Comment         QsciLexerBatch__ = 1
	QsciLexerBatch__Keyword         QsciLexerBatch__ = 2
	QsciLexerBatch__Label           QsciLexerBatch__ = 3
	QsciLexerBatch__HideCommandChar QsciLexerBatch__ = 4
	QsciLexerBatch__ExternalCommand QsciLexerBatch__ = 5
	QsciLexerBatch__Variable        QsciLexerBatch__ = 6
	QsciLexerBatch__Operator        QsciLexerBatch__ = 7
)

type QsciLexerBatch struct {
	h *C.QsciLexerBatch
	*QsciLexer
}

func (this *QsciLexerBatch) cPointer() *C.QsciLexerBatch {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerBatch) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerBatch(h *C.QsciLexerBatch) *QsciLexerBatch {
	if h == nil {
		return nil
	}
	return &QsciLexerBatch{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerBatch(h unsafe.Pointer) *QsciLexerBatch {
	return newQsciLexerBatch((*C.QsciLexerBatch)(h))
}

// NewQsciLexerBatch constructs a new QsciLexerBatch object.
func NewQsciLexerBatch() *QsciLexerBatch {
	ret := C.QsciLexerBatch_new()
	return newQsciLexerBatch(ret)
}

// NewQsciLexerBatch2 constructs a new QsciLexerBatch object.
func NewQsciLexerBatch2(parent *qt.QObject) *QsciLexerBatch {
	ret := C.QsciLexerBatch_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerBatch(ret)
}

func (this *QsciLexerBatch) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerBatch_MetaObject(this.h)))
}

func (this *QsciLexerBatch) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerBatch_Metacast(this.h, param1_Cstring))
}

func QsciLexerBatch_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBatch_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBatch_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBatch_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerBatch) Language() string {
	_ret := C.QsciLexerBatch_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerBatch) Lexer() string {
	_ret := C.QsciLexerBatch_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerBatch) WordCharacters() string {
	_ret := C.QsciLexerBatch_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerBatch) CaseSensitive() bool {
	return (bool)(C.QsciLexerBatch_CaseSensitive(this.h))
}

func (this *QsciLexerBatch) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerBatch_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerBatch) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerBatch_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerBatch) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerBatch_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerBatch) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerBatch_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerBatch) Keywords(set int) string {
	_ret := C.QsciLexerBatch_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerBatch) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerBatch_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBatch_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBatch_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBatch_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBatch_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBatch_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBatch_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBatch_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBatch_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerBatch) Delete() {
	C.QsciLexerBatch_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerBatch) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerBatch) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

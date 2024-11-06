package qscintilla6

/*

#include "gen_qscilexertex.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerTeX__ int

const (
	QsciLexerTeX__Default QsciLexerTeX__ = 0
	QsciLexerTeX__Special QsciLexerTeX__ = 1
	QsciLexerTeX__Group   QsciLexerTeX__ = 2
	QsciLexerTeX__Symbol  QsciLexerTeX__ = 3
	QsciLexerTeX__Command QsciLexerTeX__ = 4
	QsciLexerTeX__Text    QsciLexerTeX__ = 5
)

type QsciLexerTeX struct {
	h *C.QsciLexerTeX
	*QsciLexer
}

func (this *QsciLexerTeX) cPointer() *C.QsciLexerTeX {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerTeX) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerTeX(h *C.QsciLexerTeX) *QsciLexerTeX {
	if h == nil {
		return nil
	}
	return &QsciLexerTeX{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerTeX(h unsafe.Pointer) *QsciLexerTeX {
	return newQsciLexerTeX((*C.QsciLexerTeX)(h))
}

// NewQsciLexerTeX constructs a new QsciLexerTeX object.
func NewQsciLexerTeX() *QsciLexerTeX {
	ret := C.QsciLexerTeX_new()
	return newQsciLexerTeX(ret)
}

// NewQsciLexerTeX2 constructs a new QsciLexerTeX object.
func NewQsciLexerTeX2(parent *qt6.QObject) *QsciLexerTeX {
	ret := C.QsciLexerTeX_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerTeX(ret)
}

func (this *QsciLexerTeX) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerTeX_MetaObject(this.h)))
}

func (this *QsciLexerTeX) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerTeX_Metacast(this.h, param1_Cstring))
}

func QsciLexerTeX_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerTeX_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerTeX) Language() string {
	_ret := C.QsciLexerTeX_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerTeX) Lexer() string {
	_ret := C.QsciLexerTeX_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerTeX) WordCharacters() string {
	_ret := C.QsciLexerTeX_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerTeX) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerTeX_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerTeX) Keywords(set int) string {
	_ret := C.QsciLexerTeX_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerTeX) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerTeX_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerTeX) RefreshProperties() {
	C.QsciLexerTeX_RefreshProperties(this.h)
}

func (this *QsciLexerTeX) SetFoldComments(fold bool) {
	C.QsciLexerTeX_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerTeX) FoldComments() bool {
	return (bool)(C.QsciLexerTeX_FoldComments(this.h))
}

func (this *QsciLexerTeX) SetFoldCompact(fold bool) {
	C.QsciLexerTeX_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerTeX) FoldCompact() bool {
	return (bool)(C.QsciLexerTeX_FoldCompact(this.h))
}

func (this *QsciLexerTeX) SetProcessComments(enable bool) {
	C.QsciLexerTeX_SetProcessComments(this.h, (C.bool)(enable))
}

func (this *QsciLexerTeX) ProcessComments() bool {
	return (bool)(C.QsciLexerTeX_ProcessComments(this.h))
}

func (this *QsciLexerTeX) SetProcessIf(enable bool) {
	C.QsciLexerTeX_SetProcessIf(this.h, (C.bool)(enable))
}

func (this *QsciLexerTeX) ProcessIf() bool {
	return (bool)(C.QsciLexerTeX_ProcessIf(this.h))
}

func QsciLexerTeX_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerTeX_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerTeX_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerTeX_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerTeX) Delete() {
	C.QsciLexerTeX_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerTeX) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerTeX) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

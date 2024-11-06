package qscintilla6

/*

#include "gen_qscilexerpo.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerPO__ int

const (
	QsciLexerPO__Default               QsciLexerPO__ = 0
	QsciLexerPO__Comment               QsciLexerPO__ = 1
	QsciLexerPO__MessageId             QsciLexerPO__ = 2
	QsciLexerPO__MessageIdText         QsciLexerPO__ = 3
	QsciLexerPO__MessageString         QsciLexerPO__ = 4
	QsciLexerPO__MessageStringText     QsciLexerPO__ = 5
	QsciLexerPO__MessageContext        QsciLexerPO__ = 6
	QsciLexerPO__MessageContextText    QsciLexerPO__ = 7
	QsciLexerPO__Fuzzy                 QsciLexerPO__ = 8
	QsciLexerPO__ProgrammerComment     QsciLexerPO__ = 9
	QsciLexerPO__Reference             QsciLexerPO__ = 10
	QsciLexerPO__Flags                 QsciLexerPO__ = 11
	QsciLexerPO__MessageIdTextEOL      QsciLexerPO__ = 12
	QsciLexerPO__MessageStringTextEOL  QsciLexerPO__ = 13
	QsciLexerPO__MessageContextTextEOL QsciLexerPO__ = 14
)

type QsciLexerPO struct {
	h *C.QsciLexerPO
	*QsciLexer
}

func (this *QsciLexerPO) cPointer() *C.QsciLexerPO {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerPO) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerPO(h *C.QsciLexerPO) *QsciLexerPO {
	if h == nil {
		return nil
	}
	return &QsciLexerPO{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerPO(h unsafe.Pointer) *QsciLexerPO {
	return newQsciLexerPO((*C.QsciLexerPO)(h))
}

// NewQsciLexerPO constructs a new QsciLexerPO object.
func NewQsciLexerPO() *QsciLexerPO {
	ret := C.QsciLexerPO_new()
	return newQsciLexerPO(ret)
}

// NewQsciLexerPO2 constructs a new QsciLexerPO object.
func NewQsciLexerPO2(parent *qt6.QObject) *QsciLexerPO {
	ret := C.QsciLexerPO_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerPO(ret)
}

func (this *QsciLexerPO) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerPO_MetaObject(this.h)))
}

func (this *QsciLexerPO) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerPO_Metacast(this.h, param1_Cstring))
}

func QsciLexerPO_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPO_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPO) Language() string {
	_ret := C.QsciLexerPO_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPO) Lexer() string {
	_ret := C.QsciLexerPO_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPO) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerPO_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPO) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerPO_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPO) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerPO_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPO) RefreshProperties() {
	C.QsciLexerPO_RefreshProperties(this.h)
}

func (this *QsciLexerPO) FoldComments() bool {
	return (bool)(C.QsciLexerPO_FoldComments(this.h))
}

func (this *QsciLexerPO) FoldCompact() bool {
	return (bool)(C.QsciLexerPO_FoldCompact(this.h))
}

func (this *QsciLexerPO) SetFoldComments(fold bool) {
	C.QsciLexerPO_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerPO) SetFoldCompact(fold bool) {
	C.QsciLexerPO_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerPO_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPO_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPO_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPO_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerPO) Delete() {
	C.QsciLexerPO_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerPO) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerPO) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

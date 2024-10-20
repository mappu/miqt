package qscintilla

/*

#include "gen_qscilexerfortran77.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerFortran77__ int

const (
	QsciLexerFortran77__Default            QsciLexerFortran77__ = 0
	QsciLexerFortran77__Comment            QsciLexerFortran77__ = 1
	QsciLexerFortran77__Number             QsciLexerFortran77__ = 2
	QsciLexerFortran77__SingleQuotedString QsciLexerFortran77__ = 3
	QsciLexerFortran77__DoubleQuotedString QsciLexerFortran77__ = 4
	QsciLexerFortran77__UnclosedString     QsciLexerFortran77__ = 5
	QsciLexerFortran77__Operator           QsciLexerFortran77__ = 6
	QsciLexerFortran77__Identifier         QsciLexerFortran77__ = 7
	QsciLexerFortran77__Keyword            QsciLexerFortran77__ = 8
	QsciLexerFortran77__IntrinsicFunction  QsciLexerFortran77__ = 9
	QsciLexerFortran77__ExtendedFunction   QsciLexerFortran77__ = 10
	QsciLexerFortran77__PreProcessor       QsciLexerFortran77__ = 11
	QsciLexerFortran77__DottedOperator     QsciLexerFortran77__ = 12
	QsciLexerFortran77__Label              QsciLexerFortran77__ = 13
	QsciLexerFortran77__Continuation       QsciLexerFortran77__ = 14
)

type QsciLexerFortran77 struct {
	h *C.QsciLexerFortran77
	*QsciLexer
}

func (this *QsciLexerFortran77) cPointer() *C.QsciLexerFortran77 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerFortran77) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerFortran77(h *C.QsciLexerFortran77) *QsciLexerFortran77 {
	if h == nil {
		return nil
	}
	return &QsciLexerFortran77{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerFortran77(h unsafe.Pointer) *QsciLexerFortran77 {
	return newQsciLexerFortran77((*C.QsciLexerFortran77)(h))
}

// NewQsciLexerFortran77 constructs a new QsciLexerFortran77 object.
func NewQsciLexerFortran77() *QsciLexerFortran77 {
	ret := C.QsciLexerFortran77_new()
	return newQsciLexerFortran77(ret)
}

// NewQsciLexerFortran772 constructs a new QsciLexerFortran77 object.
func NewQsciLexerFortran772(parent *qt.QObject) *QsciLexerFortran77 {
	ret := C.QsciLexerFortran77_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerFortran77(ret)
}

func (this *QsciLexerFortran77) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerFortran77_MetaObject(this.h)))
}

func (this *QsciLexerFortran77) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerFortran77_Metacast(this.h, param1_Cstring))
}

func QsciLexerFortran77_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran77_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerFortran77) Language() string {
	_ret := C.QsciLexerFortran77_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerFortran77) Lexer() string {
	_ret := C.QsciLexerFortran77_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerFortran77) BraceStyle() int {
	return (int)(C.QsciLexerFortran77_BraceStyle(this.h))
}

func (this *QsciLexerFortran77) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerFortran77_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerFortran77) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerFortran77_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerFortran77) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerFortran77_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerFortran77) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerFortran77_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerFortran77) Keywords(set int) string {
	_ret := C.QsciLexerFortran77_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerFortran77) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerFortran77) RefreshProperties() {
	C.QsciLexerFortran77_RefreshProperties(this.h)
}

func (this *QsciLexerFortran77) FoldCompact() bool {
	return (bool)(C.QsciLexerFortran77_FoldCompact(this.h))
}

func (this *QsciLexerFortran77) SetFoldCompact(fold bool) {
	C.QsciLexerFortran77_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerFortran77_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran77_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran77_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran77_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerFortran77) Delete() {
	C.QsciLexerFortran77_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerFortran77) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerFortran77) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

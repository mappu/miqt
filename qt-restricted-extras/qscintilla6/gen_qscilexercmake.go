package qscintilla6

/*

#include "gen_qscilexercmake.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerCMake__ int

const (
	QsciLexerCMake__Default          QsciLexerCMake__ = 0
	QsciLexerCMake__Comment          QsciLexerCMake__ = 1
	QsciLexerCMake__String           QsciLexerCMake__ = 2
	QsciLexerCMake__StringLeftQuote  QsciLexerCMake__ = 3
	QsciLexerCMake__StringRightQuote QsciLexerCMake__ = 4
	QsciLexerCMake__Function         QsciLexerCMake__ = 5
	QsciLexerCMake__Variable         QsciLexerCMake__ = 6
	QsciLexerCMake__Label            QsciLexerCMake__ = 7
	QsciLexerCMake__KeywordSet3      QsciLexerCMake__ = 8
	QsciLexerCMake__BlockWhile       QsciLexerCMake__ = 9
	QsciLexerCMake__BlockForeach     QsciLexerCMake__ = 10
	QsciLexerCMake__BlockIf          QsciLexerCMake__ = 11
	QsciLexerCMake__BlockMacro       QsciLexerCMake__ = 12
	QsciLexerCMake__StringVariable   QsciLexerCMake__ = 13
	QsciLexerCMake__Number           QsciLexerCMake__ = 14
)

type QsciLexerCMake struct {
	h *C.QsciLexerCMake
	*QsciLexer
}

func (this *QsciLexerCMake) cPointer() *C.QsciLexerCMake {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerCMake) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerCMake(h *C.QsciLexerCMake) *QsciLexerCMake {
	if h == nil {
		return nil
	}
	return &QsciLexerCMake{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerCMake(h unsafe.Pointer) *QsciLexerCMake {
	return newQsciLexerCMake((*C.QsciLexerCMake)(h))
}

// NewQsciLexerCMake constructs a new QsciLexerCMake object.
func NewQsciLexerCMake() *QsciLexerCMake {
	ret := C.QsciLexerCMake_new()
	return newQsciLexerCMake(ret)
}

// NewQsciLexerCMake2 constructs a new QsciLexerCMake object.
func NewQsciLexerCMake2(parent *qt6.QObject) *QsciLexerCMake {
	ret := C.QsciLexerCMake_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerCMake(ret)
}

func (this *QsciLexerCMake) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerCMake_MetaObject(this.h)))
}

func (this *QsciLexerCMake) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerCMake_Metacast(this.h, param1_Cstring))
}

func QsciLexerCMake_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCMake_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCMake) Language() string {
	_ret := C.QsciLexerCMake_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCMake) Lexer() string {
	_ret := C.QsciLexerCMake_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCMake) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerCMake_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCMake) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerCMake_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCMake) DefaultPaper(style int) *qt6.QColor {
	_ret := C.QsciLexerCMake_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCMake) Keywords(set int) string {
	_ret := C.QsciLexerCMake_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerCMake) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerCMake_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCMake) RefreshProperties() {
	C.QsciLexerCMake_RefreshProperties(this.h)
}

func (this *QsciLexerCMake) FoldAtElse() bool {
	return (bool)(C.QsciLexerCMake_FoldAtElse(this.h))
}

func (this *QsciLexerCMake) SetFoldAtElse(fold bool) {
	C.QsciLexerCMake_SetFoldAtElse(this.h, (C.bool)(fold))
}

func QsciLexerCMake_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCMake_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCMake_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCMake_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerCMake) Delete() {
	C.QsciLexerCMake_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerCMake) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerCMake) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

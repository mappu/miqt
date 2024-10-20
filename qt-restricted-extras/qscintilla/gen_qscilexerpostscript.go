package qscintilla

/*

#include "gen_qscilexerpostscript.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerPostScript__ int

const (
	QsciLexerPostScript__Default               QsciLexerPostScript__ = 0
	QsciLexerPostScript__Comment               QsciLexerPostScript__ = 1
	QsciLexerPostScript__DSCComment            QsciLexerPostScript__ = 2
	QsciLexerPostScript__DSCCommentValue       QsciLexerPostScript__ = 3
	QsciLexerPostScript__Number                QsciLexerPostScript__ = 4
	QsciLexerPostScript__Name                  QsciLexerPostScript__ = 5
	QsciLexerPostScript__Keyword               QsciLexerPostScript__ = 6
	QsciLexerPostScript__Literal               QsciLexerPostScript__ = 7
	QsciLexerPostScript__ImmediateEvalLiteral  QsciLexerPostScript__ = 8
	QsciLexerPostScript__ArrayParenthesis      QsciLexerPostScript__ = 9
	QsciLexerPostScript__DictionaryParenthesis QsciLexerPostScript__ = 10
	QsciLexerPostScript__ProcedureParenthesis  QsciLexerPostScript__ = 11
	QsciLexerPostScript__Text                  QsciLexerPostScript__ = 12
	QsciLexerPostScript__HexString             QsciLexerPostScript__ = 13
	QsciLexerPostScript__Base85String          QsciLexerPostScript__ = 14
	QsciLexerPostScript__BadStringCharacter    QsciLexerPostScript__ = 15
)

type QsciLexerPostScript struct {
	h *C.QsciLexerPostScript
	*QsciLexer
}

func (this *QsciLexerPostScript) cPointer() *C.QsciLexerPostScript {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerPostScript) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerPostScript(h *C.QsciLexerPostScript) *QsciLexerPostScript {
	if h == nil {
		return nil
	}
	return &QsciLexerPostScript{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerPostScript(h unsafe.Pointer) *QsciLexerPostScript {
	return newQsciLexerPostScript((*C.QsciLexerPostScript)(h))
}

// NewQsciLexerPostScript constructs a new QsciLexerPostScript object.
func NewQsciLexerPostScript() *QsciLexerPostScript {
	ret := C.QsciLexerPostScript_new()
	return newQsciLexerPostScript(ret)
}

// NewQsciLexerPostScript2 constructs a new QsciLexerPostScript object.
func NewQsciLexerPostScript2(parent *qt.QObject) *QsciLexerPostScript {
	ret := C.QsciLexerPostScript_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerPostScript(ret)
}

func (this *QsciLexerPostScript) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerPostScript_MetaObject(this.h)))
}

func (this *QsciLexerPostScript) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerPostScript_Metacast(this.h, param1_Cstring))
}

func QsciLexerPostScript_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPostScript_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPostScript) Language() string {
	_ret := C.QsciLexerPostScript_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPostScript) Lexer() string {
	_ret := C.QsciLexerPostScript_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPostScript) BraceStyle() int {
	return (int)(C.QsciLexerPostScript_BraceStyle(this.h))
}

func (this *QsciLexerPostScript) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerPostScript_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPostScript) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerPostScript_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPostScript) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerPostScript_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPostScript) Keywords(set int) string {
	_ret := C.QsciLexerPostScript_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerPostScript) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPostScript) RefreshProperties() {
	C.QsciLexerPostScript_RefreshProperties(this.h)
}

func (this *QsciLexerPostScript) Tokenize() bool {
	return (bool)(C.QsciLexerPostScript_Tokenize(this.h))
}

func (this *QsciLexerPostScript) Level() int {
	return (int)(C.QsciLexerPostScript_Level(this.h))
}

func (this *QsciLexerPostScript) FoldCompact() bool {
	return (bool)(C.QsciLexerPostScript_FoldCompact(this.h))
}

func (this *QsciLexerPostScript) FoldAtElse() bool {
	return (bool)(C.QsciLexerPostScript_FoldAtElse(this.h))
}

func (this *QsciLexerPostScript) SetTokenize(tokenize bool) {
	C.QsciLexerPostScript_SetTokenize(this.h, (C.bool)(tokenize))
}

func (this *QsciLexerPostScript) SetLevel(level int) {
	C.QsciLexerPostScript_SetLevel(this.h, (C.int)(level))
}

func (this *QsciLexerPostScript) SetFoldCompact(fold bool) {
	C.QsciLexerPostScript_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerPostScript) SetFoldAtElse(fold bool) {
	C.QsciLexerPostScript_SetFoldAtElse(this.h, (C.bool)(fold))
}

func QsciLexerPostScript_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPostScript_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPostScript_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPostScript_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerPostScript) Delete() {
	C.QsciLexerPostScript_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerPostScript) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerPostScript) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

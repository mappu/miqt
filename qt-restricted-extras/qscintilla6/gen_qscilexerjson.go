package qscintilla6

/*

#include "gen_qscilexerjson.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerJSON__ int

const (
	QsciLexerJSON__Default        QsciLexerJSON__ = 0
	QsciLexerJSON__Number         QsciLexerJSON__ = 1
	QsciLexerJSON__String         QsciLexerJSON__ = 2
	QsciLexerJSON__UnclosedString QsciLexerJSON__ = 3
	QsciLexerJSON__Property       QsciLexerJSON__ = 4
	QsciLexerJSON__EscapeSequence QsciLexerJSON__ = 5
	QsciLexerJSON__CommentLine    QsciLexerJSON__ = 6
	QsciLexerJSON__CommentBlock   QsciLexerJSON__ = 7
	QsciLexerJSON__Operator       QsciLexerJSON__ = 8
	QsciLexerJSON__IRI            QsciLexerJSON__ = 9
	QsciLexerJSON__IRICompact     QsciLexerJSON__ = 10
	QsciLexerJSON__Keyword        QsciLexerJSON__ = 11
	QsciLexerJSON__KeywordLD      QsciLexerJSON__ = 12
	QsciLexerJSON__Error          QsciLexerJSON__ = 13
)

type QsciLexerJSON struct {
	h *C.QsciLexerJSON
	*QsciLexer
}

func (this *QsciLexerJSON) cPointer() *C.QsciLexerJSON {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerJSON) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerJSON(h *C.QsciLexerJSON) *QsciLexerJSON {
	if h == nil {
		return nil
	}
	return &QsciLexerJSON{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerJSON(h unsafe.Pointer) *QsciLexerJSON {
	return newQsciLexerJSON((*C.QsciLexerJSON)(h))
}

// NewQsciLexerJSON constructs a new QsciLexerJSON object.
func NewQsciLexerJSON() *QsciLexerJSON {
	ret := C.QsciLexerJSON_new()
	return newQsciLexerJSON(ret)
}

// NewQsciLexerJSON2 constructs a new QsciLexerJSON object.
func NewQsciLexerJSON2(parent *qt6.QObject) *QsciLexerJSON {
	ret := C.QsciLexerJSON_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerJSON(ret)
}

func (this *QsciLexerJSON) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerJSON_MetaObject(this.h)))
}

func (this *QsciLexerJSON) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerJSON_Metacast(this.h, param1_Cstring))
}

func QsciLexerJSON_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJSON_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerJSON) Language() string {
	_ret := C.QsciLexerJSON_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerJSON) Lexer() string {
	_ret := C.QsciLexerJSON_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerJSON) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerJSON_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerJSON) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerJSON_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerJSON) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerJSON_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerJSON) DefaultPaper(style int) *qt6.QColor {
	_ret := C.QsciLexerJSON_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerJSON) Keywords(set int) string {
	_ret := C.QsciLexerJSON_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerJSON) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerJSON_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerJSON) RefreshProperties() {
	C.QsciLexerJSON_RefreshProperties(this.h)
}

func (this *QsciLexerJSON) SetHighlightComments(highlight bool) {
	C.QsciLexerJSON_SetHighlightComments(this.h, (C.bool)(highlight))
}

func (this *QsciLexerJSON) HighlightComments() bool {
	return (bool)(C.QsciLexerJSON_HighlightComments(this.h))
}

func (this *QsciLexerJSON) SetHighlightEscapeSequences(highlight bool) {
	C.QsciLexerJSON_SetHighlightEscapeSequences(this.h, (C.bool)(highlight))
}

func (this *QsciLexerJSON) HighlightEscapeSequences() bool {
	return (bool)(C.QsciLexerJSON_HighlightEscapeSequences(this.h))
}

func (this *QsciLexerJSON) SetFoldCompact(fold bool) {
	C.QsciLexerJSON_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerJSON) FoldCompact() bool {
	return (bool)(C.QsciLexerJSON_FoldCompact(this.h))
}

func QsciLexerJSON_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJSON_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerJSON_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJSON_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerJSON) Delete() {
	C.QsciLexerJSON_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerJSON) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerJSON) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

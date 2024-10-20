package qscintilla

/*

#include "gen_qscilexeryaml.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerYAML__ int

const (
	QsciLexerYAML__Default           QsciLexerYAML__ = 0
	QsciLexerYAML__Comment           QsciLexerYAML__ = 1
	QsciLexerYAML__Identifier        QsciLexerYAML__ = 2
	QsciLexerYAML__Keyword           QsciLexerYAML__ = 3
	QsciLexerYAML__Number            QsciLexerYAML__ = 4
	QsciLexerYAML__Reference         QsciLexerYAML__ = 5
	QsciLexerYAML__DocumentDelimiter QsciLexerYAML__ = 6
	QsciLexerYAML__TextBlockMarker   QsciLexerYAML__ = 7
	QsciLexerYAML__SyntaxErrorMarker QsciLexerYAML__ = 8
	QsciLexerYAML__Operator          QsciLexerYAML__ = 9
)

type QsciLexerYAML struct {
	h *C.QsciLexerYAML
	*QsciLexer
}

func (this *QsciLexerYAML) cPointer() *C.QsciLexerYAML {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerYAML) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerYAML(h *C.QsciLexerYAML) *QsciLexerYAML {
	if h == nil {
		return nil
	}
	return &QsciLexerYAML{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerYAML(h unsafe.Pointer) *QsciLexerYAML {
	return newQsciLexerYAML((*C.QsciLexerYAML)(h))
}

// NewQsciLexerYAML constructs a new QsciLexerYAML object.
func NewQsciLexerYAML() *QsciLexerYAML {
	ret := C.QsciLexerYAML_new()
	return newQsciLexerYAML(ret)
}

// NewQsciLexerYAML2 constructs a new QsciLexerYAML object.
func NewQsciLexerYAML2(parent *qt.QObject) *QsciLexerYAML {
	ret := C.QsciLexerYAML_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerYAML(ret)
}

func (this *QsciLexerYAML) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerYAML_MetaObject(this.h)))
}

func (this *QsciLexerYAML) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerYAML_Metacast(this.h, param1_Cstring))
}

func QsciLexerYAML_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerYAML_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerYAML_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerYAML_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerYAML) Language() string {
	_ret := C.QsciLexerYAML_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerYAML) Lexer() string {
	_ret := C.QsciLexerYAML_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerYAML) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerYAML_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerYAML) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerYAML_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerYAML) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerYAML_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerYAML) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerYAML_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerYAML) Keywords(set int) string {
	_ret := C.QsciLexerYAML_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerYAML) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerYAML_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerYAML) RefreshProperties() {
	C.QsciLexerYAML_RefreshProperties(this.h)
}

func (this *QsciLexerYAML) FoldComments() bool {
	return (bool)(C.QsciLexerYAML_FoldComments(this.h))
}

func (this *QsciLexerYAML) SetFoldComments(fold bool) {
	C.QsciLexerYAML_SetFoldComments(this.h, (C.bool)(fold))
}

func QsciLexerYAML_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerYAML_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerYAML_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerYAML_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerYAML_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerYAML_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerYAML_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerYAML_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerYAML) Delete() {
	C.QsciLexerYAML_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerYAML) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerYAML) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

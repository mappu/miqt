package qscintilla6

/*

#include "gen_qscilexerruby.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerRuby__ int

const (
	QsciLexerRuby__Default               QsciLexerRuby__ = 0
	QsciLexerRuby__Error                 QsciLexerRuby__ = 1
	QsciLexerRuby__Comment               QsciLexerRuby__ = 2
	QsciLexerRuby__POD                   QsciLexerRuby__ = 3
	QsciLexerRuby__Number                QsciLexerRuby__ = 4
	QsciLexerRuby__Keyword               QsciLexerRuby__ = 5
	QsciLexerRuby__DoubleQuotedString    QsciLexerRuby__ = 6
	QsciLexerRuby__SingleQuotedString    QsciLexerRuby__ = 7
	QsciLexerRuby__ClassName             QsciLexerRuby__ = 8
	QsciLexerRuby__FunctionMethodName    QsciLexerRuby__ = 9
	QsciLexerRuby__Operator              QsciLexerRuby__ = 10
	QsciLexerRuby__Identifier            QsciLexerRuby__ = 11
	QsciLexerRuby__Regex                 QsciLexerRuby__ = 12
	QsciLexerRuby__Global                QsciLexerRuby__ = 13
	QsciLexerRuby__Symbol                QsciLexerRuby__ = 14
	QsciLexerRuby__ModuleName            QsciLexerRuby__ = 15
	QsciLexerRuby__InstanceVariable      QsciLexerRuby__ = 16
	QsciLexerRuby__ClassVariable         QsciLexerRuby__ = 17
	QsciLexerRuby__Backticks             QsciLexerRuby__ = 18
	QsciLexerRuby__DataSection           QsciLexerRuby__ = 19
	QsciLexerRuby__HereDocumentDelimiter QsciLexerRuby__ = 20
	QsciLexerRuby__HereDocument          QsciLexerRuby__ = 21
	QsciLexerRuby__PercentStringq        QsciLexerRuby__ = 24
	QsciLexerRuby__PercentStringQ        QsciLexerRuby__ = 25
	QsciLexerRuby__PercentStringx        QsciLexerRuby__ = 26
	QsciLexerRuby__PercentStringr        QsciLexerRuby__ = 27
	QsciLexerRuby__PercentStringw        QsciLexerRuby__ = 28
	QsciLexerRuby__DemotedKeyword        QsciLexerRuby__ = 29
	QsciLexerRuby__Stdin                 QsciLexerRuby__ = 30
	QsciLexerRuby__Stdout                QsciLexerRuby__ = 31
	QsciLexerRuby__Stderr                QsciLexerRuby__ = 40
)

type QsciLexerRuby struct {
	h *C.QsciLexerRuby
	*QsciLexer
}

func (this *QsciLexerRuby) cPointer() *C.QsciLexerRuby {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerRuby) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerRuby(h *C.QsciLexerRuby) *QsciLexerRuby {
	if h == nil {
		return nil
	}
	return &QsciLexerRuby{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerRuby(h unsafe.Pointer) *QsciLexerRuby {
	return newQsciLexerRuby((*C.QsciLexerRuby)(h))
}

// NewQsciLexerRuby constructs a new QsciLexerRuby object.
func NewQsciLexerRuby() *QsciLexerRuby {
	ret := C.QsciLexerRuby_new()
	return newQsciLexerRuby(ret)
}

// NewQsciLexerRuby2 constructs a new QsciLexerRuby object.
func NewQsciLexerRuby2(parent *qt6.QObject) *QsciLexerRuby {
	ret := C.QsciLexerRuby_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerRuby(ret)
}

func (this *QsciLexerRuby) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerRuby_MetaObject(this.h)))
}

func (this *QsciLexerRuby) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerRuby_Metacast(this.h, param1_Cstring))
}

func QsciLexerRuby_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerRuby_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerRuby) Language() string {
	_ret := C.QsciLexerRuby_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) Lexer() string {
	_ret := C.QsciLexerRuby_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) BlockEnd() string {
	_ret := C.QsciLexerRuby_BlockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) BlockStart() string {
	_ret := C.QsciLexerRuby_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) BlockStartKeyword() string {
	_ret := C.QsciLexerRuby_BlockStartKeyword(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) BraceStyle() int {
	return (int)(C.QsciLexerRuby_BraceStyle(this.h))
}

func (this *QsciLexerRuby) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerRuby_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerRuby) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerRuby_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerRuby) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerRuby_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerRuby) DefaultPaper(style int) *qt6.QColor {
	_ret := C.QsciLexerRuby_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerRuby) Keywords(set int) string {
	_ret := C.QsciLexerRuby_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerRuby_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerRuby) RefreshProperties() {
	C.QsciLexerRuby_RefreshProperties(this.h)
}

func (this *QsciLexerRuby) SetFoldComments(fold bool) {
	C.QsciLexerRuby_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerRuby) FoldComments() bool {
	return (bool)(C.QsciLexerRuby_FoldComments(this.h))
}

func (this *QsciLexerRuby) SetFoldCompact(fold bool) {
	C.QsciLexerRuby_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerRuby) FoldCompact() bool {
	return (bool)(C.QsciLexerRuby_FoldCompact(this.h))
}

func QsciLexerRuby_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerRuby_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerRuby_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerRuby_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerRuby) BlockEnd1(style *int) string {
	_ret := C.QsciLexerRuby_BlockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) BlockStart1(style *int) string {
	_ret := C.QsciLexerRuby_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) BlockStartKeyword1(style *int) string {
	_ret := C.QsciLexerRuby_BlockStartKeyword1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

// Delete this object from C++ memory.
func (this *QsciLexerRuby) Delete() {
	C.QsciLexerRuby_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerRuby) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerRuby) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

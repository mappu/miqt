package qscintilla6

/*

#include "gen_qscilexermarkdown.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerMarkdown__ int

const (
	QsciLexerMarkdown__Default                   QsciLexerMarkdown__ = 0
	QsciLexerMarkdown__Special                   QsciLexerMarkdown__ = 1
	QsciLexerMarkdown__StrongEmphasisAsterisks   QsciLexerMarkdown__ = 2
	QsciLexerMarkdown__StrongEmphasisUnderscores QsciLexerMarkdown__ = 3
	QsciLexerMarkdown__EmphasisAsterisks         QsciLexerMarkdown__ = 4
	QsciLexerMarkdown__EmphasisUnderscores       QsciLexerMarkdown__ = 5
	QsciLexerMarkdown__Header1                   QsciLexerMarkdown__ = 6
	QsciLexerMarkdown__Header2                   QsciLexerMarkdown__ = 7
	QsciLexerMarkdown__Header3                   QsciLexerMarkdown__ = 8
	QsciLexerMarkdown__Header4                   QsciLexerMarkdown__ = 9
	QsciLexerMarkdown__Header5                   QsciLexerMarkdown__ = 10
	QsciLexerMarkdown__Header6                   QsciLexerMarkdown__ = 11
	QsciLexerMarkdown__Prechar                   QsciLexerMarkdown__ = 12
	QsciLexerMarkdown__UnorderedListItem         QsciLexerMarkdown__ = 13
	QsciLexerMarkdown__OrderedListItem           QsciLexerMarkdown__ = 14
	QsciLexerMarkdown__BlockQuote                QsciLexerMarkdown__ = 15
	QsciLexerMarkdown__StrikeOut                 QsciLexerMarkdown__ = 16
	QsciLexerMarkdown__HorizontalRule            QsciLexerMarkdown__ = 17
	QsciLexerMarkdown__Link                      QsciLexerMarkdown__ = 18
	QsciLexerMarkdown__CodeBackticks             QsciLexerMarkdown__ = 19
	QsciLexerMarkdown__CodeDoubleBackticks       QsciLexerMarkdown__ = 20
	QsciLexerMarkdown__CodeBlock                 QsciLexerMarkdown__ = 21
)

type QsciLexerMarkdown struct {
	h *C.QsciLexerMarkdown
	*QsciLexer
}

func (this *QsciLexerMarkdown) cPointer() *C.QsciLexerMarkdown {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerMarkdown) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerMarkdown(h *C.QsciLexerMarkdown) *QsciLexerMarkdown {
	if h == nil {
		return nil
	}
	return &QsciLexerMarkdown{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerMarkdown(h unsafe.Pointer) *QsciLexerMarkdown {
	return newQsciLexerMarkdown((*C.QsciLexerMarkdown)(h))
}

// NewQsciLexerMarkdown constructs a new QsciLexerMarkdown object.
func NewQsciLexerMarkdown() *QsciLexerMarkdown {
	ret := C.QsciLexerMarkdown_new()
	return newQsciLexerMarkdown(ret)
}

// NewQsciLexerMarkdown2 constructs a new QsciLexerMarkdown object.
func NewQsciLexerMarkdown2(parent *qt6.QObject) *QsciLexerMarkdown {
	ret := C.QsciLexerMarkdown_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerMarkdown(ret)
}

func (this *QsciLexerMarkdown) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerMarkdown_MetaObject(this.h)))
}

func (this *QsciLexerMarkdown) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerMarkdown_Metacast(this.h, param1_Cstring))
}

func QsciLexerMarkdown_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerMarkdown) Language() string {
	_ret := C.QsciLexerMarkdown_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMarkdown) Lexer() string {
	_ret := C.QsciLexerMarkdown_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMarkdown) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerMarkdown_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMarkdown) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerMarkdown_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMarkdown) DefaultPaper(style int) *qt6.QColor {
	_ret := C.QsciLexerMarkdown_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMarkdown) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMarkdown_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMarkdown_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerMarkdown) Delete() {
	C.QsciLexerMarkdown_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerMarkdown) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerMarkdown) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

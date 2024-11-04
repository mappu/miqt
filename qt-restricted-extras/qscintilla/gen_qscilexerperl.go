package qscintilla

/*

#include "gen_qscilexerperl.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerPerl__ int

const (
	QsciLexerPerl__Default                     QsciLexerPerl__ = 0
	QsciLexerPerl__Error                       QsciLexerPerl__ = 1
	QsciLexerPerl__Comment                     QsciLexerPerl__ = 2
	QsciLexerPerl__POD                         QsciLexerPerl__ = 3
	QsciLexerPerl__Number                      QsciLexerPerl__ = 4
	QsciLexerPerl__Keyword                     QsciLexerPerl__ = 5
	QsciLexerPerl__DoubleQuotedString          QsciLexerPerl__ = 6
	QsciLexerPerl__SingleQuotedString          QsciLexerPerl__ = 7
	QsciLexerPerl__Operator                    QsciLexerPerl__ = 10
	QsciLexerPerl__Identifier                  QsciLexerPerl__ = 11
	QsciLexerPerl__Scalar                      QsciLexerPerl__ = 12
	QsciLexerPerl__Array                       QsciLexerPerl__ = 13
	QsciLexerPerl__Hash                        QsciLexerPerl__ = 14
	QsciLexerPerl__SymbolTable                 QsciLexerPerl__ = 15
	QsciLexerPerl__Regex                       QsciLexerPerl__ = 17
	QsciLexerPerl__Substitution                QsciLexerPerl__ = 18
	QsciLexerPerl__Backticks                   QsciLexerPerl__ = 20
	QsciLexerPerl__DataSection                 QsciLexerPerl__ = 21
	QsciLexerPerl__HereDocumentDelimiter       QsciLexerPerl__ = 22
	QsciLexerPerl__SingleQuotedHereDocument    QsciLexerPerl__ = 23
	QsciLexerPerl__DoubleQuotedHereDocument    QsciLexerPerl__ = 24
	QsciLexerPerl__BacktickHereDocument        QsciLexerPerl__ = 25
	QsciLexerPerl__QuotedStringQ               QsciLexerPerl__ = 26
	QsciLexerPerl__QuotedStringQQ              QsciLexerPerl__ = 27
	QsciLexerPerl__QuotedStringQX              QsciLexerPerl__ = 28
	QsciLexerPerl__QuotedStringQR              QsciLexerPerl__ = 29
	QsciLexerPerl__QuotedStringQW              QsciLexerPerl__ = 30
	QsciLexerPerl__PODVerbatim                 QsciLexerPerl__ = 31
	QsciLexerPerl__SubroutinePrototype         QsciLexerPerl__ = 40
	QsciLexerPerl__FormatIdentifier            QsciLexerPerl__ = 41
	QsciLexerPerl__FormatBody                  QsciLexerPerl__ = 42
	QsciLexerPerl__DoubleQuotedStringVar       QsciLexerPerl__ = 43
	QsciLexerPerl__Translation                 QsciLexerPerl__ = 44
	QsciLexerPerl__RegexVar                    QsciLexerPerl__ = 54
	QsciLexerPerl__SubstitutionVar             QsciLexerPerl__ = 55
	QsciLexerPerl__BackticksVar                QsciLexerPerl__ = 57
	QsciLexerPerl__DoubleQuotedHereDocumentVar QsciLexerPerl__ = 61
	QsciLexerPerl__BacktickHereDocumentVar     QsciLexerPerl__ = 62
	QsciLexerPerl__QuotedStringQQVar           QsciLexerPerl__ = 64
	QsciLexerPerl__QuotedStringQXVar           QsciLexerPerl__ = 65
	QsciLexerPerl__QuotedStringQRVar           QsciLexerPerl__ = 66
)

type QsciLexerPerl struct {
	h *C.QsciLexerPerl
	*QsciLexer
}

func (this *QsciLexerPerl) cPointer() *C.QsciLexerPerl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerPerl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerPerl(h *C.QsciLexerPerl) *QsciLexerPerl {
	if h == nil {
		return nil
	}
	return &QsciLexerPerl{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerPerl(h unsafe.Pointer) *QsciLexerPerl {
	return newQsciLexerPerl((*C.QsciLexerPerl)(h))
}

// NewQsciLexerPerl constructs a new QsciLexerPerl object.
func NewQsciLexerPerl() *QsciLexerPerl {
	ret := C.QsciLexerPerl_new()
	return newQsciLexerPerl(ret)
}

// NewQsciLexerPerl2 constructs a new QsciLexerPerl object.
func NewQsciLexerPerl2(parent *qt.QObject) *QsciLexerPerl {
	ret := C.QsciLexerPerl_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerPerl(ret)
}

func (this *QsciLexerPerl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerPerl_MetaObject(this.h)))
}

func (this *QsciLexerPerl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerPerl_Metacast(this.h, param1_Cstring))
}

func QsciLexerPerl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPerl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPerl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPerl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPerl) Language() string {
	_ret := C.QsciLexerPerl_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) Lexer() string {
	_ret := C.QsciLexerPerl_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerPerl_AutoCompletionWordSeparators(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QsciLexerPerl) BlockEnd() string {
	_ret := C.QsciLexerPerl_BlockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) BlockStart() string {
	_ret := C.QsciLexerPerl_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) BraceStyle() int {
	return (int)(C.QsciLexerPerl_BraceStyle(this.h))
}

func (this *QsciLexerPerl) WordCharacters() string {
	_ret := C.QsciLexerPerl_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerPerl_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPerl) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerPerl_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerPerl) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerPerl_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPerl) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerPerl_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPerl) Keywords(set int) string {
	_ret := C.QsciLexerPerl_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerPerl_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPerl) RefreshProperties() {
	C.QsciLexerPerl_RefreshProperties(this.h)
}

func (this *QsciLexerPerl) SetFoldAtElse(fold bool) {
	C.QsciLexerPerl_SetFoldAtElse(this.h, (C.bool)(fold))
}

func (this *QsciLexerPerl) FoldAtElse() bool {
	return (bool)(C.QsciLexerPerl_FoldAtElse(this.h))
}

func (this *QsciLexerPerl) FoldComments() bool {
	return (bool)(C.QsciLexerPerl_FoldComments(this.h))
}

func (this *QsciLexerPerl) FoldCompact() bool {
	return (bool)(C.QsciLexerPerl_FoldCompact(this.h))
}

func (this *QsciLexerPerl) SetFoldPackages(fold bool) {
	C.QsciLexerPerl_SetFoldPackages(this.h, (C.bool)(fold))
}

func (this *QsciLexerPerl) FoldPackages() bool {
	return (bool)(C.QsciLexerPerl_FoldPackages(this.h))
}

func (this *QsciLexerPerl) SetFoldPODBlocks(fold bool) {
	C.QsciLexerPerl_SetFoldPODBlocks(this.h, (C.bool)(fold))
}

func (this *QsciLexerPerl) FoldPODBlocks() bool {
	return (bool)(C.QsciLexerPerl_FoldPODBlocks(this.h))
}

func (this *QsciLexerPerl) SetFoldComments(fold bool) {
	C.QsciLexerPerl_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerPerl) SetFoldCompact(fold bool) {
	C.QsciLexerPerl_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerPerl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPerl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPerl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPerl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPerl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPerl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPerl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPerl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPerl) BlockEnd1(style *int) string {
	_ret := C.QsciLexerPerl_BlockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) BlockStart1(style *int) string {
	_ret := C.QsciLexerPerl_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

// Delete this object from C++ memory.
func (this *QsciLexerPerl) Delete() {
	C.QsciLexerPerl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerPerl) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerPerl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

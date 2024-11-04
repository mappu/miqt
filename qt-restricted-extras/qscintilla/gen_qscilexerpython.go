package qscintilla

/*

#include "gen_qscilexerpython.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerPython__ int

const (
	QsciLexerPython__Default                   QsciLexerPython__ = 0
	QsciLexerPython__Comment                   QsciLexerPython__ = 1
	QsciLexerPython__Number                    QsciLexerPython__ = 2
	QsciLexerPython__DoubleQuotedString        QsciLexerPython__ = 3
	QsciLexerPython__SingleQuotedString        QsciLexerPython__ = 4
	QsciLexerPython__Keyword                   QsciLexerPython__ = 5
	QsciLexerPython__TripleSingleQuotedString  QsciLexerPython__ = 6
	QsciLexerPython__TripleDoubleQuotedString  QsciLexerPython__ = 7
	QsciLexerPython__ClassName                 QsciLexerPython__ = 8
	QsciLexerPython__FunctionMethodName        QsciLexerPython__ = 9
	QsciLexerPython__Operator                  QsciLexerPython__ = 10
	QsciLexerPython__Identifier                QsciLexerPython__ = 11
	QsciLexerPython__CommentBlock              QsciLexerPython__ = 12
	QsciLexerPython__UnclosedString            QsciLexerPython__ = 13
	QsciLexerPython__HighlightedIdentifier     QsciLexerPython__ = 14
	QsciLexerPython__Decorator                 QsciLexerPython__ = 15
	QsciLexerPython__DoubleQuotedFString       QsciLexerPython__ = 16
	QsciLexerPython__SingleQuotedFString       QsciLexerPython__ = 17
	QsciLexerPython__TripleSingleQuotedFString QsciLexerPython__ = 18
	QsciLexerPython__TripleDoubleQuotedFString QsciLexerPython__ = 19
)

type QsciLexerPython__IndentationWarning int

const (
	QsciLexerPython__NoWarning       QsciLexerPython__IndentationWarning = 0
	QsciLexerPython__Inconsistent    QsciLexerPython__IndentationWarning = 1
	QsciLexerPython__TabsAfterSpaces QsciLexerPython__IndentationWarning = 2
	QsciLexerPython__Spaces          QsciLexerPython__IndentationWarning = 3
	QsciLexerPython__Tabs            QsciLexerPython__IndentationWarning = 4
)

type QsciLexerPython struct {
	h *C.QsciLexerPython
	*QsciLexer
}

func (this *QsciLexerPython) cPointer() *C.QsciLexerPython {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerPython) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerPython(h *C.QsciLexerPython) *QsciLexerPython {
	if h == nil {
		return nil
	}
	return &QsciLexerPython{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerPython(h unsafe.Pointer) *QsciLexerPython {
	return newQsciLexerPython((*C.QsciLexerPython)(h))
}

// NewQsciLexerPython constructs a new QsciLexerPython object.
func NewQsciLexerPython() *QsciLexerPython {
	ret := C.QsciLexerPython_new()
	return newQsciLexerPython(ret)
}

// NewQsciLexerPython2 constructs a new QsciLexerPython object.
func NewQsciLexerPython2(parent *qt.QObject) *QsciLexerPython {
	ret := C.QsciLexerPython_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerPython(ret)
}

func (this *QsciLexerPython) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerPython_MetaObject(this.h)))
}

func (this *QsciLexerPython) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerPython_Metacast(this.h, param1_Cstring))
}

func QsciLexerPython_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPython_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPython_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPython_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPython) Language() string {
	_ret := C.QsciLexerPython_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPython) Lexer() string {
	_ret := C.QsciLexerPython_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPython) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerPython_AutoCompletionWordSeparators(this.h)
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

func (this *QsciLexerPython) BlockLookback() int {
	return (int)(C.QsciLexerPython_BlockLookback(this.h))
}

func (this *QsciLexerPython) BlockStart() string {
	_ret := C.QsciLexerPython_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPython) BraceStyle() int {
	return (int)(C.QsciLexerPython_BraceStyle(this.h))
}

func (this *QsciLexerPython) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerPython_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPython) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerPython_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerPython) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerPython_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPython) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerPython_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPython) IndentationGuideView() int {
	return (int)(C.QsciLexerPython_IndentationGuideView(this.h))
}

func (this *QsciLexerPython) Keywords(set int) string {
	_ret := C.QsciLexerPython_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerPython) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerPython_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPython) RefreshProperties() {
	C.QsciLexerPython_RefreshProperties(this.h)
}

func (this *QsciLexerPython) FoldComments() bool {
	return (bool)(C.QsciLexerPython_FoldComments(this.h))
}

func (this *QsciLexerPython) SetFoldCompact(fold bool) {
	C.QsciLexerPython_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerPython) FoldCompact() bool {
	return (bool)(C.QsciLexerPython_FoldCompact(this.h))
}

func (this *QsciLexerPython) FoldQuotes() bool {
	return (bool)(C.QsciLexerPython_FoldQuotes(this.h))
}

func (this *QsciLexerPython) IndentationWarning() QsciLexerPython__IndentationWarning {
	return (QsciLexerPython__IndentationWarning)(C.QsciLexerPython_IndentationWarning(this.h))
}

func (this *QsciLexerPython) SetHighlightSubidentifiers(enabled bool) {
	C.QsciLexerPython_SetHighlightSubidentifiers(this.h, (C.bool)(enabled))
}

func (this *QsciLexerPython) HighlightSubidentifiers() bool {
	return (bool)(C.QsciLexerPython_HighlightSubidentifiers(this.h))
}

func (this *QsciLexerPython) SetStringsOverNewlineAllowed(allowed bool) {
	C.QsciLexerPython_SetStringsOverNewlineAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerPython) StringsOverNewlineAllowed() bool {
	return (bool)(C.QsciLexerPython_StringsOverNewlineAllowed(this.h))
}

func (this *QsciLexerPython) SetV2UnicodeAllowed(allowed bool) {
	C.QsciLexerPython_SetV2UnicodeAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerPython) V2UnicodeAllowed() bool {
	return (bool)(C.QsciLexerPython_V2UnicodeAllowed(this.h))
}

func (this *QsciLexerPython) SetV3BinaryOctalAllowed(allowed bool) {
	C.QsciLexerPython_SetV3BinaryOctalAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerPython) V3BinaryOctalAllowed() bool {
	return (bool)(C.QsciLexerPython_V3BinaryOctalAllowed(this.h))
}

func (this *QsciLexerPython) SetV3BytesAllowed(allowed bool) {
	C.QsciLexerPython_SetV3BytesAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerPython) V3BytesAllowed() bool {
	return (bool)(C.QsciLexerPython_V3BytesAllowed(this.h))
}

func (this *QsciLexerPython) SetFoldComments(fold bool) {
	C.QsciLexerPython_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerPython) SetFoldQuotes(fold bool) {
	C.QsciLexerPython_SetFoldQuotes(this.h, (C.bool)(fold))
}

func (this *QsciLexerPython) SetIndentationWarning(warn QsciLexerPython__IndentationWarning) {
	C.QsciLexerPython_SetIndentationWarning(this.h, (C.int)(warn))
}

func QsciLexerPython_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPython_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPython_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPython_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPython_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPython_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPython_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPython_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPython) BlockStart1(style *int) string {
	_ret := C.QsciLexerPython_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

// Delete this object from C++ memory.
func (this *QsciLexerPython) Delete() {
	C.QsciLexerPython_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerPython) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerPython) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

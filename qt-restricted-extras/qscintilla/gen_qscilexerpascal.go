package qscintilla

/*

#include "gen_qscilexerpascal.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerPascal__ int

const (
	QsciLexerPascal__Default                 QsciLexerPascal__ = 0
	QsciLexerPascal__Identifier              QsciLexerPascal__ = 1
	QsciLexerPascal__Comment                 QsciLexerPascal__ = 2
	QsciLexerPascal__CommentParenthesis      QsciLexerPascal__ = 3
	QsciLexerPascal__CommentLine             QsciLexerPascal__ = 4
	QsciLexerPascal__PreProcessor            QsciLexerPascal__ = 5
	QsciLexerPascal__PreProcessorParenthesis QsciLexerPascal__ = 6
	QsciLexerPascal__Number                  QsciLexerPascal__ = 7
	QsciLexerPascal__HexNumber               QsciLexerPascal__ = 8
	QsciLexerPascal__Keyword                 QsciLexerPascal__ = 9
	QsciLexerPascal__SingleQuotedString      QsciLexerPascal__ = 10
	QsciLexerPascal__UnclosedString          QsciLexerPascal__ = 11
	QsciLexerPascal__Character               QsciLexerPascal__ = 12
	QsciLexerPascal__Operator                QsciLexerPascal__ = 13
	QsciLexerPascal__Asm                     QsciLexerPascal__ = 14
)

type QsciLexerPascal struct {
	h *C.QsciLexerPascal
	*QsciLexer
}

func (this *QsciLexerPascal) cPointer() *C.QsciLexerPascal {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerPascal) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerPascal(h *C.QsciLexerPascal) *QsciLexerPascal {
	if h == nil {
		return nil
	}
	return &QsciLexerPascal{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerPascal(h unsafe.Pointer) *QsciLexerPascal {
	return newQsciLexerPascal((*C.QsciLexerPascal)(h))
}

// NewQsciLexerPascal constructs a new QsciLexerPascal object.
func NewQsciLexerPascal() *QsciLexerPascal {
	ret := C.QsciLexerPascal_new()
	return newQsciLexerPascal(ret)
}

// NewQsciLexerPascal2 constructs a new QsciLexerPascal object.
func NewQsciLexerPascal2(parent *qt.QObject) *QsciLexerPascal {
	ret := C.QsciLexerPascal_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerPascal(ret)
}

func (this *QsciLexerPascal) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerPascal_MetaObject(this.h)))
}

func (this *QsciLexerPascal) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerPascal_Metacast(this.h, param1_Cstring))
}

func QsciLexerPascal_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPascal_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPascal_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPascal_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPascal) Language() string {
	_ret := C.QsciLexerPascal_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPascal) Lexer() string {
	_ret := C.QsciLexerPascal_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPascal) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerPascal_AutoCompletionWordSeparators(this.h)
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

func (this *QsciLexerPascal) BlockEnd() string {
	_ret := C.QsciLexerPascal_BlockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPascal) BlockStart() string {
	_ret := C.QsciLexerPascal_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPascal) BlockStartKeyword() string {
	_ret := C.QsciLexerPascal_BlockStartKeyword(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPascal) BraceStyle() int {
	return (int)(C.QsciLexerPascal_BraceStyle(this.h))
}

func (this *QsciLexerPascal) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerPascal_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPascal) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerPascal_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerPascal) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerPascal_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPascal) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerPascal_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPascal) Keywords(set int) string {
	_ret := C.QsciLexerPascal_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerPascal) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerPascal_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPascal) RefreshProperties() {
	C.QsciLexerPascal_RefreshProperties(this.h)
}

func (this *QsciLexerPascal) FoldComments() bool {
	return (bool)(C.QsciLexerPascal_FoldComments(this.h))
}

func (this *QsciLexerPascal) FoldCompact() bool {
	return (bool)(C.QsciLexerPascal_FoldCompact(this.h))
}

func (this *QsciLexerPascal) FoldPreprocessor() bool {
	return (bool)(C.QsciLexerPascal_FoldPreprocessor(this.h))
}

func (this *QsciLexerPascal) SetSmartHighlighting(enabled bool) {
	C.QsciLexerPascal_SetSmartHighlighting(this.h, (C.bool)(enabled))
}

func (this *QsciLexerPascal) SmartHighlighting() bool {
	return (bool)(C.QsciLexerPascal_SmartHighlighting(this.h))
}

func (this *QsciLexerPascal) SetFoldComments(fold bool) {
	C.QsciLexerPascal_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerPascal) SetFoldCompact(fold bool) {
	C.QsciLexerPascal_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerPascal) SetFoldPreprocessor(fold bool) {
	C.QsciLexerPascal_SetFoldPreprocessor(this.h, (C.bool)(fold))
}

func QsciLexerPascal_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPascal_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPascal_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPascal_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPascal_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPascal_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPascal_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPascal_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPascal) BlockEnd1(style *int) string {
	_ret := C.QsciLexerPascal_BlockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerPascal) BlockStart1(style *int) string {
	_ret := C.QsciLexerPascal_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerPascal) BlockStartKeyword1(style *int) string {
	_ret := C.QsciLexerPascal_BlockStartKeyword1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

// Delete this object from C++ memory.
func (this *QsciLexerPascal) Delete() {
	C.QsciLexerPascal_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerPascal) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerPascal) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

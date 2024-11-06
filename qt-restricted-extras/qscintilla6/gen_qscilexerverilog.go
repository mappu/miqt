package qscintilla6

/*

#include "gen_qscilexerverilog.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerVerilog__ int

const (
	QsciLexerVerilog__Default                        QsciLexerVerilog__ = 0
	QsciLexerVerilog__InactiveDefault                QsciLexerVerilog__ = 64
	QsciLexerVerilog__Comment                        QsciLexerVerilog__ = 1
	QsciLexerVerilog__InactiveComment                QsciLexerVerilog__ = 65
	QsciLexerVerilog__CommentLine                    QsciLexerVerilog__ = 2
	QsciLexerVerilog__InactiveCommentLine            QsciLexerVerilog__ = 66
	QsciLexerVerilog__CommentBang                    QsciLexerVerilog__ = 3
	QsciLexerVerilog__InactiveCommentBang            QsciLexerVerilog__ = 67
	QsciLexerVerilog__Number                         QsciLexerVerilog__ = 4
	QsciLexerVerilog__InactiveNumber                 QsciLexerVerilog__ = 68
	QsciLexerVerilog__Keyword                        QsciLexerVerilog__ = 5
	QsciLexerVerilog__InactiveKeyword                QsciLexerVerilog__ = 69
	QsciLexerVerilog__String                         QsciLexerVerilog__ = 6
	QsciLexerVerilog__InactiveString                 QsciLexerVerilog__ = 70
	QsciLexerVerilog__KeywordSet2                    QsciLexerVerilog__ = 7
	QsciLexerVerilog__InactiveKeywordSet2            QsciLexerVerilog__ = 71
	QsciLexerVerilog__SystemTask                     QsciLexerVerilog__ = 8
	QsciLexerVerilog__InactiveSystemTask             QsciLexerVerilog__ = 72
	QsciLexerVerilog__Preprocessor                   QsciLexerVerilog__ = 9
	QsciLexerVerilog__InactivePreprocessor           QsciLexerVerilog__ = 73
	QsciLexerVerilog__Operator                       QsciLexerVerilog__ = 10
	QsciLexerVerilog__InactiveOperator               QsciLexerVerilog__ = 74
	QsciLexerVerilog__Identifier                     QsciLexerVerilog__ = 11
	QsciLexerVerilog__InactiveIdentifier             QsciLexerVerilog__ = 75
	QsciLexerVerilog__UnclosedString                 QsciLexerVerilog__ = 12
	QsciLexerVerilog__InactiveUnclosedString         QsciLexerVerilog__ = 76
	QsciLexerVerilog__UserKeywordSet                 QsciLexerVerilog__ = 19
	QsciLexerVerilog__InactiveUserKeywordSet         QsciLexerVerilog__ = 83
	QsciLexerVerilog__CommentKeyword                 QsciLexerVerilog__ = 20
	QsciLexerVerilog__InactiveCommentKeyword         QsciLexerVerilog__ = 84
	QsciLexerVerilog__DeclareInputPort               QsciLexerVerilog__ = 21
	QsciLexerVerilog__InactiveDeclareInputPort       QsciLexerVerilog__ = 85
	QsciLexerVerilog__DeclareOutputPort              QsciLexerVerilog__ = 22
	QsciLexerVerilog__InactiveDeclareOutputPort      QsciLexerVerilog__ = 86
	QsciLexerVerilog__DeclareInputOutputPort         QsciLexerVerilog__ = 23
	QsciLexerVerilog__InactiveDeclareInputOutputPort QsciLexerVerilog__ = 87
	QsciLexerVerilog__PortConnection                 QsciLexerVerilog__ = 24
	QsciLexerVerilog__InactivePortConnection         QsciLexerVerilog__ = 88
)

type QsciLexerVerilog struct {
	h *C.QsciLexerVerilog
	*QsciLexer
}

func (this *QsciLexerVerilog) cPointer() *C.QsciLexerVerilog {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerVerilog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerVerilog(h *C.QsciLexerVerilog) *QsciLexerVerilog {
	if h == nil {
		return nil
	}
	return &QsciLexerVerilog{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerVerilog(h unsafe.Pointer) *QsciLexerVerilog {
	return newQsciLexerVerilog((*C.QsciLexerVerilog)(h))
}

// NewQsciLexerVerilog constructs a new QsciLexerVerilog object.
func NewQsciLexerVerilog() *QsciLexerVerilog {
	ret := C.QsciLexerVerilog_new()
	return newQsciLexerVerilog(ret)
}

// NewQsciLexerVerilog2 constructs a new QsciLexerVerilog object.
func NewQsciLexerVerilog2(parent *qt6.QObject) *QsciLexerVerilog {
	ret := C.QsciLexerVerilog_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerVerilog(ret)
}

func (this *QsciLexerVerilog) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerVerilog_MetaObject(this.h)))
}

func (this *QsciLexerVerilog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerVerilog_Metacast(this.h, param1_Cstring))
}

func QsciLexerVerilog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerVerilog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerVerilog) Language() string {
	_ret := C.QsciLexerVerilog_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerVerilog) Lexer() string {
	_ret := C.QsciLexerVerilog_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerVerilog) BraceStyle() int {
	return (int)(C.QsciLexerVerilog_BraceStyle(this.h))
}

func (this *QsciLexerVerilog) WordCharacters() string {
	_ret := C.QsciLexerVerilog_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerVerilog) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerVerilog_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerVerilog) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerVerilog_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerVerilog) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerVerilog_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerVerilog) DefaultPaper(style int) *qt6.QColor {
	_ret := C.QsciLexerVerilog_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerVerilog) Keywords(set int) string {
	_ret := C.QsciLexerVerilog_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerVerilog) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerVerilog_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerVerilog) RefreshProperties() {
	C.QsciLexerVerilog_RefreshProperties(this.h)
}

func (this *QsciLexerVerilog) SetFoldAtElse(fold bool) {
	C.QsciLexerVerilog_SetFoldAtElse(this.h, (C.bool)(fold))
}

func (this *QsciLexerVerilog) FoldAtElse() bool {
	return (bool)(C.QsciLexerVerilog_FoldAtElse(this.h))
}

func (this *QsciLexerVerilog) SetFoldComments(fold bool) {
	C.QsciLexerVerilog_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerVerilog) FoldComments() bool {
	return (bool)(C.QsciLexerVerilog_FoldComments(this.h))
}

func (this *QsciLexerVerilog) SetFoldCompact(fold bool) {
	C.QsciLexerVerilog_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerVerilog) FoldCompact() bool {
	return (bool)(C.QsciLexerVerilog_FoldCompact(this.h))
}

func (this *QsciLexerVerilog) SetFoldPreprocessor(fold bool) {
	C.QsciLexerVerilog_SetFoldPreprocessor(this.h, (C.bool)(fold))
}

func (this *QsciLexerVerilog) FoldPreprocessor() bool {
	return (bool)(C.QsciLexerVerilog_FoldPreprocessor(this.h))
}

func (this *QsciLexerVerilog) SetFoldAtModule(fold bool) {
	C.QsciLexerVerilog_SetFoldAtModule(this.h, (C.bool)(fold))
}

func (this *QsciLexerVerilog) FoldAtModule() bool {
	return (bool)(C.QsciLexerVerilog_FoldAtModule(this.h))
}

func QsciLexerVerilog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerVerilog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerVerilog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerVerilog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerVerilog) Delete() {
	C.QsciLexerVerilog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerVerilog) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerVerilog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

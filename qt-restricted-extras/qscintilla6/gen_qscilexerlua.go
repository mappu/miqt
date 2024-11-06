package qscintilla6

/*

#include "gen_qscilexerlua.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerLua__ int

const (
	QsciLexerLua__Default                      QsciLexerLua__ = 0
	QsciLexerLua__Comment                      QsciLexerLua__ = 1
	QsciLexerLua__LineComment                  QsciLexerLua__ = 2
	QsciLexerLua__Number                       QsciLexerLua__ = 4
	QsciLexerLua__Keyword                      QsciLexerLua__ = 5
	QsciLexerLua__String                       QsciLexerLua__ = 6
	QsciLexerLua__Character                    QsciLexerLua__ = 7
	QsciLexerLua__LiteralString                QsciLexerLua__ = 8
	QsciLexerLua__Preprocessor                 QsciLexerLua__ = 9
	QsciLexerLua__Operator                     QsciLexerLua__ = 10
	QsciLexerLua__Identifier                   QsciLexerLua__ = 11
	QsciLexerLua__UnclosedString               QsciLexerLua__ = 12
	QsciLexerLua__BasicFunctions               QsciLexerLua__ = 13
	QsciLexerLua__StringTableMathsFunctions    QsciLexerLua__ = 14
	QsciLexerLua__CoroutinesIOSystemFacilities QsciLexerLua__ = 15
	QsciLexerLua__KeywordSet5                  QsciLexerLua__ = 16
	QsciLexerLua__KeywordSet6                  QsciLexerLua__ = 17
	QsciLexerLua__KeywordSet7                  QsciLexerLua__ = 18
	QsciLexerLua__KeywordSet8                  QsciLexerLua__ = 19
	QsciLexerLua__Label                        QsciLexerLua__ = 20
)

type QsciLexerLua struct {
	h *C.QsciLexerLua
	*QsciLexer
}

func (this *QsciLexerLua) cPointer() *C.QsciLexerLua {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerLua) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerLua(h *C.QsciLexerLua) *QsciLexerLua {
	if h == nil {
		return nil
	}
	return &QsciLexerLua{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerLua(h unsafe.Pointer) *QsciLexerLua {
	return newQsciLexerLua((*C.QsciLexerLua)(h))
}

// NewQsciLexerLua constructs a new QsciLexerLua object.
func NewQsciLexerLua() *QsciLexerLua {
	ret := C.QsciLexerLua_new()
	return newQsciLexerLua(ret)
}

// NewQsciLexerLua2 constructs a new QsciLexerLua object.
func NewQsciLexerLua2(parent *qt6.QObject) *QsciLexerLua {
	ret := C.QsciLexerLua_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerLua(ret)
}

func (this *QsciLexerLua) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerLua_MetaObject(this.h)))
}

func (this *QsciLexerLua) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerLua_Metacast(this.h, param1_Cstring))
}

func QsciLexerLua_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerLua_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerLua) Language() string {
	_ret := C.QsciLexerLua_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerLua) Lexer() string {
	_ret := C.QsciLexerLua_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerLua) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerLua_AutoCompletionWordSeparators(this.h)
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

func (this *QsciLexerLua) BlockStart() string {
	_ret := C.QsciLexerLua_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerLua) BraceStyle() int {
	return (int)(C.QsciLexerLua_BraceStyle(this.h))
}

func (this *QsciLexerLua) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerLua_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerLua) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerLua_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerLua) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerLua_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerLua) DefaultPaper(style int) *qt6.QColor {
	_ret := C.QsciLexerLua_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerLua) Keywords(set int) string {
	_ret := C.QsciLexerLua_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerLua) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerLua_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerLua) RefreshProperties() {
	C.QsciLexerLua_RefreshProperties(this.h)
}

func (this *QsciLexerLua) FoldCompact() bool {
	return (bool)(C.QsciLexerLua_FoldCompact(this.h))
}

func (this *QsciLexerLua) SetFoldCompact(fold bool) {
	C.QsciLexerLua_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerLua_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerLua_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerLua_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerLua_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerLua) BlockStart1(style *int) string {
	_ret := C.QsciLexerLua_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

// Delete this object from C++ memory.
func (this *QsciLexerLua) Delete() {
	C.QsciLexerLua_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerLua) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerLua) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

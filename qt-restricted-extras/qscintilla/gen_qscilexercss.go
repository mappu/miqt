package qscintilla

/*

#include "gen_qscilexercss.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerCSS__ int

const (
	QsciLexerCSS__Default               QsciLexerCSS__ = 0
	QsciLexerCSS__Tag                   QsciLexerCSS__ = 1
	QsciLexerCSS__ClassSelector         QsciLexerCSS__ = 2
	QsciLexerCSS__PseudoClass           QsciLexerCSS__ = 3
	QsciLexerCSS__UnknownPseudoClass    QsciLexerCSS__ = 4
	QsciLexerCSS__Operator              QsciLexerCSS__ = 5
	QsciLexerCSS__CSS1Property          QsciLexerCSS__ = 6
	QsciLexerCSS__UnknownProperty       QsciLexerCSS__ = 7
	QsciLexerCSS__Value                 QsciLexerCSS__ = 8
	QsciLexerCSS__Comment               QsciLexerCSS__ = 9
	QsciLexerCSS__IDSelector            QsciLexerCSS__ = 10
	QsciLexerCSS__Important             QsciLexerCSS__ = 11
	QsciLexerCSS__AtRule                QsciLexerCSS__ = 12
	QsciLexerCSS__DoubleQuotedString    QsciLexerCSS__ = 13
	QsciLexerCSS__SingleQuotedString    QsciLexerCSS__ = 14
	QsciLexerCSS__CSS2Property          QsciLexerCSS__ = 15
	QsciLexerCSS__Attribute             QsciLexerCSS__ = 16
	QsciLexerCSS__CSS3Property          QsciLexerCSS__ = 17
	QsciLexerCSS__PseudoElement         QsciLexerCSS__ = 18
	QsciLexerCSS__ExtendedCSSProperty   QsciLexerCSS__ = 19
	QsciLexerCSS__ExtendedPseudoClass   QsciLexerCSS__ = 20
	QsciLexerCSS__ExtendedPseudoElement QsciLexerCSS__ = 21
	QsciLexerCSS__MediaRule             QsciLexerCSS__ = 22
	QsciLexerCSS__Variable              QsciLexerCSS__ = 23
)

type QsciLexerCSS struct {
	h *C.QsciLexerCSS
	*QsciLexer
}

func (this *QsciLexerCSS) cPointer() *C.QsciLexerCSS {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerCSS) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerCSS(h *C.QsciLexerCSS) *QsciLexerCSS {
	if h == nil {
		return nil
	}
	return &QsciLexerCSS{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerCSS(h unsafe.Pointer) *QsciLexerCSS {
	return newQsciLexerCSS((*C.QsciLexerCSS)(h))
}

// NewQsciLexerCSS constructs a new QsciLexerCSS object.
func NewQsciLexerCSS() *QsciLexerCSS {
	ret := C.QsciLexerCSS_new()
	return newQsciLexerCSS(ret)
}

// NewQsciLexerCSS2 constructs a new QsciLexerCSS object.
func NewQsciLexerCSS2(parent *qt.QObject) *QsciLexerCSS {
	ret := C.QsciLexerCSS_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerCSS(ret)
}

func (this *QsciLexerCSS) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerCSS_MetaObject(this.h)))
}

func (this *QsciLexerCSS) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerCSS_Metacast(this.h, param1_Cstring))
}

func QsciLexerCSS_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSS_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSS_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSS_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCSS) Language() string {
	_ret := C.QsciLexerCSS_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) Lexer() string {
	_ret := C.QsciLexerCSS_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) BlockEnd() string {
	_ret := C.QsciLexerCSS_BlockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) BlockStart() string {
	_ret := C.QsciLexerCSS_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) WordCharacters() string {
	_ret := C.QsciLexerCSS_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerCSS_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCSS) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerCSS_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCSS) Keywords(set int) string {
	_ret := C.QsciLexerCSS_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerCSS_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCSS) RefreshProperties() {
	C.QsciLexerCSS_RefreshProperties(this.h)
}

func (this *QsciLexerCSS) FoldComments() bool {
	return (bool)(C.QsciLexerCSS_FoldComments(this.h))
}

func (this *QsciLexerCSS) FoldCompact() bool {
	return (bool)(C.QsciLexerCSS_FoldCompact(this.h))
}

func (this *QsciLexerCSS) SetHSSLanguage(enabled bool) {
	C.QsciLexerCSS_SetHSSLanguage(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCSS) HSSLanguage() bool {
	return (bool)(C.QsciLexerCSS_HSSLanguage(this.h))
}

func (this *QsciLexerCSS) SetLessLanguage(enabled bool) {
	C.QsciLexerCSS_SetLessLanguage(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCSS) LessLanguage() bool {
	return (bool)(C.QsciLexerCSS_LessLanguage(this.h))
}

func (this *QsciLexerCSS) SetSCSSLanguage(enabled bool) {
	C.QsciLexerCSS_SetSCSSLanguage(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCSS) SCSSLanguage() bool {
	return (bool)(C.QsciLexerCSS_SCSSLanguage(this.h))
}

func (this *QsciLexerCSS) SetFoldComments(fold bool) {
	C.QsciLexerCSS_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerCSS) SetFoldCompact(fold bool) {
	C.QsciLexerCSS_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerCSS_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSS_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSS_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSS_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSS_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSS_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSS_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSS_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCSS) BlockEnd1(style *int) string {
	_ret := C.QsciLexerCSS_BlockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) BlockStart1(style *int) string {
	_ret := C.QsciLexerCSS_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

// Delete this object from C++ memory.
func (this *QsciLexerCSS) Delete() {
	C.QsciLexerCSS_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerCSS) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerCSS) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

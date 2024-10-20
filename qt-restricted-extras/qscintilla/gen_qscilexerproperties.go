package qscintilla

/*

#include "gen_qscilexerproperties.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerProperties__ int

const (
	QsciLexerProperties__Default      QsciLexerProperties__ = 0
	QsciLexerProperties__Comment      QsciLexerProperties__ = 1
	QsciLexerProperties__Section      QsciLexerProperties__ = 2
	QsciLexerProperties__Assignment   QsciLexerProperties__ = 3
	QsciLexerProperties__DefaultValue QsciLexerProperties__ = 4
	QsciLexerProperties__Key          QsciLexerProperties__ = 5
)

type QsciLexerProperties struct {
	h *C.QsciLexerProperties
	*QsciLexer
}

func (this *QsciLexerProperties) cPointer() *C.QsciLexerProperties {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerProperties) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerProperties(h *C.QsciLexerProperties) *QsciLexerProperties {
	if h == nil {
		return nil
	}
	return &QsciLexerProperties{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerProperties(h unsafe.Pointer) *QsciLexerProperties {
	return newQsciLexerProperties((*C.QsciLexerProperties)(h))
}

// NewQsciLexerProperties constructs a new QsciLexerProperties object.
func NewQsciLexerProperties() *QsciLexerProperties {
	ret := C.QsciLexerProperties_new()
	return newQsciLexerProperties(ret)
}

// NewQsciLexerProperties2 constructs a new QsciLexerProperties object.
func NewQsciLexerProperties2(parent *qt.QObject) *QsciLexerProperties {
	ret := C.QsciLexerProperties_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerProperties(ret)
}

func (this *QsciLexerProperties) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerProperties_MetaObject(this.h)))
}

func (this *QsciLexerProperties) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerProperties_Metacast(this.h, param1_Cstring))
}

func QsciLexerProperties_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerProperties_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerProperties_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerProperties_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerProperties) Language() string {
	_ret := C.QsciLexerProperties_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerProperties) Lexer() string {
	_ret := C.QsciLexerProperties_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerProperties) WordCharacters() string {
	_ret := C.QsciLexerProperties_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerProperties) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerProperties_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerProperties) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerProperties_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerProperties) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerProperties_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerProperties) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerProperties_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerProperties) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerProperties_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerProperties) RefreshProperties() {
	C.QsciLexerProperties_RefreshProperties(this.h)
}

func (this *QsciLexerProperties) FoldCompact() bool {
	return (bool)(C.QsciLexerProperties_FoldCompact(this.h))
}

func (this *QsciLexerProperties) SetInitialSpaces(enable bool) {
	C.QsciLexerProperties_SetInitialSpaces(this.h, (C.bool)(enable))
}

func (this *QsciLexerProperties) InitialSpaces() bool {
	return (bool)(C.QsciLexerProperties_InitialSpaces(this.h))
}

func (this *QsciLexerProperties) SetFoldCompact(fold bool) {
	C.QsciLexerProperties_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerProperties_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerProperties_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerProperties_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerProperties_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerProperties_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerProperties_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerProperties_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerProperties_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerProperties) Delete() {
	C.QsciLexerProperties_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerProperties) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerProperties) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

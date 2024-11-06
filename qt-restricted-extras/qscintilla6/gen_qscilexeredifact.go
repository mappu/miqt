package qscintilla6

/*

#include "gen_qscilexeredifact.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerEDIFACT__ int

const (
	QsciLexerEDIFACT__Default            QsciLexerEDIFACT__ = 0
	QsciLexerEDIFACT__SegmentStart       QsciLexerEDIFACT__ = 1
	QsciLexerEDIFACT__SegmentEnd         QsciLexerEDIFACT__ = 2
	QsciLexerEDIFACT__ElementSeparator   QsciLexerEDIFACT__ = 3
	QsciLexerEDIFACT__CompositeSeparator QsciLexerEDIFACT__ = 4
	QsciLexerEDIFACT__ReleaseSeparator   QsciLexerEDIFACT__ = 5
	QsciLexerEDIFACT__UNASegmentHeader   QsciLexerEDIFACT__ = 6
	QsciLexerEDIFACT__UNHSegmentHeader   QsciLexerEDIFACT__ = 7
	QsciLexerEDIFACT__BadSegment         QsciLexerEDIFACT__ = 8
)

type QsciLexerEDIFACT struct {
	h *C.QsciLexerEDIFACT
	*QsciLexer
}

func (this *QsciLexerEDIFACT) cPointer() *C.QsciLexerEDIFACT {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerEDIFACT) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerEDIFACT(h *C.QsciLexerEDIFACT) *QsciLexerEDIFACT {
	if h == nil {
		return nil
	}
	return &QsciLexerEDIFACT{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerEDIFACT(h unsafe.Pointer) *QsciLexerEDIFACT {
	return newQsciLexerEDIFACT((*C.QsciLexerEDIFACT)(h))
}

// NewQsciLexerEDIFACT constructs a new QsciLexerEDIFACT object.
func NewQsciLexerEDIFACT() *QsciLexerEDIFACT {
	ret := C.QsciLexerEDIFACT_new()
	return newQsciLexerEDIFACT(ret)
}

// NewQsciLexerEDIFACT2 constructs a new QsciLexerEDIFACT object.
func NewQsciLexerEDIFACT2(parent *qt6.QObject) *QsciLexerEDIFACT {
	ret := C.QsciLexerEDIFACT_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerEDIFACT(ret)
}

func (this *QsciLexerEDIFACT) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerEDIFACT_MetaObject(this.h)))
}

func (this *QsciLexerEDIFACT) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerEDIFACT_Metacast(this.h, param1_Cstring))
}

func QsciLexerEDIFACT_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerEDIFACT_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerEDIFACT) Language() string {
	_ret := C.QsciLexerEDIFACT_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerEDIFACT) Lexer() string {
	_ret := C.QsciLexerEDIFACT_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerEDIFACT) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerEDIFACT_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerEDIFACT) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerEDIFACT_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerEDIFACT_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerEDIFACT_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerEDIFACT_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerEDIFACT_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerEDIFACT) Delete() {
	C.QsciLexerEDIFACT_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerEDIFACT) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerEDIFACT) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

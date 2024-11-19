package qscintilla

/*

#include "gen_qscilexercustom.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerCustom struct {
	h          *C.QsciLexerCustom
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerCustom) cPointer() *C.QsciLexerCustom {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerCustom) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerCustom constructs the type using only CGO pointers.
func newQsciLexerCustom(h *C.QsciLexerCustom, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerCustom {
	if h == nil {
		return nil
	}
	return &QsciLexerCustom{h: h,
		QsciLexer: newQsciLexer(h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerCustom constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerCustom(h unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerCustom {
	if h == nil {
		return nil
	}

	return &QsciLexerCustom{h: (*C.QsciLexerCustom)(h),
		QsciLexer: UnsafeNewQsciLexer(h_QsciLexer, h_QObject)}
}

func (this *QsciLexerCustom) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerCustom_MetaObject(this.h)))
}

func (this *QsciLexerCustom) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerCustom_Metacast(this.h, param1_Cstring))
}

func QsciLexerCustom_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCustom_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCustom_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCustom_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCustom) SetStyling(length int, style int) {
	C.QsciLexerCustom_SetStyling(this.h, (C.int)(length), (C.int)(style))
}

func (this *QsciLexerCustom) SetStyling2(length int, style *QsciStyle) {
	C.QsciLexerCustom_SetStyling2(this.h, (C.int)(length), style.cPointer())
}

func (this *QsciLexerCustom) StartStyling(pos int) {
	C.QsciLexerCustom_StartStyling(this.h, (C.int)(pos))
}

func (this *QsciLexerCustom) StyleText(start int, end int) {
	C.QsciLexerCustom_StyleText(this.h, (C.int)(start), (C.int)(end))
}

func (this *QsciLexerCustom) SetEditor(editor *QsciScintilla) {
	C.QsciLexerCustom_SetEditor(this.h, editor.cPointer())
}

func (this *QsciLexerCustom) StyleBitsNeeded() int {
	return (int)(C.QsciLexerCustom_StyleBitsNeeded(this.h))
}

func QsciLexerCustom_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCustom_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCustom_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCustom_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCustom_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCustom_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCustom_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCustom_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCustom) StartStyling2(pos int, styleBits int) {
	C.QsciLexerCustom_StartStyling2(this.h, (C.int)(pos), (C.int)(styleBits))
}

// Delete this object from C++ memory.
func (this *QsciLexerCustom) Delete() {
	C.QsciLexerCustom_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerCustom) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerCustom) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

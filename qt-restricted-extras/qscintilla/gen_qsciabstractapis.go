package qscintilla

/*

#include "gen_qsciabstractapis.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciAbstractAPIs struct {
	h *C.QsciAbstractAPIs
	*qt.QObject
}

func (this *QsciAbstractAPIs) cPointer() *C.QsciAbstractAPIs {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciAbstractAPIs) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciAbstractAPIs(h *C.QsciAbstractAPIs) *QsciAbstractAPIs {
	if h == nil {
		return nil
	}
	return &QsciAbstractAPIs{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQsciAbstractAPIs(h unsafe.Pointer) *QsciAbstractAPIs {
	return newQsciAbstractAPIs((*C.QsciAbstractAPIs)(h))
}

func (this *QsciAbstractAPIs) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciAbstractAPIs_MetaObject(this.h)))
}

func (this *QsciAbstractAPIs) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciAbstractAPIs_Metacast(this.h, param1_Cstring))
}

func QsciAbstractAPIs_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciAbstractAPIs_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAbstractAPIs_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciAbstractAPIs_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciAbstractAPIs) Lexer() *QsciLexer {
	return UnsafeNewQsciLexer(unsafe.Pointer(C.QsciAbstractAPIs_Lexer(this.h)))
}

func (this *QsciAbstractAPIs) UpdateAutoCompletionList(context []string, list []string) {
	context_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(context))))
	defer C.free(unsafe.Pointer(context_CArray))
	for i := range context {
		context_i_ms := C.struct_miqt_string{}
		context_i_ms.data = C.CString(context[i])
		context_i_ms.len = C.size_t(len(context[i]))
		defer C.free(unsafe.Pointer(context_i_ms.data))
		context_CArray[i] = context_i_ms
	}
	context_ma := &C.struct_miqt_array{len: C.size_t(len(context)), data: unsafe.Pointer(context_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(context_ma))
	list_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_i_ms := C.struct_miqt_string{}
		list_i_ms.data = C.CString(list[i])
		list_i_ms.len = C.size_t(len(list[i]))
		defer C.free(unsafe.Pointer(list_i_ms.data))
		list_CArray[i] = list_i_ms
	}
	list_ma := &C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(list_ma))
	C.QsciAbstractAPIs_UpdateAutoCompletionList(this.h, context_ma, list_ma)
}

func (this *QsciAbstractAPIs) AutoCompletionSelected(selection string) {
	selection_ms := C.struct_miqt_string{}
	selection_ms.data = C.CString(selection)
	selection_ms.len = C.size_t(len(selection))
	defer C.free(unsafe.Pointer(selection_ms.data))
	C.QsciAbstractAPIs_AutoCompletionSelected(this.h, selection_ms)
}

func (this *QsciAbstractAPIs) CallTips(context []string, commas int, style QsciScintilla__CallTipsStyle, shifts []int) []string {
	context_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(context))))
	defer C.free(unsafe.Pointer(context_CArray))
	for i := range context {
		context_i_ms := C.struct_miqt_string{}
		context_i_ms.data = C.CString(context[i])
		context_i_ms.len = C.size_t(len(context[i]))
		defer C.free(unsafe.Pointer(context_i_ms.data))
		context_CArray[i] = context_i_ms
	}
	context_ma := &C.struct_miqt_array{len: C.size_t(len(context)), data: unsafe.Pointer(context_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(context_ma))
	shifts_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(shifts))))
	defer C.free(unsafe.Pointer(shifts_CArray))
	for i := range shifts {
		shifts_CArray[i] = (C.int)(shifts[i])
	}
	shifts_ma := &C.struct_miqt_array{len: C.size_t(len(shifts)), data: unsafe.Pointer(shifts_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(shifts_ma))
	var _ma *C.struct_miqt_array = C.QsciAbstractAPIs_CallTips(this.h, context_ma, (C.int)(commas), (C.int)(style), shifts_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QsciAbstractAPIs_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAbstractAPIs_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAbstractAPIs_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAbstractAPIs_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAbstractAPIs_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAbstractAPIs_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAbstractAPIs_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAbstractAPIs_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciAbstractAPIs) Delete() {
	C.QsciAbstractAPIs_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciAbstractAPIs) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciAbstractAPIs) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qscintilla

/*

#include "gen_qsciapis.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciAPIs struct {
	h *C.QsciAPIs
	*QsciAbstractAPIs
}

func (this *QsciAPIs) cPointer() *C.QsciAPIs {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciAPIs) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciAPIs(h *C.QsciAPIs) *QsciAPIs {
	if h == nil {
		return nil
	}
	return &QsciAPIs{h: h, QsciAbstractAPIs: UnsafeNewQsciAbstractAPIs(unsafe.Pointer(h))}
}

func UnsafeNewQsciAPIs(h unsafe.Pointer) *QsciAPIs {
	return newQsciAPIs((*C.QsciAPIs)(h))
}

// NewQsciAPIs constructs a new QsciAPIs object.
func NewQsciAPIs(lexer *QsciLexer) *QsciAPIs {
	ret := C.QsciAPIs_new(lexer.cPointer())
	return newQsciAPIs(ret)
}

func (this *QsciAPIs) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciAPIs_MetaObject(this.h)))
}

func (this *QsciAPIs) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciAPIs_Metacast(this.h, param1_Cstring))
}

func QsciAPIs_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciAPIs_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAPIs_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciAPIs_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciAPIs) Add(entry string) {
	entry_ms := C.struct_miqt_string{}
	entry_ms.data = C.CString(entry)
	entry_ms.len = C.size_t(len(entry))
	defer C.free(unsafe.Pointer(entry_ms.data))
	C.QsciAPIs_Add(this.h, entry_ms)
}

func (this *QsciAPIs) Clear() {
	C.QsciAPIs_Clear(this.h)
}

func (this *QsciAPIs) Load(filename string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QsciAPIs_Load(this.h, filename_ms))
}

func (this *QsciAPIs) Remove(entry string) {
	entry_ms := C.struct_miqt_string{}
	entry_ms.data = C.CString(entry)
	entry_ms.len = C.size_t(len(entry))
	defer C.free(unsafe.Pointer(entry_ms.data))
	C.QsciAPIs_Remove(this.h, entry_ms)
}

func (this *QsciAPIs) Prepare() {
	C.QsciAPIs_Prepare(this.h)
}

func (this *QsciAPIs) CancelPreparation() {
	C.QsciAPIs_CancelPreparation(this.h)
}

func (this *QsciAPIs) DefaultPreparedName() string {
	var _ms C.struct_miqt_string = C.QsciAPIs_DefaultPreparedName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciAPIs) IsPrepared() bool {
	return (bool)(C.QsciAPIs_IsPrepared(this.h))
}

func (this *QsciAPIs) LoadPrepared() bool {
	return (bool)(C.QsciAPIs_LoadPrepared(this.h))
}

func (this *QsciAPIs) SavePrepared() bool {
	return (bool)(C.QsciAPIs_SavePrepared(this.h))
}

func (this *QsciAPIs) UpdateAutoCompletionList(context []string, list []string) {
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
	C.QsciAPIs_UpdateAutoCompletionList(this.h, context_ma, list_ma)
}

func (this *QsciAPIs) AutoCompletionSelected(sel string) {
	sel_ms := C.struct_miqt_string{}
	sel_ms.data = C.CString(sel)
	sel_ms.len = C.size_t(len(sel))
	defer C.free(unsafe.Pointer(sel_ms.data))
	C.QsciAPIs_AutoCompletionSelected(this.h, sel_ms)
}

func (this *QsciAPIs) CallTips(context []string, commas int, style QsciScintilla__CallTipsStyle, shifts []int) []string {
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
	var _ma *C.struct_miqt_array = C.QsciAPIs_CallTips(this.h, context_ma, (C.int)(commas), (C.int)(style), shifts_ma)
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

func (this *QsciAPIs) Event(e *qt.QEvent) bool {
	return (bool)(C.QsciAPIs_Event(this.h, (*C.QEvent)(e.UnsafePointer())))
}

func (this *QsciAPIs) InstalledAPIFiles() []string {
	var _ma *C.struct_miqt_array = C.QsciAPIs_InstalledAPIFiles(this.h)
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

func (this *QsciAPIs) ApiPreparationCancelled() {
	C.QsciAPIs_ApiPreparationCancelled(this.h)
}
func (this *QsciAPIs) OnApiPreparationCancelled(slot func()) {
	C.QsciAPIs_connect_ApiPreparationCancelled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAPIs_ApiPreparationCancelled
func miqt_exec_callback_QsciAPIs_ApiPreparationCancelled(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciAPIs) ApiPreparationStarted() {
	C.QsciAPIs_ApiPreparationStarted(this.h)
}
func (this *QsciAPIs) OnApiPreparationStarted(slot func()) {
	C.QsciAPIs_connect_ApiPreparationStarted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAPIs_ApiPreparationStarted
func miqt_exec_callback_QsciAPIs_ApiPreparationStarted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciAPIs) ApiPreparationFinished() {
	C.QsciAPIs_ApiPreparationFinished(this.h)
}
func (this *QsciAPIs) OnApiPreparationFinished(slot func()) {
	C.QsciAPIs_connect_ApiPreparationFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAPIs_ApiPreparationFinished
func miqt_exec_callback_QsciAPIs_ApiPreparationFinished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QsciAPIs_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAPIs_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAPIs_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAPIs_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAPIs_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAPIs_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAPIs_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAPIs_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciAPIs) IsPrepared1(filename string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QsciAPIs_IsPrepared1(this.h, filename_ms))
}

func (this *QsciAPIs) LoadPrepared1(filename string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QsciAPIs_LoadPrepared1(this.h, filename_ms))
}

func (this *QsciAPIs) SavePrepared1(filename string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QsciAPIs_SavePrepared1(this.h, filename_ms))
}

// Delete this object from C++ memory.
func (this *QsciAPIs) Delete() {
	C.QsciAPIs_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciAPIs) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciAPIs) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

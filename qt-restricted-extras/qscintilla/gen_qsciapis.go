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

// newQsciAPIs constructs the type using only CGO pointers.
func newQsciAPIs(h *C.QsciAPIs) *QsciAPIs {
	if h == nil {
		return nil
	}
	var outptr_QsciAbstractAPIs *C.QsciAbstractAPIs = nil
	C.QsciAPIs_virtbase(h, &outptr_QsciAbstractAPIs)

	return &QsciAPIs{h: h,
		QsciAbstractAPIs: newQsciAbstractAPIs(outptr_QsciAbstractAPIs)}
}

// UnsafeNewQsciAPIs constructs the type using only unsafe pointers.
func UnsafeNewQsciAPIs(h unsafe.Pointer) *QsciAPIs {
	return newQsciAPIs((*C.QsciAPIs)(h))
}

// NewQsciAPIs constructs a new QsciAPIs object.
func NewQsciAPIs(lexer *QsciLexer) *QsciAPIs {

	return newQsciAPIs(C.QsciAPIs_new(lexer.cPointer()))
}

func (this *QsciAPIs) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciAPIs_metaObject(this.h)))
}

func (this *QsciAPIs) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciAPIs_metacast(this.h, param1_Cstring))
}

func QsciAPIs_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciAPIs_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAPIs_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciAPIs_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciAPIs) Add(entry string) {
	entry_ms := C.struct_miqt_string{}
	entry_ms.data = C.CString(entry)
	entry_ms.len = C.size_t(len(entry))
	defer C.free(unsafe.Pointer(entry_ms.data))
	C.QsciAPIs_add(this.h, entry_ms)
}

func (this *QsciAPIs) Clear() {
	C.QsciAPIs_clear(this.h)
}

func (this *QsciAPIs) Load(filename string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QsciAPIs_load(this.h, filename_ms))
}

func (this *QsciAPIs) Remove(entry string) {
	entry_ms := C.struct_miqt_string{}
	entry_ms.data = C.CString(entry)
	entry_ms.len = C.size_t(len(entry))
	defer C.free(unsafe.Pointer(entry_ms.data))
	C.QsciAPIs_remove(this.h, entry_ms)
}

func (this *QsciAPIs) Prepare() {
	C.QsciAPIs_prepare(this.h)
}

func (this *QsciAPIs) CancelPreparation() {
	C.QsciAPIs_cancelPreparation(this.h)
}

func (this *QsciAPIs) DefaultPreparedName() string {
	var _ms C.struct_miqt_string = C.QsciAPIs_defaultPreparedName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciAPIs) IsPrepared() bool {
	return (bool)(C.QsciAPIs_isPrepared(this.h))
}

func (this *QsciAPIs) LoadPrepared() bool {
	return (bool)(C.QsciAPIs_loadPrepared(this.h))
}

func (this *QsciAPIs) SavePrepared() bool {
	return (bool)(C.QsciAPIs_savePrepared(this.h))
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
	context_ma := C.struct_miqt_array{len: C.size_t(len(context)), data: unsafe.Pointer(context_CArray)}
	list_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_i_ms := C.struct_miqt_string{}
		list_i_ms.data = C.CString(list[i])
		list_i_ms.len = C.size_t(len(list[i]))
		defer C.free(unsafe.Pointer(list_i_ms.data))
		list_CArray[i] = list_i_ms
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	C.QsciAPIs_updateAutoCompletionList(this.h, context_ma, list_ma)
}

func (this *QsciAPIs) AutoCompletionSelected(sel string) {
	sel_ms := C.struct_miqt_string{}
	sel_ms.data = C.CString(sel)
	sel_ms.len = C.size_t(len(sel))
	defer C.free(unsafe.Pointer(sel_ms.data))
	C.QsciAPIs_autoCompletionSelected(this.h, sel_ms)
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
	context_ma := C.struct_miqt_array{len: C.size_t(len(context)), data: unsafe.Pointer(context_CArray)}
	shifts_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(shifts))))
	defer C.free(unsafe.Pointer(shifts_CArray))
	for i := range shifts {
		shifts_CArray[i] = (C.int)(shifts[i])
	}
	shifts_ma := C.struct_miqt_array{len: C.size_t(len(shifts)), data: unsafe.Pointer(shifts_CArray)}
	var _ma C.struct_miqt_array = C.QsciAPIs_callTips(this.h, context_ma, (C.int)(commas), (C.int)(style), shifts_ma)
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

func (this *QsciAPIs) Event(e *qt.QEvent) bool {
	return (bool)(C.QsciAPIs_event(this.h, (*C.QEvent)(e.UnsafePointer())))
}

func (this *QsciAPIs) InstalledAPIFiles() []string {
	var _ma C.struct_miqt_array = C.QsciAPIs_installedAPIFiles(this.h)
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

func (this *QsciAPIs) ApiPreparationCancelled() {
	C.QsciAPIs_apiPreparationCancelled(this.h)
}
func (this *QsciAPIs) OnApiPreparationCancelled(slot func()) {
	C.QsciAPIs_connect_apiPreparationCancelled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAPIs_apiPreparationCancelled
func miqt_exec_callback_QsciAPIs_apiPreparationCancelled(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciAPIs) ApiPreparationStarted() {
	C.QsciAPIs_apiPreparationStarted(this.h)
}
func (this *QsciAPIs) OnApiPreparationStarted(slot func()) {
	C.QsciAPIs_connect_apiPreparationStarted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAPIs_apiPreparationStarted
func miqt_exec_callback_QsciAPIs_apiPreparationStarted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciAPIs) ApiPreparationFinished() {
	C.QsciAPIs_apiPreparationFinished(this.h)
}
func (this *QsciAPIs) OnApiPreparationFinished(slot func()) {
	C.QsciAPIs_connect_apiPreparationFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciAPIs_apiPreparationFinished
func miqt_exec_callback_QsciAPIs_apiPreparationFinished(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QsciAPIs_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAPIs_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAPIs_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAPIs_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAPIs_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciAPIs_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciAPIs_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciAPIs) IsPrepared1(filename string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QsciAPIs_isPrepared1(this.h, filename_ms))
}

func (this *QsciAPIs) LoadPrepared1(filename string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QsciAPIs_loadPrepared1(this.h, filename_ms))
}

func (this *QsciAPIs) SavePrepared1(filename string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QsciAPIs_savePrepared1(this.h, filename_ms))
}

func (this *QsciAPIs) callVirtualBase_UpdateAutoCompletionList(context []string, list []string) {
	context_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(context))))
	defer C.free(unsafe.Pointer(context_CArray))
	for i := range context {
		context_i_ms := C.struct_miqt_string{}
		context_i_ms.data = C.CString(context[i])
		context_i_ms.len = C.size_t(len(context[i]))
		defer C.free(unsafe.Pointer(context_i_ms.data))
		context_CArray[i] = context_i_ms
	}
	context_ma := C.struct_miqt_array{len: C.size_t(len(context)), data: unsafe.Pointer(context_CArray)}
	list_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_i_ms := C.struct_miqt_string{}
		list_i_ms.data = C.CString(list[i])
		list_i_ms.len = C.size_t(len(list[i]))
		defer C.free(unsafe.Pointer(list_i_ms.data))
		list_CArray[i] = list_i_ms
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}

	C.QsciAPIs_virtualbase_updateAutoCompletionList(unsafe.Pointer(this.h), context_ma, list_ma)

}
func (this *QsciAPIs) OnupdateAutoCompletionList(slot func(super func(context []string, list []string), context []string, list []string)) {
	ok := C.QsciAPIs_override_virtual_updateAutoCompletionList(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciAPIs_updateAutoCompletionList
func miqt_exec_callback_QsciAPIs_updateAutoCompletionList(self *C.QsciAPIs, cb C.intptr_t, context C.struct_miqt_array, list C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(context []string, list []string), context []string, list []string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var context_ma C.struct_miqt_array = context
	context_ret := make([]string, int(context_ma.len))
	context_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(context_ma.data)) // hey ya
	for i := 0; i < int(context_ma.len); i++ {
		var context_lv_ms C.struct_miqt_string = context_outCast[i]
		context_lv_ret := C.GoStringN(context_lv_ms.data, C.int(int64(context_lv_ms.len)))
		C.free(unsafe.Pointer(context_lv_ms.data))
		context_ret[i] = context_lv_ret
	}
	slotval1 := context_ret

	var list_ma C.struct_miqt_array = list
	list_ret := make([]string, int(list_ma.len))
	list_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(list_ma.data)) // hey ya
	for i := 0; i < int(list_ma.len); i++ {
		var list_lv_ms C.struct_miqt_string = list_outCast[i]
		list_lv_ret := C.GoStringN(list_lv_ms.data, C.int(int64(list_lv_ms.len)))
		C.free(unsafe.Pointer(list_lv_ms.data))
		list_ret[i] = list_lv_ret
	}
	slotval2 := list_ret

	gofunc((&QsciAPIs{h: self}).callVirtualBase_UpdateAutoCompletionList, slotval1, slotval2)

}

func (this *QsciAPIs) callVirtualBase_AutoCompletionSelected(sel string) {
	sel_ms := C.struct_miqt_string{}
	sel_ms.data = C.CString(sel)
	sel_ms.len = C.size_t(len(sel))
	defer C.free(unsafe.Pointer(sel_ms.data))

	C.QsciAPIs_virtualbase_autoCompletionSelected(unsafe.Pointer(this.h), sel_ms)

}
func (this *QsciAPIs) OnautoCompletionSelected(slot func(super func(sel string), sel string)) {
	ok := C.QsciAPIs_override_virtual_autoCompletionSelected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciAPIs_autoCompletionSelected
func miqt_exec_callback_QsciAPIs_autoCompletionSelected(self *C.QsciAPIs, cb C.intptr_t, sel C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sel string), sel string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var sel_ms C.struct_miqt_string = sel
	sel_ret := C.GoStringN(sel_ms.data, C.int(int64(sel_ms.len)))
	C.free(unsafe.Pointer(sel_ms.data))
	slotval1 := sel_ret

	gofunc((&QsciAPIs{h: self}).callVirtualBase_AutoCompletionSelected, slotval1)

}

func (this *QsciAPIs) callVirtualBase_CallTips(context []string, commas int, style QsciScintilla__CallTipsStyle, shifts []int) []string {
	context_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(context))))
	defer C.free(unsafe.Pointer(context_CArray))
	for i := range context {
		context_i_ms := C.struct_miqt_string{}
		context_i_ms.data = C.CString(context[i])
		context_i_ms.len = C.size_t(len(context[i]))
		defer C.free(unsafe.Pointer(context_i_ms.data))
		context_CArray[i] = context_i_ms
	}
	context_ma := C.struct_miqt_array{len: C.size_t(len(context)), data: unsafe.Pointer(context_CArray)}
	shifts_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(shifts))))
	defer C.free(unsafe.Pointer(shifts_CArray))
	for i := range shifts {
		shifts_CArray[i] = (C.int)(shifts[i])
	}
	shifts_ma := C.struct_miqt_array{len: C.size_t(len(shifts)), data: unsafe.Pointer(shifts_CArray)}

	var _ma C.struct_miqt_array = C.QsciAPIs_virtualbase_callTips(unsafe.Pointer(this.h), context_ma, (C.int)(commas), (C.int)(style), shifts_ma)
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
func (this *QsciAPIs) OncallTips(slot func(super func(context []string, commas int, style QsciScintilla__CallTipsStyle, shifts []int) []string, context []string, commas int, style QsciScintilla__CallTipsStyle, shifts []int) []string) {
	ok := C.QsciAPIs_override_virtual_callTips(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciAPIs_callTips
func miqt_exec_callback_QsciAPIs_callTips(self *C.QsciAPIs, cb C.intptr_t, context C.struct_miqt_array, commas C.int, style C.int, shifts C.struct_miqt_array) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(context []string, commas int, style QsciScintilla__CallTipsStyle, shifts []int) []string, context []string, commas int, style QsciScintilla__CallTipsStyle, shifts []int) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var context_ma C.struct_miqt_array = context
	context_ret := make([]string, int(context_ma.len))
	context_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(context_ma.data)) // hey ya
	for i := 0; i < int(context_ma.len); i++ {
		var context_lv_ms C.struct_miqt_string = context_outCast[i]
		context_lv_ret := C.GoStringN(context_lv_ms.data, C.int(int64(context_lv_ms.len)))
		C.free(unsafe.Pointer(context_lv_ms.data))
		context_ret[i] = context_lv_ret
	}
	slotval1 := context_ret

	slotval2 := (int)(commas)

	slotval3 := (QsciScintilla__CallTipsStyle)(style)

	var shifts_ma C.struct_miqt_array = shifts
	shifts_ret := make([]int, int(shifts_ma.len))
	shifts_outCast := (*[0xffff]C.int)(unsafe.Pointer(shifts_ma.data)) // hey ya
	for i := 0; i < int(shifts_ma.len); i++ {
		shifts_ret[i] = (int)(shifts_outCast[i])
	}
	slotval4 := shifts_ret

	virtualReturn := gofunc((&QsciAPIs{h: self}).callVirtualBase_CallTips, slotval1, slotval2, slotval3, slotval4)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QsciAPIs) callVirtualBase_Event(e *qt.QEvent) bool {

	return (bool)(C.QsciAPIs_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QsciAPIs) Onevent(slot func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool) {
	ok := C.QsciAPIs_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciAPIs_event
func miqt_exec_callback_QsciAPIs_event(self *C.QsciAPIs, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QsciAPIs{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciAPIs) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QsciAPIs_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciAPIs) OneventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QsciAPIs_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciAPIs_eventFilter
func miqt_exec_callback_QsciAPIs_eventFilter(self *C.QsciAPIs, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciAPIs{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciAPIs) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QsciAPIs_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciAPIs) OntimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QsciAPIs_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciAPIs_timerEvent
func miqt_exec_callback_QsciAPIs_timerEvent(self *C.QsciAPIs, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciAPIs{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciAPIs) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QsciAPIs_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciAPIs) OnchildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QsciAPIs_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciAPIs_childEvent
func miqt_exec_callback_QsciAPIs_childEvent(self *C.QsciAPIs, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciAPIs{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciAPIs) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QsciAPIs_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciAPIs) OncustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QsciAPIs_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciAPIs_customEvent
func miqt_exec_callback_QsciAPIs_customEvent(self *C.QsciAPIs, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciAPIs{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciAPIs) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QsciAPIs_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciAPIs) OnconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciAPIs_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciAPIs_connectNotify
func miqt_exec_callback_QsciAPIs_connectNotify(self *C.QsciAPIs, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciAPIs{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciAPIs) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QsciAPIs_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciAPIs) OndisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciAPIs_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciAPIs_disconnectNotify
func miqt_exec_callback_QsciAPIs_disconnectNotify(self *C.QsciAPIs, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciAPIs{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciAPIs) Delete() {
	C.QsciAPIs_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciAPIs) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciAPIs) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

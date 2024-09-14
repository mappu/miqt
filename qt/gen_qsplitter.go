package qt

/*

#include "gen_qsplitter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSplitter struct {
	h *C.QSplitter
	*QFrame
}

func (this *QSplitter) cPointer() *C.QSplitter {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSplitter(h *C.QSplitter) *QSplitter {
	if h == nil {
		return nil
	}
	return &QSplitter{h: h, QFrame: newQFrame_U(unsafe.Pointer(h))}
}

func newQSplitter_U(h unsafe.Pointer) *QSplitter {
	return newQSplitter((*C.QSplitter)(h))
}

// NewQSplitter constructs a new QSplitter object.
func NewQSplitter() *QSplitter {
	ret := C.QSplitter_new()
	return newQSplitter(ret)
}

// NewQSplitter2 constructs a new QSplitter object.
func NewQSplitter2(param1 Orientation) *QSplitter {
	ret := C.QSplitter_new2((C.uintptr_t)(param1))
	return newQSplitter(ret)
}

// NewQSplitter3 constructs a new QSplitter object.
func NewQSplitter3(parent *QWidget) *QSplitter {
	ret := C.QSplitter_new3(parent.cPointer())
	return newQSplitter(ret)
}

// NewQSplitter4 constructs a new QSplitter object.
func NewQSplitter4(param1 Orientation, parent *QWidget) *QSplitter {
	ret := C.QSplitter_new4((C.uintptr_t)(param1), parent.cPointer())
	return newQSplitter(ret)
}

func (this *QSplitter) MetaObject() *QMetaObject {
	_ret := C.QSplitter_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QSplitter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSplitter_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSplitter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSplitter_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSplitter) AddWidget(widget *QWidget) {
	C.QSplitter_AddWidget(this.h, widget.cPointer())
}

func (this *QSplitter) InsertWidget(index int, widget *QWidget) {
	C.QSplitter_InsertWidget(this.h, (C.int)(index), widget.cPointer())
}

func (this *QSplitter) ReplaceWidget(index int, widget *QWidget) *QWidget {
	_ret := C.QSplitter_ReplaceWidget(this.h, (C.int)(index), widget.cPointer())
	return newQWidget_U(unsafe.Pointer(_ret))
}

func (this *QSplitter) SetOrientation(orientation Orientation) {
	C.QSplitter_SetOrientation(this.h, (C.uintptr_t)(orientation))
}

func (this *QSplitter) Orientation() Orientation {
	_ret := C.QSplitter_Orientation(this.h)
	return (Orientation)(_ret)
}

func (this *QSplitter) SetChildrenCollapsible(childrenCollapsible bool) {
	C.QSplitter_SetChildrenCollapsible(this.h, (C.bool)(childrenCollapsible))
}

func (this *QSplitter) ChildrenCollapsible() bool {
	_ret := C.QSplitter_ChildrenCollapsible(this.h)
	return (bool)(_ret)
}

func (this *QSplitter) SetCollapsible(index int, param2 bool) {
	C.QSplitter_SetCollapsible(this.h, (C.int)(index), (C.bool)(param2))
}

func (this *QSplitter) IsCollapsible(index int) bool {
	_ret := C.QSplitter_IsCollapsible(this.h, (C.int)(index))
	return (bool)(_ret)
}

func (this *QSplitter) SetOpaqueResize() {
	C.QSplitter_SetOpaqueResize(this.h)
}

func (this *QSplitter) OpaqueResize() bool {
	_ret := C.QSplitter_OpaqueResize(this.h)
	return (bool)(_ret)
}

func (this *QSplitter) Refresh() {
	C.QSplitter_Refresh(this.h)
}

func (this *QSplitter) SizeHint() *QSize {
	_ret := C.QSplitter_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSplitter) MinimumSizeHint() *QSize {
	_ret := C.QSplitter_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSplitter) Sizes() []int {
	var _ma *C.struct_miqt_array = C.QSplitter_Sizes(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QSplitter) SetSizes(list []int) {
	// For the C ABI, malloc a C array of raw pointers
	list_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = (C.int)(list[i])
	}
	list_ma := &C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(list_ma))
	C.QSplitter_SetSizes(this.h, list_ma)
}

func (this *QSplitter) SaveState() *QByteArray {
	_ret := C.QSplitter_SaveState(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSplitter) RestoreState(state *QByteArray) bool {
	_ret := C.QSplitter_RestoreState(this.h, state.cPointer())
	return (bool)(_ret)
}

func (this *QSplitter) HandleWidth() int {
	_ret := C.QSplitter_HandleWidth(this.h)
	return (int)(_ret)
}

func (this *QSplitter) SetHandleWidth(handleWidth int) {
	C.QSplitter_SetHandleWidth(this.h, (C.int)(handleWidth))
}

func (this *QSplitter) IndexOf(w *QWidget) int {
	_ret := C.QSplitter_IndexOf(this.h, w.cPointer())
	return (int)(_ret)
}

func (this *QSplitter) Widget(index int) *QWidget {
	_ret := C.QSplitter_Widget(this.h, (C.int)(index))
	return newQWidget_U(unsafe.Pointer(_ret))
}

func (this *QSplitter) Count() int {
	_ret := C.QSplitter_Count(this.h)
	return (int)(_ret)
}

func (this *QSplitter) GetRange(index int, param2 *int, param3 *int) {
	C.QSplitter_GetRange(this.h, (C.int)(index), (*C.int)(unsafe.Pointer(param2)), (*C.int)(unsafe.Pointer(param3)))
}

func (this *QSplitter) Handle(index int) *QSplitterHandle {
	_ret := C.QSplitter_Handle(this.h, (C.int)(index))
	return newQSplitterHandle_U(unsafe.Pointer(_ret))
}

func (this *QSplitter) SetStretchFactor(index int, stretch int) {
	C.QSplitter_SetStretchFactor(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QSplitter) SplitterMoved(pos int, index int) {
	C.QSplitter_SplitterMoved(this.h, (C.int)(pos), (C.int)(index))
}
func (this *QSplitter) OnSplitterMoved(slot func(pos int, index int)) {
	C.QSplitter_connect_SplitterMoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QSplitter_SplitterMoved
func miqt_exec_callback_QSplitter_SplitterMoved(cb *C.void, pos C.int, index C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(pos int, index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	pos_ret := pos
	slotval1 := (int)(pos_ret)

	index_ret := index
	slotval2 := (int)(index_ret)

	gofunc(slotval1, slotval2)
}

func QSplitter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSplitter_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSplitter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSplitter_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSplitter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSplitter_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSplitter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSplitter_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSplitter) SetOpaqueResize1(opaque bool) {
	C.QSplitter_SetOpaqueResize1(this.h, (C.bool)(opaque))
}

// Delete this object from C++ memory.
func (this *QSplitter) Delete() {
	C.QSplitter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSplitter) GoGC() {
	runtime.SetFinalizer(this, func(this *QSplitter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSplitterHandle struct {
	h *C.QSplitterHandle
	*QWidget
}

func (this *QSplitterHandle) cPointer() *C.QSplitterHandle {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSplitterHandle(h *C.QSplitterHandle) *QSplitterHandle {
	if h == nil {
		return nil
	}
	return &QSplitterHandle{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQSplitterHandle_U(h unsafe.Pointer) *QSplitterHandle {
	return newQSplitterHandle((*C.QSplitterHandle)(h))
}

// NewQSplitterHandle constructs a new QSplitterHandle object.
func NewQSplitterHandle(o Orientation, parent *QSplitter) *QSplitterHandle {
	ret := C.QSplitterHandle_new((C.uintptr_t)(o), parent.cPointer())
	return newQSplitterHandle(ret)
}

func (this *QSplitterHandle) MetaObject() *QMetaObject {
	_ret := C.QSplitterHandle_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QSplitterHandle_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSplitterHandle_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSplitterHandle_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSplitterHandle_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSplitterHandle) SetOrientation(o Orientation) {
	C.QSplitterHandle_SetOrientation(this.h, (C.uintptr_t)(o))
}

func (this *QSplitterHandle) Orientation() Orientation {
	_ret := C.QSplitterHandle_Orientation(this.h)
	return (Orientation)(_ret)
}

func (this *QSplitterHandle) OpaqueResize() bool {
	_ret := C.QSplitterHandle_OpaqueResize(this.h)
	return (bool)(_ret)
}

func (this *QSplitterHandle) Splitter() *QSplitter {
	_ret := C.QSplitterHandle_Splitter(this.h)
	return newQSplitter_U(unsafe.Pointer(_ret))
}

func (this *QSplitterHandle) SizeHint() *QSize {
	_ret := C.QSplitterHandle_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSplitterHandle_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSplitterHandle_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSplitterHandle_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSplitterHandle_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSplitterHandle_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSplitterHandle_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSplitterHandle_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSplitterHandle_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSplitterHandle) Delete() {
	C.QSplitterHandle_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSplitterHandle) GoGC() {
	runtime.SetFinalizer(this, func(this *QSplitterHandle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

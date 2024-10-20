package qt6

/*

#include "gen_qkeysequenceedit.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QKeySequenceEdit struct {
	h *C.QKeySequenceEdit
	*QWidget
}

func (this *QKeySequenceEdit) cPointer() *C.QKeySequenceEdit {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QKeySequenceEdit) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQKeySequenceEdit(h *C.QKeySequenceEdit) *QKeySequenceEdit {
	if h == nil {
		return nil
	}
	return &QKeySequenceEdit{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQKeySequenceEdit(h unsafe.Pointer) *QKeySequenceEdit {
	return newQKeySequenceEdit((*C.QKeySequenceEdit)(h))
}

// NewQKeySequenceEdit constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit() *QKeySequenceEdit {
	ret := C.QKeySequenceEdit_new()
	return newQKeySequenceEdit(ret)
}

// NewQKeySequenceEdit2 constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit2(keySequence *QKeySequence) *QKeySequenceEdit {
	ret := C.QKeySequenceEdit_new2(keySequence.cPointer())
	return newQKeySequenceEdit(ret)
}

// NewQKeySequenceEdit3 constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit3(parent *QWidget) *QKeySequenceEdit {
	ret := C.QKeySequenceEdit_new3(parent.cPointer())
	return newQKeySequenceEdit(ret)
}

// NewQKeySequenceEdit4 constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit4(keySequence *QKeySequence, parent *QWidget) *QKeySequenceEdit {
	ret := C.QKeySequenceEdit_new4(keySequence.cPointer(), parent.cPointer())
	return newQKeySequenceEdit(ret)
}

func (this *QKeySequenceEdit) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QKeySequenceEdit_MetaObject(this.h)))
}

func (this *QKeySequenceEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QKeySequenceEdit_Metacast(this.h, param1_Cstring))
}

func QKeySequenceEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QKeySequenceEdit_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeySequenceEdit) KeySequence() *QKeySequence {
	_ret := C.QKeySequenceEdit_KeySequence(this.h)
	_goptr := newQKeySequence(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QKeySequenceEdit) SetClearButtonEnabled(enable bool) {
	C.QKeySequenceEdit_SetClearButtonEnabled(this.h, (C.bool)(enable))
}

func (this *QKeySequenceEdit) IsClearButtonEnabled() bool {
	return (bool)(C.QKeySequenceEdit_IsClearButtonEnabled(this.h))
}

func (this *QKeySequenceEdit) SetKeySequence(keySequence *QKeySequence) {
	C.QKeySequenceEdit_SetKeySequence(this.h, keySequence.cPointer())
}

func (this *QKeySequenceEdit) Clear() {
	C.QKeySequenceEdit_Clear(this.h)
}

func (this *QKeySequenceEdit) EditingFinished() {
	C.QKeySequenceEdit_EditingFinished(this.h)
}
func (this *QKeySequenceEdit) OnEditingFinished(slot func()) {
	C.QKeySequenceEdit_connect_EditingFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_EditingFinished
func miqt_exec_callback_QKeySequenceEdit_EditingFinished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QKeySequenceEdit) KeySequenceChanged(keySequence *QKeySequence) {
	C.QKeySequenceEdit_KeySequenceChanged(this.h, keySequence.cPointer())
}
func (this *QKeySequenceEdit) OnKeySequenceChanged(slot func(keySequence *QKeySequence)) {
	C.QKeySequenceEdit_connect_KeySequenceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_KeySequenceChanged
func miqt_exec_callback_QKeySequenceEdit_KeySequenceChanged(cb C.intptr_t, keySequence *C.QKeySequence) {
	gofunc, ok := cgo.Handle(cb).Value().(func(keySequence *QKeySequence))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeySequence(unsafe.Pointer(keySequence))

	gofunc(slotval1)
}

func QKeySequenceEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeySequenceEdit_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeySequenceEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeySequenceEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QKeySequenceEdit) Delete() {
	C.QKeySequenceEdit_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QKeySequenceEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QKeySequenceEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

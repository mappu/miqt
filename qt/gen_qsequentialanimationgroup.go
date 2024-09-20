package qt

/*

#include "gen_qsequentialanimationgroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSequentialAnimationGroup struct {
	h *C.QSequentialAnimationGroup
	*QAnimationGroup
}

func (this *QSequentialAnimationGroup) cPointer() *C.QSequentialAnimationGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSequentialAnimationGroup(h *C.QSequentialAnimationGroup) *QSequentialAnimationGroup {
	if h == nil {
		return nil
	}
	return &QSequentialAnimationGroup{h: h, QAnimationGroup: newQAnimationGroup_U(unsafe.Pointer(h))}
}

func newQSequentialAnimationGroup_U(h unsafe.Pointer) *QSequentialAnimationGroup {
	return newQSequentialAnimationGroup((*C.QSequentialAnimationGroup)(h))
}

// NewQSequentialAnimationGroup constructs a new QSequentialAnimationGroup object.
func NewQSequentialAnimationGroup() *QSequentialAnimationGroup {
	ret := C.QSequentialAnimationGroup_new()
	return newQSequentialAnimationGroup(ret)
}

// NewQSequentialAnimationGroup2 constructs a new QSequentialAnimationGroup object.
func NewQSequentialAnimationGroup2(parent *QObject) *QSequentialAnimationGroup {
	ret := C.QSequentialAnimationGroup_new2(parent.cPointer())
	return newQSequentialAnimationGroup(ret)
}

func (this *QSequentialAnimationGroup) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QSequentialAnimationGroup_MetaObject(this.h)))
}

func (this *QSequentialAnimationGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QSequentialAnimationGroup_Metacast(this.h, param1_Cstring)
}

func QSequentialAnimationGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSequentialAnimationGroup_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSequentialAnimationGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSequentialAnimationGroup_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSequentialAnimationGroup) AddPause(msecs int) *QPauseAnimation {
	return newQPauseAnimation_U(unsafe.Pointer(C.QSequentialAnimationGroup_AddPause(this.h, (C.int)(msecs))))
}

func (this *QSequentialAnimationGroup) InsertPause(index int, msecs int) *QPauseAnimation {
	return newQPauseAnimation_U(unsafe.Pointer(C.QSequentialAnimationGroup_InsertPause(this.h, (C.int)(index), (C.int)(msecs))))
}

func (this *QSequentialAnimationGroup) CurrentAnimation() *QAbstractAnimation {
	return newQAbstractAnimation_U(unsafe.Pointer(C.QSequentialAnimationGroup_CurrentAnimation(this.h)))
}

func (this *QSequentialAnimationGroup) Duration() int {
	return (int)(C.QSequentialAnimationGroup_Duration(this.h))
}

func (this *QSequentialAnimationGroup) CurrentAnimationChanged(current *QAbstractAnimation) {
	C.QSequentialAnimationGroup_CurrentAnimationChanged(this.h, current.cPointer())
}
func (this *QSequentialAnimationGroup) OnCurrentAnimationChanged(slot func(current *QAbstractAnimation)) {
	C.QSequentialAnimationGroup_connect_CurrentAnimationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QSequentialAnimationGroup_CurrentAnimationChanged
func miqt_exec_callback_QSequentialAnimationGroup_CurrentAnimationChanged(cb *C.void, current *C.QAbstractAnimation) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(current *QAbstractAnimation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractAnimation_U(unsafe.Pointer(current))

	gofunc(slotval1)
}

func QSequentialAnimationGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSequentialAnimationGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSequentialAnimationGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSequentialAnimationGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSequentialAnimationGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSequentialAnimationGroup_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSequentialAnimationGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSequentialAnimationGroup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSequentialAnimationGroup) Delete() {
	C.QSequentialAnimationGroup_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSequentialAnimationGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QSequentialAnimationGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

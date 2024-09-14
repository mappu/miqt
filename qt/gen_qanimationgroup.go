package qt

/*

#include "gen_qanimationgroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAnimationGroup struct {
	h *C.QAnimationGroup
	*QAbstractAnimation
}

func (this *QAnimationGroup) cPointer() *C.QAnimationGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAnimationGroup(h *C.QAnimationGroup) *QAnimationGroup {
	if h == nil {
		return nil
	}
	return &QAnimationGroup{h: h, QAbstractAnimation: newQAbstractAnimation_U(unsafe.Pointer(h))}
}

func newQAnimationGroup_U(h unsafe.Pointer) *QAnimationGroup {
	return newQAnimationGroup((*C.QAnimationGroup)(h))
}

func (this *QAnimationGroup) MetaObject() *QMetaObject {
	_ret := C.QAnimationGroup_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QAnimationGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAnimationGroup_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAnimationGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAnimationGroup_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAnimationGroup) AnimationAt(index int) *QAbstractAnimation {
	_ret := C.QAnimationGroup_AnimationAt(this.h, (C.int)(index))
	return newQAbstractAnimation_U(unsafe.Pointer(_ret))
}

func (this *QAnimationGroup) AnimationCount() int {
	_ret := C.QAnimationGroup_AnimationCount(this.h)
	return (int)(_ret)
}

func (this *QAnimationGroup) IndexOfAnimation(animation *QAbstractAnimation) int {
	_ret := C.QAnimationGroup_IndexOfAnimation(this.h, animation.cPointer())
	return (int)(_ret)
}

func (this *QAnimationGroup) AddAnimation(animation *QAbstractAnimation) {
	C.QAnimationGroup_AddAnimation(this.h, animation.cPointer())
}

func (this *QAnimationGroup) InsertAnimation(index int, animation *QAbstractAnimation) {
	C.QAnimationGroup_InsertAnimation(this.h, (C.int)(index), animation.cPointer())
}

func (this *QAnimationGroup) RemoveAnimation(animation *QAbstractAnimation) {
	C.QAnimationGroup_RemoveAnimation(this.h, animation.cPointer())
}

func (this *QAnimationGroup) TakeAnimation(index int) *QAbstractAnimation {
	_ret := C.QAnimationGroup_TakeAnimation(this.h, (C.int)(index))
	return newQAbstractAnimation_U(unsafe.Pointer(_ret))
}

func (this *QAnimationGroup) Clear() {
	C.QAnimationGroup_Clear(this.h)
}

func QAnimationGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAnimationGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAnimationGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAnimationGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAnimationGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAnimationGroup_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAnimationGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAnimationGroup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAnimationGroup) Delete() {
	C.QAnimationGroup_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAnimationGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QAnimationGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

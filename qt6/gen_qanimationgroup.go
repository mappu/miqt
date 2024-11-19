package qt6

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
	h          *C.QAnimationGroup
	isSubclass bool
	*QAbstractAnimation
}

func (this *QAnimationGroup) cPointer() *C.QAnimationGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAnimationGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAnimationGroup constructs the type using only CGO pointers.
func newQAnimationGroup(h *C.QAnimationGroup, h_QAbstractAnimation *C.QAbstractAnimation, h_QObject *C.QObject) *QAnimationGroup {
	if h == nil {
		return nil
	}
	return &QAnimationGroup{h: h,
		QAbstractAnimation: newQAbstractAnimation(h_QAbstractAnimation, h_QObject)}
}

// UnsafeNewQAnimationGroup constructs the type using only unsafe pointers.
func UnsafeNewQAnimationGroup(h unsafe.Pointer, h_QAbstractAnimation unsafe.Pointer, h_QObject unsafe.Pointer) *QAnimationGroup {
	if h == nil {
		return nil
	}

	return &QAnimationGroup{h: (*C.QAnimationGroup)(h),
		QAbstractAnimation: UnsafeNewQAbstractAnimation(h_QAbstractAnimation, h_QObject)}
}

func (this *QAnimationGroup) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAnimationGroup_MetaObject(this.h)))
}

func (this *QAnimationGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAnimationGroup_Metacast(this.h, param1_Cstring))
}

func QAnimationGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationGroup_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAnimationGroup) AnimationAt(index int) *QAbstractAnimation {
	return UnsafeNewQAbstractAnimation(unsafe.Pointer(C.QAnimationGroup_AnimationAt(this.h, (C.int)(index))), nil)
}

func (this *QAnimationGroup) AnimationCount() int {
	return (int)(C.QAnimationGroup_AnimationCount(this.h))
}

func (this *QAnimationGroup) IndexOfAnimation(animation *QAbstractAnimation) int {
	return (int)(C.QAnimationGroup_IndexOfAnimation(this.h, animation.cPointer()))
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
	return UnsafeNewQAbstractAnimation(unsafe.Pointer(C.QAnimationGroup_TakeAnimation(this.h, (C.int)(index))), nil)
}

func (this *QAnimationGroup) Clear() {
	C.QAnimationGroup_Clear(this.h)
}

func QAnimationGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAnimationGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAnimationGroup) Delete() {
	C.QAnimationGroup_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAnimationGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QAnimationGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

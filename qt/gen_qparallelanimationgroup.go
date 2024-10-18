package qt

/*

#include "gen_qparallelanimationgroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QParallelAnimationGroup struct {
	h *C.QParallelAnimationGroup
	*QAnimationGroup
}

func (this *QParallelAnimationGroup) cPointer() *C.QParallelAnimationGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QParallelAnimationGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQParallelAnimationGroup(h *C.QParallelAnimationGroup) *QParallelAnimationGroup {
	if h == nil {
		return nil
	}
	return &QParallelAnimationGroup{h: h, QAnimationGroup: UnsafeNewQAnimationGroup(unsafe.Pointer(h))}
}

func UnsafeNewQParallelAnimationGroup(h unsafe.Pointer) *QParallelAnimationGroup {
	return newQParallelAnimationGroup((*C.QParallelAnimationGroup)(h))
}

// NewQParallelAnimationGroup constructs a new QParallelAnimationGroup object.
func NewQParallelAnimationGroup() *QParallelAnimationGroup {
	ret := C.QParallelAnimationGroup_new()
	return newQParallelAnimationGroup(ret)
}

// NewQParallelAnimationGroup2 constructs a new QParallelAnimationGroup object.
func NewQParallelAnimationGroup2(parent *QObject) *QParallelAnimationGroup {
	ret := C.QParallelAnimationGroup_new2(parent.cPointer())
	return newQParallelAnimationGroup(ret)
}

func (this *QParallelAnimationGroup) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QParallelAnimationGroup_MetaObject(this.h)))
}

func (this *QParallelAnimationGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QParallelAnimationGroup_Metacast(this.h, param1_Cstring))
}

func QParallelAnimationGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QParallelAnimationGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QParallelAnimationGroup) Duration() int {
	return (int)(C.QParallelAnimationGroup_Duration(this.h))
}

func QParallelAnimationGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QParallelAnimationGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QParallelAnimationGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QParallelAnimationGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QParallelAnimationGroup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QParallelAnimationGroup) Delete() {
	C.QParallelAnimationGroup_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QParallelAnimationGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QParallelAnimationGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

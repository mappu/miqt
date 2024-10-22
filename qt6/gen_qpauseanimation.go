package qt6

/*

#include "gen_qpauseanimation.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPauseAnimation struct {
	h *C.QPauseAnimation
	*QAbstractAnimation
}

func (this *QPauseAnimation) cPointer() *C.QPauseAnimation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPauseAnimation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPauseAnimation(h *C.QPauseAnimation) *QPauseAnimation {
	if h == nil {
		return nil
	}
	return &QPauseAnimation{h: h, QAbstractAnimation: UnsafeNewQAbstractAnimation(unsafe.Pointer(h))}
}

func UnsafeNewQPauseAnimation(h unsafe.Pointer) *QPauseAnimation {
	return newQPauseAnimation((*C.QPauseAnimation)(h))
}

// NewQPauseAnimation constructs a new QPauseAnimation object.
func NewQPauseAnimation() *QPauseAnimation {
	ret := C.QPauseAnimation_new()
	return newQPauseAnimation(ret)
}

// NewQPauseAnimation2 constructs a new QPauseAnimation object.
func NewQPauseAnimation2(msecs int) *QPauseAnimation {
	ret := C.QPauseAnimation_new2((C.int)(msecs))
	return newQPauseAnimation(ret)
}

// NewQPauseAnimation3 constructs a new QPauseAnimation object.
func NewQPauseAnimation3(parent *QObject) *QPauseAnimation {
	ret := C.QPauseAnimation_new3(parent.cPointer())
	return newQPauseAnimation(ret)
}

// NewQPauseAnimation4 constructs a new QPauseAnimation object.
func NewQPauseAnimation4(msecs int, parent *QObject) *QPauseAnimation {
	ret := C.QPauseAnimation_new4((C.int)(msecs), parent.cPointer())
	return newQPauseAnimation(ret)
}

func (this *QPauseAnimation) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QPauseAnimation_MetaObject(this.h)))
}

func (this *QPauseAnimation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPauseAnimation_Metacast(this.h, param1_Cstring))
}

func QPauseAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPauseAnimation) Duration() int {
	return (int)(C.QPauseAnimation_Duration(this.h))
}

func (this *QPauseAnimation) SetDuration(msecs int) {
	C.QPauseAnimation_SetDuration(this.h, (C.int)(msecs))
}

func QPauseAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPauseAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPauseAnimation_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPauseAnimation) Delete() {
	C.QPauseAnimation_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPauseAnimation) GoGC() {
	runtime.SetFinalizer(this, func(this *QPauseAnimation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

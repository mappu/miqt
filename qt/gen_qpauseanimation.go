package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpauseanimation.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newQPauseAnimation(h *C.QPauseAnimation) *QPauseAnimation {
	if h == nil {
		return nil
	}
	return &QPauseAnimation{h: h, QAbstractAnimation: newQAbstractAnimation_U(unsafe.Pointer(h))}
}

func newQPauseAnimation_U(h unsafe.Pointer) *QPauseAnimation {
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
	ret := C.QPauseAnimation_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QPauseAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPauseAnimation_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPauseAnimation_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPauseAnimation_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPauseAnimation) Duration() int {
	ret := C.QPauseAnimation_Duration(this.h)
	return (int)(ret)
}

func (this *QPauseAnimation) SetDuration(msecs int) {
	C.QPauseAnimation_SetDuration(this.h, (C.int)(msecs))
}

func QPauseAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPauseAnimation_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPauseAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPauseAnimation_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPauseAnimation_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPauseAnimation_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPauseAnimation_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPauseAnimation_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPauseAnimation) Delete() {
	C.QPauseAnimation_Delete(this.h)
}

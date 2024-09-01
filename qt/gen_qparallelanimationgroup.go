package qt

/*

#include "gen_qparallelanimationgroup.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newQParallelAnimationGroup(h *C.QParallelAnimationGroup) *QParallelAnimationGroup {
	if h == nil {
		return nil
	}
	return &QParallelAnimationGroup{h: h, QAnimationGroup: newQAnimationGroup_U(unsafe.Pointer(h))}
}

func newQParallelAnimationGroup_U(h unsafe.Pointer) *QParallelAnimationGroup {
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
	ret := C.QParallelAnimationGroup_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QParallelAnimationGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QParallelAnimationGroup_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QParallelAnimationGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QParallelAnimationGroup_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QParallelAnimationGroup) Duration() int {
	ret := C.QParallelAnimationGroup_Duration(this.h)
	return (int)(ret)
}

func QParallelAnimationGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QParallelAnimationGroup_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QParallelAnimationGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QParallelAnimationGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QParallelAnimationGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QParallelAnimationGroup_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QParallelAnimationGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QParallelAnimationGroup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QParallelAnimationGroup) Delete() {
	C.QParallelAnimationGroup_Delete(this.h)
}

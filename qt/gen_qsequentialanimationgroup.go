package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsequentialanimationgroup.h"
#include <stdlib.h>

*/
import "C"

import (
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
	ret := C.QSequentialAnimationGroup_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSequentialAnimationGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSequentialAnimationGroup_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSequentialAnimationGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSequentialAnimationGroup_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSequentialAnimationGroup) AddPause(msecs int) *QPauseAnimation {
	ret := C.QSequentialAnimationGroup_AddPause(this.h, (C.int)(msecs))
	return newQPauseAnimation_U(unsafe.Pointer(ret))
}

func (this *QSequentialAnimationGroup) InsertPause(index int, msecs int) *QPauseAnimation {
	ret := C.QSequentialAnimationGroup_InsertPause(this.h, (C.int)(index), (C.int)(msecs))
	return newQPauseAnimation_U(unsafe.Pointer(ret))
}

func (this *QSequentialAnimationGroup) CurrentAnimation() *QAbstractAnimation {
	ret := C.QSequentialAnimationGroup_CurrentAnimation(this.h)
	return newQAbstractAnimation_U(unsafe.Pointer(ret))
}

func (this *QSequentialAnimationGroup) Duration() int {
	ret := C.QSequentialAnimationGroup_Duration(this.h)
	return (int)(ret)
}

func (this *QSequentialAnimationGroup) CurrentAnimationChanged(current *QAbstractAnimation) {
	C.QSequentialAnimationGroup_CurrentAnimationChanged(this.h, current.cPointer())
}

func (this *QSequentialAnimationGroup) OnCurrentAnimationChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSequentialAnimationGroup_connect_CurrentAnimationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QSequentialAnimationGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSequentialAnimationGroup_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSequentialAnimationGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSequentialAnimationGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSequentialAnimationGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSequentialAnimationGroup_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSequentialAnimationGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSequentialAnimationGroup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSequentialAnimationGroup) Delete() {
	C.QSequentialAnimationGroup_Delete(this.h)
}

package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qrefcount.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QtPrivate__RefCount struct {
	h *C.QtPrivate__RefCount
}

func (this *QtPrivate__RefCount) cPointer() *C.QtPrivate__RefCount {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__RefCount(h *C.QtPrivate__RefCount) *QtPrivate__RefCount {
	return &QtPrivate__RefCount{h: h}
}

func newQtPrivate__RefCount_U(h unsafe.Pointer) *QtPrivate__RefCount {
	return newQtPrivate__RefCount((*C.QtPrivate__RefCount)(h))
}

func (this *QtPrivate__RefCount) Ref() bool {
	ret := C.QtPrivate__RefCount_Ref(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__RefCount) Deref() bool {
	ret := C.QtPrivate__RefCount_Deref(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__RefCount) SetSharable(sharable bool) bool {
	ret := C.QtPrivate__RefCount_SetSharable(this.h, (C.bool)(sharable))
	return (bool)(ret)
}

func (this *QtPrivate__RefCount) IsSharable() bool {
	ret := C.QtPrivate__RefCount_IsSharable(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__RefCount) IsStatic() bool {
	ret := C.QtPrivate__RefCount_IsStatic(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__RefCount) IsShared() bool {
	ret := C.QtPrivate__RefCount_IsShared(this.h)
	return (bool)(ret)
}

func (this *QtPrivate__RefCount) InitializeOwned() {
	C.QtPrivate__RefCount_InitializeOwned(this.h)
}

func (this *QtPrivate__RefCount) InitializeUnsharable() {
	C.QtPrivate__RefCount_InitializeUnsharable(this.h)
}

func (this *QtPrivate__RefCount) Delete() {
	C.QtPrivate__RefCount_Delete(this.h)
}

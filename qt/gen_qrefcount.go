package qt

/*

#include "gen_qrefcount.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtPrivate__RefCount struct {
	h          *C.QtPrivate__RefCount
	isSubclass bool
}

func (this *QtPrivate__RefCount) cPointer() *C.QtPrivate__RefCount {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__RefCount) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQtPrivate__RefCount constructs the type using only CGO pointers.
func newQtPrivate__RefCount(h *C.QtPrivate__RefCount) *QtPrivate__RefCount {
	if h == nil {
		return nil
	}
	return &QtPrivate__RefCount{h: h}
}

// UnsafeNewQtPrivate__RefCount constructs the type using only unsafe pointers.
func UnsafeNewQtPrivate__RefCount(h unsafe.Pointer) *QtPrivate__RefCount {
	if h == nil {
		return nil
	}

	return &QtPrivate__RefCount{h: (*C.QtPrivate__RefCount)(h)}
}

func (this *QtPrivate__RefCount) Ref() bool {
	return (bool)(C.QtPrivate__RefCount_Ref(this.h))
}

func (this *QtPrivate__RefCount) Deref() bool {
	return (bool)(C.QtPrivate__RefCount_Deref(this.h))
}

func (this *QtPrivate__RefCount) SetSharable(sharable bool) bool {
	return (bool)(C.QtPrivate__RefCount_SetSharable(this.h, (C.bool)(sharable)))
}

func (this *QtPrivate__RefCount) IsSharable() bool {
	return (bool)(C.QtPrivate__RefCount_IsSharable(this.h))
}

func (this *QtPrivate__RefCount) IsStatic() bool {
	return (bool)(C.QtPrivate__RefCount_IsStatic(this.h))
}

func (this *QtPrivate__RefCount) IsShared() bool {
	return (bool)(C.QtPrivate__RefCount_IsShared(this.h))
}

func (this *QtPrivate__RefCount) InitializeOwned() {
	C.QtPrivate__RefCount_InitializeOwned(this.h)
}

func (this *QtPrivate__RefCount) InitializeUnsharable() {
	C.QtPrivate__RefCount_InitializeUnsharable(this.h)
}

// Delete this object from C++ memory.
func (this *QtPrivate__RefCount) Delete() {
	C.QtPrivate__RefCount_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__RefCount) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__RefCount) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

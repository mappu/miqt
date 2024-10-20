package qt6

/*

#include "gen_qutf8stringview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtPrivate__hide_char8_t struct {
	h *C.QtPrivate__hide_char8_t
}

func (this *QtPrivate__hide_char8_t) cPointer() *C.QtPrivate__hide_char8_t {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__hide_char8_t) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__hide_char8_t(h *C.QtPrivate__hide_char8_t) *QtPrivate__hide_char8_t {
	if h == nil {
		return nil
	}
	return &QtPrivate__hide_char8_t{h: h}
}

func UnsafeNewQtPrivate__hide_char8_t(h unsafe.Pointer) *QtPrivate__hide_char8_t {
	return newQtPrivate__hide_char8_t((*C.QtPrivate__hide_char8_t)(h))
}

// Delete this object from C++ memory.
func (this *QtPrivate__hide_char8_t) Delete() {
	C.QtPrivate__hide_char8_t_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__hide_char8_t) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__hide_char8_t) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QtPrivate__wrap_char struct {
	h *C.QtPrivate__wrap_char
}

func (this *QtPrivate__wrap_char) cPointer() *C.QtPrivate__wrap_char {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QtPrivate__wrap_char) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQtPrivate__wrap_char(h *C.QtPrivate__wrap_char) *QtPrivate__wrap_char {
	if h == nil {
		return nil
	}
	return &QtPrivate__wrap_char{h: h}
}

func UnsafeNewQtPrivate__wrap_char(h unsafe.Pointer) *QtPrivate__wrap_char {
	return newQtPrivate__wrap_char((*C.QtPrivate__wrap_char)(h))
}

// Delete this object from C++ memory.
func (this *QtPrivate__wrap_char) Delete() {
	C.QtPrivate__wrap_char_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QtPrivate__wrap_char) GoGC() {
	runtime.SetFinalizer(this, func(this *QtPrivate__wrap_char) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

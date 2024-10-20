package qt6

/*

#include "gen_qguiapplication_platform.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QNativeInterface__QX11Application struct {
	h *C.QNativeInterface__QX11Application
}

func (this *QNativeInterface__QX11Application) cPointer() *C.QNativeInterface__QX11Application {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNativeInterface__QX11Application) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQNativeInterface__QX11Application(h *C.QNativeInterface__QX11Application) *QNativeInterface__QX11Application {
	if h == nil {
		return nil
	}
	return &QNativeInterface__QX11Application{h: h}
}

func UnsafeNewQNativeInterface__QX11Application(h unsafe.Pointer) *QNativeInterface__QX11Application {
	return newQNativeInterface__QX11Application((*C.QNativeInterface__QX11Application)(h))
}

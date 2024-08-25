package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpagedpaintdevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPagedPaintDevice struct {
	h *C.QPagedPaintDevice
	*QPaintDevice
}

func (this *QPagedPaintDevice) cPointer() *C.QPagedPaintDevice {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPagedPaintDevice(h *C.QPagedPaintDevice) *QPagedPaintDevice {
	return &QPagedPaintDevice{h: h, QPaintDevice: newQPaintDevice_U(unsafe.Pointer(h))}
}

func newQPagedPaintDevice_U(h unsafe.Pointer) *QPagedPaintDevice {
	return newQPagedPaintDevice((*C.QPagedPaintDevice)(h))
}

func (this *QPagedPaintDevice) NewPage() bool {
	ret := C.QPagedPaintDevice_NewPage(this.h)
	return (bool)(ret)
}

func (this *QPagedPaintDevice) SetPageLayout(pageLayout *QPageLayout) bool {
	ret := C.QPagedPaintDevice_SetPageLayout(this.h, pageLayout.cPointer())
	return (bool)(ret)
}

func (this *QPagedPaintDevice) SetPageSize(pageSize *QPageSize) bool {
	ret := C.QPagedPaintDevice_SetPageSize(this.h, pageSize.cPointer())
	return (bool)(ret)
}

func (this *QPagedPaintDevice) SetPageMargins(margins *QMarginsF) bool {
	ret := C.QPagedPaintDevice_SetPageMargins(this.h, margins.cPointer())
	return (bool)(ret)
}

func (this *QPagedPaintDevice) PageLayout() *QPageLayout {
	ret := C.QPagedPaintDevice_PageLayout(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPageLayout(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPageLayout) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPagedPaintDevice) SetPageSizeMM(size *QSizeF) {
	C.QPagedPaintDevice_SetPageSizeMM(this.h, size.cPointer())
}

func (this *QPagedPaintDevice) PageSizeMM() *QSizeF {
	ret := C.QPagedPaintDevice_PageSizeMM(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPagedPaintDevice) Delete() {
	C.QPagedPaintDevice_Delete(this.h)
}

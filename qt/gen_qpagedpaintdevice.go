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
	if h == nil {
		return nil
	}
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

func (this *QPagedPaintDevice) SetPageOrientation(orientation uintptr) bool {
	ret := C.QPagedPaintDevice_SetPageOrientation(this.h, (C.uintptr_t)(orientation))
	return (bool)(ret)
}

func (this *QPagedPaintDevice) SetPageMargins(margins *QMarginsF) bool {
	ret := C.QPagedPaintDevice_SetPageMargins(this.h, margins.cPointer())
	return (bool)(ret)
}

func (this *QPagedPaintDevice) SetPageMargins2(margins *QMarginsF, units uintptr) bool {
	ret := C.QPagedPaintDevice_SetPageMargins2(this.h, margins.cPointer(), (C.uintptr_t)(units))
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

func (this *QPagedPaintDevice) SetPageSizeWithSize(size uintptr) {
	C.QPagedPaintDevice_SetPageSizeWithSize(this.h, (C.uintptr_t)(size))
}

func (this *QPagedPaintDevice) PageSize() uintptr {
	ret := C.QPagedPaintDevice_PageSize(this.h)
	return (uintptr)(ret)
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

func (this *QPagedPaintDevice) SetMargins(margins *QPagedPaintDevice__Margins) {
	C.QPagedPaintDevice_SetMargins(this.h, margins.cPointer())
}

func (this *QPagedPaintDevice) Margins() *QPagedPaintDevice__Margins {
	ret := C.QPagedPaintDevice_Margins(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPagedPaintDevice__Margins(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPagedPaintDevice__Margins) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPagedPaintDevice) Delete() {
	C.QPagedPaintDevice_Delete(this.h)
}

type QPagedPaintDevice__Margins struct {
	h *C.QPagedPaintDevice__Margins
}

func (this *QPagedPaintDevice__Margins) cPointer() *C.QPagedPaintDevice__Margins {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPagedPaintDevice__Margins(h *C.QPagedPaintDevice__Margins) *QPagedPaintDevice__Margins {
	if h == nil {
		return nil
	}
	return &QPagedPaintDevice__Margins{h: h}
}

func newQPagedPaintDevice__Margins_U(h unsafe.Pointer) *QPagedPaintDevice__Margins {
	return newQPagedPaintDevice__Margins((*C.QPagedPaintDevice__Margins)(h))
}

func (this *QPagedPaintDevice__Margins) Delete() {
	C.QPagedPaintDevice__Margins_Delete(this.h)
}

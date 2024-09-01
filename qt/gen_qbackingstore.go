package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qbackingstore.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QBackingStore struct {
	h *C.QBackingStore
}

func (this *QBackingStore) cPointer() *C.QBackingStore {
	if this == nil {
		return nil
	}
	return this.h
}

func newQBackingStore(h *C.QBackingStore) *QBackingStore {
	if h == nil {
		return nil
	}
	return &QBackingStore{h: h}
}

func newQBackingStore_U(h unsafe.Pointer) *QBackingStore {
	return newQBackingStore((*C.QBackingStore)(h))
}

// NewQBackingStore constructs a new QBackingStore object.
func NewQBackingStore(window *QWindow) *QBackingStore {
	ret := C.QBackingStore_new(window.cPointer())
	return newQBackingStore(ret)
}

func (this *QBackingStore) Window() *QWindow {
	ret := C.QBackingStore_Window(this.h)
	return newQWindow_U(unsafe.Pointer(ret))
}

func (this *QBackingStore) PaintDevice() *QPaintDevice {
	ret := C.QBackingStore_PaintDevice(this.h)
	return newQPaintDevice_U(unsafe.Pointer(ret))
}

func (this *QBackingStore) Flush(region *QRegion) {
	C.QBackingStore_Flush(this.h, region.cPointer())
}

func (this *QBackingStore) Resize(size *QSize) {
	C.QBackingStore_Resize(this.h, size.cPointer())
}

func (this *QBackingStore) Size() *QSize {
	ret := C.QBackingStore_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBackingStore) Scroll(area *QRegion, dx int, dy int) bool {
	ret := C.QBackingStore_Scroll(this.h, area.cPointer(), (C.int)(dx), (C.int)(dy))
	return (bool)(ret)
}

func (this *QBackingStore) BeginPaint(param1 *QRegion) {
	C.QBackingStore_BeginPaint(this.h, param1.cPointer())
}

func (this *QBackingStore) EndPaint() {
	C.QBackingStore_EndPaint(this.h)
}

func (this *QBackingStore) SetStaticContents(region *QRegion) {
	C.QBackingStore_SetStaticContents(this.h, region.cPointer())
}

func (this *QBackingStore) StaticContents() *QRegion {
	ret := C.QBackingStore_StaticContents(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBackingStore) HasStaticContents() bool {
	ret := C.QBackingStore_HasStaticContents(this.h)
	return (bool)(ret)
}

func (this *QBackingStore) Flush2(region *QRegion, window *QWindow) {
	C.QBackingStore_Flush2(this.h, region.cPointer(), window.cPointer())
}

func (this *QBackingStore) Flush3(region *QRegion, window *QWindow, offset *QPoint) {
	C.QBackingStore_Flush3(this.h, region.cPointer(), window.cPointer(), offset.cPointer())
}

func (this *QBackingStore) Delete() {
	C.QBackingStore_Delete(this.h)
}

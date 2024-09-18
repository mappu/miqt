package qt

/*

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
	return newQWindow_U(unsafe.Pointer(C.QBackingStore_Window(this.h)))
}

func (this *QBackingStore) PaintDevice() *QPaintDevice {
	return newQPaintDevice_U(unsafe.Pointer(C.QBackingStore_PaintDevice(this.h)))
}

func (this *QBackingStore) Flush(region *QRegion) {
	C.QBackingStore_Flush(this.h, region.cPointer())
}

func (this *QBackingStore) Resize(size *QSize) {
	C.QBackingStore_Resize(this.h, size.cPointer())
}

func (this *QBackingStore) Size() *QSize {
	_ret := C.QBackingStore_Size(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBackingStore) Scroll(area *QRegion, dx int, dy int) bool {
	return (bool)(C.QBackingStore_Scroll(this.h, area.cPointer(), (C.int)(dx), (C.int)(dy)))
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
	_ret := C.QBackingStore_StaticContents(this.h)
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBackingStore) HasStaticContents() bool {
	return (bool)(C.QBackingStore_HasStaticContents(this.h))
}

func (this *QBackingStore) Flush2(region *QRegion, window *QWindow) {
	C.QBackingStore_Flush2(this.h, region.cPointer(), window.cPointer())
}

func (this *QBackingStore) Flush3(region *QRegion, window *QWindow, offset *QPoint) {
	C.QBackingStore_Flush3(this.h, region.cPointer(), window.cPointer(), offset.cPointer())
}

// Delete this object from C++ memory.
func (this *QBackingStore) Delete() {
	C.QBackingStore_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBackingStore) GoGC() {
	runtime.SetFinalizer(this, func(this *QBackingStore) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

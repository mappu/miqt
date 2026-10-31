package qt6

/*

#include "gen_qbackingstore.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"unsafe"
)

type QBackingStore struct {
	h  *C.QBackingStore
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QBackingStore) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QBackingStore) cPointer() *C.QBackingStore {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBackingStore) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBackingStore constructs the type using only CGO pointers.
func newQBackingStore(h *C.QBackingStore) *QBackingStore {
	if h == nil {
		return nil
	}

	return &QBackingStore{h: h}
}

// UnsafeNewQBackingStore constructs the type using only unsafe pointers.
func UnsafeNewQBackingStore(h unsafe.Pointer) *QBackingStore {
	return newQBackingStore((*C.QBackingStore)(h))
}

// NewQBackingStore constructs a new QBackingStore object.
func NewQBackingStore(window *QWindow) *QBackingStore {

	return newQBackingStore(C.QBackingStore_new(window.cPointer()))
}

func (this *QBackingStore) Window() *QWindow {
	defer runtime.KeepAlive(this)
	return newQWindow(C.QBackingStore_window(this.h))
}

func (this *QBackingStore) PaintDevice() *QPaintDevice {
	defer runtime.KeepAlive(this)
	return newQPaintDevice(C.QBackingStore_paintDevice(this.h))
}

func (this *QBackingStore) Flush(region *QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(region)
	C.QBackingStore_flush(this.h, region.cPointer())
}

func (this *QBackingStore) Resize(size QSize) {
	defer runtime.KeepAlive(this)
	C.QBackingStore_resize(this.h, libmiqt.ValueCast[C.struct_miqt_qsize](size))
}

func (this *QBackingStore) Size() QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QSize](C.QBackingStore_size(this.h))
}

func (this *QBackingStore) Scroll(area *QRegion, dx int, dy int) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(area)
	return (bool)(C.QBackingStore_scroll(this.h, area.cPointer(), (C.int)(dx), (C.int)(dy)))
}

func (this *QBackingStore) BeginPaint(param1 *QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QBackingStore_beginPaint(this.h, param1.cPointer())
}

func (this *QBackingStore) EndPaint() {
	defer runtime.KeepAlive(this)
	C.QBackingStore_endPaint(this.h)
}

func (this *QBackingStore) SetStaticContents(region *QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(region)
	C.QBackingStore_setStaticContents(this.h, region.cPointer())
}

func (this *QBackingStore) StaticContents() *QRegion {
	defer runtime.KeepAlive(this)
	_goptr := newQRegion(C.QBackingStore_staticContents(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBackingStore) HasStaticContents() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBackingStore_hasStaticContents(this.h))
}

func (this *QBackingStore) Flush2(region *QRegion, window *QWindow) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(region)
	C.QBackingStore_flush2(this.h, region.cPointer(), window.cPointer())
}

func (this *QBackingStore) Flush3(region *QRegion, window *QWindow, offset QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(region)
	C.QBackingStore_flush3(this.h, region.cPointer(), window.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](offset))
}

// Delete this object from C++ memory.
func (this *QBackingStore) Delete() {
	C.QBackingStore_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QBackingStore) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QBackingStore_delete((*C.QBackingStore)(gc[0]))
	})
	this.miqtSetGC(gc)
}

package qt6

/*

#include "gen_qpicture.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPicture struct {
	h *C.QPicture
	*QPaintDevice
}

func (this *QPicture) cPointer() *C.QPicture {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPicture) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPicture(h *C.QPicture) *QPicture {
	if h == nil {
		return nil
	}
	return &QPicture{h: h, QPaintDevice: UnsafeNewQPaintDevice(unsafe.Pointer(h))}
}

func UnsafeNewQPicture(h unsafe.Pointer) *QPicture {
	return newQPicture((*C.QPicture)(h))
}

// NewQPicture constructs a new QPicture object.
func NewQPicture() *QPicture {
	ret := C.QPicture_new()
	return newQPicture(ret)
}

// NewQPicture2 constructs a new QPicture object.
func NewQPicture2(param1 *QPicture) *QPicture {
	ret := C.QPicture_new2(param1.cPointer())
	return newQPicture(ret)
}

// NewQPicture3 constructs a new QPicture object.
func NewQPicture3(formatVersion int) *QPicture {
	ret := C.QPicture_new3((C.int)(formatVersion))
	return newQPicture(ret)
}

func (this *QPicture) IsNull() bool {
	return (bool)(C.QPicture_IsNull(this.h))
}

func (this *QPicture) DevType() int {
	return (int)(C.QPicture_DevType(this.h))
}

func (this *QPicture) Size() uint {
	return (uint)(C.QPicture_Size(this.h))
}

func (this *QPicture) Data() string {
	_ret := C.QPicture_Data(this.h)
	return C.GoString(_ret)
}

func (this *QPicture) SetData(data string, size uint) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QPicture_SetData(this.h, data_Cstring, (C.uint)(size))
}

func (this *QPicture) Play(p *QPainter) bool {
	return (bool)(C.QPicture_Play(this.h, p.cPointer()))
}

func (this *QPicture) Load(dev *QIODevice) bool {
	return (bool)(C.QPicture_Load(this.h, dev.cPointer()))
}

func (this *QPicture) LoadWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QPicture_LoadWithFileName(this.h, fileName_ms))
}

func (this *QPicture) Save(dev *QIODevice) bool {
	return (bool)(C.QPicture_Save(this.h, dev.cPointer()))
}

func (this *QPicture) SaveWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QPicture_SaveWithFileName(this.h, fileName_ms))
}

func (this *QPicture) BoundingRect() *QRect {
	_ret := C.QPicture_BoundingRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPicture) SetBoundingRect(r *QRect) {
	C.QPicture_SetBoundingRect(this.h, r.cPointer())
}

func (this *QPicture) OperatorAssign(p *QPicture) {
	C.QPicture_OperatorAssign(this.h, p.cPointer())
}

func (this *QPicture) Swap(other *QPicture) {
	C.QPicture_Swap(this.h, other.cPointer())
}

func (this *QPicture) Detach() {
	C.QPicture_Detach(this.h)
}

func (this *QPicture) IsDetached() bool {
	return (bool)(C.QPicture_IsDetached(this.h))
}

func (this *QPicture) PaintEngine() *QPaintEngine {
	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QPicture_PaintEngine(this.h)))
}

// Delete this object from C++ memory.
func (this *QPicture) Delete() {
	C.QPicture_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPicture) GoGC() {
	runtime.SetFinalizer(this, func(this *QPicture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

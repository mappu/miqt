package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpixmap.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPixmap struct {
	h *C.QPixmap
	*QPaintDevice
}

func (this *QPixmap) cPointer() *C.QPixmap {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPixmap(h *C.QPixmap) *QPixmap {
	return &QPixmap{h: h, QPaintDevice: newQPaintDevice_U(unsafe.Pointer(h))}
}

func newQPixmap_U(h unsafe.Pointer) *QPixmap {
	return newQPixmap((*C.QPixmap)(h))
}

// NewQPixmap constructs a new QPixmap object.
func NewQPixmap() *QPixmap {
	ret := C.QPixmap_new()
	return newQPixmap(ret)
}

// NewQPixmap2 constructs a new QPixmap object.
func NewQPixmap2(w int, h int) *QPixmap {
	ret := C.QPixmap_new2((C.int)(w), (C.int)(h))
	return newQPixmap(ret)
}

// NewQPixmap3 constructs a new QPixmap object.
func NewQPixmap3(param1 *QSize) *QPixmap {
	ret := C.QPixmap_new3(param1.cPointer())
	return newQPixmap(ret)
}

// NewQPixmap4 constructs a new QPixmap object.
func NewQPixmap4(xpm string) *QPixmap {
	xpm_Cstring := C.CString(xpm)
	defer C.free(unsafe.Pointer(xpm_Cstring))
	ret := C.QPixmap_new4(xpm_Cstring)
	return newQPixmap(ret)
}

// NewQPixmap5 constructs a new QPixmap object.
func NewQPixmap5(param1 *QPixmap) *QPixmap {
	ret := C.QPixmap_new5(param1.cPointer())
	return newQPixmap(ret)
}

func (this *QPixmap) OperatorAssign(param1 *QPixmap) {
	C.QPixmap_OperatorAssign(this.h, param1.cPointer())
}

func (this *QPixmap) Swap(other *QPixmap) {
	C.QPixmap_Swap(this.h, other.cPointer())
}

func (this *QPixmap) IsNull() bool {
	ret := C.QPixmap_IsNull(this.h)
	return (bool)(ret)
}

func (this *QPixmap) DevType() int {
	ret := C.QPixmap_DevType(this.h)
	return (int)(ret)
}

func (this *QPixmap) Width() int {
	ret := C.QPixmap_Width(this.h)
	return (int)(ret)
}

func (this *QPixmap) Height() int {
	ret := C.QPixmap_Height(this.h)
	return (int)(ret)
}

func (this *QPixmap) Size() *QSize {
	ret := C.QPixmap_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPixmap) Rect() *QRect {
	ret := C.QPixmap_Rect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPixmap) Depth() int {
	ret := C.QPixmap_Depth(this.h)
	return (int)(ret)
}

func QPixmap_DefaultDepth() int {
	ret := C.QPixmap_DefaultDepth()
	return (int)(ret)
}

func (this *QPixmap) Fill() {
	C.QPixmap_Fill(this.h)
}

func (this *QPixmap) Fill2(device *QPaintDevice, ofs *QPoint) {
	C.QPixmap_Fill2(this.h, device.cPointer(), ofs.cPointer())
}

func (this *QPixmap) Fill3(device *QPaintDevice, xofs int, yofs int) {
	C.QPixmap_Fill3(this.h, device.cPointer(), (C.int)(xofs), (C.int)(yofs))
}

func (this *QPixmap) Mask() *QBitmap {
	ret := C.QPixmap_Mask(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPixmap) SetMask(mask *QBitmap) {
	C.QPixmap_SetMask(this.h, mask.cPointer())
}

func (this *QPixmap) DevicePixelRatio() float64 {
	ret := C.QPixmap_DevicePixelRatio(this.h)
	return (float64)(ret)
}

func (this *QPixmap) SetDevicePixelRatio(scaleFactor float64) {
	C.QPixmap_SetDevicePixelRatio(this.h, (C.double)(scaleFactor))
}

func (this *QPixmap) HasAlpha() bool {
	ret := C.QPixmap_HasAlpha(this.h)
	return (bool)(ret)
}

func (this *QPixmap) HasAlphaChannel() bool {
	ret := C.QPixmap_HasAlphaChannel(this.h)
	return (bool)(ret)
}

func (this *QPixmap) CreateHeuristicMask() *QBitmap {
	ret := C.QPixmap_CreateHeuristicMask(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_GrabWindow(param1 uintptr) *QPixmap {
	ret := C.QPixmap_GrabWindow((C.uintptr_t)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_GrabWidget(widget *QObject, rect *QRect) *QPixmap {
	ret := C.QPixmap_GrabWidget(widget.cPointer(), rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_GrabWidgetWithWidget(widget *QObject) *QPixmap {
	ret := C.QPixmap_GrabWidgetWithWidget(widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_TrueMatrix(m *QMatrix, w int, h int) *QMatrix {
	ret := C.QPixmap_TrueMatrix(m.cPointer(), (C.int)(w), (C.int)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_TrueMatrix2(m *QTransform, w int, h int) *QTransform {
	ret := C.QPixmap_TrueMatrix2(m.cPointer(), (C.int)(w), (C.int)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPixmap) ToImage() *QImage {
	ret := C.QPixmap_ToImage(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPixmap) Save(fileName string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QPixmap_Save(this.h, fileName_Cstring, C.ulong(len(fileName)))
	return (bool)(ret)
}

func (this *QPixmap) SaveWithDevice(device *QIODevice) bool {
	ret := C.QPixmap_SaveWithDevice(this.h, device.cPointer())
	return (bool)(ret)
}

func (this *QPixmap) Copy(x int, y int, width int, height int) *QPixmap {
	ret := C.QPixmap_Copy(this.h, (C.int)(x), (C.int)(y), (C.int)(width), (C.int)(height))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPixmap) Copy2() *QPixmap {
	ret := C.QPixmap_Copy2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPixmap) Scroll(dx int, dy int, x int, y int, width int, height int) {
	C.QPixmap_Scroll(this.h, (C.int)(dx), (C.int)(dy), (C.int)(x), (C.int)(y), (C.int)(width), (C.int)(height))
}

func (this *QPixmap) Scroll2(dx int, dy int, rect *QRect) {
	C.QPixmap_Scroll2(this.h, (C.int)(dx), (C.int)(dy), rect.cPointer())
}

func (this *QPixmap) CacheKey() int64 {
	ret := C.QPixmap_CacheKey(this.h)
	return (int64)(ret)
}

func (this *QPixmap) IsDetached() bool {
	ret := C.QPixmap_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QPixmap) Detach() {
	C.QPixmap_Detach(this.h)
}

func (this *QPixmap) IsQBitmap() bool {
	ret := C.QPixmap_IsQBitmap(this.h)
	return (bool)(ret)
}

func (this *QPixmap) PaintEngine() *QPaintEngine {
	ret := C.QPixmap_PaintEngine(this.h)
	return newQPaintEngine_U(unsafe.Pointer(ret))
}

func (this *QPixmap) OperatorNot() bool {
	ret := C.QPixmap_OperatorNot(this.h)
	return (bool)(ret)
}

func (this *QPixmap) Fill1(fillColor *QColor) {
	C.QPixmap_Fill1(this.h, fillColor.cPointer())
}

func (this *QPixmap) CreateHeuristicMask1(clipTight bool) *QBitmap {
	ret := C.QPixmap_CreateHeuristicMask1(this.h, (C.bool)(clipTight))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBitmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBitmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_GrabWindow2(param1 uintptr, x int) *QPixmap {
	ret := C.QPixmap_GrabWindow2((C.uintptr_t)(param1), (C.int)(x))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_GrabWindow3(param1 uintptr, x int, y int) *QPixmap {
	ret := C.QPixmap_GrabWindow3((C.uintptr_t)(param1), (C.int)(x), (C.int)(y))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_GrabWindow4(param1 uintptr, x int, y int, w int) *QPixmap {
	ret := C.QPixmap_GrabWindow4((C.uintptr_t)(param1), (C.int)(x), (C.int)(y), (C.int)(w))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_GrabWindow5(param1 uintptr, x int, y int, w int, h int) *QPixmap {
	ret := C.QPixmap_GrabWindow5((C.uintptr_t)(param1), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_GrabWidget2(widget *QObject, x int) *QPixmap {
	ret := C.QPixmap_GrabWidget2(widget.cPointer(), (C.int)(x))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_GrabWidget3(widget *QObject, x int, y int) *QPixmap {
	ret := C.QPixmap_GrabWidget3(widget.cPointer(), (C.int)(x), (C.int)(y))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_GrabWidget4(widget *QObject, x int, y int, w int) *QPixmap {
	ret := C.QPixmap_GrabWidget4(widget.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmap_GrabWidget5(widget *QObject, x int, y int, w int, h int) *QPixmap {
	ret := C.QPixmap_GrabWidget5(widget.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPixmap) Save2(fileName string, format string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QPixmap_Save2(this.h, fileName_Cstring, C.ulong(len(fileName)), format_Cstring)
	return (bool)(ret)
}

func (this *QPixmap) Save3(fileName string, format string, quality int) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QPixmap_Save3(this.h, fileName_Cstring, C.ulong(len(fileName)), format_Cstring, (C.int)(quality))
	return (bool)(ret)
}

func (this *QPixmap) Save22(device *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QPixmap_Save22(this.h, device.cPointer(), format_Cstring)
	return (bool)(ret)
}

func (this *QPixmap) Save32(device *QIODevice, format string, quality int) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QPixmap_Save32(this.h, device.cPointer(), format_Cstring, (C.int)(quality))
	return (bool)(ret)
}

func (this *QPixmap) Copy1(rect *QRect) *QPixmap {
	ret := C.QPixmap_Copy1(this.h, rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPixmap) Scroll7(dx int, dy int, x int, y int, width int, height int, exposed *QRegion) {
	C.QPixmap_Scroll7(this.h, (C.int)(dx), (C.int)(dy), (C.int)(x), (C.int)(y), (C.int)(width), (C.int)(height), exposed.cPointer())
}

func (this *QPixmap) Scroll4(dx int, dy int, rect *QRect, exposed *QRegion) {
	C.QPixmap_Scroll4(this.h, (C.int)(dx), (C.int)(dy), rect.cPointer(), exposed.cPointer())
}

func (this *QPixmap) Delete() {
	C.QPixmap_Delete(this.h)
}

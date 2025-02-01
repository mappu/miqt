package qt6

/*

#include "gen_qpixmap.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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

func (this *QPixmap) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPixmap constructs the type using only CGO pointers.
func newQPixmap(h *C.QPixmap) *QPixmap {
	if h == nil {
		return nil
	}
	var outptr_QPaintDevice *C.QPaintDevice = nil
	C.QPixmap_virtbase(h, &outptr_QPaintDevice)

	return &QPixmap{h: h,
		QPaintDevice: newQPaintDevice(outptr_QPaintDevice)}
}

// UnsafeNewQPixmap constructs the type using only unsafe pointers.
func UnsafeNewQPixmap(h unsafe.Pointer) *QPixmap {
	return newQPixmap((*C.QPixmap)(h))
}

// NewQPixmap constructs a new QPixmap object.
func NewQPixmap() *QPixmap {

	return newQPixmap(C.QPixmap_new())
}

// NewQPixmap2 constructs a new QPixmap object.
func NewQPixmap2(w int, h int) *QPixmap {

	return newQPixmap(C.QPixmap_new2((C.int)(w), (C.int)(h)))
}

// NewQPixmap3 constructs a new QPixmap object.
func NewQPixmap3(param1 *QSize) *QPixmap {

	return newQPixmap(C.QPixmap_new3(param1.cPointer()))
}

// NewQPixmap4 constructs a new QPixmap object.
func NewQPixmap4(fileName string) *QPixmap {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQPixmap(C.QPixmap_new4(fileName_ms))
}

// NewQPixmap5 constructs a new QPixmap object.
func NewQPixmap5(param1 *QPixmap) *QPixmap {

	return newQPixmap(C.QPixmap_new5(param1.cPointer()))
}

// NewQPixmap6 constructs a new QPixmap object.
func NewQPixmap6(fileName string, format string) *QPixmap {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))

	return newQPixmap(C.QPixmap_new6(fileName_ms, format_Cstring))
}

// NewQPixmap7 constructs a new QPixmap object.
func NewQPixmap7(fileName string, format string, flags ImageConversionFlag) *QPixmap {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))

	return newQPixmap(C.QPixmap_new7(fileName_ms, format_Cstring, (C.int)(flags)))
}

func (this *QPixmap) OperatorAssign(param1 *QPixmap) {
	C.QPixmap_operatorAssign(this.h, param1.cPointer())
}

func (this *QPixmap) Swap(other *QPixmap) {
	C.QPixmap_swap(this.h, other.cPointer())
}

func (this *QPixmap) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QPixmap_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) IsNull() bool {
	return (bool)(C.QPixmap_isNull(this.h))
}

func (this *QPixmap) DevType() int {
	return (int)(C.QPixmap_devType(this.h))
}

func (this *QPixmap) Width() int {
	return (int)(C.QPixmap_width(this.h))
}

func (this *QPixmap) Height() int {
	return (int)(C.QPixmap_height(this.h))
}

func (this *QPixmap) Size() *QSize {
	_goptr := newQSize(C.QPixmap_size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Rect() *QRect {
	_goptr := newQRect(C.QPixmap_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Depth() int {
	return (int)(C.QPixmap_depth(this.h))
}

func QPixmap_DefaultDepth() int {
	return (int)(C.QPixmap_defaultDepth())
}

func (this *QPixmap) Fill() {
	C.QPixmap_fill(this.h)
}

func (this *QPixmap) Mask() *QBitmap {
	_goptr := newQBitmap(C.QPixmap_mask(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) SetMask(mask *QBitmap) {
	C.QPixmap_setMask(this.h, mask.cPointer())
}

func (this *QPixmap) DevicePixelRatio() float64 {
	return (float64)(C.QPixmap_devicePixelRatio(this.h))
}

func (this *QPixmap) SetDevicePixelRatio(scaleFactor float64) {
	C.QPixmap_setDevicePixelRatio(this.h, (C.double)(scaleFactor))
}

func (this *QPixmap) DeviceIndependentSize() *QSizeF {
	_goptr := newQSizeF(C.QPixmap_deviceIndependentSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) HasAlpha() bool {
	return (bool)(C.QPixmap_hasAlpha(this.h))
}

func (this *QPixmap) HasAlphaChannel() bool {
	return (bool)(C.QPixmap_hasAlphaChannel(this.h))
}

func (this *QPixmap) CreateHeuristicMask() *QBitmap {
	_goptr := newQBitmap(C.QPixmap_createHeuristicMask(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) CreateMaskFromColor(maskColor *QColor) *QBitmap {
	_goptr := newQBitmap(C.QPixmap_createMaskFromColor(this.h, maskColor.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled(w int, h int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_scaled(this.h, (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledWithQSize(s *QSize) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_scaledWithQSize(this.h, s.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledToWidth(w int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_scaledToWidth(this.h, (C.int)(w)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledToHeight(h int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_scaledToHeight(this.h, (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Transformed(param1 *QTransform) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_transformed(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_TrueMatrix(m *QTransform, w int, h int) *QTransform {
	_goptr := newQTransform(C.QPixmap_trueMatrix(m.cPointer(), (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ToImage() *QImage {
	_goptr := newQImage(C.QPixmap_toImage(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_FromImage(image *QImage) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_fromImage(image.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_FromImageReader(imageReader *QImageReader) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_fromImageReader(imageReader.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Load(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QPixmap_load(this.h, fileName_ms))
}

func (this *QPixmap) LoadFromData(buf *byte, lenVal uint) bool {
	return (bool)(C.QPixmap_loadFromData(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.uint)(lenVal)))
}

func (this *QPixmap) LoadFromDataWithData(data []byte) bool {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	return (bool)(C.QPixmap_loadFromDataWithData(this.h, data_alias))
}

func (this *QPixmap) Save(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QPixmap_save(this.h, fileName_ms))
}

func (this *QPixmap) SaveWithDevice(device *QIODevice) bool {
	return (bool)(C.QPixmap_saveWithDevice(this.h, device.cPointer()))
}

func (this *QPixmap) ConvertFromImage(img *QImage) bool {
	return (bool)(C.QPixmap_convertFromImage(this.h, img.cPointer()))
}

func (this *QPixmap) Copy(x int, y int, width int, height int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_copy(this.h, (C.int)(x), (C.int)(y), (C.int)(width), (C.int)(height)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Copy2() *QPixmap {
	_goptr := newQPixmap(C.QPixmap_copy2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scroll(dx int, dy int, x int, y int, width int, height int) {
	C.QPixmap_scroll(this.h, (C.int)(dx), (C.int)(dy), (C.int)(x), (C.int)(y), (C.int)(width), (C.int)(height))
}

func (this *QPixmap) Scroll2(dx int, dy int, rect *QRect) {
	C.QPixmap_scroll2(this.h, (C.int)(dx), (C.int)(dy), rect.cPointer())
}

func (this *QPixmap) CacheKey() int64 {
	return (int64)(C.QPixmap_cacheKey(this.h))
}

func (this *QPixmap) IsDetached() bool {
	return (bool)(C.QPixmap_isDetached(this.h))
}

func (this *QPixmap) Detach() {
	C.QPixmap_detach(this.h)
}

func (this *QPixmap) IsQBitmap() bool {
	return (bool)(C.QPixmap_isQBitmap(this.h))
}

func (this *QPixmap) PaintEngine() *QPaintEngine {
	return newQPaintEngine(C.QPixmap_paintEngine(this.h))
}

func (this *QPixmap) OperatorNot() bool {
	return (bool)(C.QPixmap_operatorNot(this.h))
}

func (this *QPixmap) Fill1(fillColor *QColor) {
	C.QPixmap_fill1(this.h, fillColor.cPointer())
}

func (this *QPixmap) CreateHeuristicMask1(clipTight bool) *QBitmap {
	_goptr := newQBitmap(C.QPixmap_createHeuristicMask1(this.h, (C.bool)(clipTight)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) CreateMaskFromColor2(maskColor *QColor, mode MaskMode) *QBitmap {
	_goptr := newQBitmap(C.QPixmap_createMaskFromColor2(this.h, maskColor.cPointer(), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled3(w int, h int, aspectMode AspectRatioMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_scaled3(this.h, (C.int)(w), (C.int)(h), (C.int)(aspectMode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled4(w int, h int, aspectMode AspectRatioMode, mode TransformationMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_scaled4(this.h, (C.int)(w), (C.int)(h), (C.int)(aspectMode), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled2(s *QSize, aspectMode AspectRatioMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_scaled2(this.h, s.cPointer(), (C.int)(aspectMode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled32(s *QSize, aspectMode AspectRatioMode, mode TransformationMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_scaled32(this.h, s.cPointer(), (C.int)(aspectMode), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledToWidth2(w int, mode TransformationMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_scaledToWidth2(this.h, (C.int)(w), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledToHeight2(h int, mode TransformationMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_scaledToHeight2(this.h, (C.int)(h), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Transformed2(param1 *QTransform, mode TransformationMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_transformed2(this.h, param1.cPointer(), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_FromImage2(image *QImage, flags ImageConversionFlag) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_fromImage2(image.cPointer(), (C.int)(flags)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_FromImageReader2(imageReader *QImageReader, flags ImageConversionFlag) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_fromImageReader2(imageReader.cPointer(), (C.int)(flags)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Load2(fileName string, format string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_load2(this.h, fileName_ms, format_Cstring))
}

func (this *QPixmap) Load3(fileName string, format string, flags ImageConversionFlag) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_load3(this.h, fileName_ms, format_Cstring, (C.int)(flags)))
}

func (this *QPixmap) LoadFromData3(buf *byte, lenVal uint, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_loadFromData3(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.uint)(lenVal), format_Cstring))
}

func (this *QPixmap) LoadFromData4(buf *byte, lenVal uint, format string, flags ImageConversionFlag) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_loadFromData4(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.uint)(lenVal), format_Cstring, (C.int)(flags)))
}

func (this *QPixmap) LoadFromData2(data []byte, format string) bool {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_loadFromData2(this.h, data_alias, format_Cstring))
}

func (this *QPixmap) LoadFromData32(data []byte, format string, flags ImageConversionFlag) bool {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_loadFromData32(this.h, data_alias, format_Cstring, (C.int)(flags)))
}

func (this *QPixmap) Save2(fileName string, format string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_save2(this.h, fileName_ms, format_Cstring))
}

func (this *QPixmap) Save3(fileName string, format string, quality int) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_save3(this.h, fileName_ms, format_Cstring, (C.int)(quality)))
}

func (this *QPixmap) Save22(device *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_save22(this.h, device.cPointer(), format_Cstring))
}

func (this *QPixmap) Save32(device *QIODevice, format string, quality int) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_save32(this.h, device.cPointer(), format_Cstring, (C.int)(quality)))
}

func (this *QPixmap) ConvertFromImage2(img *QImage, flags ImageConversionFlag) bool {
	return (bool)(C.QPixmap_convertFromImage2(this.h, img.cPointer(), (C.int)(flags)))
}

func (this *QPixmap) Copy1(rect *QRect) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_copy1(this.h, rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scroll7(dx int, dy int, x int, y int, width int, height int, exposed *QRegion) {
	C.QPixmap_scroll7(this.h, (C.int)(dx), (C.int)(dy), (C.int)(x), (C.int)(y), (C.int)(width), (C.int)(height), exposed.cPointer())
}

func (this *QPixmap) Scroll4(dx int, dy int, rect *QRect, exposed *QRegion) {
	C.QPixmap_scroll4(this.h, (C.int)(dx), (C.int)(dy), rect.cPointer(), exposed.cPointer())
}

func (this *QPixmap) callVirtualBase_DevType() int {

	return (int)(C.QPixmap_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QPixmap) OndevType(slot func(super func() int) int) {
	ok := C.QPixmap_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPixmap_devType
func miqt_exec_callback_QPixmap_devType(self *C.QPixmap, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPixmap{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPixmap) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QPixmap_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QPixmap) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QPixmap_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPixmap_paintEngine
func miqt_exec_callback_QPixmap_paintEngine(self *C.QPixmap, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPixmap{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QPixmap) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPixmap_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPixmap) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPixmap_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPixmap_metric
func miqt_exec_callback_QPixmap_metric(self *C.QPixmap, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QPixmap{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPixmap) callVirtualBase_InitPainter(painter *QPainter) {

	C.QPixmap_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QPixmap) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QPixmap_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPixmap_initPainter
func miqt_exec_callback_QPixmap_initPainter(self *C.QPixmap, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QPixmap{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPixmap) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QPixmap_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QPixmap) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QPixmap_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPixmap_redirected
func miqt_exec_callback_QPixmap_redirected(self *C.QPixmap, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QPixmap{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QPixmap) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QPixmap_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QPixmap) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QPixmap_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPixmap_sharedPainter
func miqt_exec_callback_QPixmap_sharedPainter(self *C.QPixmap, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPixmap{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QPixmap) Delete() {
	C.QPixmap_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPixmap) GoGC() {
	runtime.SetFinalizer(this, func(this *QPixmap) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

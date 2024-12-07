package qt

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
	h          *C.QPixmap
	isSubclass bool
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
func newQPixmap(h *C.QPixmap, h_QPaintDevice *C.QPaintDevice) *QPixmap {
	if h == nil {
		return nil
	}
	return &QPixmap{h: h,
		QPaintDevice: newQPaintDevice(h_QPaintDevice)}
}

// UnsafeNewQPixmap constructs the type using only unsafe pointers.
func UnsafeNewQPixmap(h unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QPixmap {
	if h == nil {
		return nil
	}

	return &QPixmap{h: (*C.QPixmap)(h),
		QPaintDevice: UnsafeNewQPaintDevice(h_QPaintDevice)}
}

// NewQPixmap constructs a new QPixmap object.
func NewQPixmap() *QPixmap {
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPixmap_new(&outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQPixmap(outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPixmap2 constructs a new QPixmap object.
func NewQPixmap2(w int, h int) *QPixmap {
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPixmap_new2((C.int)(w), (C.int)(h), &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQPixmap(outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPixmap3 constructs a new QPixmap object.
func NewQPixmap3(param1 *QSize) *QPixmap {
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPixmap_new3(param1.cPointer(), &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQPixmap(outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPixmap4 constructs a new QPixmap object.
func NewQPixmap4(fileName string) *QPixmap {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPixmap_new4(fileName_ms, &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQPixmap(outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPixmap5 constructs a new QPixmap object.
func NewQPixmap5(param1 *QPixmap) *QPixmap {
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPixmap_new5(param1.cPointer(), &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQPixmap(outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPixmap6 constructs a new QPixmap object.
func NewQPixmap6(fileName string, format string) *QPixmap {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPixmap_new6(fileName_ms, format_Cstring, &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQPixmap(outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPixmap7 constructs a new QPixmap object.
func NewQPixmap7(fileName string, format string, flags ImageConversionFlag) *QPixmap {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	var outptr_QPixmap *C.QPixmap = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPixmap_new7(fileName_ms, format_Cstring, (C.int)(flags), &outptr_QPixmap, &outptr_QPaintDevice)
	ret := newQPixmap(outptr_QPixmap, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QPixmap) OperatorAssign(param1 *QPixmap) {
	C.QPixmap_OperatorAssign(this.h, param1.cPointer())
}

func (this *QPixmap) Swap(other *QPixmap) {
	C.QPixmap_Swap(this.h, other.cPointer())
}

func (this *QPixmap) IsNull() bool {
	return (bool)(C.QPixmap_IsNull(this.h))
}

func (this *QPixmap) DevType() int {
	return (int)(C.QPixmap_DevType(this.h))
}

func (this *QPixmap) Width() int {
	return (int)(C.QPixmap_Width(this.h))
}

func (this *QPixmap) Height() int {
	return (int)(C.QPixmap_Height(this.h))
}

func (this *QPixmap) Size() *QSize {
	_goptr := newQSize(C.QPixmap_Size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Rect() *QRect {
	_goptr := newQRect(C.QPixmap_Rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Depth() int {
	return (int)(C.QPixmap_Depth(this.h))
}

func QPixmap_DefaultDepth() int {
	return (int)(C.QPixmap_DefaultDepth())
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
	_goptr := newQBitmap(C.QPixmap_Mask(this.h), nil, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) SetMask(mask *QBitmap) {
	C.QPixmap_SetMask(this.h, mask.cPointer())
}

func (this *QPixmap) DevicePixelRatio() float64 {
	return (float64)(C.QPixmap_DevicePixelRatio(this.h))
}

func (this *QPixmap) SetDevicePixelRatio(scaleFactor float64) {
	C.QPixmap_SetDevicePixelRatio(this.h, (C.double)(scaleFactor))
}

func (this *QPixmap) HasAlpha() bool {
	return (bool)(C.QPixmap_HasAlpha(this.h))
}

func (this *QPixmap) HasAlphaChannel() bool {
	return (bool)(C.QPixmap_HasAlphaChannel(this.h))
}

func (this *QPixmap) CreateHeuristicMask() *QBitmap {
	_goptr := newQBitmap(C.QPixmap_CreateHeuristicMask(this.h), nil, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) CreateMaskFromColor(maskColor *QColor) *QBitmap {
	_goptr := newQBitmap(C.QPixmap_CreateMaskFromColor(this.h, maskColor.cPointer()), nil, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWindow(param1 uintptr) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_GrabWindow((C.uintptr_t)(param1)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWidget(widget *QObject, rect *QRect) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_GrabWidget(widget.cPointer(), rect.cPointer()), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWidgetWithWidget(widget *QObject) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_GrabWidgetWithWidget(widget.cPointer()), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled(w int, h int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_Scaled(this.h, (C.int)(w), (C.int)(h)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledWithQSize(s *QSize) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_ScaledWithQSize(this.h, s.cPointer()), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledToWidth(w int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_ScaledToWidth(this.h, (C.int)(w)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledToHeight(h int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_ScaledToHeight(this.h, (C.int)(h)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Transformed(param1 *QMatrix) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_Transformed(this.h, param1.cPointer()), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_TrueMatrix(m *QMatrix, w int, h int) *QMatrix {
	_goptr := newQMatrix(C.QPixmap_TrueMatrix(m.cPointer(), (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) TransformedWithQTransform(param1 *QTransform) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_TransformedWithQTransform(this.h, param1.cPointer()), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_TrueMatrix2(m *QTransform, w int, h int) *QTransform {
	_goptr := newQTransform(C.QPixmap_TrueMatrix2(m.cPointer(), (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ToImage() *QImage {
	_goptr := newQImage(C.QPixmap_ToImage(this.h), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_FromImage(image *QImage) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_FromImage(image.cPointer()), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_FromImageReader(imageReader *QImageReader) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_FromImageReader(imageReader.cPointer()), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Load(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QPixmap_Load(this.h, fileName_ms))
}

func (this *QPixmap) LoadFromData(buf *byte, lenVal uint) bool {
	return (bool)(C.QPixmap_LoadFromData(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.uint)(lenVal)))
}

func (this *QPixmap) LoadFromDataWithData(data []byte) bool {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	return (bool)(C.QPixmap_LoadFromDataWithData(this.h, data_alias))
}

func (this *QPixmap) Save(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QPixmap_Save(this.h, fileName_ms))
}

func (this *QPixmap) SaveWithDevice(device *QIODevice) bool {
	return (bool)(C.QPixmap_SaveWithDevice(this.h, device.cPointer()))
}

func (this *QPixmap) ConvertFromImage(img *QImage) bool {
	return (bool)(C.QPixmap_ConvertFromImage(this.h, img.cPointer()))
}

func (this *QPixmap) Copy(x int, y int, width int, height int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_Copy(this.h, (C.int)(x), (C.int)(y), (C.int)(width), (C.int)(height)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Copy2() *QPixmap {
	_goptr := newQPixmap(C.QPixmap_Copy2(this.h), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scroll(dx int, dy int, x int, y int, width int, height int) {
	C.QPixmap_Scroll(this.h, (C.int)(dx), (C.int)(dy), (C.int)(x), (C.int)(y), (C.int)(width), (C.int)(height))
}

func (this *QPixmap) Scroll2(dx int, dy int, rect *QRect) {
	C.QPixmap_Scroll2(this.h, (C.int)(dx), (C.int)(dy), rect.cPointer())
}

func (this *QPixmap) CacheKey() int64 {
	return (int64)(C.QPixmap_CacheKey(this.h))
}

func (this *QPixmap) IsDetached() bool {
	return (bool)(C.QPixmap_IsDetached(this.h))
}

func (this *QPixmap) Detach() {
	C.QPixmap_Detach(this.h)
}

func (this *QPixmap) IsQBitmap() bool {
	return (bool)(C.QPixmap_IsQBitmap(this.h))
}

func (this *QPixmap) PaintEngine() *QPaintEngine {
	return newQPaintEngine(C.QPixmap_PaintEngine(this.h))
}

func (this *QPixmap) OperatorNot() bool {
	return (bool)(C.QPixmap_OperatorNot(this.h))
}

func (this *QPixmap) Fill1(fillColor *QColor) {
	C.QPixmap_Fill1(this.h, fillColor.cPointer())
}

func (this *QPixmap) CreateHeuristicMask1(clipTight bool) *QBitmap {
	_goptr := newQBitmap(C.QPixmap_CreateHeuristicMask1(this.h, (C.bool)(clipTight)), nil, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) CreateMaskFromColor2(maskColor *QColor, mode MaskMode) *QBitmap {
	_goptr := newQBitmap(C.QPixmap_CreateMaskFromColor2(this.h, maskColor.cPointer(), (C.int)(mode)), nil, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWindow2(param1 uintptr, x int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_GrabWindow2((C.uintptr_t)(param1), (C.int)(x)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWindow3(param1 uintptr, x int, y int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_GrabWindow3((C.uintptr_t)(param1), (C.int)(x), (C.int)(y)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWindow4(param1 uintptr, x int, y int, w int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_GrabWindow4((C.uintptr_t)(param1), (C.int)(x), (C.int)(y), (C.int)(w)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWindow5(param1 uintptr, x int, y int, w int, h int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_GrabWindow5((C.uintptr_t)(param1), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWidget2(widget *QObject, x int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_GrabWidget2(widget.cPointer(), (C.int)(x)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWidget3(widget *QObject, x int, y int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_GrabWidget3(widget.cPointer(), (C.int)(x), (C.int)(y)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWidget4(widget *QObject, x int, y int, w int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_GrabWidget4(widget.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWidget5(widget *QObject, x int, y int, w int, h int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_GrabWidget5(widget.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled3(w int, h int, aspectMode AspectRatioMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_Scaled3(this.h, (C.int)(w), (C.int)(h), (C.int)(aspectMode)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled4(w int, h int, aspectMode AspectRatioMode, mode TransformationMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_Scaled4(this.h, (C.int)(w), (C.int)(h), (C.int)(aspectMode), (C.int)(mode)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled2(s *QSize, aspectMode AspectRatioMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_Scaled2(this.h, s.cPointer(), (C.int)(aspectMode)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled32(s *QSize, aspectMode AspectRatioMode, mode TransformationMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_Scaled32(this.h, s.cPointer(), (C.int)(aspectMode), (C.int)(mode)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledToWidth2(w int, mode TransformationMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_ScaledToWidth2(this.h, (C.int)(w), (C.int)(mode)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledToHeight2(h int, mode TransformationMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_ScaledToHeight2(this.h, (C.int)(h), (C.int)(mode)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Transformed2(param1 *QMatrix, mode TransformationMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_Transformed2(this.h, param1.cPointer(), (C.int)(mode)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Transformed22(param1 *QTransform, mode TransformationMode) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_Transformed22(this.h, param1.cPointer(), (C.int)(mode)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_FromImage2(image *QImage, flags ImageConversionFlag) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_FromImage2(image.cPointer(), (C.int)(flags)), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_FromImageReader2(imageReader *QImageReader, flags ImageConversionFlag) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_FromImageReader2(imageReader.cPointer(), (C.int)(flags)), nil)
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
	return (bool)(C.QPixmap_Load2(this.h, fileName_ms, format_Cstring))
}

func (this *QPixmap) Load3(fileName string, format string, flags ImageConversionFlag) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_Load3(this.h, fileName_ms, format_Cstring, (C.int)(flags)))
}

func (this *QPixmap) LoadFromData3(buf *byte, lenVal uint, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_LoadFromData3(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.uint)(lenVal), format_Cstring))
}

func (this *QPixmap) LoadFromData4(buf *byte, lenVal uint, format string, flags ImageConversionFlag) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_LoadFromData4(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.uint)(lenVal), format_Cstring, (C.int)(flags)))
}

func (this *QPixmap) LoadFromData2(data []byte, format string) bool {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_LoadFromData2(this.h, data_alias, format_Cstring))
}

func (this *QPixmap) LoadFromData32(data []byte, format string, flags ImageConversionFlag) bool {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_LoadFromData32(this.h, data_alias, format_Cstring, (C.int)(flags)))
}

func (this *QPixmap) Save2(fileName string, format string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_Save2(this.h, fileName_ms, format_Cstring))
}

func (this *QPixmap) Save3(fileName string, format string, quality int) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_Save3(this.h, fileName_ms, format_Cstring, (C.int)(quality)))
}

func (this *QPixmap) Save22(device *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_Save22(this.h, device.cPointer(), format_Cstring))
}

func (this *QPixmap) Save32(device *QIODevice, format string, quality int) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_Save32(this.h, device.cPointer(), format_Cstring, (C.int)(quality)))
}

func (this *QPixmap) ConvertFromImage2(img *QImage, flags ImageConversionFlag) bool {
	return (bool)(C.QPixmap_ConvertFromImage2(this.h, img.cPointer(), (C.int)(flags)))
}

func (this *QPixmap) Copy1(rect *QRect) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_Copy1(this.h, rect.cPointer()), nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scroll7(dx int, dy int, x int, y int, width int, height int, exposed *QRegion) {
	C.QPixmap_Scroll7(this.h, (C.int)(dx), (C.int)(dy), (C.int)(x), (C.int)(y), (C.int)(width), (C.int)(height), exposed.cPointer())
}

func (this *QPixmap) Scroll4(dx int, dy int, rect *QRect, exposed *QRegion) {
	C.QPixmap_Scroll4(this.h, (C.int)(dx), (C.int)(dy), rect.cPointer(), exposed.cPointer())
}

func (this *QPixmap) callVirtualBase_DevType() int {

	return (int)(C.QPixmap_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QPixmap) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPixmap_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPixmap_DevType
func miqt_exec_callback_QPixmap_DevType(self *C.QPixmap, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPixmap{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPixmap) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QPixmap_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QPixmap) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPixmap_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPixmap_PaintEngine
func miqt_exec_callback_QPixmap_PaintEngine(self *C.QPixmap, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPixmap{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QPixmap) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPixmap_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPixmap) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPixmap_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPixmap_Metric
func miqt_exec_callback_QPixmap_Metric(self *C.QPixmap, cb C.intptr_t, param1 C.int) C.int {
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

	C.QPixmap_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QPixmap) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPixmap_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPixmap_InitPainter
func miqt_exec_callback_QPixmap_InitPainter(self *C.QPixmap, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QPixmap{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPixmap) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QPixmap_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QPixmap) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPixmap_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPixmap_Redirected
func miqt_exec_callback_QPixmap_Redirected(self *C.QPixmap, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QPixmap_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QPixmap) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPixmap_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPixmap_SharedPainter
func miqt_exec_callback_QPixmap_SharedPainter(self *C.QPixmap, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPixmap{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QPixmap) Delete() {
	C.QPixmap_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPixmap) GoGC() {
	runtime.SetFinalizer(this, func(this *QPixmap) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

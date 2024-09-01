package qt

/*

#include "gen_qimage.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QImage struct {
	h *C.QImage
	*QPaintDevice
}

func (this *QImage) cPointer() *C.QImage {
	if this == nil {
		return nil
	}
	return this.h
}

func newQImage(h *C.QImage) *QImage {
	if h == nil {
		return nil
	}
	return &QImage{h: h, QPaintDevice: newQPaintDevice_U(unsafe.Pointer(h))}
}

func newQImage_U(h unsafe.Pointer) *QImage {
	return newQImage((*C.QImage)(h))
}

// NewQImage constructs a new QImage object.
func NewQImage() *QImage {
	ret := C.QImage_new()
	return newQImage(ret)
}

// NewQImage2 constructs a new QImage object.
func NewQImage2(size *QSize, format uintptr) *QImage {
	ret := C.QImage_new2(size.cPointer(), (C.uintptr_t)(format))
	return newQImage(ret)
}

// NewQImage3 constructs a new QImage object.
func NewQImage3(width int, height int, format uintptr) *QImage {
	ret := C.QImage_new3((C.int)(width), (C.int)(height), (C.uintptr_t)(format))
	return newQImage(ret)
}

// NewQImage4 constructs a new QImage object.
func NewQImage4(data *byte, width int, height int, format uintptr) *QImage {
	ret := C.QImage_new4((*C.uchar)(unsafe.Pointer(data)), (C.int)(width), (C.int)(height), (C.uintptr_t)(format))
	return newQImage(ret)
}

// NewQImage5 constructs a new QImage object.
func NewQImage5(data *byte, width int, height int, format uintptr) *QImage {
	ret := C.QImage_new5((*C.uchar)(unsafe.Pointer(data)), (C.int)(width), (C.int)(height), (C.uintptr_t)(format))
	return newQImage(ret)
}

// NewQImage6 constructs a new QImage object.
func NewQImage6(data *byte, width int, height int, bytesPerLine int, format uintptr) *QImage {
	ret := C.QImage_new6((*C.uchar)(unsafe.Pointer(data)), (C.int)(width), (C.int)(height), (C.int)(bytesPerLine), (C.uintptr_t)(format))
	return newQImage(ret)
}

// NewQImage7 constructs a new QImage object.
func NewQImage7(data *byte, width int, height int, bytesPerLine int, format uintptr) *QImage {
	ret := C.QImage_new7((*C.uchar)(unsafe.Pointer(data)), (C.int)(width), (C.int)(height), (C.int)(bytesPerLine), (C.uintptr_t)(format))
	return newQImage(ret)
}

// NewQImage8 constructs a new QImage object.
func NewQImage8(fileName string) *QImage {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QImage_new8(fileName_Cstring, C.ulong(len(fileName)))
	return newQImage(ret)
}

// NewQImage9 constructs a new QImage object.
func NewQImage9(param1 *QImage) *QImage {
	ret := C.QImage_new9(param1.cPointer())
	return newQImage(ret)
}

// NewQImage10 constructs a new QImage object.
func NewQImage10(fileName string, format string) *QImage {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QImage_new10(fileName_Cstring, C.ulong(len(fileName)), format_Cstring)
	return newQImage(ret)
}

func (this *QImage) OperatorAssign(param1 *QImage) {
	C.QImage_OperatorAssign(this.h, param1.cPointer())
}

func (this *QImage) Swap(other *QImage) {
	C.QImage_Swap(this.h, other.cPointer())
}

func (this *QImage) IsNull() bool {
	ret := C.QImage_IsNull(this.h)
	return (bool)(ret)
}

func (this *QImage) DevType() int {
	ret := C.QImage_DevType(this.h)
	return (int)(ret)
}

func (this *QImage) OperatorEqual(param1 *QImage) bool {
	ret := C.QImage_OperatorEqual(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QImage) OperatorNotEqual(param1 *QImage) bool {
	ret := C.QImage_OperatorNotEqual(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QImage) Detach() {
	C.QImage_Detach(this.h)
}

func (this *QImage) IsDetached() bool {
	ret := C.QImage_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QImage) Copy() *QImage {
	ret := C.QImage_Copy(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Copy2(x int, y int, w int, h int) *QImage {
	ret := C.QImage_Copy2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Format() uintptr {
	ret := C.QImage_Format(this.h)
	return (uintptr)(ret)
}

func (this *QImage) ConvertToFormat(f uintptr) *QImage {
	ret := C.QImage_ConvertToFormat(this.h, (C.uintptr_t)(f))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) ConvertToFormat2(f uintptr, colorTable []uint) *QImage {
	// For the C ABI, malloc a C array of raw pointers
	colorTable_CArray := (*[0xffff]C.uint)(C.malloc(C.ulong(8 * len(colorTable))))
	defer C.free(unsafe.Pointer(colorTable_CArray))
	for i := range colorTable {
		colorTable_CArray[i] = (C.uint)(colorTable[i])
	}
	ret := C.QImage_ConvertToFormat2(this.h, (C.uintptr_t)(f), &colorTable_CArray[0], C.ulong(len(colorTable)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) ReinterpretAsFormat(f uintptr) bool {
	ret := C.QImage_ReinterpretAsFormat(this.h, (C.uintptr_t)(f))
	return (bool)(ret)
}

func (this *QImage) ConvertTo(f uintptr) {
	C.QImage_ConvertTo(this.h, (C.uintptr_t)(f))
}

func (this *QImage) Width() int {
	ret := C.QImage_Width(this.h)
	return (int)(ret)
}

func (this *QImage) Height() int {
	ret := C.QImage_Height(this.h)
	return (int)(ret)
}

func (this *QImage) Size() *QSize {
	ret := C.QImage_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Rect() *QRect {
	ret := C.QImage_Rect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Depth() int {
	ret := C.QImage_Depth(this.h)
	return (int)(ret)
}

func (this *QImage) ColorCount() int {
	ret := C.QImage_ColorCount(this.h)
	return (int)(ret)
}

func (this *QImage) BitPlaneCount() int {
	ret := C.QImage_BitPlaneCount(this.h)
	return (int)(ret)
}

func (this *QImage) Color(i int) uint {
	ret := C.QImage_Color(this.h, (C.int)(i))
	return (uint)(ret)
}

func (this *QImage) SetColor(i int, c uint) {
	C.QImage_SetColor(this.h, (C.int)(i), (C.uint)(c))
}

func (this *QImage) SetColorCount(colorCount int) {
	C.QImage_SetColorCount(this.h, (C.int)(colorCount))
}

func (this *QImage) AllGray() bool {
	ret := C.QImage_AllGray(this.h)
	return (bool)(ret)
}

func (this *QImage) IsGrayscale() bool {
	ret := C.QImage_IsGrayscale(this.h)
	return (bool)(ret)
}

func (this *QImage) Bits() *byte {
	ret := C.QImage_Bits(this.h)
	return (*byte)(ret)
}

func (this *QImage) Bits2() *byte {
	ret := C.QImage_Bits2(this.h)
	return (*byte)(ret)
}

func (this *QImage) ConstBits() *byte {
	ret := C.QImage_ConstBits(this.h)
	return (*byte)(ret)
}

func (this *QImage) ByteCount() int {
	ret := C.QImage_ByteCount(this.h)
	return (int)(ret)
}

func (this *QImage) SizeInBytes() uint64 {
	ret := C.QImage_SizeInBytes(this.h)
	return (uint64)(ret)
}

func (this *QImage) ScanLine(param1 int) *byte {
	ret := C.QImage_ScanLine(this.h, (C.int)(param1))
	return (*byte)(ret)
}

func (this *QImage) ScanLineWithInt(param1 int) *byte {
	ret := C.QImage_ScanLineWithInt(this.h, (C.int)(param1))
	return (*byte)(ret)
}

func (this *QImage) ConstScanLine(param1 int) *byte {
	ret := C.QImage_ConstScanLine(this.h, (C.int)(param1))
	return (*byte)(ret)
}

func (this *QImage) BytesPerLine() int {
	ret := C.QImage_BytesPerLine(this.h)
	return (int)(ret)
}

func (this *QImage) Valid(x int, y int) bool {
	ret := C.QImage_Valid(this.h, (C.int)(x), (C.int)(y))
	return (bool)(ret)
}

func (this *QImage) ValidWithPt(pt *QPoint) bool {
	ret := C.QImage_ValidWithPt(this.h, pt.cPointer())
	return (bool)(ret)
}

func (this *QImage) PixelIndex(x int, y int) int {
	ret := C.QImage_PixelIndex(this.h, (C.int)(x), (C.int)(y))
	return (int)(ret)
}

func (this *QImage) PixelIndexWithPt(pt *QPoint) int {
	ret := C.QImage_PixelIndexWithPt(this.h, pt.cPointer())
	return (int)(ret)
}

func (this *QImage) Pixel(x int, y int) uint {
	ret := C.QImage_Pixel(this.h, (C.int)(x), (C.int)(y))
	return (uint)(ret)
}

func (this *QImage) PixelWithPt(pt *QPoint) uint {
	ret := C.QImage_PixelWithPt(this.h, pt.cPointer())
	return (uint)(ret)
}

func (this *QImage) SetPixel(x int, y int, index_or_rgb uint) {
	C.QImage_SetPixel(this.h, (C.int)(x), (C.int)(y), (C.uint)(index_or_rgb))
}

func (this *QImage) SetPixel2(pt *QPoint, index_or_rgb uint) {
	C.QImage_SetPixel2(this.h, pt.cPointer(), (C.uint)(index_or_rgb))
}

func (this *QImage) PixelColor(x int, y int) *QColor {
	ret := C.QImage_PixelColor(this.h, (C.int)(x), (C.int)(y))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) PixelColorWithPt(pt *QPoint) *QColor {
	ret := C.QImage_PixelColorWithPt(this.h, pt.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) SetPixelColor(x int, y int, c *QColor) {
	C.QImage_SetPixelColor(this.h, (C.int)(x), (C.int)(y), c.cPointer())
}

func (this *QImage) SetPixelColor2(pt *QPoint, c *QColor) {
	C.QImage_SetPixelColor2(this.h, pt.cPointer(), c.cPointer())
}

func (this *QImage) ColorTable() []uint {
	var _out *C.uint = nil
	var _out_len C.size_t = 0
	C.QImage_ColorTable(this.h, &_out, &_out_len)
	ret := make([]uint, int(_out_len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (uint)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImage) SetColorTable(colors []uint) {
	// For the C ABI, malloc a C array of raw pointers
	colors_CArray := (*[0xffff]C.uint)(C.malloc(C.ulong(8 * len(colors))))
	defer C.free(unsafe.Pointer(colors_CArray))
	for i := range colors {
		colors_CArray[i] = (C.uint)(colors[i])
	}
	C.QImage_SetColorTable(this.h, &colors_CArray[0], C.ulong(len(colors)))
}

func (this *QImage) DevicePixelRatio() float64 {
	ret := C.QImage_DevicePixelRatio(this.h)
	return (float64)(ret)
}

func (this *QImage) SetDevicePixelRatio(scaleFactor float64) {
	C.QImage_SetDevicePixelRatio(this.h, (C.double)(scaleFactor))
}

func (this *QImage) Fill(pixel uint) {
	C.QImage_Fill(this.h, (C.uint)(pixel))
}

func (this *QImage) FillWithColor(color *QColor) {
	C.QImage_FillWithColor(this.h, color.cPointer())
}

func (this *QImage) Fill2(color uintptr) {
	C.QImage_Fill2(this.h, (C.uintptr_t)(color))
}

func (this *QImage) HasAlphaChannel() bool {
	ret := C.QImage_HasAlphaChannel(this.h)
	return (bool)(ret)
}

func (this *QImage) SetAlphaChannel(alphaChannel *QImage) {
	C.QImage_SetAlphaChannel(this.h, alphaChannel.cPointer())
}

func (this *QImage) AlphaChannel() *QImage {
	ret := C.QImage_AlphaChannel(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) CreateAlphaMask() *QImage {
	ret := C.QImage_CreateAlphaMask(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) CreateHeuristicMask() *QImage {
	ret := C.QImage_CreateHeuristicMask(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) CreateMaskFromColor(color uint) *QImage {
	ret := C.QImage_CreateMaskFromColor(this.h, (C.uint)(color))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Scaled(w int, h int) *QImage {
	ret := C.QImage_Scaled(this.h, (C.int)(w), (C.int)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) ScaledWithQSize(s *QSize) *QImage {
	ret := C.QImage_ScaledWithQSize(this.h, s.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) ScaledToWidth(w int) *QImage {
	ret := C.QImage_ScaledToWidth(this.h, (C.int)(w))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) ScaledToHeight(h int) *QImage {
	ret := C.QImage_ScaledToHeight(this.h, (C.int)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Transformed(matrix *QMatrix) *QImage {
	ret := C.QImage_Transformed(this.h, matrix.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QImage_TrueMatrix(param1 *QMatrix, w int, h int) *QMatrix {
	ret := C.QImage_TrueMatrix(param1.cPointer(), (C.int)(w), (C.int)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) TransformedWithMatrix(matrix *QTransform) *QImage {
	ret := C.QImage_TransformedWithMatrix(this.h, matrix.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QImage_TrueMatrix2(param1 *QTransform, w int, h int) *QTransform {
	ret := C.QImage_TrueMatrix2(param1.cPointer(), (C.int)(w), (C.int)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Mirrored() *QImage {
	ret := C.QImage_Mirrored(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) RgbSwapped() *QImage {
	ret := C.QImage_RgbSwapped(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) InvertPixels() {
	C.QImage_InvertPixels(this.h)
}

func (this *QImage) ColorSpace() *QColorSpace {
	ret := C.QImage_ColorSpace(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColorSpace(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColorSpace) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) ConvertedToColorSpace(param1 *QColorSpace) *QImage {
	ret := C.QImage_ConvertedToColorSpace(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) ConvertToColorSpace(param1 *QColorSpace) {
	C.QImage_ConvertToColorSpace(this.h, param1.cPointer())
}

func (this *QImage) SetColorSpace(colorSpace *QColorSpace) {
	C.QImage_SetColorSpace(this.h, colorSpace.cPointer())
}

func (this *QImage) ApplyColorTransform(transform *QColorTransform) {
	C.QImage_ApplyColorTransform(this.h, transform.cPointer())
}

func (this *QImage) Load(device *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QImage_Load(this.h, device.cPointer(), format_Cstring)
	return (bool)(ret)
}

func (this *QImage) LoadWithFileName(fileName string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QImage_LoadWithFileName(this.h, fileName_Cstring, C.ulong(len(fileName)))
	return (bool)(ret)
}

func (this *QImage) LoadFromData(buf *byte, lenVal int) bool {
	ret := C.QImage_LoadFromData(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.int)(lenVal))
	return (bool)(ret)
}

func (this *QImage) LoadFromDataWithData(data *QByteArray) bool {
	ret := C.QImage_LoadFromDataWithData(this.h, data.cPointer())
	return (bool)(ret)
}

func (this *QImage) Save(fileName string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QImage_Save(this.h, fileName_Cstring, C.ulong(len(fileName)))
	return (bool)(ret)
}

func (this *QImage) SaveWithDevice(device *QIODevice) bool {
	ret := C.QImage_SaveWithDevice(this.h, device.cPointer())
	return (bool)(ret)
}

func QImage_FromData(data *byte, size int) *QImage {
	ret := C.QImage_FromData((*C.uchar)(unsafe.Pointer(data)), (C.int)(size))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QImage_FromDataWithData(data *QByteArray) *QImage {
	ret := C.QImage_FromDataWithData(data.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) CacheKey() int64 {
	ret := C.QImage_CacheKey(this.h)
	return (int64)(ret)
}

func (this *QImage) PaintEngine() *QPaintEngine {
	ret := C.QImage_PaintEngine(this.h)
	return newQPaintEngine_U(unsafe.Pointer(ret))
}

func (this *QImage) DotsPerMeterX() int {
	ret := C.QImage_DotsPerMeterX(this.h)
	return (int)(ret)
}

func (this *QImage) DotsPerMeterY() int {
	ret := C.QImage_DotsPerMeterY(this.h)
	return (int)(ret)
}

func (this *QImage) SetDotsPerMeterX(dotsPerMeterX int) {
	C.QImage_SetDotsPerMeterX(this.h, (C.int)(dotsPerMeterX))
}

func (this *QImage) SetDotsPerMeterY(dotsPerMeterY int) {
	C.QImage_SetDotsPerMeterY(this.h, (C.int)(dotsPerMeterY))
}

func (this *QImage) Offset() *QPoint {
	ret := C.QImage_Offset(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) SetOffset(offset *QPoint) {
	C.QImage_SetOffset(this.h, offset.cPointer())
}

func (this *QImage) TextKeys() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QImage_TextKeys(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImage) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImage_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImage) SetText(key string, value string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	value_Cstring := C.CString(value)
	defer C.free(unsafe.Pointer(value_Cstring))
	C.QImage_SetText(this.h, key_Cstring, C.ulong(len(key)), value_Cstring, C.ulong(len(value)))
}

func (this *QImage) PixelFormat() *QPixelFormat {
	ret := C.QImage_PixelFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixelFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixelFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QImage_ToPixelFormat(format uintptr) *QPixelFormat {
	ret := C.QImage_ToPixelFormat((C.uintptr_t)(format))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixelFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixelFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QImage_ToImageFormat(format QPixelFormat) uintptr {
	ret := C.QImage_ToImageFormat(format.cPointer())
	return (uintptr)(ret)
}

func (this *QImage) Copy1(rect *QRect) *QImage {
	ret := C.QImage_Copy1(this.h, rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) ConvertToFormat22(f uintptr, flags int) *QImage {
	ret := C.QImage_ConvertToFormat22(this.h, (C.uintptr_t)(f), (C.int)(flags))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) ConvertToFormat3(f uintptr, colorTable []uint, flags int) *QImage {
	// For the C ABI, malloc a C array of raw pointers
	colorTable_CArray := (*[0xffff]C.uint)(C.malloc(C.ulong(8 * len(colorTable))))
	defer C.free(unsafe.Pointer(colorTable_CArray))
	for i := range colorTable {
		colorTable_CArray[i] = (C.uint)(colorTable[i])
	}
	ret := C.QImage_ConvertToFormat3(this.h, (C.uintptr_t)(f), &colorTable_CArray[0], C.ulong(len(colorTable)), (C.int)(flags))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) ConvertTo2(f uintptr, flags int) {
	C.QImage_ConvertTo2(this.h, (C.uintptr_t)(f), (C.int)(flags))
}

func (this *QImage) CreateAlphaMask1(flags int) *QImage {
	ret := C.QImage_CreateAlphaMask1(this.h, (C.int)(flags))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) CreateHeuristicMask1(clipTight bool) *QImage {
	ret := C.QImage_CreateHeuristicMask1(this.h, (C.bool)(clipTight))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) CreateMaskFromColor2(color uint, mode uintptr) *QImage {
	ret := C.QImage_CreateMaskFromColor2(this.h, (C.uint)(color), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Scaled3(w int, h int, aspectMode uintptr) *QImage {
	ret := C.QImage_Scaled3(this.h, (C.int)(w), (C.int)(h), (C.uintptr_t)(aspectMode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Scaled4(w int, h int, aspectMode uintptr, mode uintptr) *QImage {
	ret := C.QImage_Scaled4(this.h, (C.int)(w), (C.int)(h), (C.uintptr_t)(aspectMode), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Scaled2(s *QSize, aspectMode uintptr) *QImage {
	ret := C.QImage_Scaled2(this.h, s.cPointer(), (C.uintptr_t)(aspectMode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Scaled32(s *QSize, aspectMode uintptr, mode uintptr) *QImage {
	ret := C.QImage_Scaled32(this.h, s.cPointer(), (C.uintptr_t)(aspectMode), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) ScaledToWidth2(w int, mode uintptr) *QImage {
	ret := C.QImage_ScaledToWidth2(this.h, (C.int)(w), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) ScaledToHeight2(h int, mode uintptr) *QImage {
	ret := C.QImage_ScaledToHeight2(this.h, (C.int)(h), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Transformed2(matrix *QMatrix, mode uintptr) *QImage {
	ret := C.QImage_Transformed2(this.h, matrix.cPointer(), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Transformed22(matrix *QTransform, mode uintptr) *QImage {
	ret := C.QImage_Transformed22(this.h, matrix.cPointer(), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Mirrored1(horizontally bool) *QImage {
	ret := C.QImage_Mirrored1(this.h, (C.bool)(horizontally))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Mirrored2(horizontally bool, vertically bool) *QImage {
	ret := C.QImage_Mirrored2(this.h, (C.bool)(horizontally), (C.bool)(vertically))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) InvertPixels1(param1 uintptr) {
	C.QImage_InvertPixels1(this.h, (C.uintptr_t)(param1))
}

func (this *QImage) Load2(fileName string, format string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QImage_Load2(this.h, fileName_Cstring, C.ulong(len(fileName)), format_Cstring)
	return (bool)(ret)
}

func (this *QImage) LoadFromData3(buf *byte, lenVal int, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QImage_LoadFromData3(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.int)(lenVal), format_Cstring)
	return (bool)(ret)
}

func (this *QImage) LoadFromData2(data *QByteArray, aformat string) bool {
	aformat_Cstring := C.CString(aformat)
	defer C.free(unsafe.Pointer(aformat_Cstring))
	ret := C.QImage_LoadFromData2(this.h, data.cPointer(), aformat_Cstring)
	return (bool)(ret)
}

func (this *QImage) Save2(fileName string, format string) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QImage_Save2(this.h, fileName_Cstring, C.ulong(len(fileName)), format_Cstring)
	return (bool)(ret)
}

func (this *QImage) Save3(fileName string, format string, quality int) bool {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QImage_Save3(this.h, fileName_Cstring, C.ulong(len(fileName)), format_Cstring, (C.int)(quality))
	return (bool)(ret)
}

func (this *QImage) Save22(device *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QImage_Save22(this.h, device.cPointer(), format_Cstring)
	return (bool)(ret)
}

func (this *QImage) Save32(device *QIODevice, format string, quality int) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QImage_Save32(this.h, device.cPointer(), format_Cstring, (C.int)(quality))
	return (bool)(ret)
}

func QImage_FromData3(data *byte, size int, format string) *QImage {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QImage_FromData3((*C.uchar)(unsafe.Pointer(data)), (C.int)(size), format_Cstring)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QImage_FromData2(data *QByteArray, format string) *QImage {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	ret := C.QImage_FromData2(data.cPointer(), format_Cstring)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QImage) Text1(key string) string {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QImage_Text1(this.h, key_Cstring, C.ulong(len(key)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QImage) Delete() {
	C.QImage_Delete(this.h)
}

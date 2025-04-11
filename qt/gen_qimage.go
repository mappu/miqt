package qt

/*

#include "gen_qimage.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QImage__InvertMode int

const (
	QImage__InvertRgb  QImage__InvertMode = 0
	QImage__InvertRgba QImage__InvertMode = 1
)

type QImage__Format int

const (
	QImage__Format_Invalid                QImage__Format = 0
	QImage__Format_Mono                   QImage__Format = 1
	QImage__Format_MonoLSB                QImage__Format = 2
	QImage__Format_Indexed8               QImage__Format = 3
	QImage__Format_RGB32                  QImage__Format = 4
	QImage__Format_ARGB32                 QImage__Format = 5
	QImage__Format_ARGB32_Premultiplied   QImage__Format = 6
	QImage__Format_RGB16                  QImage__Format = 7
	QImage__Format_ARGB8565_Premultiplied QImage__Format = 8
	QImage__Format_RGB666                 QImage__Format = 9
	QImage__Format_ARGB6666_Premultiplied QImage__Format = 10
	QImage__Format_RGB555                 QImage__Format = 11
	QImage__Format_ARGB8555_Premultiplied QImage__Format = 12
	QImage__Format_RGB888                 QImage__Format = 13
	QImage__Format_RGB444                 QImage__Format = 14
	QImage__Format_ARGB4444_Premultiplied QImage__Format = 15
	QImage__Format_RGBX8888               QImage__Format = 16
	QImage__Format_RGBA8888               QImage__Format = 17
	QImage__Format_RGBA8888_Premultiplied QImage__Format = 18
	QImage__Format_BGR30                  QImage__Format = 19
	QImage__Format_A2BGR30_Premultiplied  QImage__Format = 20
	QImage__Format_RGB30                  QImage__Format = 21
	QImage__Format_A2RGB30_Premultiplied  QImage__Format = 22
	QImage__Format_Alpha8                 QImage__Format = 23
	QImage__Format_Grayscale8             QImage__Format = 24
	QImage__Format_RGBX64                 QImage__Format = 25
	QImage__Format_RGBA64                 QImage__Format = 26
	QImage__Format_RGBA64_Premultiplied   QImage__Format = 27
	QImage__Format_Grayscale16            QImage__Format = 28
	QImage__Format_BGR888                 QImage__Format = 29
	QImage__NImageFormats                 QImage__Format = 30
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

func (this *QImage) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQImage constructs the type using only CGO pointers.
func newQImage(h *C.QImage) *QImage {
	if h == nil {
		return nil
	}
	var outptr_QPaintDevice *C.QPaintDevice = nil
	C.QImage_virtbase(h, &outptr_QPaintDevice)

	return &QImage{h: h,
		QPaintDevice: newQPaintDevice(outptr_QPaintDevice)}
}

// UnsafeNewQImage constructs the type using only unsafe pointers.
func UnsafeNewQImage(h unsafe.Pointer) *QImage {
	return newQImage((*C.QImage)(h))
}

// NewQImage constructs a new QImage object.
func NewQImage() *QImage {

	return newQImage(C.QImage_new())
}

// NewQImage2 constructs a new QImage object.
func NewQImage2(size *QSize, format QImage__Format) *QImage {

	return newQImage(C.QImage_new2(size.cPointer(), (C.int)(format)))
}

// NewQImage3 constructs a new QImage object.
func NewQImage3(width int, height int, format QImage__Format) *QImage {

	return newQImage(C.QImage_new3((C.int)(width), (C.int)(height), (C.int)(format)))
}

// NewQImage4 constructs a new QImage object.
func NewQImage4(data *byte, width int, height int, format QImage__Format) *QImage {

	return newQImage(C.QImage_new4((*C.uchar)(unsafe.Pointer(data)), (C.int)(width), (C.int)(height), (C.int)(format)))
}

// NewQImage5 constructs a new QImage object.
func NewQImage5(data *byte, width int, height int, format QImage__Format) *QImage {

	return newQImage(C.QImage_new5((*C.uchar)(unsafe.Pointer(data)), (C.int)(width), (C.int)(height), (C.int)(format)))
}

// NewQImage6 constructs a new QImage object.
func NewQImage6(data *byte, width int, height int, bytesPerLine int, format QImage__Format) *QImage {

	return newQImage(C.QImage_new6((*C.uchar)(unsafe.Pointer(data)), (C.int)(width), (C.int)(height), (C.int)(bytesPerLine), (C.int)(format)))
}

// NewQImage7 constructs a new QImage object.
func NewQImage7(data *byte, width int, height int, bytesPerLine int, format QImage__Format) *QImage {

	return newQImage(C.QImage_new7((*C.uchar)(unsafe.Pointer(data)), (C.int)(width), (C.int)(height), (C.int)(bytesPerLine), (C.int)(format)))
}

// NewQImage8 constructs a new QImage object.
func NewQImage8(fileName string) *QImage {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQImage(C.QImage_new8(fileName_ms))
}

// NewQImage9 constructs a new QImage object.
func NewQImage9(param1 *QImage) *QImage {

	return newQImage(C.QImage_new9(param1.cPointer()))
}

// NewQImage10 constructs a new QImage object.
func NewQImage10(fileName string, format string) *QImage {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))

	return newQImage(C.QImage_new10(fileName_ms, format_Cstring))
}

func (this *QImage) OperatorAssign(param1 *QImage) {
	C.QImage_operatorAssign(this.h, param1.cPointer())
}

func (this *QImage) Swap(other *QImage) {
	C.QImage_swap(this.h, other.cPointer())
}

func (this *QImage) IsNull() bool {
	return (bool)(C.QImage_isNull(this.h))
}

func (this *QImage) DevType() int {
	return (int)(C.QImage_devType(this.h))
}

func (this *QImage) OperatorEqual(param1 *QImage) bool {
	return (bool)(C.QImage_operatorEqual(this.h, param1.cPointer()))
}

func (this *QImage) OperatorNotEqual(param1 *QImage) bool {
	return (bool)(C.QImage_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QImage) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QImage_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Detach() {
	C.QImage_detach(this.h)
}

func (this *QImage) IsDetached() bool {
	return (bool)(C.QImage_isDetached(this.h))
}

func (this *QImage) Copy() *QImage {
	_goptr := newQImage(C.QImage_copy(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Copy2(x int, y int, w int, h int) *QImage {
	_goptr := newQImage(C.QImage_copy2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Format() QImage__Format {
	return (QImage__Format)(C.QImage_format(this.h))
}

func (this *QImage) ConvertToFormat(f QImage__Format) *QImage {
	_goptr := newQImage(C.QImage_convertToFormat(this.h, (C.int)(f)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) ConvertToFormat2(f QImage__Format, colorTable []uint) *QImage {
	colorTable_CArray := (*[0xffff]C.uint)(C.malloc(C.size_t(8 * len(colorTable))))
	defer C.free(unsafe.Pointer(colorTable_CArray))
	for i := range colorTable {
		colorTable_CArray[i] = (C.uint)(colorTable[i])
	}
	colorTable_ma := C.struct_miqt_array{len: C.size_t(len(colorTable)), data: unsafe.Pointer(colorTable_CArray)}
	_goptr := newQImage(C.QImage_convertToFormat2(this.h, (C.int)(f), colorTable_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) ReinterpretAsFormat(f QImage__Format) bool {
	return (bool)(C.QImage_reinterpretAsFormat(this.h, (C.int)(f)))
}

func (this *QImage) ConvertTo(f QImage__Format) {
	C.QImage_convertTo(this.h, (C.int)(f))
}

func (this *QImage) Width() int {
	return (int)(C.QImage_width(this.h))
}

func (this *QImage) Height() int {
	return (int)(C.QImage_height(this.h))
}

func (this *QImage) Size() *QSize {
	_goptr := newQSize(C.QImage_size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Rect() *QRect {
	_goptr := newQRect(C.QImage_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Depth() int {
	return (int)(C.QImage_depth(this.h))
}

func (this *QImage) ColorCount() int {
	return (int)(C.QImage_colorCount(this.h))
}

func (this *QImage) BitPlaneCount() int {
	return (int)(C.QImage_bitPlaneCount(this.h))
}

func (this *QImage) Color(i int) uint {
	return (uint)(C.QImage_color(this.h, (C.int)(i)))
}

func (this *QImage) SetColor(i int, c uint) {
	C.QImage_setColor(this.h, (C.int)(i), (C.uint)(c))
}

func (this *QImage) SetColorCount(colorCount int) {
	C.QImage_setColorCount(this.h, (C.int)(colorCount))
}

func (this *QImage) AllGray() bool {
	return (bool)(C.QImage_allGray(this.h))
}

func (this *QImage) IsGrayscale() bool {
	return (bool)(C.QImage_isGrayscale(this.h))
}

func (this *QImage) Bits() *byte {
	return (*byte)(unsafe.Pointer(C.QImage_bits(this.h)))
}

func (this *QImage) Bits2() *byte {
	return (*byte)(unsafe.Pointer(C.QImage_bits2(this.h)))
}

func (this *QImage) ConstBits() *byte {
	return (*byte)(unsafe.Pointer(C.QImage_constBits(this.h)))
}

func (this *QImage) ByteCount() int {
	return (int)(C.QImage_byteCount(this.h))
}

func (this *QImage) SizeInBytes() int64 {
	return (int64)(C.QImage_sizeInBytes(this.h))
}

func (this *QImage) ScanLine(param1 int) *byte {
	return (*byte)(unsafe.Pointer(C.QImage_scanLine(this.h, (C.int)(param1))))
}

func (this *QImage) ScanLineWithInt(param1 int) *byte {
	return (*byte)(unsafe.Pointer(C.QImage_scanLineWithInt(this.h, (C.int)(param1))))
}

func (this *QImage) ConstScanLine(param1 int) *byte {
	return (*byte)(unsafe.Pointer(C.QImage_constScanLine(this.h, (C.int)(param1))))
}

func (this *QImage) BytesPerLine() int {
	return (int)(C.QImage_bytesPerLine(this.h))
}

func (this *QImage) Valid(x int, y int) bool {
	return (bool)(C.QImage_valid(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QImage) ValidWithPt(pt *QPoint) bool {
	return (bool)(C.QImage_validWithPt(this.h, pt.cPointer()))
}

func (this *QImage) PixelIndex(x int, y int) int {
	return (int)(C.QImage_pixelIndex(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QImage) PixelIndexWithPt(pt *QPoint) int {
	return (int)(C.QImage_pixelIndexWithPt(this.h, pt.cPointer()))
}

func (this *QImage) Pixel(x int, y int) uint {
	return (uint)(C.QImage_pixel(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QImage) PixelWithPt(pt *QPoint) uint {
	return (uint)(C.QImage_pixelWithPt(this.h, pt.cPointer()))
}

func (this *QImage) SetPixel(x int, y int, index_or_rgb uint) {
	C.QImage_setPixel(this.h, (C.int)(x), (C.int)(y), (C.uint)(index_or_rgb))
}

func (this *QImage) SetPixel2(pt *QPoint, index_or_rgb uint) {
	C.QImage_setPixel2(this.h, pt.cPointer(), (C.uint)(index_or_rgb))
}

func (this *QImage) PixelColor(x int, y int) *QColor {
	_goptr := newQColor(C.QImage_pixelColor(this.h, (C.int)(x), (C.int)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) PixelColorWithPt(pt *QPoint) *QColor {
	_goptr := newQColor(C.QImage_pixelColorWithPt(this.h, pt.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) SetPixelColor(x int, y int, c *QColor) {
	C.QImage_setPixelColor(this.h, (C.int)(x), (C.int)(y), c.cPointer())
}

func (this *QImage) SetPixelColor2(pt *QPoint, c *QColor) {
	C.QImage_setPixelColor2(this.h, pt.cPointer(), c.cPointer())
}

func (this *QImage) ColorTable() []uint {
	var _ma C.struct_miqt_array = C.QImage_colorTable(this.h)
	_ret := make([]uint, int(_ma.len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (uint)(_outCast[i])
	}
	return _ret
}

func (this *QImage) SetColorTable(colors []uint) {
	colors_CArray := (*[0xffff]C.uint)(C.malloc(C.size_t(8 * len(colors))))
	defer C.free(unsafe.Pointer(colors_CArray))
	for i := range colors {
		colors_CArray[i] = (C.uint)(colors[i])
	}
	colors_ma := C.struct_miqt_array{len: C.size_t(len(colors)), data: unsafe.Pointer(colors_CArray)}
	C.QImage_setColorTable(this.h, colors_ma)
}

func (this *QImage) DevicePixelRatio() float64 {
	return (float64)(C.QImage_devicePixelRatio(this.h))
}

func (this *QImage) SetDevicePixelRatio(scaleFactor float64) {
	C.QImage_setDevicePixelRatio(this.h, (C.double)(scaleFactor))
}

func (this *QImage) Fill(pixel uint) {
	C.QImage_fill(this.h, (C.uint)(pixel))
}

func (this *QImage) FillWithColor(color *QColor) {
	C.QImage_fillWithColor(this.h, color.cPointer())
}

func (this *QImage) Fill2(color GlobalColor) {
	C.QImage_fill2(this.h, (C.int)(color))
}

func (this *QImage) HasAlphaChannel() bool {
	return (bool)(C.QImage_hasAlphaChannel(this.h))
}

func (this *QImage) SetAlphaChannel(alphaChannel *QImage) {
	C.QImage_setAlphaChannel(this.h, alphaChannel.cPointer())
}

func (this *QImage) AlphaChannel() *QImage {
	_goptr := newQImage(C.QImage_alphaChannel(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) CreateAlphaMask() *QImage {
	_goptr := newQImage(C.QImage_createAlphaMask(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) CreateHeuristicMask() *QImage {
	_goptr := newQImage(C.QImage_createHeuristicMask(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) CreateMaskFromColor(color uint) *QImage {
	_goptr := newQImage(C.QImage_createMaskFromColor(this.h, (C.uint)(color)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Scaled(w int, h int) *QImage {
	_goptr := newQImage(C.QImage_scaled(this.h, (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) ScaledWithQSize(s *QSize) *QImage {
	_goptr := newQImage(C.QImage_scaledWithQSize(this.h, s.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) ScaledToWidth(w int) *QImage {
	_goptr := newQImage(C.QImage_scaledToWidth(this.h, (C.int)(w)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) ScaledToHeight(h int) *QImage {
	_goptr := newQImage(C.QImage_scaledToHeight(this.h, (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Transformed(matrix *QMatrix) *QImage {
	_goptr := newQImage(C.QImage_transformed(this.h, matrix.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QImage_TrueMatrix(param1 *QMatrix, w int, h int) *QMatrix {
	_goptr := newQMatrix(C.QImage_trueMatrix(param1.cPointer(), (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) TransformedWithMatrix(matrix *QTransform) *QImage {
	_goptr := newQImage(C.QImage_transformedWithMatrix(this.h, matrix.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QImage_TrueMatrix2(param1 *QTransform, w int, h int) *QTransform {
	_goptr := newQTransform(C.QImage_trueMatrix2(param1.cPointer(), (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Mirrored() *QImage {
	_goptr := newQImage(C.QImage_mirrored(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) RgbSwapped() *QImage {
	_goptr := newQImage(C.QImage_rgbSwapped(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) InvertPixels() {
	C.QImage_invertPixels(this.h)
}

func (this *QImage) ColorSpace() *QColorSpace {
	_goptr := newQColorSpace(C.QImage_colorSpace(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) ConvertedToColorSpace(param1 *QColorSpace) *QImage {
	_goptr := newQImage(C.QImage_convertedToColorSpace(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) ConvertToColorSpace(param1 *QColorSpace) {
	C.QImage_convertToColorSpace(this.h, param1.cPointer())
}

func (this *QImage) SetColorSpace(colorSpace *QColorSpace) {
	C.QImage_setColorSpace(this.h, colorSpace.cPointer())
}

func (this *QImage) ApplyColorTransform(transform *QColorTransform) {
	C.QImage_applyColorTransform(this.h, transform.cPointer())
}

func (this *QImage) Load(device *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QImage_load(this.h, device.cPointer(), format_Cstring))
}

func (this *QImage) LoadWithFileName(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QImage_loadWithFileName(this.h, fileName_ms))
}

func (this *QImage) LoadFromData(buf *byte, lenVal int) bool {
	return (bool)(C.QImage_loadFromData(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.int)(lenVal)))
}

func (this *QImage) LoadFromDataWithData(data []byte) bool {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	return (bool)(C.QImage_loadFromDataWithData(this.h, data_alias))
}

func (this *QImage) Save(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QImage_save(this.h, fileName_ms))
}

func (this *QImage) SaveWithDevice(device *QIODevice) bool {
	return (bool)(C.QImage_saveWithDevice(this.h, device.cPointer()))
}

func QImage_FromData(data *byte, size int) *QImage {
	_goptr := newQImage(C.QImage_fromData((*C.uchar)(unsafe.Pointer(data)), (C.int)(size)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QImage_FromDataWithData(data []byte) *QImage {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	_goptr := newQImage(C.QImage_fromDataWithData(data_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) CacheKey() int64 {
	return (int64)(C.QImage_cacheKey(this.h))
}

func (this *QImage) PaintEngine() *QPaintEngine {
	return newQPaintEngine(C.QImage_paintEngine(this.h))
}

func (this *QImage) DotsPerMeterX() int {
	return (int)(C.QImage_dotsPerMeterX(this.h))
}

func (this *QImage) DotsPerMeterY() int {
	return (int)(C.QImage_dotsPerMeterY(this.h))
}

func (this *QImage) SetDotsPerMeterX(dotsPerMeterX int) {
	C.QImage_setDotsPerMeterX(this.h, (C.int)(dotsPerMeterX))
}

func (this *QImage) SetDotsPerMeterY(dotsPerMeterY int) {
	C.QImage_setDotsPerMeterY(this.h, (C.int)(dotsPerMeterY))
}

func (this *QImage) Offset() *QPoint {
	_goptr := newQPoint(C.QImage_offset(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) SetOffset(offset *QPoint) {
	C.QImage_setOffset(this.h, offset.cPointer())
}

func (this *QImage) TextKeys() []string {
	var _ma C.struct_miqt_array = C.QImage_textKeys(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QImage) Text() string {
	var _ms C.struct_miqt_string = C.QImage_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QImage) SetText(key string, value string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	value_ms := C.struct_miqt_string{}
	value_ms.data = C.CString(value)
	value_ms.len = C.size_t(len(value))
	defer C.free(unsafe.Pointer(value_ms.data))
	C.QImage_setText(this.h, key_ms, value_ms)
}

func (this *QImage) PixelFormat() *QPixelFormat {
	_goptr := newQPixelFormat(C.QImage_pixelFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QImage_ToPixelFormat(format QImage__Format) *QPixelFormat {
	_goptr := newQPixelFormat(C.QImage_toPixelFormat((C.int)(format)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QImage_ToImageFormat(format QPixelFormat) QImage__Format {
	return (QImage__Format)(C.QImage_toImageFormat(format.cPointer()))
}

func (this *QImage) CopyWithRect(rect *QRect) *QImage {
	_goptr := newQImage(C.QImage_copyWithRect(this.h, rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) ConvertToFormat3(f QImage__Format, flags ImageConversionFlag) *QImage {
	_goptr := newQImage(C.QImage_convertToFormat3(this.h, (C.int)(f), (C.int)(flags)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) ConvertToFormat4(f QImage__Format, colorTable []uint, flags ImageConversionFlag) *QImage {
	colorTable_CArray := (*[0xffff]C.uint)(C.malloc(C.size_t(8 * len(colorTable))))
	defer C.free(unsafe.Pointer(colorTable_CArray))
	for i := range colorTable {
		colorTable_CArray[i] = (C.uint)(colorTable[i])
	}
	colorTable_ma := C.struct_miqt_array{len: C.size_t(len(colorTable)), data: unsafe.Pointer(colorTable_CArray)}
	_goptr := newQImage(C.QImage_convertToFormat4(this.h, (C.int)(f), colorTable_ma, (C.int)(flags)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) ConvertTo2(f QImage__Format, flags ImageConversionFlag) {
	C.QImage_convertTo2(this.h, (C.int)(f), (C.int)(flags))
}

func (this *QImage) CreateAlphaMaskWithFlags(flags ImageConversionFlag) *QImage {
	_goptr := newQImage(C.QImage_createAlphaMaskWithFlags(this.h, (C.int)(flags)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) CreateHeuristicMaskWithClipTight(clipTight bool) *QImage {
	_goptr := newQImage(C.QImage_createHeuristicMaskWithClipTight(this.h, (C.bool)(clipTight)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) CreateMaskFromColor2(color uint, mode MaskMode) *QImage {
	_goptr := newQImage(C.QImage_createMaskFromColor2(this.h, (C.uint)(color), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Scaled2(w int, h int, aspectMode AspectRatioMode) *QImage {
	_goptr := newQImage(C.QImage_scaled2(this.h, (C.int)(w), (C.int)(h), (C.int)(aspectMode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Scaled3(w int, h int, aspectMode AspectRatioMode, mode TransformationMode) *QImage {
	_goptr := newQImage(C.QImage_scaled3(this.h, (C.int)(w), (C.int)(h), (C.int)(aspectMode), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Scaled4(s *QSize, aspectMode AspectRatioMode) *QImage {
	_goptr := newQImage(C.QImage_scaled4(this.h, s.cPointer(), (C.int)(aspectMode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Scaled5(s *QSize, aspectMode AspectRatioMode, mode TransformationMode) *QImage {
	_goptr := newQImage(C.QImage_scaled5(this.h, s.cPointer(), (C.int)(aspectMode), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) ScaledToWidth2(w int, mode TransformationMode) *QImage {
	_goptr := newQImage(C.QImage_scaledToWidth2(this.h, (C.int)(w), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) ScaledToHeight2(h int, mode TransformationMode) *QImage {
	_goptr := newQImage(C.QImage_scaledToHeight2(this.h, (C.int)(h), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Transformed2(matrix *QMatrix, mode TransformationMode) *QImage {
	_goptr := newQImage(C.QImage_transformed2(this.h, matrix.cPointer(), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Transformed3(matrix *QTransform, mode TransformationMode) *QImage {
	_goptr := newQImage(C.QImage_transformed3(this.h, matrix.cPointer(), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) MirroredWithHorizontally(horizontally bool) *QImage {
	_goptr := newQImage(C.QImage_mirroredWithHorizontally(this.h, (C.bool)(horizontally)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) Mirrored2(horizontally bool, vertically bool) *QImage {
	_goptr := newQImage(C.QImage_mirrored2(this.h, (C.bool)(horizontally), (C.bool)(vertically)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) InvertPixelsWithQImageInvertMode(param1 QImage__InvertMode) {
	C.QImage_invertPixelsWithQImageInvertMode(this.h, (C.int)(param1))
}

func (this *QImage) Load2(fileName string, format string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QImage_load2(this.h, fileName_ms, format_Cstring))
}

func (this *QImage) LoadFromData2(buf *byte, lenVal int, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QImage_loadFromData2(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.int)(lenVal), format_Cstring))
}

func (this *QImage) LoadFromData3(data []byte, aformat string) bool {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	aformat_Cstring := C.CString(aformat)
	defer C.free(unsafe.Pointer(aformat_Cstring))
	return (bool)(C.QImage_loadFromData3(this.h, data_alias, aformat_Cstring))
}

func (this *QImage) Save2(fileName string, format string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QImage_save2(this.h, fileName_ms, format_Cstring))
}

func (this *QImage) Save3(fileName string, format string, quality int) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QImage_save3(this.h, fileName_ms, format_Cstring, (C.int)(quality)))
}

func (this *QImage) Save4(device *QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QImage_save4(this.h, device.cPointer(), format_Cstring))
}

func (this *QImage) Save5(device *QIODevice, format string, quality int) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QImage_save5(this.h, device.cPointer(), format_Cstring, (C.int)(quality)))
}

func QImage_FromData2(data *byte, size int, format string) *QImage {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	_goptr := newQImage(C.QImage_fromData2((*C.uchar)(unsafe.Pointer(data)), (C.int)(size), format_Cstring))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QImage_FromData3(data []byte, format string) *QImage {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	_goptr := newQImage(C.QImage_fromData3(data_alias, format_Cstring))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QImage) TextWithKey(key string) string {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	var _ms C.struct_miqt_string = C.QImage_textWithKey(this.h, key_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// MirroredHelper can only be called from a QImage that was directly constructed.
func (this *QImage) MirroredHelper(horizontal bool, vertical bool) QImage {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQImage(C.QImage_protectedbase_mirroredHelper(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(horizontal), (C.bool)(vertical)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// RgbSwappedHelper can only be called from a QImage that was directly constructed.
func (this *QImage) RgbSwappedHelper() QImage {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQImage(C.QImage_protectedbase_rgbSwappedHelper(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// MirroredInplace can only be called from a QImage that was directly constructed.
func (this *QImage) MirroredInplace(horizontal bool, vertical bool) {

	var _dynamic_cast_ok C.bool = false
	C.QImage_protectedbase_mirroredInplace(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(horizontal), (C.bool)(vertical))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RgbSwappedInplace can only be called from a QImage that was directly constructed.
func (this *QImage) RgbSwappedInplace() {

	var _dynamic_cast_ok C.bool = false
	C.QImage_protectedbase_rgbSwappedInplace(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ConvertToFormatHelper can only be called from a QImage that was directly constructed.
func (this *QImage) ConvertToFormatHelper(format QImage__Format, flags ImageConversionFlag) QImage {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQImage(C.QImage_protectedbase_convertToFormatHelper(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(format), (C.int)(flags)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// ConvertToFormatInplace can only be called from a QImage that was directly constructed.
func (this *QImage) ConvertToFormatInplace(format QImage__Format, flags ImageConversionFlag) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QImage_protectedbase_convertToFormatInplace(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(format), (C.int)(flags)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SmoothScaled can only be called from a QImage that was directly constructed.
func (this *QImage) SmoothScaled(w int, h int) QImage {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQImage(C.QImage_protectedbase_smoothScaled(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QImage) callVirtualBase_DevType() int {

	return (int)(C.QImage_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QImage) OnDevType(slot func(super func() int) int) {
	ok := C.QImage_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImage_devType
func miqt_exec_callback_QImage_devType(self *C.QImage, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QImage{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QImage) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QImage_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QImage) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QImage_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImage_paintEngine
func miqt_exec_callback_QImage_paintEngine(self *C.QImage, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QImage{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QImage) callVirtualBase_Metric(metric QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QImage_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(metric)))

}
func (this *QImage) OnMetric(slot func(super func(metric QPaintDevice__PaintDeviceMetric) int, metric QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QImage_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImage_metric
func miqt_exec_callback_QImage_metric(self *C.QImage, cb C.intptr_t, metric C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(metric QPaintDevice__PaintDeviceMetric) int, metric QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(metric)

	virtualReturn := gofunc((&QImage{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QImage) callVirtualBase_InitPainter(painter *QPainter) {

	C.QImage_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QImage) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QImage_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImage_initPainter
func miqt_exec_callback_QImage_initPainter(self *C.QImage, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QImage{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QImage) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QImage_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QImage) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QImage_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImage_redirected
func miqt_exec_callback_QImage_redirected(self *C.QImage, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QImage{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QImage) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QImage_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QImage) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QImage_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QImage_sharedPainter
func miqt_exec_callback_QImage_sharedPainter(self *C.QImage, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QImage{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QImage) Delete() {
	C.QImage_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QImage) GoGC() {
	runtime.SetFinalizer(this, func(this *QImage) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt

/*

#include "gen_qpixmap.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPixmap struct {
	h  *C.QPixmap
	gc *[1]unsafe.Pointer
	*QPaintDevice
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPixmap) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QPaintDevice.miqtSetGC(gc)
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
func NewQPixmap3(param1 QSize) *QPixmap {

	return newQPixmap(C.QPixmap_new3(libmiqt.ValueCast[C.struct_miqt_qsize](param1)))
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
	defer runtime.KeepAlive(param1)

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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QPixmap_operatorAssign(this.h, param1.cPointer())
}

func (this *QPixmap) Swap(other *QPixmap) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPixmap_swap(this.h, other.cPointer())
}

func (this *QPixmap) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QPixmap_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPixmap_isNull(this.h))
}

func (this *QPixmap) DevType() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPixmap_devType(this.h))
}

func (this *QPixmap) Width() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPixmap_width(this.h))
}

func (this *QPixmap) Height() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPixmap_height(this.h))
}

func (this *QPixmap) Size() QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QSize](C.QPixmap_size(this.h))
}

func (this *QPixmap) Rect() QRect {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QRect](C.QPixmap_rect(this.h))
}

func (this *QPixmap) Depth() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPixmap_depth(this.h))
}

func QPixmap_DefaultDepth() int {
	return (int)(C.QPixmap_defaultDepth())
}

func (this *QPixmap) Fill() {
	defer runtime.KeepAlive(this)
	C.QPixmap_fill(this.h)
}

func (this *QPixmap) Fill2(device *QPaintDevice, ofs QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(device)
	C.QPixmap_fill2(this.h, device.cPointer(), libmiqt.ValueCast[C.struct_miqt_qpoint](ofs))
}

func (this *QPixmap) Fill3(device *QPaintDevice, xofs int, yofs int) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(device)
	C.QPixmap_fill3(this.h, device.cPointer(), (C.int)(xofs), (C.int)(yofs))
}

func (this *QPixmap) Mask() *QBitmap {
	defer runtime.KeepAlive(this)
	_goptr := newQBitmap(C.QPixmap_mask(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) SetMask(mask *QBitmap) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(mask)
	C.QPixmap_setMask(this.h, mask.cPointer())
}

func (this *QPixmap) DevicePixelRatio() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QPixmap_devicePixelRatio(this.h))
}

func (this *QPixmap) SetDevicePixelRatio(scaleFactor float64) {
	defer runtime.KeepAlive(this)
	C.QPixmap_setDevicePixelRatio(this.h, (C.double)(scaleFactor))
}

func (this *QPixmap) HasAlpha() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPixmap_hasAlpha(this.h))
}

func (this *QPixmap) HasAlphaChannel() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPixmap_hasAlphaChannel(this.h))
}

func (this *QPixmap) CreateHeuristicMask() *QBitmap {
	defer runtime.KeepAlive(this)
	_goptr := newQBitmap(C.QPixmap_createHeuristicMask(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) CreateMaskFromColor(maskColor QColor) *QBitmap {
	defer runtime.KeepAlive(this)
	_goptr := newQBitmap(C.QPixmap_createMaskFromColor(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](maskColor)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWindow(param1 uintptr) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_grabWindow((C.uintptr_t)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWidget(widget *QObject, rect QRect) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_grabWidget(widget.cPointer(), libmiqt.ValueCast[C.struct_miqt_qrect](rect)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWidgetWithWidget(widget *QObject) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_grabWidgetWithWidget(widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled(w int, h int) *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_scaled(this.h, (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledWithQSize(s QSize) *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_scaledWithQSize(this.h, libmiqt.ValueCast[C.struct_miqt_qsize](s)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledToWidth(w int) *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_scaledToWidth(this.h, (C.int)(w)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledToHeight(h int) *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_scaledToHeight(this.h, (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Transformed(param1 *QMatrix) *QPixmap {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	_goptr := newQPixmap(C.QPixmap_transformed(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_TrueMatrix(m *QMatrix, w int, h int) *QMatrix {
	defer runtime.KeepAlive(m)
	_goptr := newQMatrix(C.QPixmap_trueMatrix(m.cPointer(), (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) TransformedWithQTransform(param1 *QTransform) *QPixmap {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	_goptr := newQPixmap(C.QPixmap_transformedWithQTransform(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_TrueMatrix2(m *QTransform, w int, h int) *QTransform {
	defer runtime.KeepAlive(m)
	_goptr := newQTransform(C.QPixmap_trueMatrix2(m.cPointer(), (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ToImage() *QImage {
	defer runtime.KeepAlive(this)
	_goptr := newQImage(C.QPixmap_toImage(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_FromImage(image *QImage) *QPixmap {
	defer runtime.KeepAlive(image)
	_goptr := newQPixmap(C.QPixmap_fromImage(image.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_FromImageReader(imageReader *QImageReader) *QPixmap {
	defer runtime.KeepAlive(imageReader)
	_goptr := newQPixmap(C.QPixmap_fromImageReader(imageReader.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Load(fileName string) bool {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QPixmap_load(this.h, fileName_ms))
}

func (this *QPixmap) LoadFromData(buf *byte, lenVal uint) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPixmap_loadFromData(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.uint)(lenVal)))
}

func (this *QPixmap) LoadFromDataWithData(data []byte) bool {
	defer runtime.KeepAlive(this)
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
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QPixmap_save(this.h, fileName_ms))
}

func (this *QPixmap) SaveWithDevice(device *QIODevice) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPixmap_saveWithDevice(this.h, device.cPointer()))
}

func (this *QPixmap) ConvertFromImage(img *QImage) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(img)
	return (bool)(C.QPixmap_convertFromImage(this.h, img.cPointer()))
}

func (this *QPixmap) Copy(x int, y int, width int, height int) *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_copy(this.h, (C.int)(x), (C.int)(y), (C.int)(width), (C.int)(height)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Copy2() *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_copy2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scroll(dx int, dy int, x int, y int, width int, height int) {
	defer runtime.KeepAlive(this)
	C.QPixmap_scroll(this.h, (C.int)(dx), (C.int)(dy), (C.int)(x), (C.int)(y), (C.int)(width), (C.int)(height))
}

func (this *QPixmap) Scroll2(dx int, dy int, rect QRect) {
	defer runtime.KeepAlive(this)
	C.QPixmap_scroll2(this.h, (C.int)(dx), (C.int)(dy), libmiqt.ValueCast[C.struct_miqt_qrect](rect))
}

func (this *QPixmap) CacheKey() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QPixmap_cacheKey(this.h))
}

func (this *QPixmap) IsDetached() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPixmap_isDetached(this.h))
}

func (this *QPixmap) Detach() {
	defer runtime.KeepAlive(this)
	C.QPixmap_detach(this.h)
}

func (this *QPixmap) IsQBitmap() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPixmap_isQBitmap(this.h))
}

func (this *QPixmap) PaintEngine() *QPaintEngine {
	defer runtime.KeepAlive(this)
	return newQPaintEngine(C.QPixmap_paintEngine(this.h))
}

func (this *QPixmap) OperatorNot() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPixmap_operatorNot(this.h))
}

func (this *QPixmap) FillWithFillColor(fillColor QColor) {
	defer runtime.KeepAlive(this)
	C.QPixmap_fillWithFillColor(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](fillColor))
}

func (this *QPixmap) CreateHeuristicMaskWithClipTight(clipTight bool) *QBitmap {
	defer runtime.KeepAlive(this)
	_goptr := newQBitmap(C.QPixmap_createHeuristicMaskWithClipTight(this.h, (C.bool)(clipTight)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) CreateMaskFromColor2(maskColor QColor, mode MaskMode) *QBitmap {
	defer runtime.KeepAlive(this)
	_goptr := newQBitmap(C.QPixmap_createMaskFromColor2(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](maskColor), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWindow2(param1 uintptr, x int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_grabWindow2((C.uintptr_t)(param1), (C.int)(x)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWindow3(param1 uintptr, x int, y int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_grabWindow3((C.uintptr_t)(param1), (C.int)(x), (C.int)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWindow4(param1 uintptr, x int, y int, w int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_grabWindow4((C.uintptr_t)(param1), (C.int)(x), (C.int)(y), (C.int)(w)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWindow5(param1 uintptr, x int, y int, w int, h int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_grabWindow5((C.uintptr_t)(param1), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWidget2(widget *QObject, x int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_grabWidget2(widget.cPointer(), (C.int)(x)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWidget3(widget *QObject, x int, y int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_grabWidget3(widget.cPointer(), (C.int)(x), (C.int)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWidget4(widget *QObject, x int, y int, w int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_grabWidget4(widget.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_GrabWidget5(widget *QObject, x int, y int, w int, h int) *QPixmap {
	_goptr := newQPixmap(C.QPixmap_grabWidget5(widget.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled2(w int, h int, aspectMode AspectRatioMode) *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_scaled2(this.h, (C.int)(w), (C.int)(h), (C.int)(aspectMode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled3(w int, h int, aspectMode AspectRatioMode, mode TransformationMode) *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_scaled3(this.h, (C.int)(w), (C.int)(h), (C.int)(aspectMode), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled4(s QSize, aspectMode AspectRatioMode) *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_scaled4(this.h, libmiqt.ValueCast[C.struct_miqt_qsize](s), (C.int)(aspectMode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scaled5(s QSize, aspectMode AspectRatioMode, mode TransformationMode) *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_scaled5(this.h, libmiqt.ValueCast[C.struct_miqt_qsize](s), (C.int)(aspectMode), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledToWidth2(w int, mode TransformationMode) *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_scaledToWidth2(this.h, (C.int)(w), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) ScaledToHeight2(h int, mode TransformationMode) *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_scaledToHeight2(this.h, (C.int)(h), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Transformed2(param1 *QMatrix, mode TransformationMode) *QPixmap {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	_goptr := newQPixmap(C.QPixmap_transformed2(this.h, param1.cPointer(), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Transformed3(param1 *QTransform, mode TransformationMode) *QPixmap {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	_goptr := newQPixmap(C.QPixmap_transformed3(this.h, param1.cPointer(), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_FromImage2(image *QImage, flags ImageConversionFlag) *QPixmap {
	defer runtime.KeepAlive(image)
	_goptr := newQPixmap(C.QPixmap_fromImage2(image.cPointer(), (C.int)(flags)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmap_FromImageReader2(imageReader *QImageReader, flags ImageConversionFlag) *QPixmap {
	defer runtime.KeepAlive(imageReader)
	_goptr := newQPixmap(C.QPixmap_fromImageReader2(imageReader.cPointer(), (C.int)(flags)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Load2(fileName string, format string) bool {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_load2(this.h, fileName_ms, format_Cstring))
}

func (this *QPixmap) Load3(fileName string, format string, flags ImageConversionFlag) bool {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_load3(this.h, fileName_ms, format_Cstring, (C.int)(flags)))
}

func (this *QPixmap) LoadFromData2(buf *byte, lenVal uint, format string) bool {
	defer runtime.KeepAlive(this)
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_loadFromData2(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.uint)(lenVal), format_Cstring))
}

func (this *QPixmap) LoadFromData3(buf *byte, lenVal uint, format string, flags ImageConversionFlag) bool {
	defer runtime.KeepAlive(this)
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_loadFromData3(this.h, (*C.uchar)(unsafe.Pointer(buf)), (C.uint)(lenVal), format_Cstring, (C.int)(flags)))
}

func (this *QPixmap) LoadFromData4(data []byte, format string) bool {
	defer runtime.KeepAlive(this)
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_loadFromData4(this.h, data_alias, format_Cstring))
}

func (this *QPixmap) LoadFromData5(data []byte, format string, flags ImageConversionFlag) bool {
	defer runtime.KeepAlive(this)
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_loadFromData5(this.h, data_alias, format_Cstring, (C.int)(flags)))
}

func (this *QPixmap) Save2(fileName string, format string) bool {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_save2(this.h, fileName_ms, format_Cstring))
}

func (this *QPixmap) Save3(fileName string, format string, quality int) bool {
	defer runtime.KeepAlive(this)
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_save3(this.h, fileName_ms, format_Cstring, (C.int)(quality)))
}

func (this *QPixmap) Save4(device *QIODevice, format string) bool {
	defer runtime.KeepAlive(this)
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_save4(this.h, device.cPointer(), format_Cstring))
}

func (this *QPixmap) Save5(device *QIODevice, format string, quality int) bool {
	defer runtime.KeepAlive(this)
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QPixmap_save5(this.h, device.cPointer(), format_Cstring, (C.int)(quality)))
}

func (this *QPixmap) ConvertFromImage2(img *QImage, flags ImageConversionFlag) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(img)
	return (bool)(C.QPixmap_convertFromImage2(this.h, img.cPointer(), (C.int)(flags)))
}

func (this *QPixmap) CopyWithRect(rect QRect) *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QPixmap_copyWithRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrect](rect)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPixmap) Scroll3(dx int, dy int, x int, y int, width int, height int, exposed *QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(exposed)
	C.QPixmap_scroll3(this.h, (C.int)(dx), (C.int)(dy), (C.int)(x), (C.int)(y), (C.int)(width), (C.int)(height), exposed.cPointer())
}

func (this *QPixmap) Scroll4(dx int, dy int, rect QRect, exposed *QRegion) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(exposed)
	C.QPixmap_scroll4(this.h, (C.int)(dx), (C.int)(dy), libmiqt.ValueCast[C.struct_miqt_qrect](rect), exposed.cPointer())
}

func (this *QPixmap) callVirtualBase_DevType() int {
	defer runtime.KeepAlive(this)

	return (int)(C.QPixmap_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QPixmap) OnDevType(slot func(super func() int) int) {
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
	defer runtime.KeepAlive(this)

	return newQPaintEngine(C.QPixmap_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QPixmap) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
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
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

func (this *QPixmap) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {
	defer runtime.KeepAlive(this)

	return (int)(C.QPixmap_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPixmap) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(painter)

	C.QPixmap_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QPixmap) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
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
	defer runtime.KeepAlive(this)

	return newQPaintDevice(C.QPixmap_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QPixmap) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
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
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

func (this *QPixmap) callVirtualBase_SharedPainter() *QPainter {
	defer runtime.KeepAlive(this)

	return newQPainter(C.QPixmap_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QPixmap) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
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
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QPixmap) Delete() {
	C.QPixmap_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPixmap) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPixmap_delete((*C.QPixmap)(gc[0]))
	})
	this.miqtSetGC(gc)
}

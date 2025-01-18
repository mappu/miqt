package multimedia

/*

#include "gen_qvideoframe.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QVideoFrame__FieldType int

const (
	QVideoFrame__ProgressiveFrame QVideoFrame__FieldType = 0
	QVideoFrame__TopField         QVideoFrame__FieldType = 1
	QVideoFrame__BottomField      QVideoFrame__FieldType = 2
	QVideoFrame__InterlacedFrame  QVideoFrame__FieldType = 3
)

type QVideoFrame__PixelFormat int

const (
	QVideoFrame__Format_Invalid                QVideoFrame__PixelFormat = 0
	QVideoFrame__Format_ARGB32                 QVideoFrame__PixelFormat = 1
	QVideoFrame__Format_ARGB32_Premultiplied   QVideoFrame__PixelFormat = 2
	QVideoFrame__Format_RGB32                  QVideoFrame__PixelFormat = 3
	QVideoFrame__Format_RGB24                  QVideoFrame__PixelFormat = 4
	QVideoFrame__Format_RGB565                 QVideoFrame__PixelFormat = 5
	QVideoFrame__Format_RGB555                 QVideoFrame__PixelFormat = 6
	QVideoFrame__Format_ARGB8565_Premultiplied QVideoFrame__PixelFormat = 7
	QVideoFrame__Format_BGRA32                 QVideoFrame__PixelFormat = 8
	QVideoFrame__Format_BGRA32_Premultiplied   QVideoFrame__PixelFormat = 9
	QVideoFrame__Format_BGR32                  QVideoFrame__PixelFormat = 10
	QVideoFrame__Format_BGR24                  QVideoFrame__PixelFormat = 11
	QVideoFrame__Format_BGR565                 QVideoFrame__PixelFormat = 12
	QVideoFrame__Format_BGR555                 QVideoFrame__PixelFormat = 13
	QVideoFrame__Format_BGRA5658_Premultiplied QVideoFrame__PixelFormat = 14
	QVideoFrame__Format_AYUV444                QVideoFrame__PixelFormat = 15
	QVideoFrame__Format_AYUV444_Premultiplied  QVideoFrame__PixelFormat = 16
	QVideoFrame__Format_YUV444                 QVideoFrame__PixelFormat = 17
	QVideoFrame__Format_YUV420P                QVideoFrame__PixelFormat = 18
	QVideoFrame__Format_YV12                   QVideoFrame__PixelFormat = 19
	QVideoFrame__Format_UYVY                   QVideoFrame__PixelFormat = 20
	QVideoFrame__Format_YUYV                   QVideoFrame__PixelFormat = 21
	QVideoFrame__Format_NV12                   QVideoFrame__PixelFormat = 22
	QVideoFrame__Format_NV21                   QVideoFrame__PixelFormat = 23
	QVideoFrame__Format_IMC1                   QVideoFrame__PixelFormat = 24
	QVideoFrame__Format_IMC2                   QVideoFrame__PixelFormat = 25
	QVideoFrame__Format_IMC3                   QVideoFrame__PixelFormat = 26
	QVideoFrame__Format_IMC4                   QVideoFrame__PixelFormat = 27
	QVideoFrame__Format_Y8                     QVideoFrame__PixelFormat = 28
	QVideoFrame__Format_Y16                    QVideoFrame__PixelFormat = 29
	QVideoFrame__Format_Jpeg                   QVideoFrame__PixelFormat = 30
	QVideoFrame__Format_CameraRaw              QVideoFrame__PixelFormat = 31
	QVideoFrame__Format_AdobeDng               QVideoFrame__PixelFormat = 32
	QVideoFrame__Format_ABGR32                 QVideoFrame__PixelFormat = 33
	QVideoFrame__Format_YUV422P                QVideoFrame__PixelFormat = 34
	QVideoFrame__NPixelFormats                 QVideoFrame__PixelFormat = 35
	QVideoFrame__Format_User                   QVideoFrame__PixelFormat = 1000
)

type QVideoFrame struct {
	h          *C.QVideoFrame
	isSubclass bool
}

func (this *QVideoFrame) cPointer() *C.QVideoFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoFrame) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoFrame constructs the type using only CGO pointers.
func newQVideoFrame(h *C.QVideoFrame) *QVideoFrame {
	if h == nil {
		return nil
	}

	return &QVideoFrame{h: h}
}

// UnsafeNewQVideoFrame constructs the type using only unsafe pointers.
func UnsafeNewQVideoFrame(h unsafe.Pointer) *QVideoFrame {
	return newQVideoFrame((*C.QVideoFrame)(h))
}

// NewQVideoFrame constructs a new QVideoFrame object.
func NewQVideoFrame() *QVideoFrame {

	ret := newQVideoFrame(C.QVideoFrame_new())
	ret.isSubclass = true
	return ret
}

// NewQVideoFrame2 constructs a new QVideoFrame object.
func NewQVideoFrame2(bytes int, size *qt.QSize, bytesPerLine int, format QVideoFrame__PixelFormat) *QVideoFrame {

	ret := newQVideoFrame(C.QVideoFrame_new2((C.int)(bytes), (*C.QSize)(size.UnsafePointer()), (C.int)(bytesPerLine), (C.int)(format)))
	ret.isSubclass = true
	return ret
}

// NewQVideoFrame3 constructs a new QVideoFrame object.
func NewQVideoFrame3(image *qt.QImage) *QVideoFrame {

	ret := newQVideoFrame(C.QVideoFrame_new3((*C.QImage)(image.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

// NewQVideoFrame4 constructs a new QVideoFrame object.
func NewQVideoFrame4(other *QVideoFrame) *QVideoFrame {

	ret := newQVideoFrame(C.QVideoFrame_new4(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QVideoFrame) OperatorAssign(other *QVideoFrame) {
	C.QVideoFrame_OperatorAssign(this.h, other.cPointer())
}

func (this *QVideoFrame) OperatorEqual(other *QVideoFrame) bool {
	return (bool)(C.QVideoFrame_OperatorEqual(this.h, other.cPointer()))
}

func (this *QVideoFrame) OperatorNotEqual(other *QVideoFrame) bool {
	return (bool)(C.QVideoFrame_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QVideoFrame) IsValid() bool {
	return (bool)(C.QVideoFrame_IsValid(this.h))
}

func (this *QVideoFrame) PixelFormat() QVideoFrame__PixelFormat {
	return (QVideoFrame__PixelFormat)(C.QVideoFrame_PixelFormat(this.h))
}

func (this *QVideoFrame) HandleType() QAbstractVideoBuffer__HandleType {
	return (QAbstractVideoBuffer__HandleType)(C.QVideoFrame_HandleType(this.h))
}

func (this *QVideoFrame) Size() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QVideoFrame_Size(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoFrame) Width() int {
	return (int)(C.QVideoFrame_Width(this.h))
}

func (this *QVideoFrame) Height() int {
	return (int)(C.QVideoFrame_Height(this.h))
}

func (this *QVideoFrame) FieldType() QVideoFrame__FieldType {
	return (QVideoFrame__FieldType)(C.QVideoFrame_FieldType(this.h))
}

func (this *QVideoFrame) SetFieldType(fieldType QVideoFrame__FieldType) {
	C.QVideoFrame_SetFieldType(this.h, (C.int)(fieldType))
}

func (this *QVideoFrame) IsMapped() bool {
	return (bool)(C.QVideoFrame_IsMapped(this.h))
}

func (this *QVideoFrame) IsReadable() bool {
	return (bool)(C.QVideoFrame_IsReadable(this.h))
}

func (this *QVideoFrame) IsWritable() bool {
	return (bool)(C.QVideoFrame_IsWritable(this.h))
}

func (this *QVideoFrame) MapMode() QAbstractVideoBuffer__MapMode {
	return (QAbstractVideoBuffer__MapMode)(C.QVideoFrame_MapMode(this.h))
}

func (this *QVideoFrame) Map(mode QAbstractVideoBuffer__MapMode) bool {
	return (bool)(C.QVideoFrame_Map(this.h, (C.int)(mode)))
}

func (this *QVideoFrame) Unmap() {
	C.QVideoFrame_Unmap(this.h)
}

func (this *QVideoFrame) BytesPerLine() int {
	return (int)(C.QVideoFrame_BytesPerLine(this.h))
}

func (this *QVideoFrame) BytesPerLineWithPlane(plane int) int {
	return (int)(C.QVideoFrame_BytesPerLineWithPlane(this.h, (C.int)(plane)))
}

func (this *QVideoFrame) Bits() *byte {
	return (*byte)(unsafe.Pointer(C.QVideoFrame_Bits(this.h)))
}

func (this *QVideoFrame) BitsWithPlane(plane int) *byte {
	return (*byte)(unsafe.Pointer(C.QVideoFrame_BitsWithPlane(this.h, (C.int)(plane))))
}

func (this *QVideoFrame) Bits2() *byte {
	return (*byte)(unsafe.Pointer(C.QVideoFrame_Bits2(this.h)))
}

func (this *QVideoFrame) Bits3(plane int) *byte {
	return (*byte)(unsafe.Pointer(C.QVideoFrame_Bits3(this.h, (C.int)(plane))))
}

func (this *QVideoFrame) MappedBytes() int {
	return (int)(C.QVideoFrame_MappedBytes(this.h))
}

func (this *QVideoFrame) PlaneCount() int {
	return (int)(C.QVideoFrame_PlaneCount(this.h))
}

func (this *QVideoFrame) Handle() *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QVideoFrame_Handle(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoFrame) StartTime() int64 {
	return (int64)(C.QVideoFrame_StartTime(this.h))
}

func (this *QVideoFrame) SetStartTime(time int64) {
	C.QVideoFrame_SetStartTime(this.h, (C.longlong)(time))
}

func (this *QVideoFrame) EndTime() int64 {
	return (int64)(C.QVideoFrame_EndTime(this.h))
}

func (this *QVideoFrame) SetEndTime(time int64) {
	C.QVideoFrame_SetEndTime(this.h, (C.longlong)(time))
}

func (this *QVideoFrame) AvailableMetaData() map[string]qt.QVariant {
	var _mm C.struct_miqt_map = C.QVideoFrame_AvailableMetaData(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QVideoFrame) MetaData(key string) *qt.QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QVideoFrame_MetaData(this.h, key_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoFrame) SetMetaData(key string, value *qt.QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QVideoFrame_SetMetaData(this.h, key_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QVideoFrame) Image() *qt.QImage {
	_goptr := qt.UnsafeNewQImage(unsafe.Pointer(C.QVideoFrame_Image(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QVideoFrame_PixelFormatFromImageFormat(format qt.QImage__Format) QVideoFrame__PixelFormat {
	return (QVideoFrame__PixelFormat)(C.QVideoFrame_PixelFormatFromImageFormat((C.int)(format)))
}

func QVideoFrame_ImageFormatFromPixelFormat(format QVideoFrame__PixelFormat) qt.QImage__Format {
	return (qt.QImage__Format)(C.QVideoFrame_ImageFormatFromPixelFormat((C.int)(format)))
}

// Delete this object from C++ memory.
func (this *QVideoFrame) Delete() {
	C.QVideoFrame_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoFrame) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoFrame) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

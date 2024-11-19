package multimedia

/*

#include "gen_qmediaformat.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QMediaFormat__FileFormat int

const (
	QMediaFormat__FileFormat__UnspecifiedFormat QMediaFormat__FileFormat = -1
	QMediaFormat__FileFormat__WMV               QMediaFormat__FileFormat = 0
	QMediaFormat__FileFormat__AVI               QMediaFormat__FileFormat = 1
	QMediaFormat__FileFormat__Matroska          QMediaFormat__FileFormat = 2
	QMediaFormat__FileFormat__MPEG4             QMediaFormat__FileFormat = 3
	QMediaFormat__FileFormat__Ogg               QMediaFormat__FileFormat = 4
	QMediaFormat__FileFormat__QuickTime         QMediaFormat__FileFormat = 5
	QMediaFormat__FileFormat__WebM              QMediaFormat__FileFormat = 6
	QMediaFormat__FileFormat__Mpeg4Audio        QMediaFormat__FileFormat = 7
	QMediaFormat__FileFormat__AAC               QMediaFormat__FileFormat = 8
	QMediaFormat__FileFormat__WMA               QMediaFormat__FileFormat = 9
	QMediaFormat__FileFormat__MP3               QMediaFormat__FileFormat = 10
	QMediaFormat__FileFormat__FLAC              QMediaFormat__FileFormat = 11
	QMediaFormat__FileFormat__Wave              QMediaFormat__FileFormat = 12
	QMediaFormat__FileFormat__LastFileFormat    QMediaFormat__FileFormat = 12
)

type QMediaFormat__AudioCodec int

const (
	QMediaFormat__AudioCodec__Unspecified    QMediaFormat__AudioCodec = -1
	QMediaFormat__AudioCodec__MP3            QMediaFormat__AudioCodec = 0
	QMediaFormat__AudioCodec__AAC            QMediaFormat__AudioCodec = 1
	QMediaFormat__AudioCodec__AC3            QMediaFormat__AudioCodec = 2
	QMediaFormat__AudioCodec__EAC3           QMediaFormat__AudioCodec = 3
	QMediaFormat__AudioCodec__FLAC           QMediaFormat__AudioCodec = 4
	QMediaFormat__AudioCodec__DolbyTrueHD    QMediaFormat__AudioCodec = 5
	QMediaFormat__AudioCodec__Opus           QMediaFormat__AudioCodec = 6
	QMediaFormat__AudioCodec__Vorbis         QMediaFormat__AudioCodec = 7
	QMediaFormat__AudioCodec__Wave           QMediaFormat__AudioCodec = 8
	QMediaFormat__AudioCodec__WMA            QMediaFormat__AudioCodec = 9
	QMediaFormat__AudioCodec__ALAC           QMediaFormat__AudioCodec = 10
	QMediaFormat__AudioCodec__LastAudioCodec QMediaFormat__AudioCodec = 10
)

type QMediaFormat__VideoCodec int

const (
	QMediaFormat__VideoCodec__Unspecified    QMediaFormat__VideoCodec = -1
	QMediaFormat__VideoCodec__MPEG1          QMediaFormat__VideoCodec = 0
	QMediaFormat__VideoCodec__MPEG2          QMediaFormat__VideoCodec = 1
	QMediaFormat__VideoCodec__MPEG4          QMediaFormat__VideoCodec = 2
	QMediaFormat__VideoCodec__H264           QMediaFormat__VideoCodec = 3
	QMediaFormat__VideoCodec__H265           QMediaFormat__VideoCodec = 4
	QMediaFormat__VideoCodec__VP8            QMediaFormat__VideoCodec = 5
	QMediaFormat__VideoCodec__VP9            QMediaFormat__VideoCodec = 6
	QMediaFormat__VideoCodec__AV1            QMediaFormat__VideoCodec = 7
	QMediaFormat__VideoCodec__Theora         QMediaFormat__VideoCodec = 8
	QMediaFormat__VideoCodec__WMV            QMediaFormat__VideoCodec = 9
	QMediaFormat__VideoCodec__MotionJPEG     QMediaFormat__VideoCodec = 10
	QMediaFormat__VideoCodec__LastVideoCodec QMediaFormat__VideoCodec = 10
)

type QMediaFormat__ConversionMode int

const (
	QMediaFormat__Encode QMediaFormat__ConversionMode = 0
	QMediaFormat__Decode QMediaFormat__ConversionMode = 1
)

type QMediaFormat__ResolveFlags int

const (
	QMediaFormat__NoFlags       QMediaFormat__ResolveFlags = 0
	QMediaFormat__RequiresVideo QMediaFormat__ResolveFlags = 1
)

type QMediaFormat struct {
	h          *C.QMediaFormat
	isSubclass bool
}

func (this *QMediaFormat) cPointer() *C.QMediaFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaFormat constructs the type using only CGO pointers.
func newQMediaFormat(h *C.QMediaFormat) *QMediaFormat {
	if h == nil {
		return nil
	}
	return &QMediaFormat{h: h}
}

// UnsafeNewQMediaFormat constructs the type using only unsafe pointers.
func UnsafeNewQMediaFormat(h unsafe.Pointer) *QMediaFormat {
	if h == nil {
		return nil
	}

	return &QMediaFormat{h: (*C.QMediaFormat)(h)}
}

// NewQMediaFormat constructs a new QMediaFormat object.
func NewQMediaFormat() *QMediaFormat {
	var outptr_QMediaFormat *C.QMediaFormat = nil

	C.QMediaFormat_new(&outptr_QMediaFormat)
	ret := newQMediaFormat(outptr_QMediaFormat)
	ret.isSubclass = true
	return ret
}

// NewQMediaFormat2 constructs a new QMediaFormat object.
func NewQMediaFormat2(other *QMediaFormat) *QMediaFormat {
	var outptr_QMediaFormat *C.QMediaFormat = nil

	C.QMediaFormat_new2(other.cPointer(), &outptr_QMediaFormat)
	ret := newQMediaFormat(outptr_QMediaFormat)
	ret.isSubclass = true
	return ret
}

// NewQMediaFormat3 constructs a new QMediaFormat object.
func NewQMediaFormat3(format QMediaFormat__FileFormat) *QMediaFormat {
	var outptr_QMediaFormat *C.QMediaFormat = nil

	C.QMediaFormat_new3((C.int)(format), &outptr_QMediaFormat)
	ret := newQMediaFormat(outptr_QMediaFormat)
	ret.isSubclass = true
	return ret
}

func (this *QMediaFormat) OperatorAssign(other *QMediaFormat) {
	C.QMediaFormat_OperatorAssign(this.h, other.cPointer())
}

func (this *QMediaFormat) Swap(other *QMediaFormat) {
	C.QMediaFormat_Swap(this.h, other.cPointer())
}

func (this *QMediaFormat) FileFormat() QMediaFormat__FileFormat {
	return (QMediaFormat__FileFormat)(C.QMediaFormat_FileFormat(this.h))
}

func (this *QMediaFormat) SetFileFormat(f QMediaFormat__FileFormat) {
	C.QMediaFormat_SetFileFormat(this.h, (C.int)(f))
}

func (this *QMediaFormat) SetVideoCodec(codec QMediaFormat__VideoCodec) {
	C.QMediaFormat_SetVideoCodec(this.h, (C.int)(codec))
}

func (this *QMediaFormat) VideoCodec() QMediaFormat__VideoCodec {
	return (QMediaFormat__VideoCodec)(C.QMediaFormat_VideoCodec(this.h))
}

func (this *QMediaFormat) SetAudioCodec(codec QMediaFormat__AudioCodec) {
	C.QMediaFormat_SetAudioCodec(this.h, (C.int)(codec))
}

func (this *QMediaFormat) AudioCodec() QMediaFormat__AudioCodec {
	return (QMediaFormat__AudioCodec)(C.QMediaFormat_AudioCodec(this.h))
}

func (this *QMediaFormat) IsSupported(mode QMediaFormat__ConversionMode) bool {
	return (bool)(C.QMediaFormat_IsSupported(this.h, (C.int)(mode)))
}

func (this *QMediaFormat) MimeType() *qt6.QMimeType {
	_ret := C.QMediaFormat_MimeType(this.h)
	_goptr := qt6.UnsafeNewQMimeType(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaFormat) SupportedFileFormats(m QMediaFormat__ConversionMode) []QMediaFormat__FileFormat {
	var _ma C.struct_miqt_array = C.QMediaFormat_SupportedFileFormats(this.h, (C.int)(m))
	_ret := make([]QMediaFormat__FileFormat, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QMediaFormat__FileFormat)(_outCast[i])
	}
	return _ret
}

func (this *QMediaFormat) SupportedVideoCodecs(m QMediaFormat__ConversionMode) []QMediaFormat__VideoCodec {
	var _ma C.struct_miqt_array = C.QMediaFormat_SupportedVideoCodecs(this.h, (C.int)(m))
	_ret := make([]QMediaFormat__VideoCodec, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QMediaFormat__VideoCodec)(_outCast[i])
	}
	return _ret
}

func (this *QMediaFormat) SupportedAudioCodecs(m QMediaFormat__ConversionMode) []QMediaFormat__AudioCodec {
	var _ma C.struct_miqt_array = C.QMediaFormat_SupportedAudioCodecs(this.h, (C.int)(m))
	_ret := make([]QMediaFormat__AudioCodec, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QMediaFormat__AudioCodec)(_outCast[i])
	}
	return _ret
}

func QMediaFormat_FileFormatName(fileFormat QMediaFormat__FileFormat) string {
	var _ms C.struct_miqt_string = C.QMediaFormat_FileFormatName((C.int)(fileFormat))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaFormat_AudioCodecName(codec QMediaFormat__AudioCodec) string {
	var _ms C.struct_miqt_string = C.QMediaFormat_AudioCodecName((C.int)(codec))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaFormat_VideoCodecName(codec QMediaFormat__VideoCodec) string {
	var _ms C.struct_miqt_string = C.QMediaFormat_VideoCodecName((C.int)(codec))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaFormat_FileFormatDescription(fileFormat QMediaFormat__FileFormat) string {
	var _ms C.struct_miqt_string = C.QMediaFormat_FileFormatDescription((C.int)(fileFormat))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaFormat_AudioCodecDescription(codec QMediaFormat__AudioCodec) string {
	var _ms C.struct_miqt_string = C.QMediaFormat_AudioCodecDescription((C.int)(codec))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaFormat_VideoCodecDescription(codec QMediaFormat__VideoCodec) string {
	var _ms C.struct_miqt_string = C.QMediaFormat_VideoCodecDescription((C.int)(codec))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaFormat) OperatorEqual(other *QMediaFormat) bool {
	return (bool)(C.QMediaFormat_OperatorEqual(this.h, other.cPointer()))
}

func (this *QMediaFormat) OperatorNotEqual(other *QMediaFormat) bool {
	return (bool)(C.QMediaFormat_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QMediaFormat) ResolveForEncoding(flags QMediaFormat__ResolveFlags) {
	C.QMediaFormat_ResolveForEncoding(this.h, (C.int)(flags))
}

// Delete this object from C++ memory.
func (this *QMediaFormat) Delete() {
	C.QMediaFormat_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

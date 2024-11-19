package multimedia

/*

#include "gen_qmediaresource.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/network"
	"runtime"
	"unsafe"
)

type QMediaResource struct {
	h          *C.QMediaResource
	isSubclass bool
}

func (this *QMediaResource) cPointer() *C.QMediaResource {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaResource) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaResource constructs the type using only CGO pointers.
func newQMediaResource(h *C.QMediaResource) *QMediaResource {
	if h == nil {
		return nil
	}
	return &QMediaResource{h: h}
}

// UnsafeNewQMediaResource constructs the type using only unsafe pointers.
func UnsafeNewQMediaResource(h unsafe.Pointer) *QMediaResource {
	if h == nil {
		return nil
	}

	return &QMediaResource{h: (*C.QMediaResource)(h)}
}

// NewQMediaResource constructs a new QMediaResource object.
func NewQMediaResource() *QMediaResource {
	var outptr_QMediaResource *C.QMediaResource = nil

	C.QMediaResource_new(&outptr_QMediaResource)
	ret := newQMediaResource(outptr_QMediaResource)
	ret.isSubclass = true
	return ret
}

// NewQMediaResource2 constructs a new QMediaResource object.
func NewQMediaResource2(url *qt.QUrl) *QMediaResource {
	var outptr_QMediaResource *C.QMediaResource = nil

	C.QMediaResource_new2((*C.QUrl)(url.UnsafePointer()), &outptr_QMediaResource)
	ret := newQMediaResource(outptr_QMediaResource)
	ret.isSubclass = true
	return ret
}

// NewQMediaResource3 constructs a new QMediaResource object.
func NewQMediaResource3(request *network.QNetworkRequest) *QMediaResource {
	var outptr_QMediaResource *C.QMediaResource = nil

	C.QMediaResource_new3((*C.QNetworkRequest)(request.UnsafePointer()), &outptr_QMediaResource)
	ret := newQMediaResource(outptr_QMediaResource)
	ret.isSubclass = true
	return ret
}

// NewQMediaResource4 constructs a new QMediaResource object.
func NewQMediaResource4(other *QMediaResource) *QMediaResource {
	var outptr_QMediaResource *C.QMediaResource = nil

	C.QMediaResource_new4(other.cPointer(), &outptr_QMediaResource)
	ret := newQMediaResource(outptr_QMediaResource)
	ret.isSubclass = true
	return ret
}

// NewQMediaResource5 constructs a new QMediaResource object.
func NewQMediaResource5(url *qt.QUrl, mimeType string) *QMediaResource {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	var outptr_QMediaResource *C.QMediaResource = nil

	C.QMediaResource_new5((*C.QUrl)(url.UnsafePointer()), mimeType_ms, &outptr_QMediaResource)
	ret := newQMediaResource(outptr_QMediaResource)
	ret.isSubclass = true
	return ret
}

// NewQMediaResource6 constructs a new QMediaResource object.
func NewQMediaResource6(request *network.QNetworkRequest, mimeType string) *QMediaResource {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	var outptr_QMediaResource *C.QMediaResource = nil

	C.QMediaResource_new6((*C.QNetworkRequest)(request.UnsafePointer()), mimeType_ms, &outptr_QMediaResource)
	ret := newQMediaResource(outptr_QMediaResource)
	ret.isSubclass = true
	return ret
}

func (this *QMediaResource) OperatorAssign(other *QMediaResource) {
	C.QMediaResource_OperatorAssign(this.h, other.cPointer())
}

func (this *QMediaResource) IsNull() bool {
	return (bool)(C.QMediaResource_IsNull(this.h))
}

func (this *QMediaResource) OperatorEqual(other *QMediaResource) bool {
	return (bool)(C.QMediaResource_OperatorEqual(this.h, other.cPointer()))
}

func (this *QMediaResource) OperatorNotEqual(other *QMediaResource) bool {
	return (bool)(C.QMediaResource_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QMediaResource) Url() *qt.QUrl {
	_ret := C.QMediaResource_Url(this.h)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaResource) Request() *network.QNetworkRequest {
	_ret := C.QMediaResource_Request(this.h)
	_goptr := network.UnsafeNewQNetworkRequest(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaResource) MimeType() string {
	var _ms C.struct_miqt_string = C.QMediaResource_MimeType(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaResource) Language() string {
	var _ms C.struct_miqt_string = C.QMediaResource_Language(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaResource) SetLanguage(language string) {
	language_ms := C.struct_miqt_string{}
	language_ms.data = C.CString(language)
	language_ms.len = C.size_t(len(language))
	defer C.free(unsafe.Pointer(language_ms.data))
	C.QMediaResource_SetLanguage(this.h, language_ms)
}

func (this *QMediaResource) AudioCodec() string {
	var _ms C.struct_miqt_string = C.QMediaResource_AudioCodec(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaResource) SetAudioCodec(codec string) {
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	C.QMediaResource_SetAudioCodec(this.h, codec_ms)
}

func (this *QMediaResource) VideoCodec() string {
	var _ms C.struct_miqt_string = C.QMediaResource_VideoCodec(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaResource) SetVideoCodec(codec string) {
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	C.QMediaResource_SetVideoCodec(this.h, codec_ms)
}

func (this *QMediaResource) DataSize() int64 {
	return (int64)(C.QMediaResource_DataSize(this.h))
}

func (this *QMediaResource) SetDataSize(size int64) {
	C.QMediaResource_SetDataSize(this.h, (C.longlong)(size))
}

func (this *QMediaResource) AudioBitRate() int {
	return (int)(C.QMediaResource_AudioBitRate(this.h))
}

func (this *QMediaResource) SetAudioBitRate(rate int) {
	C.QMediaResource_SetAudioBitRate(this.h, (C.int)(rate))
}

func (this *QMediaResource) SampleRate() int {
	return (int)(C.QMediaResource_SampleRate(this.h))
}

func (this *QMediaResource) SetSampleRate(frequency int) {
	C.QMediaResource_SetSampleRate(this.h, (C.int)(frequency))
}

func (this *QMediaResource) ChannelCount() int {
	return (int)(C.QMediaResource_ChannelCount(this.h))
}

func (this *QMediaResource) SetChannelCount(channels int) {
	C.QMediaResource_SetChannelCount(this.h, (C.int)(channels))
}

func (this *QMediaResource) VideoBitRate() int {
	return (int)(C.QMediaResource_VideoBitRate(this.h))
}

func (this *QMediaResource) SetVideoBitRate(rate int) {
	C.QMediaResource_SetVideoBitRate(this.h, (C.int)(rate))
}

func (this *QMediaResource) Resolution() *qt.QSize {
	_ret := C.QMediaResource_Resolution(this.h)
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaResource) SetResolution(resolution *qt.QSize) {
	C.QMediaResource_SetResolution(this.h, (*C.QSize)(resolution.UnsafePointer()))
}

func (this *QMediaResource) SetResolution2(width int, height int) {
	C.QMediaResource_SetResolution2(this.h, (C.int)(width), (C.int)(height))
}

// Delete this object from C++ memory.
func (this *QMediaResource) Delete() {
	C.QMediaResource_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaResource) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaResource) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

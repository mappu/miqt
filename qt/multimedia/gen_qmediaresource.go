package multimedia

/*

#include "gen_qmediaresource.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/network"
	"runtime"
	"unsafe"
)

type QMediaResource struct {
	h  *C.QMediaResource
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMediaResource) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	return newQMediaResource((*C.QMediaResource)(h))
}

// NewQMediaResource constructs a new QMediaResource object.
func NewQMediaResource() *QMediaResource {

	return newQMediaResource(C.QMediaResource_new())
}

// NewQMediaResource2 constructs a new QMediaResource object.
func NewQMediaResource2(url *qt.QUrl) *QMediaResource {
	defer runtime.KeepAlive(url)

	return newQMediaResource(C.QMediaResource_new2((*C.QUrl)(url.UnsafePointer())))
}

// NewQMediaResource3 constructs a new QMediaResource object.
func NewQMediaResource3(request *network.QNetworkRequest) *QMediaResource {
	defer runtime.KeepAlive(request)

	return newQMediaResource(C.QMediaResource_new3((*C.QNetworkRequest)(request.UnsafePointer())))
}

// NewQMediaResource4 constructs a new QMediaResource object.
func NewQMediaResource4(other *QMediaResource) *QMediaResource {
	defer runtime.KeepAlive(other)

	return newQMediaResource(C.QMediaResource_new4(other.cPointer()))
}

// NewQMediaResource5 constructs a new QMediaResource object.
func NewQMediaResource5(url *qt.QUrl, mimeType string) *QMediaResource {
	defer runtime.KeepAlive(url)
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))

	return newQMediaResource(C.QMediaResource_new5((*C.QUrl)(url.UnsafePointer()), mimeType_ms))
}

// NewQMediaResource6 constructs a new QMediaResource object.
func NewQMediaResource6(request *network.QNetworkRequest, mimeType string) *QMediaResource {
	defer runtime.KeepAlive(request)
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))

	return newQMediaResource(C.QMediaResource_new6((*C.QNetworkRequest)(request.UnsafePointer()), mimeType_ms))
}

func (this *QMediaResource) OperatorAssign(other *QMediaResource) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QMediaResource_operatorAssign(this.h, other.cPointer())
}

func (this *QMediaResource) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMediaResource_isNull(this.h))
}

func (this *QMediaResource) OperatorEqual(other *QMediaResource) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QMediaResource_operatorEqual(this.h, other.cPointer()))
}

func (this *QMediaResource) OperatorNotEqual(other *QMediaResource) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QMediaResource_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QMediaResource) Url() *qt.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QMediaResource_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaResource) Request() *network.QNetworkRequest {
	defer runtime.KeepAlive(this)
	_goptr := network.UnsafeNewQNetworkRequest(unsafe.Pointer(C.QMediaResource_request(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaResource) MimeType() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QMediaResource_mimeType(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaResource) Language() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QMediaResource_language(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaResource) SetLanguage(language string) {
	defer runtime.KeepAlive(this)
	language_ms := C.struct_miqt_string{}
	language_ms.data = C.CString(language)
	language_ms.len = C.size_t(len(language))
	defer C.free(unsafe.Pointer(language_ms.data))
	C.QMediaResource_setLanguage(this.h, language_ms)
}

func (this *QMediaResource) AudioCodec() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QMediaResource_audioCodec(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaResource) SetAudioCodec(codec string) {
	defer runtime.KeepAlive(this)
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	C.QMediaResource_setAudioCodec(this.h, codec_ms)
}

func (this *QMediaResource) VideoCodec() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QMediaResource_videoCodec(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaResource) SetVideoCodec(codec string) {
	defer runtime.KeepAlive(this)
	codec_ms := C.struct_miqt_string{}
	codec_ms.data = C.CString(codec)
	codec_ms.len = C.size_t(len(codec))
	defer C.free(unsafe.Pointer(codec_ms.data))
	C.QMediaResource_setVideoCodec(this.h, codec_ms)
}

func (this *QMediaResource) DataSize() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QMediaResource_dataSize(this.h))
}

func (this *QMediaResource) SetDataSize(size int64) {
	defer runtime.KeepAlive(this)
	C.QMediaResource_setDataSize(this.h, (C.longlong)(size))
}

func (this *QMediaResource) AudioBitRate() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMediaResource_audioBitRate(this.h))
}

func (this *QMediaResource) SetAudioBitRate(rate int) {
	defer runtime.KeepAlive(this)
	C.QMediaResource_setAudioBitRate(this.h, (C.int)(rate))
}

func (this *QMediaResource) SampleRate() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMediaResource_sampleRate(this.h))
}

func (this *QMediaResource) SetSampleRate(frequency int) {
	defer runtime.KeepAlive(this)
	C.QMediaResource_setSampleRate(this.h, (C.int)(frequency))
}

func (this *QMediaResource) ChannelCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMediaResource_channelCount(this.h))
}

func (this *QMediaResource) SetChannelCount(channels int) {
	defer runtime.KeepAlive(this)
	C.QMediaResource_setChannelCount(this.h, (C.int)(channels))
}

func (this *QMediaResource) VideoBitRate() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMediaResource_videoBitRate(this.h))
}

func (this *QMediaResource) SetVideoBitRate(rate int) {
	defer runtime.KeepAlive(this)
	C.QMediaResource_setVideoBitRate(this.h, (C.int)(rate))
}

func (this *QMediaResource) Resolution() qt.QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt.QSize](C.QMediaResource_resolution(this.h))
}

func (this *QMediaResource) SetResolution(resolution qt.QSize) {
	defer runtime.KeepAlive(this)
	C.QMediaResource_setResolution(this.h, libmiqt.ValueCast[C.struct_miqt_qsize](resolution))
}

func (this *QMediaResource) SetResolution2(width int, height int) {
	defer runtime.KeepAlive(this)
	C.QMediaResource_setResolution2(this.h, (C.int)(width), (C.int)(height))
}

// Delete this object from C++ memory.
func (this *QMediaResource) Delete() {
	C.QMediaResource_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMediaResource) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMediaResource_delete((*C.QMediaResource)(gc[0]))
	})
	this.miqtSetGC(gc)
}

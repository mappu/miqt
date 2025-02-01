package multimedia

/*

#include "gen_qmediacontent.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/network"
	"runtime"
	"unsafe"
)

type QMediaContent struct {
	h *C.QMediaContent
}

func (this *QMediaContent) cPointer() *C.QMediaContent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaContent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaContent constructs the type using only CGO pointers.
func newQMediaContent(h *C.QMediaContent) *QMediaContent {
	if h == nil {
		return nil
	}

	return &QMediaContent{h: h}
}

// UnsafeNewQMediaContent constructs the type using only unsafe pointers.
func UnsafeNewQMediaContent(h unsafe.Pointer) *QMediaContent {
	return newQMediaContent((*C.QMediaContent)(h))
}

// NewQMediaContent constructs a new QMediaContent object.
func NewQMediaContent() *QMediaContent {

	return newQMediaContent(C.QMediaContent_new())
}

// NewQMediaContent2 constructs a new QMediaContent object.
func NewQMediaContent2(contentUrl *qt.QUrl) *QMediaContent {

	return newQMediaContent(C.QMediaContent_new2((*C.QUrl)(contentUrl.UnsafePointer())))
}

// NewQMediaContent3 constructs a new QMediaContent object.
func NewQMediaContent3(contentRequest *network.QNetworkRequest) *QMediaContent {

	return newQMediaContent(C.QMediaContent_new3((*C.QNetworkRequest)(contentRequest.UnsafePointer())))
}

// NewQMediaContent4 constructs a new QMediaContent object.
func NewQMediaContent4(contentResource *QMediaResource) *QMediaContent {

	return newQMediaContent(C.QMediaContent_new4(contentResource.cPointer()))
}

// NewQMediaContent5 constructs a new QMediaContent object.
func NewQMediaContent5(resources []QMediaResource) *QMediaContent {
	resources_CArray := (*[0xffff]*C.QMediaResource)(C.malloc(C.size_t(8 * len(resources))))
	defer C.free(unsafe.Pointer(resources_CArray))
	for i := range resources {
		resources_CArray[i] = resources[i].cPointer()
	}
	resources_ma := C.struct_miqt_array{len: C.size_t(len(resources)), data: unsafe.Pointer(resources_CArray)}

	return newQMediaContent(C.QMediaContent_new5(resources_ma))
}

// NewQMediaContent6 constructs a new QMediaContent object.
func NewQMediaContent6(other *QMediaContent) *QMediaContent {

	return newQMediaContent(C.QMediaContent_new6(other.cPointer()))
}

// NewQMediaContent7 constructs a new QMediaContent object.
func NewQMediaContent7(playlist *QMediaPlaylist) *QMediaContent {

	return newQMediaContent(C.QMediaContent_new7(playlist.cPointer()))
}

// NewQMediaContent8 constructs a new QMediaContent object.
func NewQMediaContent8(playlist *QMediaPlaylist, contentUrl *qt.QUrl) *QMediaContent {

	return newQMediaContent(C.QMediaContent_new8(playlist.cPointer(), (*C.QUrl)(contentUrl.UnsafePointer())))
}

// NewQMediaContent9 constructs a new QMediaContent object.
func NewQMediaContent9(playlist *QMediaPlaylist, contentUrl *qt.QUrl, takeOwnership bool) *QMediaContent {

	return newQMediaContent(C.QMediaContent_new9(playlist.cPointer(), (*C.QUrl)(contentUrl.UnsafePointer()), (C.bool)(takeOwnership)))
}

func (this *QMediaContent) OperatorAssign(other *QMediaContent) {
	C.QMediaContent_operatorAssign(this.h, other.cPointer())
}

func (this *QMediaContent) OperatorEqual(other *QMediaContent) bool {
	return (bool)(C.QMediaContent_operatorEqual(this.h, other.cPointer()))
}

func (this *QMediaContent) OperatorNotEqual(other *QMediaContent) bool {
	return (bool)(C.QMediaContent_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QMediaContent) IsNull() bool {
	return (bool)(C.QMediaContent_isNull(this.h))
}

func (this *QMediaContent) Request() *network.QNetworkRequest {
	_goptr := network.UnsafeNewQNetworkRequest(unsafe.Pointer(C.QMediaContent_request(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaContent) CanonicalUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QMediaContent_canonicalUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaContent) CanonicalRequest() *network.QNetworkRequest {
	_goptr := network.UnsafeNewQNetworkRequest(unsafe.Pointer(C.QMediaContent_canonicalRequest(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaContent) CanonicalResource() *QMediaResource {
	_goptr := newQMediaResource(C.QMediaContent_canonicalResource(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaContent) Resources() []QMediaResource {
	var _ma C.struct_miqt_array = C.QMediaContent_resources(this.h)
	_ret := make([]QMediaResource, int(_ma.len))
	_outCast := (*[0xffff]*C.QMediaResource)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQMediaResource(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMediaContent) Playlist() *QMediaPlaylist {
	return newQMediaPlaylist(C.QMediaContent_playlist(this.h))
}

// Delete this object from C++ memory.
func (this *QMediaContent) Delete() {
	C.QMediaContent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaContent) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaContent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

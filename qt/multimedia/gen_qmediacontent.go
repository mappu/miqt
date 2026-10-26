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
	h  *C.QMediaContent
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMediaContent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(contentUrl)

	return newQMediaContent(C.QMediaContent_new2((*C.QUrl)(contentUrl.UnsafePointer())))
}

// NewQMediaContent3 constructs a new QMediaContent object.
func NewQMediaContent3(contentRequest *network.QNetworkRequest) *QMediaContent {
	defer runtime.KeepAlive(contentRequest)

	return newQMediaContent(C.QMediaContent_new3((*C.QNetworkRequest)(contentRequest.UnsafePointer())))
}

// NewQMediaContent4 constructs a new QMediaContent object.
func NewQMediaContent4(contentResource *QMediaResource) *QMediaContent {
	defer runtime.KeepAlive(contentResource)

	return newQMediaContent(C.QMediaContent_new4(contentResource.cPointer()))
}

// NewQMediaContent5 constructs a new QMediaContent object.
func NewQMediaContent5(resources []QMediaResource) *QMediaContent {
	defer runtime.KeepAlive(resources)
	resources_CArray_ptr := (**C.QMediaResource)(C.malloc(C.size_t(8 * len(resources))))
	defer C.free(unsafe.Pointer(resources_CArray_ptr))
	resources_CArray := unsafe.Slice(resources_CArray_ptr, len(resources))
	for i := range resources {
		resources_CArray[i] = resources[i].cPointer()
	}
	resources_ma := C.struct_miqt_array{len: C.size_t(len(resources)), data: unsafe.Pointer(resources_CArray_ptr)}

	return newQMediaContent(C.QMediaContent_new5(resources_ma))
}

// NewQMediaContent6 constructs a new QMediaContent object.
func NewQMediaContent6(other *QMediaContent) *QMediaContent {
	defer runtime.KeepAlive(other)

	return newQMediaContent(C.QMediaContent_new6(other.cPointer()))
}

// NewQMediaContent7 constructs a new QMediaContent object.
func NewQMediaContent7(playlist *QMediaPlaylist) *QMediaContent {
	defer runtime.KeepAlive(playlist)

	return newQMediaContent(C.QMediaContent_new7(playlist.cPointer()))
}

// NewQMediaContent8 constructs a new QMediaContent object.
func NewQMediaContent8(playlist *QMediaPlaylist, contentUrl *qt.QUrl) *QMediaContent {
	defer runtime.KeepAlive(playlist)
	defer runtime.KeepAlive(contentUrl)

	return newQMediaContent(C.QMediaContent_new8(playlist.cPointer(), (*C.QUrl)(contentUrl.UnsafePointer())))
}

// NewQMediaContent9 constructs a new QMediaContent object.
func NewQMediaContent9(playlist *QMediaPlaylist, contentUrl *qt.QUrl, takeOwnership bool) *QMediaContent {
	defer runtime.KeepAlive(playlist)
	defer runtime.KeepAlive(contentUrl)

	return newQMediaContent(C.QMediaContent_new9(playlist.cPointer(), (*C.QUrl)(contentUrl.UnsafePointer()), (C.bool)(takeOwnership)))
}

func (this *QMediaContent) OperatorAssign(other *QMediaContent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QMediaContent_operatorAssign(this.h, other.cPointer())
}

func (this *QMediaContent) OperatorEqual(other *QMediaContent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QMediaContent_operatorEqual(this.h, other.cPointer()))
}

func (this *QMediaContent) OperatorNotEqual(other *QMediaContent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QMediaContent_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QMediaContent) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMediaContent_isNull(this.h))
}

func (this *QMediaContent) Request() *network.QNetworkRequest {
	defer runtime.KeepAlive(this)
	_goptr := network.UnsafeNewQNetworkRequest(unsafe.Pointer(C.QMediaContent_request(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaContent) CanonicalUrl() *qt.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QMediaContent_canonicalUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaContent) CanonicalRequest() *network.QNetworkRequest {
	defer runtime.KeepAlive(this)
	_goptr := network.UnsafeNewQNetworkRequest(unsafe.Pointer(C.QMediaContent_canonicalRequest(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaContent) CanonicalResource() *QMediaResource {
	defer runtime.KeepAlive(this)
	_goptr := newQMediaResource(C.QMediaContent_canonicalResource(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaContent) Resources() []QMediaResource {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QMediaContent_resources(this.h)
	_ret := make([]QMediaResource, int(_ma.len))
	_outCast := unsafe.Slice((**C.QMediaResource)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQMediaResource(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMediaContent) Playlist() *QMediaPlaylist {
	defer runtime.KeepAlive(this)
	return newQMediaPlaylist(C.QMediaContent_playlist(this.h))
}

// Delete this object from C++ memory.
func (this *QMediaContent) Delete() {
	C.QMediaContent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMediaContent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMediaContent_delete((*C.QMediaContent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

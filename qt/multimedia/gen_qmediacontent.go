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
	h          *C.QMediaContent
	isSubclass bool
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

	ret := newQMediaContent(C.QMediaContent_new())
	ret.isSubclass = true
	return ret
}

// NewQMediaContent2 constructs a new QMediaContent object.
func NewQMediaContent2(contentUrl *qt.QUrl) *QMediaContent {

	ret := newQMediaContent(C.QMediaContent_new2((*C.QUrl)(contentUrl.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

// NewQMediaContent3 constructs a new QMediaContent object.
func NewQMediaContent3(contentRequest *network.QNetworkRequest) *QMediaContent {

	ret := newQMediaContent(C.QMediaContent_new3((*C.QNetworkRequest)(contentRequest.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

// NewQMediaContent4 constructs a new QMediaContent object.
func NewQMediaContent4(contentResource *QMediaResource) *QMediaContent {

	ret := newQMediaContent(C.QMediaContent_new4(contentResource.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQMediaContent5 constructs a new QMediaContent object.
func NewQMediaContent5(resources []QMediaResource) *QMediaContent {
	resources_CArray := (*[0xffff]*C.QMediaResource)(C.malloc(C.size_t(8 * len(resources))))
	defer C.free(unsafe.Pointer(resources_CArray))
	for i := range resources {
		resources_CArray[i] = resources[i].cPointer()
	}
	resources_ma := C.struct_miqt_array{len: C.size_t(len(resources)), data: unsafe.Pointer(resources_CArray)}

	ret := newQMediaContent(C.QMediaContent_new5(resources_ma))
	ret.isSubclass = true
	return ret
}

// NewQMediaContent6 constructs a new QMediaContent object.
func NewQMediaContent6(other *QMediaContent) *QMediaContent {

	ret := newQMediaContent(C.QMediaContent_new6(other.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQMediaContent7 constructs a new QMediaContent object.
func NewQMediaContent7(playlist *QMediaPlaylist) *QMediaContent {

	ret := newQMediaContent(C.QMediaContent_new7(playlist.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQMediaContent8 constructs a new QMediaContent object.
func NewQMediaContent8(playlist *QMediaPlaylist, contentUrl *qt.QUrl) *QMediaContent {

	ret := newQMediaContent(C.QMediaContent_new8(playlist.cPointer(), (*C.QUrl)(contentUrl.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

// NewQMediaContent9 constructs a new QMediaContent object.
func NewQMediaContent9(playlist *QMediaPlaylist, contentUrl *qt.QUrl, takeOwnership bool) *QMediaContent {

	ret := newQMediaContent(C.QMediaContent_new9(playlist.cPointer(), (*C.QUrl)(contentUrl.UnsafePointer()), (C.bool)(takeOwnership)))
	ret.isSubclass = true
	return ret
}

func (this *QMediaContent) OperatorAssign(other *QMediaContent) {
	C.QMediaContent_OperatorAssign(this.h, other.cPointer())
}

func (this *QMediaContent) OperatorEqual(other *QMediaContent) bool {
	return (bool)(C.QMediaContent_OperatorEqual(this.h, other.cPointer()))
}

func (this *QMediaContent) OperatorNotEqual(other *QMediaContent) bool {
	return (bool)(C.QMediaContent_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QMediaContent) IsNull() bool {
	return (bool)(C.QMediaContent_IsNull(this.h))
}

func (this *QMediaContent) Request() *network.QNetworkRequest {
	_goptr := network.UnsafeNewQNetworkRequest(unsafe.Pointer(C.QMediaContent_Request(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaContent) CanonicalUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QMediaContent_CanonicalUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaContent) CanonicalRequest() *network.QNetworkRequest {
	_goptr := network.UnsafeNewQNetworkRequest(unsafe.Pointer(C.QMediaContent_CanonicalRequest(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaContent) CanonicalResource() *QMediaResource {
	_goptr := newQMediaResource(C.QMediaContent_CanonicalResource(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaContent) Resources() []QMediaResource {
	var _ma C.struct_miqt_array = C.QMediaContent_Resources(this.h)
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
	return newQMediaPlaylist(C.QMediaContent_Playlist(this.h))
}

// Delete this object from C++ memory.
func (this *QMediaContent) Delete() {
	C.QMediaContent_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaContent) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaContent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

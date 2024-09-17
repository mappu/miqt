package qt

/*

#include "gen_qpixmapcache.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPixmapCache struct {
	h *C.QPixmapCache
}

func (this *QPixmapCache) cPointer() *C.QPixmapCache {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPixmapCache(h *C.QPixmapCache) *QPixmapCache {
	if h == nil {
		return nil
	}
	return &QPixmapCache{h: h}
}

func newQPixmapCache_U(h unsafe.Pointer) *QPixmapCache {
	return newQPixmapCache((*C.QPixmapCache)(h))
}

func QPixmapCache_CacheLimit() int {
	return (int)(C.QPixmapCache_CacheLimit())
}

func QPixmapCache_SetCacheLimit(cacheLimit int) {
	C.QPixmapCache_SetCacheLimit((C.int)(cacheLimit))
}

func QPixmapCache_Find(key string) *QPixmap {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	return newQPixmap_U(unsafe.Pointer(C.QPixmapCache_Find((*C.struct_miqt_string)(key_ms))))
}

func QPixmapCache_Find2(key string, pixmap *QPixmap) bool {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	return (bool)(C.QPixmapCache_Find2((*C.struct_miqt_string)(key_ms), pixmap.cPointer()))
}

func QPixmapCache_Find3(key string, pixmap *QPixmap) bool {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	return (bool)(C.QPixmapCache_Find3((*C.struct_miqt_string)(key_ms), pixmap.cPointer()))
}

func QPixmapCache_Find4(key *QPixmapCache__Key, pixmap *QPixmap) bool {
	return (bool)(C.QPixmapCache_Find4(key.cPointer(), pixmap.cPointer()))
}

func QPixmapCache_Insert(key string, pixmap *QPixmap) bool {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	return (bool)(C.QPixmapCache_Insert((*C.struct_miqt_string)(key_ms), pixmap.cPointer()))
}

func QPixmapCache_InsertWithPixmap(pixmap *QPixmap) *QPixmapCache__Key {
	_ret := C.QPixmapCache_InsertWithPixmap(pixmap.cPointer())
	_goptr := newQPixmapCache__Key(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmapCache_Replace(key *QPixmapCache__Key, pixmap *QPixmap) bool {
	return (bool)(C.QPixmapCache_Replace(key.cPointer(), pixmap.cPointer()))
}

func QPixmapCache_Remove(key string) {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	C.QPixmapCache_Remove((*C.struct_miqt_string)(key_ms))
}

func QPixmapCache_RemoveWithKey(key *QPixmapCache__Key) {
	C.QPixmapCache_RemoveWithKey(key.cPointer())
}

func QPixmapCache_Clear() {
	C.QPixmapCache_Clear()
}

// Delete this object from C++ memory.
func (this *QPixmapCache) Delete() {
	C.QPixmapCache_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPixmapCache) GoGC() {
	runtime.SetFinalizer(this, func(this *QPixmapCache) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPixmapCache__Key struct {
	h *C.QPixmapCache__Key
}

func (this *QPixmapCache__Key) cPointer() *C.QPixmapCache__Key {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPixmapCache__Key(h *C.QPixmapCache__Key) *QPixmapCache__Key {
	if h == nil {
		return nil
	}
	return &QPixmapCache__Key{h: h}
}

func newQPixmapCache__Key_U(h unsafe.Pointer) *QPixmapCache__Key {
	return newQPixmapCache__Key((*C.QPixmapCache__Key)(h))
}

// NewQPixmapCache__Key constructs a new QPixmapCache::Key object.
func NewQPixmapCache__Key() *QPixmapCache__Key {
	ret := C.QPixmapCache__Key_new()
	return newQPixmapCache__Key(ret)
}

// NewQPixmapCache__Key2 constructs a new QPixmapCache::Key object.
func NewQPixmapCache__Key2(other *QPixmapCache__Key) *QPixmapCache__Key {
	ret := C.QPixmapCache__Key_new2(other.cPointer())
	return newQPixmapCache__Key(ret)
}

func (this *QPixmapCache__Key) OperatorEqual(key *QPixmapCache__Key) bool {
	return (bool)(C.QPixmapCache__Key_OperatorEqual(this.h, key.cPointer()))
}

func (this *QPixmapCache__Key) OperatorNotEqual(key *QPixmapCache__Key) bool {
	return (bool)(C.QPixmapCache__Key_OperatorNotEqual(this.h, key.cPointer()))
}

func (this *QPixmapCache__Key) Swap(other *QPixmapCache__Key) {
	C.QPixmapCache__Key_Swap(this.h, other.cPointer())
}

func (this *QPixmapCache__Key) IsValid() bool {
	return (bool)(C.QPixmapCache__Key_IsValid(this.h))
}

// Delete this object from C++ memory.
func (this *QPixmapCache__Key) Delete() {
	C.QPixmapCache__Key_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPixmapCache__Key) GoGC() {
	runtime.SetFinalizer(this, func(this *QPixmapCache__Key) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

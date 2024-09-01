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
	ret := C.QPixmapCache_CacheLimit()
	return (int)(ret)
}

func QPixmapCache_SetCacheLimit(cacheLimit int) {
	C.QPixmapCache_SetCacheLimit((C.int)(cacheLimit))
}

func QPixmapCache_Find(key string) *QPixmap {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QPixmapCache_Find(key_Cstring, C.ulong(len(key)))
	return newQPixmap_U(unsafe.Pointer(ret))
}

func QPixmapCache_Find2(key string, pixmap *QPixmap) bool {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QPixmapCache_Find2(key_Cstring, C.ulong(len(key)), pixmap.cPointer())
	return (bool)(ret)
}

func QPixmapCache_Find3(key string, pixmap *QPixmap) bool {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QPixmapCache_Find3(key_Cstring, C.ulong(len(key)), pixmap.cPointer())
	return (bool)(ret)
}

func QPixmapCache_Find4(key *QPixmapCache__Key, pixmap *QPixmap) bool {
	ret := C.QPixmapCache_Find4(key.cPointer(), pixmap.cPointer())
	return (bool)(ret)
}

func QPixmapCache_Insert(key string, pixmap *QPixmap) bool {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QPixmapCache_Insert(key_Cstring, C.ulong(len(key)), pixmap.cPointer())
	return (bool)(ret)
}

func QPixmapCache_InsertWithPixmap(pixmap *QPixmap) *QPixmapCache__Key {
	ret := C.QPixmapCache_InsertWithPixmap(pixmap.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmapCache__Key(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmapCache__Key) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QPixmapCache_Replace(key *QPixmapCache__Key, pixmap *QPixmap) bool {
	ret := C.QPixmapCache_Replace(key.cPointer(), pixmap.cPointer())
	return (bool)(ret)
}

func QPixmapCache_Remove(key string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QPixmapCache_Remove(key_Cstring, C.ulong(len(key)))
}

func QPixmapCache_RemoveWithKey(key *QPixmapCache__Key) {
	C.QPixmapCache_RemoveWithKey(key.cPointer())
}

func QPixmapCache_Clear() {
	C.QPixmapCache_Clear()
}

func (this *QPixmapCache) Delete() {
	C.QPixmapCache_Delete(this.h)
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
	ret := C.QPixmapCache__Key_OperatorEqual(this.h, key.cPointer())
	return (bool)(ret)
}

func (this *QPixmapCache__Key) OperatorNotEqual(key *QPixmapCache__Key) bool {
	ret := C.QPixmapCache__Key_OperatorNotEqual(this.h, key.cPointer())
	return (bool)(ret)
}

func (this *QPixmapCache__Key) Swap(other *QPixmapCache__Key) {
	C.QPixmapCache__Key_Swap(this.h, other.cPointer())
}

func (this *QPixmapCache__Key) IsValid() bool {
	ret := C.QPixmapCache__Key_IsValid(this.h)
	return (bool)(ret)
}

func (this *QPixmapCache__Key) Delete() {
	C.QPixmapCache__Key_Delete(this.h)
}

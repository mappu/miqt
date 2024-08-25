package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpixmapcache.h"
#include <stdlib.h>

*/
import "C"

import (
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

func QPixmapCache_Insert(key string, pixmap *QPixmap) bool {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QPixmapCache_Insert(key_Cstring, C.ulong(len(key)), pixmap.cPointer())
	return (bool)(ret)
}

func QPixmapCache_Remove(key string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QPixmapCache_Remove(key_Cstring, C.ulong(len(key)))
}

func QPixmapCache_Clear() {
	C.QPixmapCache_Clear()
}

func (this *QPixmapCache) Delete() {
	C.QPixmapCache_Delete(this.h)
}

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

func (this *QPixmapCache) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPixmapCache constructs the type using only CGO pointers.
func newQPixmapCache(h *C.QPixmapCache) *QPixmapCache {
	if h == nil {
		return nil
	}

	return &QPixmapCache{h: h}
}

// UnsafeNewQPixmapCache constructs the type using only unsafe pointers.
func UnsafeNewQPixmapCache(h unsafe.Pointer) *QPixmapCache {
	return newQPixmapCache((*C.QPixmapCache)(h))
}

func QPixmapCache_CacheLimit() int {
	return (int)(C.QPixmapCache_cacheLimit())
}

func QPixmapCache_SetCacheLimit(cacheLimit int) {
	C.QPixmapCache_setCacheLimit((C.int)(cacheLimit))
}

func QPixmapCache_Find(key string) *QPixmap {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return newQPixmap(C.QPixmapCache_find(key_ms))
}

func QPixmapCache_Find2(key string, pixmap *QPixmap) bool {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return (bool)(C.QPixmapCache_find2(key_ms, pixmap.cPointer()))
}

func QPixmapCache_Find3(key string, pixmap *QPixmap) bool {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return (bool)(C.QPixmapCache_find3(key_ms, pixmap.cPointer()))
}

func QPixmapCache_Find4(key *QPixmapCache__Key, pixmap *QPixmap) bool {
	return (bool)(C.QPixmapCache_find4(key.cPointer(), pixmap.cPointer()))
}

func QPixmapCache_Insert(key string, pixmap *QPixmap) bool {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return (bool)(C.QPixmapCache_insert(key_ms, pixmap.cPointer()))
}

func QPixmapCache_InsertWithPixmap(pixmap *QPixmap) *QPixmapCache__Key {
	_goptr := newQPixmapCache__Key(C.QPixmapCache_insertWithPixmap(pixmap.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPixmapCache_Replace(key *QPixmapCache__Key, pixmap *QPixmap) bool {
	return (bool)(C.QPixmapCache_replace(key.cPointer(), pixmap.cPointer()))
}

func QPixmapCache_Remove(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QPixmapCache_remove(key_ms)
}

func QPixmapCache_RemoveWithKey(key *QPixmapCache__Key) {
	C.QPixmapCache_removeWithKey(key.cPointer())
}

func QPixmapCache_Clear() {
	C.QPixmapCache_clear()
}

// Delete this object from C++ memory.
func (this *QPixmapCache) Delete() {
	C.QPixmapCache_delete(this.h)
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

func (this *QPixmapCache__Key) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPixmapCache__Key constructs the type using only CGO pointers.
func newQPixmapCache__Key(h *C.QPixmapCache__Key) *QPixmapCache__Key {
	if h == nil {
		return nil
	}

	return &QPixmapCache__Key{h: h}
}

// UnsafeNewQPixmapCache__Key constructs the type using only unsafe pointers.
func UnsafeNewQPixmapCache__Key(h unsafe.Pointer) *QPixmapCache__Key {
	return newQPixmapCache__Key((*C.QPixmapCache__Key)(h))
}

// NewQPixmapCache__Key constructs a new QPixmapCache::Key object.
func NewQPixmapCache__Key() *QPixmapCache__Key {

	return newQPixmapCache__Key(C.QPixmapCache__Key_new())
}

// NewQPixmapCache__Key2 constructs a new QPixmapCache::Key object.
func NewQPixmapCache__Key2(other *QPixmapCache__Key) *QPixmapCache__Key {

	return newQPixmapCache__Key(C.QPixmapCache__Key_new2(other.cPointer()))
}

func (this *QPixmapCache__Key) OperatorEqual(key *QPixmapCache__Key) bool {
	return (bool)(C.QPixmapCache__Key_operatorEqual(this.h, key.cPointer()))
}

func (this *QPixmapCache__Key) OperatorNotEqual(key *QPixmapCache__Key) bool {
	return (bool)(C.QPixmapCache__Key_operatorNotEqual(this.h, key.cPointer()))
}

func (this *QPixmapCache__Key) OperatorAssign(other *QPixmapCache__Key) {
	C.QPixmapCache__Key_operatorAssign(this.h, other.cPointer())
}

func (this *QPixmapCache__Key) Swap(other *QPixmapCache__Key) {
	C.QPixmapCache__Key_swap(this.h, other.cPointer())
}

func (this *QPixmapCache__Key) IsValid() bool {
	return (bool)(C.QPixmapCache__Key_isValid(this.h))
}

// Delete this object from C++ memory.
func (this *QPixmapCache__Key) Delete() {
	C.QPixmapCache__Key_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPixmapCache__Key) GoGC() {
	runtime.SetFinalizer(this, func(this *QPixmapCache__Key) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package webengine

/*

#include "gen_qwebenginescriptcollection.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QWebEngineScriptCollection struct {
	h *C.QWebEngineScriptCollection
}

func (this *QWebEngineScriptCollection) cPointer() *C.QWebEngineScriptCollection {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineScriptCollection) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineScriptCollection constructs the type using only CGO pointers.
func newQWebEngineScriptCollection(h *C.QWebEngineScriptCollection) *QWebEngineScriptCollection {
	if h == nil {
		return nil
	}

	return &QWebEngineScriptCollection{h: h}
}

// UnsafeNewQWebEngineScriptCollection constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineScriptCollection(h unsafe.Pointer) *QWebEngineScriptCollection {
	return newQWebEngineScriptCollection((*C.QWebEngineScriptCollection)(h))
}

func (this *QWebEngineScriptCollection) IsEmpty() bool {
	return (bool)(C.QWebEngineScriptCollection_isEmpty(this.h))
}

func (this *QWebEngineScriptCollection) Count() int {
	return (int)(C.QWebEngineScriptCollection_count(this.h))
}

func (this *QWebEngineScriptCollection) Contains(value *QWebEngineScript) bool {
	return (bool)(C.QWebEngineScriptCollection_contains(this.h, value.cPointer()))
}

func (this *QWebEngineScriptCollection) Find(name string) []QWebEngineScript {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ma C.struct_miqt_array = C.QWebEngineScriptCollection_find(this.h, name_ms)
	_ret := make([]QWebEngineScript, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebEngineScript)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebEngineScript(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebEngineScriptCollection) Insert(param1 *QWebEngineScript) {
	C.QWebEngineScriptCollection_insert(this.h, param1.cPointer())
}

func (this *QWebEngineScriptCollection) InsertWithList(list []QWebEngineScript) {
	list_CArray := (*[0xffff]*C.QWebEngineScript)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = list[i].cPointer()
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	C.QWebEngineScriptCollection_insertWithList(this.h, list_ma)
}

func (this *QWebEngineScriptCollection) Remove(param1 *QWebEngineScript) bool {
	return (bool)(C.QWebEngineScriptCollection_remove(this.h, param1.cPointer()))
}

func (this *QWebEngineScriptCollection) Clear() {
	C.QWebEngineScriptCollection_clear(this.h)
}

func (this *QWebEngineScriptCollection) ToList() []QWebEngineScript {
	var _ma C.struct_miqt_array = C.QWebEngineScriptCollection_toList(this.h)
	_ret := make([]QWebEngineScript, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebEngineScript)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebEngineScript(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebEngineScriptCollection) Delete() {
	C.QWebEngineScriptCollection_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineScriptCollection) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineScriptCollection) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

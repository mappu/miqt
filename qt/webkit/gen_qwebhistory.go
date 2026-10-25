package webkit

/*

#include "gen_qwebhistory.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QWebHistoryItem struct {
	h  *C.QWebHistoryItem
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWebHistoryItem) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QWebHistoryItem) cPointer() *C.QWebHistoryItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebHistoryItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebHistoryItem constructs the type using only CGO pointers.
func newQWebHistoryItem(h *C.QWebHistoryItem) *QWebHistoryItem {
	if h == nil {
		return nil
	}

	return &QWebHistoryItem{h: h}
}

// UnsafeNewQWebHistoryItem constructs the type using only unsafe pointers.
func UnsafeNewQWebHistoryItem(h unsafe.Pointer) *QWebHistoryItem {
	return newQWebHistoryItem((*C.QWebHistoryItem)(h))
}

// NewQWebHistoryItem constructs a new QWebHistoryItem object.
func NewQWebHistoryItem(other *QWebHistoryItem) *QWebHistoryItem {
	defer runtime.KeepAlive(other)

	return newQWebHistoryItem(C.QWebHistoryItem_new(other.cPointer()))
}

func (this *QWebHistoryItem) OperatorAssign(other *QWebHistoryItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QWebHistoryItem_operatorAssign(this.h, other.cPointer())
}

func (this *QWebHistoryItem) OriginalUrl() *qt.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebHistoryItem_originalUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistoryItem) Url() *qt.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebHistoryItem_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistoryItem) Title() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QWebHistoryItem_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebHistoryItem) LastVisited() *qt.QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QWebHistoryItem_lastVisited(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistoryItem) Icon() *qt.QIcon {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQIcon(unsafe.Pointer(C.QWebHistoryItem_icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistoryItem) UserData() *qt.QVariant {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QWebHistoryItem_userData(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistoryItem) SetUserData(userData *qt.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(userData)
	C.QWebHistoryItem_setUserData(this.h, (*C.QVariant)(userData.UnsafePointer()))
}

func (this *QWebHistoryItem) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QWebHistoryItem_isValid(this.h))
}

func (this *QWebHistoryItem) ToMap() map[string]qt.QVariant {
	defer runtime.KeepAlive(this)
	var _mm C.struct_miqt_map = C.QWebHistoryItem_toMap(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_mm.values)), int(_mm.len))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QWebHistoryItem) LoadFromMap(mapVal map[string]qt.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(mapVal)
	mapVal_Keys_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Keys_CArray_ptr))
	mapVal_Keys_CArray := unsafe.Slice(mapVal_Keys_CArray_ptr, len(mapVal))
	mapVal_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Values_CArray_ptr))
	mapVal_Values_CArray := unsafe.Slice(mapVal_Values_CArray_ptr, len(mapVal))
	mapVal_ctr := 0
	for mapVal_k, mapVal_v := range mapVal {
		mapVal_k_ms := C.struct_miqt_string{}
		mapVal_k_ms.data = C.CString(mapVal_k)
		mapVal_k_ms.len = C.size_t(len(mapVal_k))
		defer C.free(unsafe.Pointer(mapVal_k_ms.data))
		mapVal_Keys_CArray[mapVal_ctr] = mapVal_k_ms
		mapVal_Values_CArray[mapVal_ctr] = (*C.QVariant)(mapVal_v.UnsafePointer())
		mapVal_ctr++
	}
	mapVal_mm := C.struct_miqt_map{
		len:    C.size_t(len(mapVal)),
		keys:   unsafe.Pointer(mapVal_Keys_CArray_ptr),
		values: unsafe.Pointer(mapVal_Values_CArray_ptr),
	}
	C.QWebHistoryItem_loadFromMap(this.h, mapVal_mm)
}

// Delete this object from C++ memory.
func (this *QWebHistoryItem) Delete() {
	C.QWebHistoryItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWebHistoryItem) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWebHistoryItem_delete((*C.QWebHistoryItem)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QWebHistory struct {
	h  *C.QWebHistory
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWebHistory) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QWebHistory) cPointer() *C.QWebHistory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebHistory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebHistory constructs the type using only CGO pointers.
func newQWebHistory(h *C.QWebHistory) *QWebHistory {
	if h == nil {
		return nil
	}

	return &QWebHistory{h: h}
}

// UnsafeNewQWebHistory constructs the type using only unsafe pointers.
func UnsafeNewQWebHistory(h unsafe.Pointer) *QWebHistory {
	return newQWebHistory((*C.QWebHistory)(h))
}

func (this *QWebHistory) Clear() {
	defer runtime.KeepAlive(this)
	C.QWebHistory_clear(this.h)
}

func (this *QWebHistory) Items() []QWebHistoryItem {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QWebHistory_items(this.h)
	_ret := make([]QWebHistoryItem, int(_ma.len))
	_outCast := unsafe.Slice((**C.QWebHistoryItem)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebHistoryItem(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebHistory) BackItems(maxItems int) []QWebHistoryItem {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QWebHistory_backItems(this.h, (C.int)(maxItems))
	_ret := make([]QWebHistoryItem, int(_ma.len))
	_outCast := unsafe.Slice((**C.QWebHistoryItem)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebHistoryItem(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebHistory) ForwardItems(maxItems int) []QWebHistoryItem {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QWebHistory_forwardItems(this.h, (C.int)(maxItems))
	_ret := make([]QWebHistoryItem, int(_ma.len))
	_outCast := unsafe.Slice((**C.QWebHistoryItem)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebHistoryItem(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebHistory) CanGoBack() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QWebHistory_canGoBack(this.h))
}

func (this *QWebHistory) CanGoForward() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QWebHistory_canGoForward(this.h))
}

func (this *QWebHistory) Back() {
	defer runtime.KeepAlive(this)
	C.QWebHistory_back(this.h)
}

func (this *QWebHistory) Forward() {
	defer runtime.KeepAlive(this)
	C.QWebHistory_forward(this.h)
}

func (this *QWebHistory) GoToItem(item *QWebHistoryItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(item)
	C.QWebHistory_goToItem(this.h, item.cPointer())
}

func (this *QWebHistory) BackItem() *QWebHistoryItem {
	defer runtime.KeepAlive(this)
	_goptr := newQWebHistoryItem(C.QWebHistory_backItem(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistory) CurrentItem() *QWebHistoryItem {
	defer runtime.KeepAlive(this)
	_goptr := newQWebHistoryItem(C.QWebHistory_currentItem(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistory) ForwardItem() *QWebHistoryItem {
	defer runtime.KeepAlive(this)
	_goptr := newQWebHistoryItem(C.QWebHistory_forwardItem(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistory) ItemAt(i int) *QWebHistoryItem {
	defer runtime.KeepAlive(this)
	_goptr := newQWebHistoryItem(C.QWebHistory_itemAt(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistory) CurrentItemIndex() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QWebHistory_currentItemIndex(this.h))
}

func (this *QWebHistory) Count() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QWebHistory_count(this.h))
}

func (this *QWebHistory) MaximumItemCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QWebHistory_maximumItemCount(this.h))
}

func (this *QWebHistory) SetMaximumItemCount(count int) {
	defer runtime.KeepAlive(this)
	C.QWebHistory_setMaximumItemCount(this.h, (C.int)(count))
}

func (this *QWebHistory) ToMap() map[string]qt.QVariant {
	defer runtime.KeepAlive(this)
	var _mm C.struct_miqt_map = C.QWebHistory_toMap(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_mm.keys)), int(_mm.len))
	_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(_mm.values)), int(_mm.len))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QWebHistory) LoadFromMap(mapVal map[string]qt.QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(mapVal)
	mapVal_Keys_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Keys_CArray_ptr))
	mapVal_Keys_CArray := unsafe.Slice(mapVal_Keys_CArray_ptr, len(mapVal))
	mapVal_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Values_CArray_ptr))
	mapVal_Values_CArray := unsafe.Slice(mapVal_Values_CArray_ptr, len(mapVal))
	mapVal_ctr := 0
	for mapVal_k, mapVal_v := range mapVal {
		mapVal_k_ms := C.struct_miqt_string{}
		mapVal_k_ms.data = C.CString(mapVal_k)
		mapVal_k_ms.len = C.size_t(len(mapVal_k))
		defer C.free(unsafe.Pointer(mapVal_k_ms.data))
		mapVal_Keys_CArray[mapVal_ctr] = mapVal_k_ms
		mapVal_Values_CArray[mapVal_ctr] = (*C.QVariant)(mapVal_v.UnsafePointer())
		mapVal_ctr++
	}
	mapVal_mm := C.struct_miqt_map{
		len:    C.size_t(len(mapVal)),
		keys:   unsafe.Pointer(mapVal_Keys_CArray_ptr),
		values: unsafe.Pointer(mapVal_Values_CArray_ptr),
	}
	C.QWebHistory_loadFromMap(this.h, mapVal_mm)
}

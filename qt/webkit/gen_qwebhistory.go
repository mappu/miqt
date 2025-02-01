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
	h *C.QWebHistoryItem
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

	return newQWebHistoryItem(C.QWebHistoryItem_new(other.cPointer()))
}

func (this *QWebHistoryItem) OperatorAssign(other *QWebHistoryItem) {
	C.QWebHistoryItem_operatorAssign(this.h, other.cPointer())
}

func (this *QWebHistoryItem) OriginalUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebHistoryItem_originalUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistoryItem) Url() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebHistoryItem_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistoryItem) Title() string {
	var _ms C.struct_miqt_string = C.QWebHistoryItem_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebHistoryItem) LastVisited() *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QWebHistoryItem_lastVisited(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistoryItem) Icon() *qt.QIcon {
	_goptr := qt.UnsafeNewQIcon(unsafe.Pointer(C.QWebHistoryItem_icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistoryItem) UserData() *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QWebHistoryItem_userData(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistoryItem) SetUserData(userData *qt.QVariant) {
	C.QWebHistoryItem_setUserData(this.h, (*C.QVariant)(userData.UnsafePointer()))
}

func (this *QWebHistoryItem) IsValid() bool {
	return (bool)(C.QWebHistoryItem_isValid(this.h))
}

func (this *QWebHistoryItem) ToMap() map[string]qt.QVariant {
	var _mm C.struct_miqt_map = C.QWebHistoryItem_toMap(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
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
	mapVal_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Keys_CArray))
	mapVal_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Values_CArray))
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
		keys:   unsafe.Pointer(mapVal_Keys_CArray),
		values: unsafe.Pointer(mapVal_Values_CArray),
	}
	C.QWebHistoryItem_loadFromMap(this.h, mapVal_mm)
}

// Delete this object from C++ memory.
func (this *QWebHistoryItem) Delete() {
	C.QWebHistoryItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebHistoryItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebHistoryItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebHistory struct {
	h *C.QWebHistory
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
	C.QWebHistory_clear(this.h)
}

func (this *QWebHistory) Items() []QWebHistoryItem {
	var _ma C.struct_miqt_array = C.QWebHistory_items(this.h)
	_ret := make([]QWebHistoryItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebHistoryItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebHistoryItem(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebHistory) BackItems(maxItems int) []QWebHistoryItem {
	var _ma C.struct_miqt_array = C.QWebHistory_backItems(this.h, (C.int)(maxItems))
	_ret := make([]QWebHistoryItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebHistoryItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebHistoryItem(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebHistory) ForwardItems(maxItems int) []QWebHistoryItem {
	var _ma C.struct_miqt_array = C.QWebHistory_forwardItems(this.h, (C.int)(maxItems))
	_ret := make([]QWebHistoryItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebHistoryItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebHistoryItem(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebHistory) CanGoBack() bool {
	return (bool)(C.QWebHistory_canGoBack(this.h))
}

func (this *QWebHistory) CanGoForward() bool {
	return (bool)(C.QWebHistory_canGoForward(this.h))
}

func (this *QWebHistory) Back() {
	C.QWebHistory_back(this.h)
}

func (this *QWebHistory) Forward() {
	C.QWebHistory_forward(this.h)
}

func (this *QWebHistory) GoToItem(item *QWebHistoryItem) {
	C.QWebHistory_goToItem(this.h, item.cPointer())
}

func (this *QWebHistory) BackItem() *QWebHistoryItem {
	_goptr := newQWebHistoryItem(C.QWebHistory_backItem(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistory) CurrentItem() *QWebHistoryItem {
	_goptr := newQWebHistoryItem(C.QWebHistory_currentItem(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistory) ForwardItem() *QWebHistoryItem {
	_goptr := newQWebHistoryItem(C.QWebHistory_forwardItem(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistory) ItemAt(i int) *QWebHistoryItem {
	_goptr := newQWebHistoryItem(C.QWebHistory_itemAt(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebHistory) CurrentItemIndex() int {
	return (int)(C.QWebHistory_currentItemIndex(this.h))
}

func (this *QWebHistory) Count() int {
	return (int)(C.QWebHistory_count(this.h))
}

func (this *QWebHistory) MaximumItemCount() int {
	return (int)(C.QWebHistory_maximumItemCount(this.h))
}

func (this *QWebHistory) SetMaximumItemCount(count int) {
	C.QWebHistory_setMaximumItemCount(this.h, (C.int)(count))
}

func (this *QWebHistory) ToMap() map[string]qt.QVariant {
	var _mm C.struct_miqt_map = C.QWebHistory_toMap(this.h)
	_ret := make(map[string]qt.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
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
	mapVal_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Keys_CArray))
	mapVal_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Values_CArray))
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
		keys:   unsafe.Pointer(mapVal_Keys_CArray),
		values: unsafe.Pointer(mapVal_Values_CArray),
	}
	C.QWebHistory_loadFromMap(this.h, mapVal_mm)
}

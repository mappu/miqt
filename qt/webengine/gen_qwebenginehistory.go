package webengine

/*

#include "gen_qwebenginehistory.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QWebEngineHistoryItem struct {
	h *C.QWebEngineHistoryItem
}

func (this *QWebEngineHistoryItem) cPointer() *C.QWebEngineHistoryItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineHistoryItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineHistoryItem constructs the type using only CGO pointers.
func newQWebEngineHistoryItem(h *C.QWebEngineHistoryItem) *QWebEngineHistoryItem {
	if h == nil {
		return nil
	}

	return &QWebEngineHistoryItem{h: h}
}

// UnsafeNewQWebEngineHistoryItem constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineHistoryItem(h unsafe.Pointer) *QWebEngineHistoryItem {
	return newQWebEngineHistoryItem((*C.QWebEngineHistoryItem)(h))
}

// NewQWebEngineHistoryItem constructs a new QWebEngineHistoryItem object.
func NewQWebEngineHistoryItem(other *QWebEngineHistoryItem) *QWebEngineHistoryItem {

	return newQWebEngineHistoryItem(C.QWebEngineHistoryItem_new(other.cPointer()))
}

func (this *QWebEngineHistoryItem) OperatorAssign(other *QWebEngineHistoryItem) {
	C.QWebEngineHistoryItem_OperatorAssign(this.h, other.cPointer())
}

func (this *QWebEngineHistoryItem) OriginalUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineHistoryItem_OriginalUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistoryItem) Url() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineHistoryItem_Url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistoryItem) Title() string {
	var _ms C.struct_miqt_string = C.QWebEngineHistoryItem_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineHistoryItem) LastVisited() *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QWebEngineHistoryItem_LastVisited(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistoryItem) IconUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineHistoryItem_IconUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistoryItem) IsValid() bool {
	return (bool)(C.QWebEngineHistoryItem_IsValid(this.h))
}

func (this *QWebEngineHistoryItem) Swap(other *QWebEngineHistoryItem) {
	C.QWebEngineHistoryItem_Swap(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebEngineHistoryItem) Delete() {
	C.QWebEngineHistoryItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineHistoryItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineHistoryItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebEngineHistory struct {
	h *C.QWebEngineHistory
}

func (this *QWebEngineHistory) cPointer() *C.QWebEngineHistory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineHistory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineHistory constructs the type using only CGO pointers.
func newQWebEngineHistory(h *C.QWebEngineHistory) *QWebEngineHistory {
	if h == nil {
		return nil
	}

	return &QWebEngineHistory{h: h}
}

// UnsafeNewQWebEngineHistory constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineHistory(h unsafe.Pointer) *QWebEngineHistory {
	return newQWebEngineHistory((*C.QWebEngineHistory)(h))
}

func (this *QWebEngineHistory) Clear() {
	C.QWebEngineHistory_Clear(this.h)
}

func (this *QWebEngineHistory) Items() []QWebEngineHistoryItem {
	var _ma C.struct_miqt_array = C.QWebEngineHistory_Items(this.h)
	_ret := make([]QWebEngineHistoryItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebEngineHistoryItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebEngineHistoryItem(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebEngineHistory) BackItems(maxItems int) []QWebEngineHistoryItem {
	var _ma C.struct_miqt_array = C.QWebEngineHistory_BackItems(this.h, (C.int)(maxItems))
	_ret := make([]QWebEngineHistoryItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebEngineHistoryItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebEngineHistoryItem(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebEngineHistory) ForwardItems(maxItems int) []QWebEngineHistoryItem {
	var _ma C.struct_miqt_array = C.QWebEngineHistory_ForwardItems(this.h, (C.int)(maxItems))
	_ret := make([]QWebEngineHistoryItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebEngineHistoryItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebEngineHistoryItem(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebEngineHistory) CanGoBack() bool {
	return (bool)(C.QWebEngineHistory_CanGoBack(this.h))
}

func (this *QWebEngineHistory) CanGoForward() bool {
	return (bool)(C.QWebEngineHistory_CanGoForward(this.h))
}

func (this *QWebEngineHistory) Back() {
	C.QWebEngineHistory_Back(this.h)
}

func (this *QWebEngineHistory) Forward() {
	C.QWebEngineHistory_Forward(this.h)
}

func (this *QWebEngineHistory) GoToItem(item *QWebEngineHistoryItem) {
	C.QWebEngineHistory_GoToItem(this.h, item.cPointer())
}

func (this *QWebEngineHistory) BackItem() *QWebEngineHistoryItem {
	_goptr := newQWebEngineHistoryItem(C.QWebEngineHistory_BackItem(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistory) CurrentItem() *QWebEngineHistoryItem {
	_goptr := newQWebEngineHistoryItem(C.QWebEngineHistory_CurrentItem(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistory) ForwardItem() *QWebEngineHistoryItem {
	_goptr := newQWebEngineHistoryItem(C.QWebEngineHistory_ForwardItem(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistory) ItemAt(i int) *QWebEngineHistoryItem {
	_goptr := newQWebEngineHistoryItem(C.QWebEngineHistory_ItemAt(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistory) CurrentItemIndex() int {
	return (int)(C.QWebEngineHistory_CurrentItemIndex(this.h))
}

func (this *QWebEngineHistory) Count() int {
	return (int)(C.QWebEngineHistory_Count(this.h))
}

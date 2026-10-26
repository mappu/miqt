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
	h  *C.QWebEngineHistoryItem
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWebEngineHistoryItem) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(other)

	return newQWebEngineHistoryItem(C.QWebEngineHistoryItem_new(other.cPointer()))
}

func (this *QWebEngineHistoryItem) OperatorAssign(other *QWebEngineHistoryItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QWebEngineHistoryItem_operatorAssign(this.h, other.cPointer())
}

func (this *QWebEngineHistoryItem) OriginalUrl() *qt.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineHistoryItem_originalUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistoryItem) Url() *qt.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineHistoryItem_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistoryItem) Title() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QWebEngineHistoryItem_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineHistoryItem) LastVisited() *qt.QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QWebEngineHistoryItem_lastVisited(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistoryItem) IconUrl() *qt.QUrl {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineHistoryItem_iconUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistoryItem) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QWebEngineHistoryItem_isValid(this.h))
}

func (this *QWebEngineHistoryItem) Swap(other *QWebEngineHistoryItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QWebEngineHistoryItem_swap(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebEngineHistoryItem) Delete() {
	C.QWebEngineHistoryItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWebEngineHistoryItem) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWebEngineHistoryItem_delete((*C.QWebEngineHistoryItem)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QWebEngineHistory struct {
	h  *C.QWebEngineHistory
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWebEngineHistory) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(this)
	C.QWebEngineHistory_clear(this.h)
}

func (this *QWebEngineHistory) Items() []QWebEngineHistoryItem {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QWebEngineHistory_items(this.h)
	_ret := make([]QWebEngineHistoryItem, int(_ma.len))
	_outCast := unsafe.Slice((**C.QWebEngineHistoryItem)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebEngineHistoryItem(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebEngineHistory) BackItems(maxItems int) []QWebEngineHistoryItem {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QWebEngineHistory_backItems(this.h, (C.int)(maxItems))
	_ret := make([]QWebEngineHistoryItem, int(_ma.len))
	_outCast := unsafe.Slice((**C.QWebEngineHistoryItem)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebEngineHistoryItem(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebEngineHistory) ForwardItems(maxItems int) []QWebEngineHistoryItem {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QWebEngineHistory_forwardItems(this.h, (C.int)(maxItems))
	_ret := make([]QWebEngineHistoryItem, int(_ma.len))
	_outCast := unsafe.Slice((**C.QWebEngineHistoryItem)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebEngineHistoryItem(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebEngineHistory) CanGoBack() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QWebEngineHistory_canGoBack(this.h))
}

func (this *QWebEngineHistory) CanGoForward() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QWebEngineHistory_canGoForward(this.h))
}

func (this *QWebEngineHistory) Back() {
	defer runtime.KeepAlive(this)
	C.QWebEngineHistory_back(this.h)
}

func (this *QWebEngineHistory) Forward() {
	defer runtime.KeepAlive(this)
	C.QWebEngineHistory_forward(this.h)
}

func (this *QWebEngineHistory) GoToItem(item *QWebEngineHistoryItem) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(item)
	C.QWebEngineHistory_goToItem(this.h, item.cPointer())
}

func (this *QWebEngineHistory) BackItem() *QWebEngineHistoryItem {
	defer runtime.KeepAlive(this)
	_goptr := newQWebEngineHistoryItem(C.QWebEngineHistory_backItem(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistory) CurrentItem() *QWebEngineHistoryItem {
	defer runtime.KeepAlive(this)
	_goptr := newQWebEngineHistoryItem(C.QWebEngineHistory_currentItem(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistory) ForwardItem() *QWebEngineHistoryItem {
	defer runtime.KeepAlive(this)
	_goptr := newQWebEngineHistoryItem(C.QWebEngineHistory_forwardItem(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistory) ItemAt(i int) *QWebEngineHistoryItem {
	defer runtime.KeepAlive(this)
	_goptr := newQWebEngineHistoryItem(C.QWebEngineHistory_itemAt(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistory) CurrentItemIndex() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QWebEngineHistory_currentItemIndex(this.h))
}

func (this *QWebEngineHistory) Count() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QWebEngineHistory_count(this.h))
}

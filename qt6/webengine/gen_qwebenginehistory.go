package webengine

/*

#include "gen_qwebenginehistory.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QWebEngineHistoryModel__Roles int

const (
	QWebEngineHistoryModel__UrlRole     QWebEngineHistoryModel__Roles = 256
	QWebEngineHistoryModel__TitleRole   QWebEngineHistoryModel__Roles = 257
	QWebEngineHistoryModel__OffsetRole  QWebEngineHistoryModel__Roles = 258
	QWebEngineHistoryModel__IconUrlRole QWebEngineHistoryModel__Roles = 259
)

type QWebEngineHistoryItem struct {
	h          *C.QWebEngineHistoryItem
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QWebEngineHistoryItem{h: (*C.QWebEngineHistoryItem)(h)}
}

// NewQWebEngineHistoryItem constructs a new QWebEngineHistoryItem object.
func NewQWebEngineHistoryItem(other *QWebEngineHistoryItem) *QWebEngineHistoryItem {
	var outptr_QWebEngineHistoryItem *C.QWebEngineHistoryItem = nil

	C.QWebEngineHistoryItem_new(other.cPointer(), &outptr_QWebEngineHistoryItem)
	ret := newQWebEngineHistoryItem(outptr_QWebEngineHistoryItem)
	ret.isSubclass = true
	return ret
}

func (this *QWebEngineHistoryItem) OperatorAssign(other *QWebEngineHistoryItem) {
	C.QWebEngineHistoryItem_OperatorAssign(this.h, other.cPointer())
}

func (this *QWebEngineHistoryItem) OriginalUrl() *qt6.QUrl {
	_ret := C.QWebEngineHistoryItem_OriginalUrl(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistoryItem) Url() *qt6.QUrl {
	_ret := C.QWebEngineHistoryItem_Url(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistoryItem) Title() string {
	var _ms C.struct_miqt_string = C.QWebEngineHistoryItem_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineHistoryItem) LastVisited() *qt6.QDateTime {
	_ret := C.QWebEngineHistoryItem_LastVisited(this.h)
	_goptr := qt6.UnsafeNewQDateTime(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistoryItem) IconUrl() *qt6.QUrl {
	_ret := C.QWebEngineHistoryItem_IconUrl(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
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
	C.QWebEngineHistoryItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineHistoryItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineHistoryItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebEngineHistoryModel struct {
	h          *C.QWebEngineHistoryModel
	isSubclass bool
	*qt6.QAbstractListModel
}

func (this *QWebEngineHistoryModel) cPointer() *C.QWebEngineHistoryModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineHistoryModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineHistoryModel constructs the type using only CGO pointers.
func newQWebEngineHistoryModel(h *C.QWebEngineHistoryModel, h_QAbstractListModel *C.QAbstractListModel, h_QAbstractItemModel *C.QAbstractItemModel, h_QObject *C.QObject) *QWebEngineHistoryModel {
	if h == nil {
		return nil
	}
	return &QWebEngineHistoryModel{h: h,
		QAbstractListModel: qt6.UnsafeNewQAbstractListModel(unsafe.Pointer(h_QAbstractListModel), unsafe.Pointer(h_QAbstractItemModel), unsafe.Pointer(h_QObject))}
}

// UnsafeNewQWebEngineHistoryModel constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineHistoryModel(h unsafe.Pointer, h_QAbstractListModel unsafe.Pointer, h_QAbstractItemModel unsafe.Pointer, h_QObject unsafe.Pointer) *QWebEngineHistoryModel {
	if h == nil {
		return nil
	}

	return &QWebEngineHistoryModel{h: (*C.QWebEngineHistoryModel)(h),
		QAbstractListModel: qt6.UnsafeNewQAbstractListModel(h_QAbstractListModel, h_QAbstractItemModel, h_QObject)}
}

func (this *QWebEngineHistoryModel) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineHistoryModel_MetaObject(this.h)))
}

func (this *QWebEngineHistoryModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineHistoryModel_Metacast(this.h, param1_Cstring))
}

func QWebEngineHistoryModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineHistoryModel_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineHistoryModel) RowCount(parent *qt6.QModelIndex) int {
	return (int)(C.QWebEngineHistoryModel_RowCount(this.h, (*C.QModelIndex)(parent.UnsafePointer())))
}

func (this *QWebEngineHistoryModel) Data(index *qt6.QModelIndex, role int) *qt6.QVariant {
	_ret := C.QWebEngineHistoryModel_Data(this.h, (*C.QModelIndex)(index.UnsafePointer()), (C.int)(role))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistoryModel) RoleNames() map[int][]byte {
	var _mm C.struct_miqt_map = C.QWebEngineHistoryModel_RoleNames(this.h)
	_ret := make(map[int][]byte, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		var _hashval_bytearray C.struct_miqt_string = _Values[i]
		_hashval_ret := C.GoBytes(unsafe.Pointer(_hashval_bytearray.data), C.int(int64(_hashval_bytearray.len)))
		C.free(unsafe.Pointer(_hashval_bytearray.data))
		_entry_Value := _hashval_ret
		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QWebEngineHistoryModel) Reset() {
	C.QWebEngineHistoryModel_Reset(this.h)
}

func QWebEngineHistoryModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineHistoryModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineHistoryModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineHistoryModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

type QWebEngineHistory struct {
	h          *C.QWebEngineHistory
	isSubclass bool
	*qt6.QObject
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
func newQWebEngineHistory(h *C.QWebEngineHistory, h_QObject *C.QObject) *QWebEngineHistory {
	if h == nil {
		return nil
	}
	return &QWebEngineHistory{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQWebEngineHistory constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineHistory(h unsafe.Pointer, h_QObject unsafe.Pointer) *QWebEngineHistory {
	if h == nil {
		return nil
	}

	return &QWebEngineHistory{h: (*C.QWebEngineHistory)(h),
		QObject: qt6.UnsafeNewQObject(h_QObject)}
}

func (this *QWebEngineHistory) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineHistory_MetaObject(this.h)))
}

func (this *QWebEngineHistory) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineHistory_Metacast(this.h, param1_Cstring))
}

func QWebEngineHistory_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineHistory_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineHistory) Clear() {
	C.QWebEngineHistory_Clear(this.h)
}

func (this *QWebEngineHistory) Items() []QWebEngineHistoryItem {
	var _ma C.struct_miqt_array = C.QWebEngineHistory_Items(this.h)
	_ret := make([]QWebEngineHistoryItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebEngineHistoryItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQWebEngineHistoryItem(_lv_ret)
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
		_lv_ret := _outCast[i]
		_lv_goptr := newQWebEngineHistoryItem(_lv_ret)
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
		_lv_ret := _outCast[i]
		_lv_goptr := newQWebEngineHistoryItem(_lv_ret)
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
	_ret := C.QWebEngineHistory_BackItem(this.h)
	_goptr := newQWebEngineHistoryItem(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistory) CurrentItem() *QWebEngineHistoryItem {
	_ret := C.QWebEngineHistory_CurrentItem(this.h)
	_goptr := newQWebEngineHistoryItem(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistory) ForwardItem() *QWebEngineHistoryItem {
	_ret := C.QWebEngineHistory_ForwardItem(this.h)
	_goptr := newQWebEngineHistoryItem(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistory) ItemAt(i int) *QWebEngineHistoryItem {
	_ret := C.QWebEngineHistory_ItemAt(this.h, (C.int)(i))
	_goptr := newQWebEngineHistoryItem(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineHistory) CurrentItemIndex() int {
	return (int)(C.QWebEngineHistory_CurrentItemIndex(this.h))
}

func (this *QWebEngineHistory) Count() int {
	return (int)(C.QWebEngineHistory_Count(this.h))
}

func (this *QWebEngineHistory) ItemsModel() *QWebEngineHistoryModel {
	return UnsafeNewQWebEngineHistoryModel(unsafe.Pointer(C.QWebEngineHistory_ItemsModel(this.h)), nil, nil, nil)
}

func (this *QWebEngineHistory) BackItemsModel() *QWebEngineHistoryModel {
	return UnsafeNewQWebEngineHistoryModel(unsafe.Pointer(C.QWebEngineHistory_BackItemsModel(this.h)), nil, nil, nil)
}

func (this *QWebEngineHistory) ForwardItemsModel() *QWebEngineHistoryModel {
	return UnsafeNewQWebEngineHistoryModel(unsafe.Pointer(C.QWebEngineHistory_ForwardItemsModel(this.h)), nil, nil, nil)
}

func QWebEngineHistory_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineHistory_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineHistory_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineHistory_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

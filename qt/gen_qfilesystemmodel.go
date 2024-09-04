package qt

/*

#include "gen_qfilesystemmodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFileSystemModel__Roles int

const (
	QFileSystemModel__Roles__FileIconRole    QFileSystemModel__Roles = 1
	QFileSystemModel__Roles__FilePathRole    QFileSystemModel__Roles = 257
	QFileSystemModel__Roles__FileNameRole    QFileSystemModel__Roles = 258
	QFileSystemModel__Roles__FilePermissions QFileSystemModel__Roles = 259
)

type QFileSystemModel__Option int

const (
	QFileSystemModel__Option__DontWatchForChanges         QFileSystemModel__Option = 1
	QFileSystemModel__Option__DontResolveSymlinks         QFileSystemModel__Option = 2
	QFileSystemModel__Option__DontUseCustomDirectoryIcons QFileSystemModel__Option = 4
)

type QFileSystemModel struct {
	h *C.QFileSystemModel
	*QAbstractItemModel
}

func (this *QFileSystemModel) cPointer() *C.QFileSystemModel {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFileSystemModel(h *C.QFileSystemModel) *QFileSystemModel {
	if h == nil {
		return nil
	}
	return &QFileSystemModel{h: h, QAbstractItemModel: newQAbstractItemModel_U(unsafe.Pointer(h))}
}

func newQFileSystemModel_U(h unsafe.Pointer) *QFileSystemModel {
	return newQFileSystemModel((*C.QFileSystemModel)(h))
}

// NewQFileSystemModel constructs a new QFileSystemModel object.
func NewQFileSystemModel() *QFileSystemModel {
	ret := C.QFileSystemModel_new()
	return newQFileSystemModel(ret)
}

// NewQFileSystemModel2 constructs a new QFileSystemModel object.
func NewQFileSystemModel2(parent *QObject) *QFileSystemModel {
	ret := C.QFileSystemModel_new2(parent.cPointer())
	return newQFileSystemModel(ret)
}

func (this *QFileSystemModel) MetaObject() *QMetaObject {
	ret := C.QFileSystemModel_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QFileSystemModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemModel_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileSystemModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemModel_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemModel) RootPathChanged(newPath string) {
	newPath_Cstring := C.CString(newPath)
	defer C.free(unsafe.Pointer(newPath_Cstring))
	C.QFileSystemModel_RootPathChanged(this.h, newPath_Cstring, C.size_t(len(newPath)))
}

func (this *QFileSystemModel) OnRootPathChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFileSystemModel_connect_RootPathChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFileSystemModel) FileRenamed(path string, oldName string, newName string) {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	oldName_Cstring := C.CString(oldName)
	defer C.free(unsafe.Pointer(oldName_Cstring))
	newName_Cstring := C.CString(newName)
	defer C.free(unsafe.Pointer(newName_Cstring))
	C.QFileSystemModel_FileRenamed(this.h, path_Cstring, C.size_t(len(path)), oldName_Cstring, C.size_t(len(oldName)), newName_Cstring, C.size_t(len(newName)))
}

func (this *QFileSystemModel) OnFileRenamed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFileSystemModel_connect_FileRenamed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFileSystemModel) DirectoryLoaded(path string) {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	C.QFileSystemModel_DirectoryLoaded(this.h, path_Cstring, C.size_t(len(path)))
}

func (this *QFileSystemModel) OnDirectoryLoaded(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFileSystemModel_connect_DirectoryLoaded(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFileSystemModel) Index(row int, column int) *QModelIndex {
	ret := C.QFileSystemModel_Index(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) IndexWithPath(path string) *QModelIndex {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	ret := C.QFileSystemModel_IndexWithPath(this.h, path_Cstring, C.size_t(len(path)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) Parent(child *QModelIndex) *QModelIndex {
	ret := C.QFileSystemModel_Parent(this.h, child.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	ret := C.QFileSystemModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) HasChildren() bool {
	ret := C.QFileSystemModel_HasChildren(this.h)
	return (bool)(ret)
}

func (this *QFileSystemModel) CanFetchMore(parent *QModelIndex) bool {
	ret := C.QFileSystemModel_CanFetchMore(this.h, parent.cPointer())
	return (bool)(ret)
}

func (this *QFileSystemModel) FetchMore(parent *QModelIndex) {
	C.QFileSystemModel_FetchMore(this.h, parent.cPointer())
}

func (this *QFileSystemModel) RowCount() int {
	ret := C.QFileSystemModel_RowCount(this.h)
	return (int)(ret)
}

func (this *QFileSystemModel) ColumnCount() int {
	ret := C.QFileSystemModel_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QFileSystemModel) MyComputer() *QVariant {
	ret := C.QFileSystemModel_MyComputer(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) Data(index *QModelIndex) *QVariant {
	ret := C.QFileSystemModel_Data(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) SetData(index *QModelIndex, value *QVariant) bool {
	ret := C.QFileSystemModel_SetData(this.h, index.cPointer(), value.cPointer())
	return (bool)(ret)
}

func (this *QFileSystemModel) HeaderData(section int, orientation Orientation) *QVariant {
	ret := C.QFileSystemModel_HeaderData(this.h, (C.int)(section), (C.uintptr_t)(orientation))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) Flags(index *QModelIndex) int {
	ret := C.QFileSystemModel_Flags(this.h, index.cPointer())
	return (int)(ret)
}

func (this *QFileSystemModel) Sort(column int) {
	C.QFileSystemModel_Sort(this.h, (C.int)(column))
}

func (this *QFileSystemModel) MimeTypes() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileSystemModel_MimeTypes(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemModel) MimeData(indexes []QModelIndex) *QMimeData {
	// For the C ABI, malloc a C array of raw pointers
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	ret := C.QFileSystemModel_MimeData(this.h, &indexes_CArray[0], C.size_t(len(indexes)))
	return newQMimeData_U(unsafe.Pointer(ret))
}

func (this *QFileSystemModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	ret := C.QFileSystemModel_DropMimeData(this.h, data.cPointer(), (C.uintptr_t)(action), (C.int)(row), (C.int)(column), parent.cPointer())
	return (bool)(ret)
}

func (this *QFileSystemModel) SupportedDropActions() int {
	ret := C.QFileSystemModel_SupportedDropActions(this.h)
	return (int)(ret)
}

func (this *QFileSystemModel) SetRootPath(path string) *QModelIndex {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	ret := C.QFileSystemModel_SetRootPath(this.h, path_Cstring, C.size_t(len(path)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) RootPath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemModel_RootPath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemModel) RootDirectory() *QDir {
	ret := C.QFileSystemModel_RootDirectory(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDir(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDir) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) SetIconProvider(provider *QFileIconProvider) {
	C.QFileSystemModel_SetIconProvider(this.h, provider.cPointer())
}

func (this *QFileSystemModel) IconProvider() *QFileIconProvider {
	ret := C.QFileSystemModel_IconProvider(this.h)
	return newQFileIconProvider_U(unsafe.Pointer(ret))
}

func (this *QFileSystemModel) SetFilter(filters int) {
	C.QFileSystemModel_SetFilter(this.h, (C.int)(filters))
}

func (this *QFileSystemModel) Filter() int {
	ret := C.QFileSystemModel_Filter(this.h)
	return (int)(ret)
}

func (this *QFileSystemModel) SetResolveSymlinks(enable bool) {
	C.QFileSystemModel_SetResolveSymlinks(this.h, (C.bool)(enable))
}

func (this *QFileSystemModel) ResolveSymlinks() bool {
	ret := C.QFileSystemModel_ResolveSymlinks(this.h)
	return (bool)(ret)
}

func (this *QFileSystemModel) SetReadOnly(enable bool) {
	C.QFileSystemModel_SetReadOnly(this.h, (C.bool)(enable))
}

func (this *QFileSystemModel) IsReadOnly() bool {
	ret := C.QFileSystemModel_IsReadOnly(this.h)
	return (bool)(ret)
}

func (this *QFileSystemModel) SetNameFilterDisables(enable bool) {
	C.QFileSystemModel_SetNameFilterDisables(this.h, (C.bool)(enable))
}

func (this *QFileSystemModel) NameFilterDisables() bool {
	ret := C.QFileSystemModel_NameFilterDisables(this.h)
	return (bool)(ret)
}

func (this *QFileSystemModel) SetNameFilters(filters []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	filters_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(filters))))
	filters_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(filters))))
	defer C.free(unsafe.Pointer(filters_CArray))
	defer C.free(unsafe.Pointer(filters_Lengths))
	for i := range filters {
		single_cstring := C.CString(filters[i])
		defer C.free(unsafe.Pointer(single_cstring))
		filters_CArray[i] = single_cstring
		filters_Lengths[i] = (C.uint64_t)(len(filters[i]))
	}
	C.QFileSystemModel_SetNameFilters(this.h, &filters_CArray[0], &filters_Lengths[0], C.size_t(len(filters)))
}

func (this *QFileSystemModel) NameFilters() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileSystemModel_NameFilters(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemModel) SetOption(option QFileSystemModel__Option) {
	C.QFileSystemModel_SetOption(this.h, (C.uintptr_t)(option))
}

func (this *QFileSystemModel) TestOption(option QFileSystemModel__Option) bool {
	ret := C.QFileSystemModel_TestOption(this.h, (C.uintptr_t)(option))
	return (bool)(ret)
}

func (this *QFileSystemModel) SetOptions(options int) {
	C.QFileSystemModel_SetOptions(this.h, (C.int)(options))
}

func (this *QFileSystemModel) Options() int {
	ret := C.QFileSystemModel_Options(this.h)
	return (int)(ret)
}

func (this *QFileSystemModel) FilePath(index *QModelIndex) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemModel_FilePath(this.h, index.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemModel) IsDir(index *QModelIndex) bool {
	ret := C.QFileSystemModel_IsDir(this.h, index.cPointer())
	return (bool)(ret)
}

func (this *QFileSystemModel) Size(index *QModelIndex) int64 {
	ret := C.QFileSystemModel_Size(this.h, index.cPointer())
	return (int64)(ret)
}

func (this *QFileSystemModel) Type(index *QModelIndex) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemModel_Type(this.h, index.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemModel) LastModified(index *QModelIndex) *QDateTime {
	ret := C.QFileSystemModel_LastModified(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDateTime(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDateTime) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) Mkdir(parent *QModelIndex, name string) *QModelIndex {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QFileSystemModel_Mkdir(this.h, parent.cPointer(), name_Cstring, C.size_t(len(name)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) Rmdir(index *QModelIndex) bool {
	ret := C.QFileSystemModel_Rmdir(this.h, index.cPointer())
	return (bool)(ret)
}

func (this *QFileSystemModel) FileName(index *QModelIndex) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemModel_FileName(this.h, index.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemModel) FileIcon(index *QModelIndex) *QIcon {
	ret := C.QFileSystemModel_FileIcon(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) Permissions(index *QModelIndex) int {
	ret := C.QFileSystemModel_Permissions(this.h, index.cPointer())
	return (int)(ret)
}

func (this *QFileSystemModel) FileInfo(index *QModelIndex) *QFileInfo {
	ret := C.QFileSystemModel_FileInfo(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFileInfo(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFileInfo) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) Remove(index *QModelIndex) bool {
	ret := C.QFileSystemModel_Remove(this.h, index.cPointer())
	return (bool)(ret)
}

func QFileSystemModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemModel_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileSystemModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemModel_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileSystemModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemModel_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileSystemModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	ret := C.QFileSystemModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) Index2(path string, column int) *QModelIndex {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	ret := C.QFileSystemModel_Index2(this.h, path_Cstring, C.size_t(len(path)), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) HasChildren1(parent *QModelIndex) bool {
	ret := C.QFileSystemModel_HasChildren1(this.h, parent.cPointer())
	return (bool)(ret)
}

func (this *QFileSystemModel) RowCount1(parent *QModelIndex) int {
	ret := C.QFileSystemModel_RowCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QFileSystemModel) ColumnCount1(parent *QModelIndex) int {
	ret := C.QFileSystemModel_ColumnCount1(this.h, parent.cPointer())
	return (int)(ret)
}

func (this *QFileSystemModel) MyComputer1(role int) *QVariant {
	ret := C.QFileSystemModel_MyComputer1(this.h, (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) Data2(index *QModelIndex, role int) *QVariant {
	ret := C.QFileSystemModel_Data2(this.h, index.cPointer(), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	ret := C.QFileSystemModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role))
	return (bool)(ret)
}

func (this *QFileSystemModel) HeaderData3(section int, orientation Orientation, role int) *QVariant {
	ret := C.QFileSystemModel_HeaderData3(this.h, (C.int)(section), (C.uintptr_t)(orientation), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileSystemModel) Sort2(column int, order SortOrder) {
	C.QFileSystemModel_Sort2(this.h, (C.int)(column), (C.uintptr_t)(order))
}

func (this *QFileSystemModel) SetOption2(option QFileSystemModel__Option, on bool) {
	C.QFileSystemModel_SetOption2(this.h, (C.uintptr_t)(option), (C.bool)(on))
}

func (this *QFileSystemModel) Delete() {
	C.QFileSystemModel_Delete(this.h)
}

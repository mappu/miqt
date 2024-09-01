package qt

/*

#include "gen_qfiledialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFileDialog struct {
	h *C.QFileDialog
	*QDialog
}

func (this *QFileDialog) cPointer() *C.QFileDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFileDialog(h *C.QFileDialog) *QFileDialog {
	if h == nil {
		return nil
	}
	return &QFileDialog{h: h, QDialog: newQDialog_U(unsafe.Pointer(h))}
}

func newQFileDialog_U(h unsafe.Pointer) *QFileDialog {
	return newQFileDialog((*C.QFileDialog)(h))
}

// NewQFileDialog constructs a new QFileDialog object.
func NewQFileDialog(parent *QWidget, f int) *QFileDialog {
	ret := C.QFileDialog_new(parent.cPointer(), (C.int)(f))
	return newQFileDialog(ret)
}

// NewQFileDialog2 constructs a new QFileDialog object.
func NewQFileDialog2() *QFileDialog {
	ret := C.QFileDialog_new2()
	return newQFileDialog(ret)
}

// NewQFileDialog3 constructs a new QFileDialog object.
func NewQFileDialog3(parent *QWidget) *QFileDialog {
	ret := C.QFileDialog_new3(parent.cPointer())
	return newQFileDialog(ret)
}

// NewQFileDialog4 constructs a new QFileDialog object.
func NewQFileDialog4(parent *QWidget, caption string) *QFileDialog {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	ret := C.QFileDialog_new4(parent.cPointer(), caption_Cstring, C.ulong(len(caption)))
	return newQFileDialog(ret)
}

// NewQFileDialog5 constructs a new QFileDialog object.
func NewQFileDialog5(parent *QWidget, caption string, directory string) *QFileDialog {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	directory_Cstring := C.CString(directory)
	defer C.free(unsafe.Pointer(directory_Cstring))
	ret := C.QFileDialog_new5(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), directory_Cstring, C.ulong(len(directory)))
	return newQFileDialog(ret)
}

// NewQFileDialog6 constructs a new QFileDialog object.
func NewQFileDialog6(parent *QWidget, caption string, directory string, filter string) *QFileDialog {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	directory_Cstring := C.CString(directory)
	defer C.free(unsafe.Pointer(directory_Cstring))
	filter_Cstring := C.CString(filter)
	defer C.free(unsafe.Pointer(filter_Cstring))
	ret := C.QFileDialog_new6(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), directory_Cstring, C.ulong(len(directory)), filter_Cstring, C.ulong(len(filter)))
	return newQFileDialog(ret)
}

func (this *QFileDialog) MetaObject() *QMetaObject {
	ret := C.QFileDialog_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QFileDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SetDirectory(directory string) {
	directory_Cstring := C.CString(directory)
	defer C.free(unsafe.Pointer(directory_Cstring))
	C.QFileDialog_SetDirectory(this.h, directory_Cstring, C.ulong(len(directory)))
}

func (this *QFileDialog) SetDirectoryWithDirectory(directory *QDir) {
	C.QFileDialog_SetDirectoryWithDirectory(this.h, directory.cPointer())
}

func (this *QFileDialog) Directory() *QDir {
	ret := C.QFileDialog_Directory(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDir(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDir) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileDialog) SetDirectoryUrl(directory *QUrl) {
	C.QFileDialog_SetDirectoryUrl(this.h, directory.cPointer())
}

func (this *QFileDialog) DirectoryUrl() *QUrl {
	ret := C.QFileDialog_DirectoryUrl(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileDialog) SelectFile(filename string) {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	C.QFileDialog_SelectFile(this.h, filename_Cstring, C.ulong(len(filename)))
}

func (this *QFileDialog) SelectedFiles() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileDialog_SelectedFiles(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SelectUrl(url *QUrl) {
	C.QFileDialog_SelectUrl(this.h, url.cPointer())
}

func (this *QFileDialog) SelectedUrls() []QUrl {
	var _out **C.QUrl = nil
	var _out_len C.size_t = 0
	C.QFileDialog_SelectedUrls(this.h, &_out, &_out_len)
	ret := make([]QUrl, int(_out_len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQUrl(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SetNameFilterDetailsVisible(enabled bool) {
	C.QFileDialog_SetNameFilterDetailsVisible(this.h, (C.bool)(enabled))
}

func (this *QFileDialog) IsNameFilterDetailsVisible() bool {
	ret := C.QFileDialog_IsNameFilterDetailsVisible(this.h)
	return (bool)(ret)
}

func (this *QFileDialog) SetNameFilter(filter string) {
	filter_Cstring := C.CString(filter)
	defer C.free(unsafe.Pointer(filter_Cstring))
	C.QFileDialog_SetNameFilter(this.h, filter_Cstring, C.ulong(len(filter)))
}

func (this *QFileDialog) SetNameFilters(filters []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	filters_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(filters))))
	filters_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(filters))))
	defer C.free(unsafe.Pointer(filters_CArray))
	defer C.free(unsafe.Pointer(filters_Lengths))
	for i := range filters {
		single_cstring := C.CString(filters[i])
		defer C.free(unsafe.Pointer(single_cstring))
		filters_CArray[i] = single_cstring
		filters_Lengths[i] = (C.size_t)(len(filters[i]))
	}
	C.QFileDialog_SetNameFilters(this.h, &filters_CArray[0], &filters_Lengths[0], C.ulong(len(filters)))
}

func (this *QFileDialog) NameFilters() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileDialog_NameFilters(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SelectNameFilter(filter string) {
	filter_Cstring := C.CString(filter)
	defer C.free(unsafe.Pointer(filter_Cstring))
	C.QFileDialog_SelectNameFilter(this.h, filter_Cstring, C.ulong(len(filter)))
}

func (this *QFileDialog) SelectedMimeTypeFilter() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_SelectedMimeTypeFilter(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SelectedNameFilter() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_SelectedNameFilter(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SetMimeTypeFilters(filters []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	filters_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(filters))))
	filters_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(filters))))
	defer C.free(unsafe.Pointer(filters_CArray))
	defer C.free(unsafe.Pointer(filters_Lengths))
	for i := range filters {
		single_cstring := C.CString(filters[i])
		defer C.free(unsafe.Pointer(single_cstring))
		filters_CArray[i] = single_cstring
		filters_Lengths[i] = (C.size_t)(len(filters[i]))
	}
	C.QFileDialog_SetMimeTypeFilters(this.h, &filters_CArray[0], &filters_Lengths[0], C.ulong(len(filters)))
}

func (this *QFileDialog) MimeTypeFilters() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileDialog_MimeTypeFilters(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SelectMimeTypeFilter(filter string) {
	filter_Cstring := C.CString(filter)
	defer C.free(unsafe.Pointer(filter_Cstring))
	C.QFileDialog_SelectMimeTypeFilter(this.h, filter_Cstring, C.ulong(len(filter)))
}

func (this *QFileDialog) Filter() int {
	ret := C.QFileDialog_Filter(this.h)
	return (int)(ret)
}

func (this *QFileDialog) SetFilter(filters int) {
	C.QFileDialog_SetFilter(this.h, (C.int)(filters))
}

func (this *QFileDialog) SetViewMode(mode uintptr) {
	C.QFileDialog_SetViewMode(this.h, (C.uintptr_t)(mode))
}

func (this *QFileDialog) ViewMode() uintptr {
	ret := C.QFileDialog_ViewMode(this.h)
	return (uintptr)(ret)
}

func (this *QFileDialog) SetFileMode(mode uintptr) {
	C.QFileDialog_SetFileMode(this.h, (C.uintptr_t)(mode))
}

func (this *QFileDialog) FileMode() uintptr {
	ret := C.QFileDialog_FileMode(this.h)
	return (uintptr)(ret)
}

func (this *QFileDialog) SetAcceptMode(mode uintptr) {
	C.QFileDialog_SetAcceptMode(this.h, (C.uintptr_t)(mode))
}

func (this *QFileDialog) AcceptMode() uintptr {
	ret := C.QFileDialog_AcceptMode(this.h)
	return (uintptr)(ret)
}

func (this *QFileDialog) SetReadOnly(enabled bool) {
	C.QFileDialog_SetReadOnly(this.h, (C.bool)(enabled))
}

func (this *QFileDialog) IsReadOnly() bool {
	ret := C.QFileDialog_IsReadOnly(this.h)
	return (bool)(ret)
}

func (this *QFileDialog) SetResolveSymlinks(enabled bool) {
	C.QFileDialog_SetResolveSymlinks(this.h, (C.bool)(enabled))
}

func (this *QFileDialog) ResolveSymlinks() bool {
	ret := C.QFileDialog_ResolveSymlinks(this.h)
	return (bool)(ret)
}

func (this *QFileDialog) SetSidebarUrls(urls []QUrl) {
	// For the C ABI, malloc a C array of raw pointers
	urls_CArray := (*[0xffff]*C.QUrl)(C.malloc(C.ulong(8 * len(urls))))
	defer C.free(unsafe.Pointer(urls_CArray))
	for i := range urls {
		urls_CArray[i] = urls[i].cPointer()
	}
	C.QFileDialog_SetSidebarUrls(this.h, &urls_CArray[0], C.ulong(len(urls)))
}

func (this *QFileDialog) SidebarUrls() []QUrl {
	var _out **C.QUrl = nil
	var _out_len C.size_t = 0
	C.QFileDialog_SidebarUrls(this.h, &_out, &_out_len)
	ret := make([]QUrl, int(_out_len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQUrl(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SaveState() *QByteArray {
	ret := C.QFileDialog_SaveState(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileDialog) RestoreState(state *QByteArray) bool {
	ret := C.QFileDialog_RestoreState(this.h, state.cPointer())
	return (bool)(ret)
}

func (this *QFileDialog) SetConfirmOverwrite(enabled bool) {
	C.QFileDialog_SetConfirmOverwrite(this.h, (C.bool)(enabled))
}

func (this *QFileDialog) ConfirmOverwrite() bool {
	ret := C.QFileDialog_ConfirmOverwrite(this.h)
	return (bool)(ret)
}

func (this *QFileDialog) SetDefaultSuffix(suffix string) {
	suffix_Cstring := C.CString(suffix)
	defer C.free(unsafe.Pointer(suffix_Cstring))
	C.QFileDialog_SetDefaultSuffix(this.h, suffix_Cstring, C.ulong(len(suffix)))
}

func (this *QFileDialog) DefaultSuffix() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_DefaultSuffix(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SetHistory(paths []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	paths_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(paths))))
	paths_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	defer C.free(unsafe.Pointer(paths_Lengths))
	for i := range paths {
		single_cstring := C.CString(paths[i])
		defer C.free(unsafe.Pointer(single_cstring))
		paths_CArray[i] = single_cstring
		paths_Lengths[i] = (C.size_t)(len(paths[i]))
	}
	C.QFileDialog_SetHistory(this.h, &paths_CArray[0], &paths_Lengths[0], C.ulong(len(paths)))
}

func (this *QFileDialog) History() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileDialog_History(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SetItemDelegate(delegate *QAbstractItemDelegate) {
	C.QFileDialog_SetItemDelegate(this.h, delegate.cPointer())
}

func (this *QFileDialog) ItemDelegate() *QAbstractItemDelegate {
	ret := C.QFileDialog_ItemDelegate(this.h)
	return newQAbstractItemDelegate_U(unsafe.Pointer(ret))
}

func (this *QFileDialog) SetIconProvider(provider *QFileIconProvider) {
	C.QFileDialog_SetIconProvider(this.h, provider.cPointer())
}

func (this *QFileDialog) IconProvider() *QFileIconProvider {
	ret := C.QFileDialog_IconProvider(this.h)
	return newQFileIconProvider_U(unsafe.Pointer(ret))
}

func (this *QFileDialog) SetLabelText(label uintptr, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QFileDialog_SetLabelText(this.h, (C.uintptr_t)(label), text_Cstring, C.ulong(len(text)))
}

func (this *QFileDialog) LabelText(label uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_LabelText(this.h, (C.uintptr_t)(label), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SetSupportedSchemes(schemes []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	schemes_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(schemes))))
	schemes_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(schemes))))
	defer C.free(unsafe.Pointer(schemes_CArray))
	defer C.free(unsafe.Pointer(schemes_Lengths))
	for i := range schemes {
		single_cstring := C.CString(schemes[i])
		defer C.free(unsafe.Pointer(single_cstring))
		schemes_CArray[i] = single_cstring
		schemes_Lengths[i] = (C.size_t)(len(schemes[i]))
	}
	C.QFileDialog_SetSupportedSchemes(this.h, &schemes_CArray[0], &schemes_Lengths[0], C.ulong(len(schemes)))
}

func (this *QFileDialog) SupportedSchemes() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileDialog_SupportedSchemes(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SetProxyModel(model *QAbstractProxyModel) {
	C.QFileDialog_SetProxyModel(this.h, model.cPointer())
}

func (this *QFileDialog) ProxyModel() *QAbstractProxyModel {
	ret := C.QFileDialog_ProxyModel(this.h)
	return newQAbstractProxyModel_U(unsafe.Pointer(ret))
}

func (this *QFileDialog) SetOption(option uintptr) {
	C.QFileDialog_SetOption(this.h, (C.uintptr_t)(option))
}

func (this *QFileDialog) TestOption(option uintptr) bool {
	ret := C.QFileDialog_TestOption(this.h, (C.uintptr_t)(option))
	return (bool)(ret)
}

func (this *QFileDialog) SetOptions(options int) {
	C.QFileDialog_SetOptions(this.h, (C.int)(options))
}

func (this *QFileDialog) Options() int {
	ret := C.QFileDialog_Options(this.h)
	return (int)(ret)
}

func (this *QFileDialog) SetVisible(visible bool) {
	C.QFileDialog_SetVisible(this.h, (C.bool)(visible))
}

func (this *QFileDialog) FileSelected(file string) {
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	C.QFileDialog_FileSelected(this.h, file_Cstring, C.ulong(len(file)))
}

func (this *QFileDialog) OnFileSelected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFileDialog_connect_FileSelected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFileDialog) FilesSelected(files []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	files_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(files))))
	files_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(files))))
	defer C.free(unsafe.Pointer(files_CArray))
	defer C.free(unsafe.Pointer(files_Lengths))
	for i := range files {
		single_cstring := C.CString(files[i])
		defer C.free(unsafe.Pointer(single_cstring))
		files_CArray[i] = single_cstring
		files_Lengths[i] = (C.size_t)(len(files[i]))
	}
	C.QFileDialog_FilesSelected(this.h, &files_CArray[0], &files_Lengths[0], C.ulong(len(files)))
}

func (this *QFileDialog) OnFilesSelected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFileDialog_connect_FilesSelected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFileDialog) CurrentChanged(path string) {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	C.QFileDialog_CurrentChanged(this.h, path_Cstring, C.ulong(len(path)))
}

func (this *QFileDialog) OnCurrentChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFileDialog_connect_CurrentChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFileDialog) DirectoryEntered(directory string) {
	directory_Cstring := C.CString(directory)
	defer C.free(unsafe.Pointer(directory_Cstring))
	C.QFileDialog_DirectoryEntered(this.h, directory_Cstring, C.ulong(len(directory)))
}

func (this *QFileDialog) OnDirectoryEntered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFileDialog_connect_DirectoryEntered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFileDialog) UrlSelected(url *QUrl) {
	C.QFileDialog_UrlSelected(this.h, url.cPointer())
}

func (this *QFileDialog) OnUrlSelected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFileDialog_connect_UrlSelected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFileDialog) UrlsSelected(urls []QUrl) {
	// For the C ABI, malloc a C array of raw pointers
	urls_CArray := (*[0xffff]*C.QUrl)(C.malloc(C.ulong(8 * len(urls))))
	defer C.free(unsafe.Pointer(urls_CArray))
	for i := range urls {
		urls_CArray[i] = urls[i].cPointer()
	}
	C.QFileDialog_UrlsSelected(this.h, &urls_CArray[0], C.ulong(len(urls)))
}

func (this *QFileDialog) OnUrlsSelected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFileDialog_connect_UrlsSelected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFileDialog) CurrentUrlChanged(url *QUrl) {
	C.QFileDialog_CurrentUrlChanged(this.h, url.cPointer())
}

func (this *QFileDialog) OnCurrentUrlChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFileDialog_connect_CurrentUrlChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFileDialog) DirectoryUrlEntered(directory *QUrl) {
	C.QFileDialog_DirectoryUrlEntered(this.h, directory.cPointer())
}

func (this *QFileDialog) OnDirectoryUrlEntered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFileDialog_connect_DirectoryUrlEntered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QFileDialog) FilterSelected(filter string) {
	filter_Cstring := C.CString(filter)
	defer C.free(unsafe.Pointer(filter_Cstring))
	C.QFileDialog_FilterSelected(this.h, filter_Cstring, C.ulong(len(filter)))
}

func (this *QFileDialog) OnFilterSelected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QFileDialog_connect_FilterSelected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QFileDialog_GetOpenFileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetOpenFileName(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileUrl() *QUrl {
	ret := C.QFileDialog_GetOpenFileUrl()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetSaveFileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetSaveFileName(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetSaveFileUrl() *QUrl {
	ret := C.QFileDialog_GetSaveFileUrl()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetExistingDirectory() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetExistingDirectory(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetExistingDirectoryUrl() *QUrl {
	ret := C.QFileDialog_GetExistingDirectoryUrl()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetOpenFileNames() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileDialog_GetOpenFileNames(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileUrls() []QUrl {
	var _out **C.QUrl = nil
	var _out_len C.size_t = 0
	C.QFileDialog_GetOpenFileUrls(&_out, &_out_len)
	ret := make([]QUrl, int(_out_len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQUrl(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_SaveFileContent(fileContent *QByteArray) {
	C.QFileDialog_SaveFileContent(fileContent.cPointer())
}

func QFileDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileDialog) SetOption2(option uintptr, on bool) {
	C.QFileDialog_SetOption2(this.h, (C.uintptr_t)(option), (C.bool)(on))
}

func QFileDialog_GetOpenFileName1(parent *QWidget) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetOpenFileName1(parent.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileName2(parent *QWidget, caption string) string {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetOpenFileName2(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileName3(parent *QWidget, caption string, dir string) string {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	dir_Cstring := C.CString(dir)
	defer C.free(unsafe.Pointer(dir_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetOpenFileName3(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir_Cstring, C.ulong(len(dir)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileName4(parent *QWidget, caption string, dir string, filter string) string {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	dir_Cstring := C.CString(dir)
	defer C.free(unsafe.Pointer(dir_Cstring))
	filter_Cstring := C.CString(filter)
	defer C.free(unsafe.Pointer(filter_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetOpenFileName4(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir_Cstring, C.ulong(len(dir)), filter_Cstring, C.ulong(len(filter)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileUrl1(parent *QWidget) *QUrl {
	ret := C.QFileDialog_GetOpenFileUrl1(parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetOpenFileUrl2(parent *QWidget, caption string) *QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	ret := C.QFileDialog_GetOpenFileUrl2(parent.cPointer(), caption_Cstring, C.ulong(len(caption)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetOpenFileUrl3(parent *QWidget, caption string, dir *QUrl) *QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	ret := C.QFileDialog_GetOpenFileUrl3(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetOpenFileUrl4(parent *QWidget, caption string, dir *QUrl, filter string) *QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	filter_Cstring := C.CString(filter)
	defer C.free(unsafe.Pointer(filter_Cstring))
	ret := C.QFileDialog_GetOpenFileUrl4(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir.cPointer(), filter_Cstring, C.ulong(len(filter)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetSaveFileName1(parent *QWidget) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetSaveFileName1(parent.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetSaveFileName2(parent *QWidget, caption string) string {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetSaveFileName2(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetSaveFileName3(parent *QWidget, caption string, dir string) string {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	dir_Cstring := C.CString(dir)
	defer C.free(unsafe.Pointer(dir_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetSaveFileName3(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir_Cstring, C.ulong(len(dir)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetSaveFileName4(parent *QWidget, caption string, dir string, filter string) string {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	dir_Cstring := C.CString(dir)
	defer C.free(unsafe.Pointer(dir_Cstring))
	filter_Cstring := C.CString(filter)
	defer C.free(unsafe.Pointer(filter_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetSaveFileName4(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir_Cstring, C.ulong(len(dir)), filter_Cstring, C.ulong(len(filter)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetSaveFileUrl1(parent *QWidget) *QUrl {
	ret := C.QFileDialog_GetSaveFileUrl1(parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetSaveFileUrl2(parent *QWidget, caption string) *QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	ret := C.QFileDialog_GetSaveFileUrl2(parent.cPointer(), caption_Cstring, C.ulong(len(caption)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetSaveFileUrl3(parent *QWidget, caption string, dir *QUrl) *QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	ret := C.QFileDialog_GetSaveFileUrl3(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetSaveFileUrl4(parent *QWidget, caption string, dir *QUrl, filter string) *QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	filter_Cstring := C.CString(filter)
	defer C.free(unsafe.Pointer(filter_Cstring))
	ret := C.QFileDialog_GetSaveFileUrl4(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir.cPointer(), filter_Cstring, C.ulong(len(filter)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetExistingDirectory1(parent *QWidget) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetExistingDirectory1(parent.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetExistingDirectory2(parent *QWidget, caption string) string {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetExistingDirectory2(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetExistingDirectory3(parent *QWidget, caption string, dir string) string {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	dir_Cstring := C.CString(dir)
	defer C.free(unsafe.Pointer(dir_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetExistingDirectory3(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir_Cstring, C.ulong(len(dir)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetExistingDirectory4(parent *QWidget, caption string, dir string, options int) string {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	dir_Cstring := C.CString(dir)
	defer C.free(unsafe.Pointer(dir_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileDialog_GetExistingDirectory4(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir_Cstring, C.ulong(len(dir)), (C.int)(options), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetExistingDirectoryUrl1(parent *QWidget) *QUrl {
	ret := C.QFileDialog_GetExistingDirectoryUrl1(parent.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetExistingDirectoryUrl2(parent *QWidget, caption string) *QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	ret := C.QFileDialog_GetExistingDirectoryUrl2(parent.cPointer(), caption_Cstring, C.ulong(len(caption)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetExistingDirectoryUrl3(parent *QWidget, caption string, dir *QUrl) *QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	ret := C.QFileDialog_GetExistingDirectoryUrl3(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetExistingDirectoryUrl4(parent *QWidget, caption string, dir *QUrl, options int) *QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	ret := C.QFileDialog_GetExistingDirectoryUrl4(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir.cPointer(), (C.int)(options))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetExistingDirectoryUrl5(parent *QWidget, caption string, dir *QUrl, options int, supportedSchemes []string) *QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	supportedSchemes_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(supportedSchemes))))
	supportedSchemes_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(supportedSchemes))))
	defer C.free(unsafe.Pointer(supportedSchemes_CArray))
	defer C.free(unsafe.Pointer(supportedSchemes_Lengths))
	for i := range supportedSchemes {
		single_cstring := C.CString(supportedSchemes[i])
		defer C.free(unsafe.Pointer(single_cstring))
		supportedSchemes_CArray[i] = single_cstring
		supportedSchemes_Lengths[i] = (C.size_t)(len(supportedSchemes[i]))
	}
	ret := C.QFileDialog_GetExistingDirectoryUrl5(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir.cPointer(), (C.int)(options), &supportedSchemes_CArray[0], &supportedSchemes_Lengths[0], C.ulong(len(supportedSchemes)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QFileDialog_GetOpenFileNames1(parent *QWidget) []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileDialog_GetOpenFileNames1(parent.cPointer(), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileNames2(parent *QWidget, caption string) []string {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileDialog_GetOpenFileNames2(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileNames3(parent *QWidget, caption string, dir string) []string {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	dir_Cstring := C.CString(dir)
	defer C.free(unsafe.Pointer(dir_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileDialog_GetOpenFileNames3(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir_Cstring, C.ulong(len(dir)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileNames4(parent *QWidget, caption string, dir string, filter string) []string {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	dir_Cstring := C.CString(dir)
	defer C.free(unsafe.Pointer(dir_Cstring))
	filter_Cstring := C.CString(filter)
	defer C.free(unsafe.Pointer(filter_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileDialog_GetOpenFileNames4(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir_Cstring, C.ulong(len(dir)), filter_Cstring, C.ulong(len(filter)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileUrls1(parent *QWidget) []QUrl {
	var _out **C.QUrl = nil
	var _out_len C.size_t = 0
	C.QFileDialog_GetOpenFileUrls1(parent.cPointer(), &_out, &_out_len)
	ret := make([]QUrl, int(_out_len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQUrl(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileUrls2(parent *QWidget, caption string) []QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	var _out **C.QUrl = nil
	var _out_len C.size_t = 0
	C.QFileDialog_GetOpenFileUrls2(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), &_out, &_out_len)
	ret := make([]QUrl, int(_out_len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQUrl(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileUrls3(parent *QWidget, caption string, dir *QUrl) []QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	var _out **C.QUrl = nil
	var _out_len C.size_t = 0
	C.QFileDialog_GetOpenFileUrls3(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir.cPointer(), &_out, &_out_len)
	ret := make([]QUrl, int(_out_len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQUrl(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_GetOpenFileUrls4(parent *QWidget, caption string, dir *QUrl, filter string) []QUrl {
	caption_Cstring := C.CString(caption)
	defer C.free(unsafe.Pointer(caption_Cstring))
	filter_Cstring := C.CString(filter)
	defer C.free(unsafe.Pointer(filter_Cstring))
	var _out **C.QUrl = nil
	var _out_len C.size_t = 0
	C.QFileDialog_GetOpenFileUrls4(parent.cPointer(), caption_Cstring, C.ulong(len(caption)), dir.cPointer(), filter_Cstring, C.ulong(len(filter)), &_out, &_out_len)
	ret := make([]QUrl, int(_out_len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQUrl(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileDialog_SaveFileContent2(fileContent *QByteArray, fileNameHint string) {
	fileNameHint_Cstring := C.CString(fileNameHint)
	defer C.free(unsafe.Pointer(fileNameHint_Cstring))
	C.QFileDialog_SaveFileContent2(fileContent.cPointer(), fileNameHint_Cstring, C.ulong(len(fileNameHint)))
}

func (this *QFileDialog) Delete() {
	C.QFileDialog_Delete(this.h)
}

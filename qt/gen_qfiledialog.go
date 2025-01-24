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

type QFileDialog__ViewMode int

const (
	QFileDialog__Detail QFileDialog__ViewMode = 0
	QFileDialog__List   QFileDialog__ViewMode = 1
)

type QFileDialog__FileMode int

const (
	QFileDialog__AnyFile       QFileDialog__FileMode = 0
	QFileDialog__ExistingFile  QFileDialog__FileMode = 1
	QFileDialog__Directory     QFileDialog__FileMode = 2
	QFileDialog__ExistingFiles QFileDialog__FileMode = 3
	QFileDialog__DirectoryOnly QFileDialog__FileMode = 4
)

type QFileDialog__AcceptMode int

const (
	QFileDialog__AcceptOpen QFileDialog__AcceptMode = 0
	QFileDialog__AcceptSave QFileDialog__AcceptMode = 1
)

type QFileDialog__DialogLabel int

const (
	QFileDialog__LookIn   QFileDialog__DialogLabel = 0
	QFileDialog__FileName QFileDialog__DialogLabel = 1
	QFileDialog__FileType QFileDialog__DialogLabel = 2
	QFileDialog__Accept   QFileDialog__DialogLabel = 3
	QFileDialog__Reject   QFileDialog__DialogLabel = 4
)

type QFileDialog__Option int

const (
	QFileDialog__ShowDirsOnly                QFileDialog__Option = 1
	QFileDialog__DontResolveSymlinks         QFileDialog__Option = 2
	QFileDialog__DontConfirmOverwrite        QFileDialog__Option = 4
	QFileDialog__DontUseSheet                QFileDialog__Option = 8
	QFileDialog__DontUseNativeDialog         QFileDialog__Option = 16
	QFileDialog__ReadOnly                    QFileDialog__Option = 32
	QFileDialog__HideNameFilterDetails       QFileDialog__Option = 64
	QFileDialog__DontUseCustomDirectoryIcons QFileDialog__Option = 128
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

func (this *QFileDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFileDialog constructs the type using only CGO pointers.
func newQFileDialog(h *C.QFileDialog) *QFileDialog {
	if h == nil {
		return nil
	}
	var outptr_QDialog *C.QDialog = nil
	C.QFileDialog_virtbase(h, &outptr_QDialog)

	return &QFileDialog{h: h,
		QDialog: newQDialog(outptr_QDialog)}
}

// UnsafeNewQFileDialog constructs the type using only unsafe pointers.
func UnsafeNewQFileDialog(h unsafe.Pointer) *QFileDialog {
	return newQFileDialog((*C.QFileDialog)(h))
}

// NewQFileDialog constructs a new QFileDialog object.
func NewQFileDialog(parent *QWidget) *QFileDialog {

	return newQFileDialog(C.QFileDialog_new(parent.cPointer()))
}

// NewQFileDialog2 constructs a new QFileDialog object.
func NewQFileDialog2(parent *QWidget, f WindowType) *QFileDialog {

	return newQFileDialog(C.QFileDialog_new2(parent.cPointer(), (C.int)(f)))
}

// NewQFileDialog3 constructs a new QFileDialog object.
func NewQFileDialog3() *QFileDialog {

	return newQFileDialog(C.QFileDialog_new3())
}

// NewQFileDialog4 constructs a new QFileDialog object.
func NewQFileDialog4(parent *QWidget, caption string) *QFileDialog {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))

	return newQFileDialog(C.QFileDialog_new4(parent.cPointer(), caption_ms))
}

// NewQFileDialog5 constructs a new QFileDialog object.
func NewQFileDialog5(parent *QWidget, caption string, directory string) *QFileDialog {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))

	return newQFileDialog(C.QFileDialog_new5(parent.cPointer(), caption_ms, directory_ms))
}

// NewQFileDialog6 constructs a new QFileDialog object.
func NewQFileDialog6(parent *QWidget, caption string, directory string, filter string) *QFileDialog {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))

	return newQFileDialog(C.QFileDialog_new6(parent.cPointer(), caption_ms, directory_ms, filter_ms))
}

func (this *QFileDialog) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFileDialog_MetaObject(this.h))
}

func (this *QFileDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFileDialog_Metacast(this.h, param1_Cstring))
}

func QFileDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFileDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFileDialog_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileDialog) SetDirectory(directory string) {
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))
	C.QFileDialog_SetDirectory(this.h, directory_ms)
}

func (this *QFileDialog) SetDirectoryWithDirectory(directory *QDir) {
	C.QFileDialog_SetDirectoryWithDirectory(this.h, directory.cPointer())
}

func (this *QFileDialog) Directory() *QDir {
	_goptr := newQDir(C.QFileDialog_Directory(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileDialog) SetDirectoryUrl(directory *QUrl) {
	C.QFileDialog_SetDirectoryUrl(this.h, directory.cPointer())
}

func (this *QFileDialog) DirectoryUrl() *QUrl {
	_goptr := newQUrl(C.QFileDialog_DirectoryUrl(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileDialog) SelectFile(filename string) {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	C.QFileDialog_SelectFile(this.h, filename_ms)
}

func (this *QFileDialog) SelectedFiles() []string {
	var _ma C.struct_miqt_array = C.QFileDialog_SelectedFiles(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QFileDialog) SelectUrl(url *QUrl) {
	C.QFileDialog_SelectUrl(this.h, url.cPointer())
}

func (this *QFileDialog) SelectedUrls() []QUrl {
	var _ma C.struct_miqt_array = C.QFileDialog_SelectedUrls(this.h)
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQUrl(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QFileDialog) SetNameFilterDetailsVisible(enabled bool) {
	C.QFileDialog_SetNameFilterDetailsVisible(this.h, (C.bool)(enabled))
}

func (this *QFileDialog) IsNameFilterDetailsVisible() bool {
	return (bool)(C.QFileDialog_IsNameFilterDetailsVisible(this.h))
}

func (this *QFileDialog) SetNameFilter(filter string) {
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	C.QFileDialog_SetNameFilter(this.h, filter_ms)
}

func (this *QFileDialog) SetNameFilters(filters []string) {
	filters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(filters))))
	defer C.free(unsafe.Pointer(filters_CArray))
	for i := range filters {
		filters_i_ms := C.struct_miqt_string{}
		filters_i_ms.data = C.CString(filters[i])
		filters_i_ms.len = C.size_t(len(filters[i]))
		defer C.free(unsafe.Pointer(filters_i_ms.data))
		filters_CArray[i] = filters_i_ms
	}
	filters_ma := C.struct_miqt_array{len: C.size_t(len(filters)), data: unsafe.Pointer(filters_CArray)}
	C.QFileDialog_SetNameFilters(this.h, filters_ma)
}

func (this *QFileDialog) NameFilters() []string {
	var _ma C.struct_miqt_array = C.QFileDialog_NameFilters(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QFileDialog) SelectNameFilter(filter string) {
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	C.QFileDialog_SelectNameFilter(this.h, filter_ms)
}

func (this *QFileDialog) SelectedMimeTypeFilter() string {
	var _ms C.struct_miqt_string = C.QFileDialog_SelectedMimeTypeFilter(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileDialog) SelectedNameFilter() string {
	var _ms C.struct_miqt_string = C.QFileDialog_SelectedNameFilter(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileDialog) SetMimeTypeFilters(filters []string) {
	filters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(filters))))
	defer C.free(unsafe.Pointer(filters_CArray))
	for i := range filters {
		filters_i_ms := C.struct_miqt_string{}
		filters_i_ms.data = C.CString(filters[i])
		filters_i_ms.len = C.size_t(len(filters[i]))
		defer C.free(unsafe.Pointer(filters_i_ms.data))
		filters_CArray[i] = filters_i_ms
	}
	filters_ma := C.struct_miqt_array{len: C.size_t(len(filters)), data: unsafe.Pointer(filters_CArray)}
	C.QFileDialog_SetMimeTypeFilters(this.h, filters_ma)
}

func (this *QFileDialog) MimeTypeFilters() []string {
	var _ma C.struct_miqt_array = C.QFileDialog_MimeTypeFilters(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QFileDialog) SelectMimeTypeFilter(filter string) {
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	C.QFileDialog_SelectMimeTypeFilter(this.h, filter_ms)
}

func (this *QFileDialog) Filter() QDir__Filter {
	return (QDir__Filter)(C.QFileDialog_Filter(this.h))
}

func (this *QFileDialog) SetFilter(filters QDir__Filter) {
	C.QFileDialog_SetFilter(this.h, (C.int)(filters))
}

func (this *QFileDialog) SetViewMode(mode QFileDialog__ViewMode) {
	C.QFileDialog_SetViewMode(this.h, (C.int)(mode))
}

func (this *QFileDialog) ViewMode() QFileDialog__ViewMode {
	return (QFileDialog__ViewMode)(C.QFileDialog_ViewMode(this.h))
}

func (this *QFileDialog) SetFileMode(mode QFileDialog__FileMode) {
	C.QFileDialog_SetFileMode(this.h, (C.int)(mode))
}

func (this *QFileDialog) FileMode() QFileDialog__FileMode {
	return (QFileDialog__FileMode)(C.QFileDialog_FileMode(this.h))
}

func (this *QFileDialog) SetAcceptMode(mode QFileDialog__AcceptMode) {
	C.QFileDialog_SetAcceptMode(this.h, (C.int)(mode))
}

func (this *QFileDialog) AcceptMode() QFileDialog__AcceptMode {
	return (QFileDialog__AcceptMode)(C.QFileDialog_AcceptMode(this.h))
}

func (this *QFileDialog) SetReadOnly(enabled bool) {
	C.QFileDialog_SetReadOnly(this.h, (C.bool)(enabled))
}

func (this *QFileDialog) IsReadOnly() bool {
	return (bool)(C.QFileDialog_IsReadOnly(this.h))
}

func (this *QFileDialog) SetResolveSymlinks(enabled bool) {
	C.QFileDialog_SetResolveSymlinks(this.h, (C.bool)(enabled))
}

func (this *QFileDialog) ResolveSymlinks() bool {
	return (bool)(C.QFileDialog_ResolveSymlinks(this.h))
}

func (this *QFileDialog) SetSidebarUrls(urls []QUrl) {
	urls_CArray := (*[0xffff]*C.QUrl)(C.malloc(C.size_t(8 * len(urls))))
	defer C.free(unsafe.Pointer(urls_CArray))
	for i := range urls {
		urls_CArray[i] = urls[i].cPointer()
	}
	urls_ma := C.struct_miqt_array{len: C.size_t(len(urls)), data: unsafe.Pointer(urls_CArray)}
	C.QFileDialog_SetSidebarUrls(this.h, urls_ma)
}

func (this *QFileDialog) SidebarUrls() []QUrl {
	var _ma C.struct_miqt_array = C.QFileDialog_SidebarUrls(this.h)
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQUrl(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QFileDialog) SaveState() []byte {
	var _bytearray C.struct_miqt_string = C.QFileDialog_SaveState(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QFileDialog) RestoreState(state []byte) bool {
	state_alias := C.struct_miqt_string{}
	if len(state) > 0 {
		state_alias.data = (*C.char)(unsafe.Pointer(&state[0]))
	} else {
		state_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	state_alias.len = C.size_t(len(state))
	return (bool)(C.QFileDialog_RestoreState(this.h, state_alias))
}

func (this *QFileDialog) SetConfirmOverwrite(enabled bool) {
	C.QFileDialog_SetConfirmOverwrite(this.h, (C.bool)(enabled))
}

func (this *QFileDialog) ConfirmOverwrite() bool {
	return (bool)(C.QFileDialog_ConfirmOverwrite(this.h))
}

func (this *QFileDialog) SetDefaultSuffix(suffix string) {
	suffix_ms := C.struct_miqt_string{}
	suffix_ms.data = C.CString(suffix)
	suffix_ms.len = C.size_t(len(suffix))
	defer C.free(unsafe.Pointer(suffix_ms.data))
	C.QFileDialog_SetDefaultSuffix(this.h, suffix_ms)
}

func (this *QFileDialog) DefaultSuffix() string {
	var _ms C.struct_miqt_string = C.QFileDialog_DefaultSuffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileDialog) SetHistory(paths []string) {
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	C.QFileDialog_SetHistory(this.h, paths_ma)
}

func (this *QFileDialog) History() []string {
	var _ma C.struct_miqt_array = C.QFileDialog_History(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QFileDialog) SetItemDelegate(delegate *QAbstractItemDelegate) {
	C.QFileDialog_SetItemDelegate(this.h, delegate.cPointer())
}

func (this *QFileDialog) ItemDelegate() *QAbstractItemDelegate {
	return newQAbstractItemDelegate(C.QFileDialog_ItemDelegate(this.h))
}

func (this *QFileDialog) SetIconProvider(provider *QFileIconProvider) {
	C.QFileDialog_SetIconProvider(this.h, provider.cPointer())
}

func (this *QFileDialog) IconProvider() *QFileIconProvider {
	return newQFileIconProvider(C.QFileDialog_IconProvider(this.h))
}

func (this *QFileDialog) SetLabelText(label QFileDialog__DialogLabel, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QFileDialog_SetLabelText(this.h, (C.int)(label), text_ms)
}

func (this *QFileDialog) LabelText(label QFileDialog__DialogLabel) string {
	var _ms C.struct_miqt_string = C.QFileDialog_LabelText(this.h, (C.int)(label))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileDialog) SetSupportedSchemes(schemes []string) {
	schemes_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(schemes))))
	defer C.free(unsafe.Pointer(schemes_CArray))
	for i := range schemes {
		schemes_i_ms := C.struct_miqt_string{}
		schemes_i_ms.data = C.CString(schemes[i])
		schemes_i_ms.len = C.size_t(len(schemes[i]))
		defer C.free(unsafe.Pointer(schemes_i_ms.data))
		schemes_CArray[i] = schemes_i_ms
	}
	schemes_ma := C.struct_miqt_array{len: C.size_t(len(schemes)), data: unsafe.Pointer(schemes_CArray)}
	C.QFileDialog_SetSupportedSchemes(this.h, schemes_ma)
}

func (this *QFileDialog) SupportedSchemes() []string {
	var _ma C.struct_miqt_array = C.QFileDialog_SupportedSchemes(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QFileDialog) SetProxyModel(model *QAbstractProxyModel) {
	C.QFileDialog_SetProxyModel(this.h, model.cPointer())
}

func (this *QFileDialog) ProxyModel() *QAbstractProxyModel {
	return newQAbstractProxyModel(C.QFileDialog_ProxyModel(this.h))
}

func (this *QFileDialog) SetOption(option QFileDialog__Option) {
	C.QFileDialog_SetOption(this.h, (C.int)(option))
}

func (this *QFileDialog) TestOption(option QFileDialog__Option) bool {
	return (bool)(C.QFileDialog_TestOption(this.h, (C.int)(option)))
}

func (this *QFileDialog) SetOptions(options QFileDialog__Option) {
	C.QFileDialog_SetOptions(this.h, (C.int)(options))
}

func (this *QFileDialog) Options() QFileDialog__Option {
	return (QFileDialog__Option)(C.QFileDialog_Options(this.h))
}

func (this *QFileDialog) SetVisible(visible bool) {
	C.QFileDialog_SetVisible(this.h, (C.bool)(visible))
}

func (this *QFileDialog) FileSelected(file string) {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	C.QFileDialog_FileSelected(this.h, file_ms)
}
func (this *QFileDialog) OnFileSelected(slot func(file string)) {
	C.QFileDialog_connect_FileSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_FileSelected
func miqt_exec_callback_QFileDialog_FileSelected(cb C.intptr_t, file C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(file string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var file_ms C.struct_miqt_string = file
	file_ret := C.GoStringN(file_ms.data, C.int(int64(file_ms.len)))
	C.free(unsafe.Pointer(file_ms.data))
	slotval1 := file_ret

	gofunc(slotval1)
}

func (this *QFileDialog) FilesSelected(files []string) {
	files_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(files))))
	defer C.free(unsafe.Pointer(files_CArray))
	for i := range files {
		files_i_ms := C.struct_miqt_string{}
		files_i_ms.data = C.CString(files[i])
		files_i_ms.len = C.size_t(len(files[i]))
		defer C.free(unsafe.Pointer(files_i_ms.data))
		files_CArray[i] = files_i_ms
	}
	files_ma := C.struct_miqt_array{len: C.size_t(len(files)), data: unsafe.Pointer(files_CArray)}
	C.QFileDialog_FilesSelected(this.h, files_ma)
}
func (this *QFileDialog) OnFilesSelected(slot func(files []string)) {
	C.QFileDialog_connect_FilesSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_FilesSelected
func miqt_exec_callback_QFileDialog_FilesSelected(cb C.intptr_t, files C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(files []string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var files_ma C.struct_miqt_array = files
	files_ret := make([]string, int(files_ma.len))
	files_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(files_ma.data)) // hey ya
	for i := 0; i < int(files_ma.len); i++ {
		var files_lv_ms C.struct_miqt_string = files_outCast[i]
		files_lv_ret := C.GoStringN(files_lv_ms.data, C.int(int64(files_lv_ms.len)))
		C.free(unsafe.Pointer(files_lv_ms.data))
		files_ret[i] = files_lv_ret
	}
	slotval1 := files_ret

	gofunc(slotval1)
}

func (this *QFileDialog) CurrentChanged(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QFileDialog_CurrentChanged(this.h, path_ms)
}
func (this *QFileDialog) OnCurrentChanged(slot func(path string)) {
	C.QFileDialog_connect_CurrentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_CurrentChanged
func miqt_exec_callback_QFileDialog_CurrentChanged(cb C.intptr_t, path C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(path string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var path_ms C.struct_miqt_string = path
	path_ret := C.GoStringN(path_ms.data, C.int(int64(path_ms.len)))
	C.free(unsafe.Pointer(path_ms.data))
	slotval1 := path_ret

	gofunc(slotval1)
}

func (this *QFileDialog) DirectoryEntered(directory string) {
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))
	C.QFileDialog_DirectoryEntered(this.h, directory_ms)
}
func (this *QFileDialog) OnDirectoryEntered(slot func(directory string)) {
	C.QFileDialog_connect_DirectoryEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_DirectoryEntered
func miqt_exec_callback_QFileDialog_DirectoryEntered(cb C.intptr_t, directory C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(directory string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var directory_ms C.struct_miqt_string = directory
	directory_ret := C.GoStringN(directory_ms.data, C.int(int64(directory_ms.len)))
	C.free(unsafe.Pointer(directory_ms.data))
	slotval1 := directory_ret

	gofunc(slotval1)
}

func (this *QFileDialog) UrlSelected(url *QUrl) {
	C.QFileDialog_UrlSelected(this.h, url.cPointer())
}
func (this *QFileDialog) OnUrlSelected(slot func(url *QUrl)) {
	C.QFileDialog_connect_UrlSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_UrlSelected
func miqt_exec_callback_QFileDialog_UrlSelected(cb C.intptr_t, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUrl(url)

	gofunc(slotval1)
}

func (this *QFileDialog) UrlsSelected(urls []QUrl) {
	urls_CArray := (*[0xffff]*C.QUrl)(C.malloc(C.size_t(8 * len(urls))))
	defer C.free(unsafe.Pointer(urls_CArray))
	for i := range urls {
		urls_CArray[i] = urls[i].cPointer()
	}
	urls_ma := C.struct_miqt_array{len: C.size_t(len(urls)), data: unsafe.Pointer(urls_CArray)}
	C.QFileDialog_UrlsSelected(this.h, urls_ma)
}
func (this *QFileDialog) OnUrlsSelected(slot func(urls []QUrl)) {
	C.QFileDialog_connect_UrlsSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_UrlsSelected
func miqt_exec_callback_QFileDialog_UrlsSelected(cb C.intptr_t, urls C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(urls []QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var urls_ma C.struct_miqt_array = urls
	urls_ret := make([]QUrl, int(urls_ma.len))
	urls_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(urls_ma.data)) // hey ya
	for i := 0; i < int(urls_ma.len); i++ {
		urls_lv_goptr := newQUrl(urls_outCast[i])
		urls_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		urls_ret[i] = *urls_lv_goptr
	}
	slotval1 := urls_ret

	gofunc(slotval1)
}

func (this *QFileDialog) CurrentUrlChanged(url *QUrl) {
	C.QFileDialog_CurrentUrlChanged(this.h, url.cPointer())
}
func (this *QFileDialog) OnCurrentUrlChanged(slot func(url *QUrl)) {
	C.QFileDialog_connect_CurrentUrlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_CurrentUrlChanged
func miqt_exec_callback_QFileDialog_CurrentUrlChanged(cb C.intptr_t, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUrl(url)

	gofunc(slotval1)
}

func (this *QFileDialog) DirectoryUrlEntered(directory *QUrl) {
	C.QFileDialog_DirectoryUrlEntered(this.h, directory.cPointer())
}
func (this *QFileDialog) OnDirectoryUrlEntered(slot func(directory *QUrl)) {
	C.QFileDialog_connect_DirectoryUrlEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_DirectoryUrlEntered
func miqt_exec_callback_QFileDialog_DirectoryUrlEntered(cb C.intptr_t, directory *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(directory *QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUrl(directory)

	gofunc(slotval1)
}

func (this *QFileDialog) FilterSelected(filter string) {
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	C.QFileDialog_FilterSelected(this.h, filter_ms)
}
func (this *QFileDialog) OnFilterSelected(slot func(filter string)) {
	C.QFileDialog_connect_FilterSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_FilterSelected
func miqt_exec_callback_QFileDialog_FilterSelected(cb C.intptr_t, filter C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(filter string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var filter_ms C.struct_miqt_string = filter
	filter_ret := C.GoStringN(filter_ms.data, C.int(int64(filter_ms.len)))
	C.free(unsafe.Pointer(filter_ms.data))
	slotval1 := filter_ret

	gofunc(slotval1)
}

func QFileDialog_GetOpenFileName() string {
	var _ms C.struct_miqt_string = C.QFileDialog_GetOpenFileName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetOpenFileUrl() *QUrl {
	_goptr := newQUrl(C.QFileDialog_GetOpenFileUrl())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetSaveFileName() string {
	var _ms C.struct_miqt_string = C.QFileDialog_GetSaveFileName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetSaveFileUrl() *QUrl {
	_goptr := newQUrl(C.QFileDialog_GetSaveFileUrl())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectory() string {
	var _ms C.struct_miqt_string = C.QFileDialog_GetExistingDirectory()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetExistingDirectoryUrl() *QUrl {
	_goptr := newQUrl(C.QFileDialog_GetExistingDirectoryUrl())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileNames() []string {
	var _ma C.struct_miqt_array = C.QFileDialog_GetOpenFileNames()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QFileDialog_GetOpenFileUrls() []QUrl {
	var _ma C.struct_miqt_array = C.QFileDialog_GetOpenFileUrls()
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQUrl(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QFileDialog_SaveFileContent(fileContent []byte, fileNameHint string) {
	fileContent_alias := C.struct_miqt_string{}
	if len(fileContent) > 0 {
		fileContent_alias.data = (*C.char)(unsafe.Pointer(&fileContent[0]))
	} else {
		fileContent_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	fileContent_alias.len = C.size_t(len(fileContent))
	fileNameHint_ms := C.struct_miqt_string{}
	fileNameHint_ms.data = C.CString(fileNameHint)
	fileNameHint_ms.len = C.size_t(len(fileNameHint))
	defer C.free(unsafe.Pointer(fileNameHint_ms.data))
	C.QFileDialog_SaveFileContent(fileContent_alias, fileNameHint_ms)
}

func QFileDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileDialog_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileDialog_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileDialog) SetOption2(option QFileDialog__Option, on bool) {
	C.QFileDialog_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

func QFileDialog_GetOpenFileName1(parent *QWidget) string {
	var _ms C.struct_miqt_string = C.QFileDialog_GetOpenFileName1(parent.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetOpenFileName2(parent *QWidget, caption string) string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	var _ms C.struct_miqt_string = C.QFileDialog_GetOpenFileName2(parent.cPointer(), caption_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetOpenFileName3(parent *QWidget, caption string, dir string) string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	var _ms C.struct_miqt_string = C.QFileDialog_GetOpenFileName3(parent.cPointer(), caption_ms, dir_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetOpenFileName4(parent *QWidget, caption string, dir string, filter string) string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	var _ms C.struct_miqt_string = C.QFileDialog_GetOpenFileName4(parent.cPointer(), caption_ms, dir_ms, filter_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetOpenFileUrl1(parent *QWidget) *QUrl {
	_goptr := newQUrl(C.QFileDialog_GetOpenFileUrl1(parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileUrl2(parent *QWidget, caption string) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_GetOpenFileUrl2(parent.cPointer(), caption_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileUrl3(parent *QWidget, caption string, dir *QUrl) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_GetOpenFileUrl3(parent.cPointer(), caption_ms, dir.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileUrl4(parent *QWidget, caption string, dir *QUrl, filter string) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	_goptr := newQUrl(C.QFileDialog_GetOpenFileUrl4(parent.cPointer(), caption_ms, dir.cPointer(), filter_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetSaveFileName1(parent *QWidget) string {
	var _ms C.struct_miqt_string = C.QFileDialog_GetSaveFileName1(parent.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetSaveFileName2(parent *QWidget, caption string) string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	var _ms C.struct_miqt_string = C.QFileDialog_GetSaveFileName2(parent.cPointer(), caption_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetSaveFileName3(parent *QWidget, caption string, dir string) string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	var _ms C.struct_miqt_string = C.QFileDialog_GetSaveFileName3(parent.cPointer(), caption_ms, dir_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetSaveFileName4(parent *QWidget, caption string, dir string, filter string) string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	var _ms C.struct_miqt_string = C.QFileDialog_GetSaveFileName4(parent.cPointer(), caption_ms, dir_ms, filter_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetSaveFileUrl1(parent *QWidget) *QUrl {
	_goptr := newQUrl(C.QFileDialog_GetSaveFileUrl1(parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetSaveFileUrl2(parent *QWidget, caption string) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_GetSaveFileUrl2(parent.cPointer(), caption_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetSaveFileUrl3(parent *QWidget, caption string, dir *QUrl) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_GetSaveFileUrl3(parent.cPointer(), caption_ms, dir.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetSaveFileUrl4(parent *QWidget, caption string, dir *QUrl, filter string) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	_goptr := newQUrl(C.QFileDialog_GetSaveFileUrl4(parent.cPointer(), caption_ms, dir.cPointer(), filter_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectory1(parent *QWidget) string {
	var _ms C.struct_miqt_string = C.QFileDialog_GetExistingDirectory1(parent.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetExistingDirectory2(parent *QWidget, caption string) string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	var _ms C.struct_miqt_string = C.QFileDialog_GetExistingDirectory2(parent.cPointer(), caption_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetExistingDirectory3(parent *QWidget, caption string, dir string) string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	var _ms C.struct_miqt_string = C.QFileDialog_GetExistingDirectory3(parent.cPointer(), caption_ms, dir_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetExistingDirectory4(parent *QWidget, caption string, dir string, options QFileDialog__Option) string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	var _ms C.struct_miqt_string = C.QFileDialog_GetExistingDirectory4(parent.cPointer(), caption_ms, dir_ms, (C.int)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetExistingDirectoryUrl1(parent *QWidget) *QUrl {
	_goptr := newQUrl(C.QFileDialog_GetExistingDirectoryUrl1(parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectoryUrl2(parent *QWidget, caption string) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_GetExistingDirectoryUrl2(parent.cPointer(), caption_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectoryUrl3(parent *QWidget, caption string, dir *QUrl) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_GetExistingDirectoryUrl3(parent.cPointer(), caption_ms, dir.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectoryUrl4(parent *QWidget, caption string, dir *QUrl, options QFileDialog__Option) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_GetExistingDirectoryUrl4(parent.cPointer(), caption_ms, dir.cPointer(), (C.int)(options)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectoryUrl5(parent *QWidget, caption string, dir *QUrl, options QFileDialog__Option, supportedSchemes []string) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	supportedSchemes_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(supportedSchemes))))
	defer C.free(unsafe.Pointer(supportedSchemes_CArray))
	for i := range supportedSchemes {
		supportedSchemes_i_ms := C.struct_miqt_string{}
		supportedSchemes_i_ms.data = C.CString(supportedSchemes[i])
		supportedSchemes_i_ms.len = C.size_t(len(supportedSchemes[i]))
		defer C.free(unsafe.Pointer(supportedSchemes_i_ms.data))
		supportedSchemes_CArray[i] = supportedSchemes_i_ms
	}
	supportedSchemes_ma := C.struct_miqt_array{len: C.size_t(len(supportedSchemes)), data: unsafe.Pointer(supportedSchemes_CArray)}
	_goptr := newQUrl(C.QFileDialog_GetExistingDirectoryUrl5(parent.cPointer(), caption_ms, dir.cPointer(), (C.int)(options), supportedSchemes_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileNames1(parent *QWidget) []string {
	var _ma C.struct_miqt_array = C.QFileDialog_GetOpenFileNames1(parent.cPointer())
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QFileDialog_GetOpenFileNames2(parent *QWidget, caption string) []string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	var _ma C.struct_miqt_array = C.QFileDialog_GetOpenFileNames2(parent.cPointer(), caption_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QFileDialog_GetOpenFileNames3(parent *QWidget, caption string, dir string) []string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	var _ma C.struct_miqt_array = C.QFileDialog_GetOpenFileNames3(parent.cPointer(), caption_ms, dir_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QFileDialog_GetOpenFileNames4(parent *QWidget, caption string, dir string, filter string) []string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	var _ma C.struct_miqt_array = C.QFileDialog_GetOpenFileNames4(parent.cPointer(), caption_ms, dir_ms, filter_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QFileDialog_GetOpenFileUrls1(parent *QWidget) []QUrl {
	var _ma C.struct_miqt_array = C.QFileDialog_GetOpenFileUrls1(parent.cPointer())
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQUrl(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QFileDialog_GetOpenFileUrls2(parent *QWidget, caption string) []QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	var _ma C.struct_miqt_array = C.QFileDialog_GetOpenFileUrls2(parent.cPointer(), caption_ms)
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQUrl(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QFileDialog_GetOpenFileUrls3(parent *QWidget, caption string, dir *QUrl) []QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	var _ma C.struct_miqt_array = C.QFileDialog_GetOpenFileUrls3(parent.cPointer(), caption_ms, dir.cPointer())
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQUrl(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QFileDialog_GetOpenFileUrls4(parent *QWidget, caption string, dir *QUrl, filter string) []QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	var _ma C.struct_miqt_array = C.QFileDialog_GetOpenFileUrls4(parent.cPointer(), caption_ms, dir.cPointer(), filter_ms)
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQUrl(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QFileDialog) callVirtualBase_SetVisible(visible bool) {

	C.QFileDialog_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QFileDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QFileDialog_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_SetVisible
func miqt_exec_callback_QFileDialog_SetVisible(self *C.QFileDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QFileDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QFileDialog) callVirtualBase_Done(result int) {

	C.QFileDialog_virtualbase_Done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QFileDialog) OnDone(slot func(super func(result int), result int)) {
	ok := C.QFileDialog_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_Done
func miqt_exec_callback_QFileDialog_Done(self *C.QFileDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QFileDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QFileDialog) callVirtualBase_Accept() {

	C.QFileDialog_virtualbase_Accept(unsafe.Pointer(this.h))

}
func (this *QFileDialog) OnAccept(slot func(super func())) {
	ok := C.QFileDialog_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_Accept
func miqt_exec_callback_QFileDialog_Accept(self *C.QFileDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFileDialog{h: self}).callVirtualBase_Accept)

}

func (this *QFileDialog) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QFileDialog_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFileDialog) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QFileDialog_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_ChangeEvent
func miqt_exec_callback_QFileDialog_ChangeEvent(self *C.QFileDialog, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QFileDialog_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFileDialog) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFileDialog_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_SizeHint
func miqt_exec_callback_QFileDialog_SizeHint(self *C.QFileDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QFileDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QFileDialog_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFileDialog) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFileDialog_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_MinimumSizeHint
func miqt_exec_callback_QFileDialog_MinimumSizeHint(self *C.QFileDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QFileDialog) callVirtualBase_Open() {

	C.QFileDialog_virtualbase_Open(unsafe.Pointer(this.h))

}
func (this *QFileDialog) OnOpen(slot func(super func())) {
	ok := C.QFileDialog_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_Open
func miqt_exec_callback_QFileDialog_Open(self *C.QFileDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFileDialog{h: self}).callVirtualBase_Open)

}

func (this *QFileDialog) callVirtualBase_Exec() int {

	return (int)(C.QFileDialog_virtualbase_Exec(unsafe.Pointer(this.h)))

}
func (this *QFileDialog) OnExec(slot func(super func() int) int) {
	ok := C.QFileDialog_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_Exec
func miqt_exec_callback_QFileDialog_Exec(self *C.QFileDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_Reject() {

	C.QFileDialog_virtualbase_Reject(unsafe.Pointer(this.h))

}
func (this *QFileDialog) OnReject(slot func(super func())) {
	ok := C.QFileDialog_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_Reject
func miqt_exec_callback_QFileDialog_Reject(self *C.QFileDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFileDialog{h: self}).callVirtualBase_Reject)

}

func (this *QFileDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QFileDialog_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFileDialog) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QFileDialog_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_KeyPressEvent
func miqt_exec_callback_QFileDialog_KeyPressEvent(self *C.QFileDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QFileDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QFileDialog_virtualbase_CloseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFileDialog) OnCloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	ok := C.QFileDialog_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_CloseEvent
func miqt_exec_callback_QFileDialog_CloseEvent(self *C.QFileDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QFileDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QFileDialog_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFileDialog) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QFileDialog_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_ShowEvent
func miqt_exec_callback_QFileDialog_ShowEvent(self *C.QFileDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QFileDialog_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFileDialog) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QFileDialog_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_ResizeEvent
func miqt_exec_callback_QFileDialog_ResizeEvent(self *C.QFileDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QFileDialog_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFileDialog) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QFileDialog_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_ContextMenuEvent
func miqt_exec_callback_QFileDialog_ContextMenuEvent(self *C.QFileDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QFileDialog_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QFileDialog) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QFileDialog_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_EventFilter
func miqt_exec_callback_QFileDialog_EventFilter(self *C.QFileDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_DevType() int {

	return (int)(C.QFileDialog_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QFileDialog) OnDevType(slot func(super func() int) int) {
	ok := C.QFileDialog_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_DevType
func miqt_exec_callback_QFileDialog_DevType(self *C.QFileDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QFileDialog_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFileDialog) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QFileDialog_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_HeightForWidth
func miqt_exec_callback_QFileDialog_HeightForWidth(self *C.QFileDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QFileDialog_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QFileDialog) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QFileDialog_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_HasHeightForWidth
func miqt_exec_callback_QFileDialog_HasHeightForWidth(self *C.QFileDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QFileDialog_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QFileDialog) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QFileDialog_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_PaintEngine
func miqt_exec_callback_QFileDialog_PaintEngine(self *C.QFileDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QFileDialog) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QFileDialog_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QFileDialog) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QFileDialog_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_Event
func miqt_exec_callback_QFileDialog_Event(self *C.QFileDialog, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QFileDialog_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFileDialog_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_MousePressEvent
func miqt_exec_callback_QFileDialog_MousePressEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QFileDialog_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFileDialog_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_MouseReleaseEvent
func miqt_exec_callback_QFileDialog_MouseReleaseEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QFileDialog_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFileDialog_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_MouseDoubleClickEvent
func miqt_exec_callback_QFileDialog_MouseDoubleClickEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QFileDialog_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFileDialog_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_MouseMoveEvent
func miqt_exec_callback_QFileDialog_MouseMoveEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QFileDialog_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QFileDialog_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_WheelEvent
func miqt_exec_callback_QFileDialog_WheelEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QFileDialog_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QFileDialog_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_KeyReleaseEvent
func miqt_exec_callback_QFileDialog_KeyReleaseEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QFileDialog_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QFileDialog_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_FocusInEvent
func miqt_exec_callback_QFileDialog_FocusInEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QFileDialog_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QFileDialog_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_FocusOutEvent
func miqt_exec_callback_QFileDialog_FocusOutEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_EnterEvent(event *QEvent) {

	C.QFileDialog_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFileDialog_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_EnterEvent
func miqt_exec_callback_QFileDialog_EnterEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QFileDialog_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFileDialog_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_LeaveEvent
func miqt_exec_callback_QFileDialog_LeaveEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QFileDialog_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QFileDialog_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_PaintEvent
func miqt_exec_callback_QFileDialog_PaintEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QFileDialog_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QFileDialog_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_MoveEvent
func miqt_exec_callback_QFileDialog_MoveEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QFileDialog_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QFileDialog_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_TabletEvent
func miqt_exec_callback_QFileDialog_TabletEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QFileDialog_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QFileDialog_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_ActionEvent
func miqt_exec_callback_QFileDialog_ActionEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QFileDialog_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QFileDialog_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_DragEnterEvent
func miqt_exec_callback_QFileDialog_DragEnterEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QFileDialog_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QFileDialog_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_DragMoveEvent
func miqt_exec_callback_QFileDialog_DragMoveEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QFileDialog_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QFileDialog_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_DragLeaveEvent
func miqt_exec_callback_QFileDialog_DragLeaveEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QFileDialog_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QFileDialog_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_DropEvent
func miqt_exec_callback_QFileDialog_DropEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QFileDialog_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QFileDialog_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_HideEvent
func miqt_exec_callback_QFileDialog_HideEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QFileDialog_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QFileDialog) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QFileDialog_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_NativeEvent
func miqt_exec_callback_QFileDialog_NativeEvent(self *C.QFileDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QFileDialog_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFileDialog) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QFileDialog_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_Metric
func miqt_exec_callback_QFileDialog_Metric(self *C.QFileDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_InitPainter(painter *QPainter) {

	C.QFileDialog_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QFileDialog) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QFileDialog_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_InitPainter
func miqt_exec_callback_QFileDialog_InitPainter(self *C.QFileDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QFileDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QFileDialog) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QFileDialog_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QFileDialog) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QFileDialog_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_Redirected
func miqt_exec_callback_QFileDialog_Redirected(self *C.QFileDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFileDialog) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QFileDialog_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QFileDialog) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QFileDialog_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_SharedPainter
func miqt_exec_callback_QFileDialog_SharedPainter(self *C.QFileDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QFileDialog) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QFileDialog_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFileDialog) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QFileDialog_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_InputMethodEvent
func miqt_exec_callback_QFileDialog_InputMethodEvent(self *C.QFileDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QFileDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QFileDialog_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFileDialog) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QFileDialog_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_InputMethodQuery
func miqt_exec_callback_QFileDialog_InputMethodQuery(self *C.QFileDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFileDialog) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QFileDialog_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QFileDialog) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QFileDialog_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_FocusNextPrevChild
func miqt_exec_callback_QFileDialog_FocusNextPrevChild(self *C.QFileDialog, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QFileDialog_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFileDialog_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_TimerEvent
func miqt_exec_callback_QFileDialog_TimerEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFileDialog_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QFileDialog_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_ChildEvent
func miqt_exec_callback_QFileDialog_ChildEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFileDialog_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFileDialog_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_CustomEvent
func miqt_exec_callback_QFileDialog_CustomEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFileDialog_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFileDialog) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFileDialog_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_ConnectNotify
func miqt_exec_callback_QFileDialog_ConnectNotify(self *C.QFileDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFileDialog) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFileDialog_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFileDialog) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFileDialog_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_DisconnectNotify
func miqt_exec_callback_QFileDialog_DisconnectNotify(self *C.QFileDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFileDialog{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QFileDialog) Delete() {
	C.QFileDialog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

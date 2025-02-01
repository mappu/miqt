package qt6

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
	QFileDialog__DontUseNativeDialog         QFileDialog__Option = 8
	QFileDialog__ReadOnly                    QFileDialog__Option = 16
	QFileDialog__HideNameFilterDetails       QFileDialog__Option = 32
	QFileDialog__DontUseCustomDirectoryIcons QFileDialog__Option = 64
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
	return newQMetaObject(C.QFileDialog_metaObject(this.h))
}

func (this *QFileDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFileDialog_metacast(this.h, param1_Cstring))
}

func QFileDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFileDialog_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileDialog) SetDirectory(directory string) {
	directory_ms := C.struct_miqt_string{}
	directory_ms.data = C.CString(directory)
	directory_ms.len = C.size_t(len(directory))
	defer C.free(unsafe.Pointer(directory_ms.data))
	C.QFileDialog_setDirectory(this.h, directory_ms)
}

func (this *QFileDialog) SetDirectoryWithDirectory(directory *QDir) {
	C.QFileDialog_setDirectoryWithDirectory(this.h, directory.cPointer())
}

func (this *QFileDialog) Directory() *QDir {
	_goptr := newQDir(C.QFileDialog_directory(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileDialog) SetDirectoryUrl(directory *QUrl) {
	C.QFileDialog_setDirectoryUrl(this.h, directory.cPointer())
}

func (this *QFileDialog) DirectoryUrl() *QUrl {
	_goptr := newQUrl(C.QFileDialog_directoryUrl(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileDialog) SelectFile(filename string) {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	C.QFileDialog_selectFile(this.h, filename_ms)
}

func (this *QFileDialog) SelectedFiles() []string {
	var _ma C.struct_miqt_array = C.QFileDialog_selectedFiles(this.h)
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
	C.QFileDialog_selectUrl(this.h, url.cPointer())
}

func (this *QFileDialog) SelectedUrls() []QUrl {
	var _ma C.struct_miqt_array = C.QFileDialog_selectedUrls(this.h)
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQUrl(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QFileDialog) SetNameFilter(filter string) {
	filter_ms := C.struct_miqt_string{}
	filter_ms.data = C.CString(filter)
	filter_ms.len = C.size_t(len(filter))
	defer C.free(unsafe.Pointer(filter_ms.data))
	C.QFileDialog_setNameFilter(this.h, filter_ms)
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
	C.QFileDialog_setNameFilters(this.h, filters_ma)
}

func (this *QFileDialog) NameFilters() []string {
	var _ma C.struct_miqt_array = C.QFileDialog_nameFilters(this.h)
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
	C.QFileDialog_selectNameFilter(this.h, filter_ms)
}

func (this *QFileDialog) SelectedMimeTypeFilter() string {
	var _ms C.struct_miqt_string = C.QFileDialog_selectedMimeTypeFilter(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileDialog) SelectedNameFilter() string {
	var _ms C.struct_miqt_string = C.QFileDialog_selectedNameFilter(this.h)
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
	C.QFileDialog_setMimeTypeFilters(this.h, filters_ma)
}

func (this *QFileDialog) MimeTypeFilters() []string {
	var _ma C.struct_miqt_array = C.QFileDialog_mimeTypeFilters(this.h)
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
	C.QFileDialog_selectMimeTypeFilter(this.h, filter_ms)
}

func (this *QFileDialog) Filter() QDir__Filter {
	return (QDir__Filter)(C.QFileDialog_filter(this.h))
}

func (this *QFileDialog) SetFilter(filters QDir__Filter) {
	C.QFileDialog_setFilter(this.h, (C.int)(filters))
}

func (this *QFileDialog) SetViewMode(mode QFileDialog__ViewMode) {
	C.QFileDialog_setViewMode(this.h, (C.int)(mode))
}

func (this *QFileDialog) ViewMode() QFileDialog__ViewMode {
	return (QFileDialog__ViewMode)(C.QFileDialog_viewMode(this.h))
}

func (this *QFileDialog) SetFileMode(mode QFileDialog__FileMode) {
	C.QFileDialog_setFileMode(this.h, (C.int)(mode))
}

func (this *QFileDialog) FileMode() QFileDialog__FileMode {
	return (QFileDialog__FileMode)(C.QFileDialog_fileMode(this.h))
}

func (this *QFileDialog) SetAcceptMode(mode QFileDialog__AcceptMode) {
	C.QFileDialog_setAcceptMode(this.h, (C.int)(mode))
}

func (this *QFileDialog) AcceptMode() QFileDialog__AcceptMode {
	return (QFileDialog__AcceptMode)(C.QFileDialog_acceptMode(this.h))
}

func (this *QFileDialog) SetSidebarUrls(urls []QUrl) {
	urls_CArray := (*[0xffff]*C.QUrl)(C.malloc(C.size_t(8 * len(urls))))
	defer C.free(unsafe.Pointer(urls_CArray))
	for i := range urls {
		urls_CArray[i] = urls[i].cPointer()
	}
	urls_ma := C.struct_miqt_array{len: C.size_t(len(urls)), data: unsafe.Pointer(urls_CArray)}
	C.QFileDialog_setSidebarUrls(this.h, urls_ma)
}

func (this *QFileDialog) SidebarUrls() []QUrl {
	var _ma C.struct_miqt_array = C.QFileDialog_sidebarUrls(this.h)
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
	var _bytearray C.struct_miqt_string = C.QFileDialog_saveState(this.h)
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
	return (bool)(C.QFileDialog_restoreState(this.h, state_alias))
}

func (this *QFileDialog) SetDefaultSuffix(suffix string) {
	suffix_ms := C.struct_miqt_string{}
	suffix_ms.data = C.CString(suffix)
	suffix_ms.len = C.size_t(len(suffix))
	defer C.free(unsafe.Pointer(suffix_ms.data))
	C.QFileDialog_setDefaultSuffix(this.h, suffix_ms)
}

func (this *QFileDialog) DefaultSuffix() string {
	var _ms C.struct_miqt_string = C.QFileDialog_defaultSuffix(this.h)
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
	C.QFileDialog_setHistory(this.h, paths_ma)
}

func (this *QFileDialog) History() []string {
	var _ma C.struct_miqt_array = C.QFileDialog_history(this.h)
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
	C.QFileDialog_setItemDelegate(this.h, delegate.cPointer())
}

func (this *QFileDialog) ItemDelegate() *QAbstractItemDelegate {
	return newQAbstractItemDelegate(C.QFileDialog_itemDelegate(this.h))
}

func (this *QFileDialog) SetIconProvider(provider *QAbstractFileIconProvider) {
	C.QFileDialog_setIconProvider(this.h, provider.cPointer())
}

func (this *QFileDialog) IconProvider() *QAbstractFileIconProvider {
	return newQAbstractFileIconProvider(C.QFileDialog_iconProvider(this.h))
}

func (this *QFileDialog) SetLabelText(label QFileDialog__DialogLabel, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QFileDialog_setLabelText(this.h, (C.int)(label), text_ms)
}

func (this *QFileDialog) LabelText(label QFileDialog__DialogLabel) string {
	var _ms C.struct_miqt_string = C.QFileDialog_labelText(this.h, (C.int)(label))
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
	C.QFileDialog_setSupportedSchemes(this.h, schemes_ma)
}

func (this *QFileDialog) SupportedSchemes() []string {
	var _ma C.struct_miqt_array = C.QFileDialog_supportedSchemes(this.h)
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
	C.QFileDialog_setProxyModel(this.h, model.cPointer())
}

func (this *QFileDialog) ProxyModel() *QAbstractProxyModel {
	return newQAbstractProxyModel(C.QFileDialog_proxyModel(this.h))
}

func (this *QFileDialog) SetOption(option QFileDialog__Option) {
	C.QFileDialog_setOption(this.h, (C.int)(option))
}

func (this *QFileDialog) TestOption(option QFileDialog__Option) bool {
	return (bool)(C.QFileDialog_testOption(this.h, (C.int)(option)))
}

func (this *QFileDialog) SetOptions(options QFileDialog__Option) {
	C.QFileDialog_setOptions(this.h, (C.int)(options))
}

func (this *QFileDialog) Options() QFileDialog__Option {
	return (QFileDialog__Option)(C.QFileDialog_options(this.h))
}

func (this *QFileDialog) SetVisible(visible bool) {
	C.QFileDialog_setVisible(this.h, (C.bool)(visible))
}

func (this *QFileDialog) FileSelected(file string) {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	C.QFileDialog_fileSelected(this.h, file_ms)
}
func (this *QFileDialog) OnFileSelected(slot func(file string)) {
	C.QFileDialog_connect_fileSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_fileSelected
func miqt_exec_callback_QFileDialog_fileSelected(cb C.intptr_t, file C.struct_miqt_string) {
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
	C.QFileDialog_filesSelected(this.h, files_ma)
}
func (this *QFileDialog) OnFilesSelected(slot func(files []string)) {
	C.QFileDialog_connect_filesSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_filesSelected
func miqt_exec_callback_QFileDialog_filesSelected(cb C.intptr_t, files C.struct_miqt_array) {
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
	C.QFileDialog_currentChanged(this.h, path_ms)
}
func (this *QFileDialog) OnCurrentChanged(slot func(path string)) {
	C.QFileDialog_connect_currentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_currentChanged
func miqt_exec_callback_QFileDialog_currentChanged(cb C.intptr_t, path C.struct_miqt_string) {
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
	C.QFileDialog_directoryEntered(this.h, directory_ms)
}
func (this *QFileDialog) OnDirectoryEntered(slot func(directory string)) {
	C.QFileDialog_connect_directoryEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_directoryEntered
func miqt_exec_callback_QFileDialog_directoryEntered(cb C.intptr_t, directory C.struct_miqt_string) {
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
	C.QFileDialog_urlSelected(this.h, url.cPointer())
}
func (this *QFileDialog) OnUrlSelected(slot func(url *QUrl)) {
	C.QFileDialog_connect_urlSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_urlSelected
func miqt_exec_callback_QFileDialog_urlSelected(cb C.intptr_t, url *C.QUrl) {
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
	C.QFileDialog_urlsSelected(this.h, urls_ma)
}
func (this *QFileDialog) OnUrlsSelected(slot func(urls []QUrl)) {
	C.QFileDialog_connect_urlsSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_urlsSelected
func miqt_exec_callback_QFileDialog_urlsSelected(cb C.intptr_t, urls C.struct_miqt_array) {
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
	C.QFileDialog_currentUrlChanged(this.h, url.cPointer())
}
func (this *QFileDialog) OnCurrentUrlChanged(slot func(url *QUrl)) {
	C.QFileDialog_connect_currentUrlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_currentUrlChanged
func miqt_exec_callback_QFileDialog_currentUrlChanged(cb C.intptr_t, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUrl(url)

	gofunc(slotval1)
}

func (this *QFileDialog) DirectoryUrlEntered(directory *QUrl) {
	C.QFileDialog_directoryUrlEntered(this.h, directory.cPointer())
}
func (this *QFileDialog) OnDirectoryUrlEntered(slot func(directory *QUrl)) {
	C.QFileDialog_connect_directoryUrlEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_directoryUrlEntered
func miqt_exec_callback_QFileDialog_directoryUrlEntered(cb C.intptr_t, directory *C.QUrl) {
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
	C.QFileDialog_filterSelected(this.h, filter_ms)
}
func (this *QFileDialog) OnFilterSelected(slot func(filter string)) {
	C.QFileDialog_connect_filterSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_filterSelected
func miqt_exec_callback_QFileDialog_filterSelected(cb C.intptr_t, filter C.struct_miqt_string) {
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
	var _ms C.struct_miqt_string = C.QFileDialog_getOpenFileName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetOpenFileUrl() *QUrl {
	_goptr := newQUrl(C.QFileDialog_getOpenFileUrl())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetSaveFileName() string {
	var _ms C.struct_miqt_string = C.QFileDialog_getSaveFileName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetSaveFileUrl() *QUrl {
	_goptr := newQUrl(C.QFileDialog_getSaveFileUrl())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectory() string {
	var _ms C.struct_miqt_string = C.QFileDialog_getExistingDirectory()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetExistingDirectoryUrl() *QUrl {
	_goptr := newQUrl(C.QFileDialog_getExistingDirectoryUrl())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileNames() []string {
	var _ma C.struct_miqt_array = C.QFileDialog_getOpenFileNames()
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
	var _ma C.struct_miqt_array = C.QFileDialog_getOpenFileUrls()
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
	C.QFileDialog_saveFileContent(fileContent_alias, fileNameHint_ms)
}

func QFileDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileDialog_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileDialog_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileDialog) SetOption2(option QFileDialog__Option, on bool) {
	C.QFileDialog_setOption2(this.h, (C.int)(option), (C.bool)(on))
}

func QFileDialog_GetOpenFileName1(parent *QWidget) string {
	var _ms C.struct_miqt_string = C.QFileDialog_getOpenFileName1(parent.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetOpenFileName2(parent *QWidget, caption string) string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	var _ms C.struct_miqt_string = C.QFileDialog_getOpenFileName2(parent.cPointer(), caption_ms)
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
	var _ms C.struct_miqt_string = C.QFileDialog_getOpenFileName3(parent.cPointer(), caption_ms, dir_ms)
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
	var _ms C.struct_miqt_string = C.QFileDialog_getOpenFileName4(parent.cPointer(), caption_ms, dir_ms, filter_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetOpenFileUrl1(parent *QWidget) *QUrl {
	_goptr := newQUrl(C.QFileDialog_getOpenFileUrl1(parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileUrl2(parent *QWidget, caption string) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_getOpenFileUrl2(parent.cPointer(), caption_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileUrl3(parent *QWidget, caption string, dir *QUrl) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_getOpenFileUrl3(parent.cPointer(), caption_ms, dir.cPointer()))
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
	_goptr := newQUrl(C.QFileDialog_getOpenFileUrl4(parent.cPointer(), caption_ms, dir.cPointer(), filter_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetSaveFileName1(parent *QWidget) string {
	var _ms C.struct_miqt_string = C.QFileDialog_getSaveFileName1(parent.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetSaveFileName2(parent *QWidget, caption string) string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	var _ms C.struct_miqt_string = C.QFileDialog_getSaveFileName2(parent.cPointer(), caption_ms)
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
	var _ms C.struct_miqt_string = C.QFileDialog_getSaveFileName3(parent.cPointer(), caption_ms, dir_ms)
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
	var _ms C.struct_miqt_string = C.QFileDialog_getSaveFileName4(parent.cPointer(), caption_ms, dir_ms, filter_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetSaveFileUrl1(parent *QWidget) *QUrl {
	_goptr := newQUrl(C.QFileDialog_getSaveFileUrl1(parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetSaveFileUrl2(parent *QWidget, caption string) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_getSaveFileUrl2(parent.cPointer(), caption_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetSaveFileUrl3(parent *QWidget, caption string, dir *QUrl) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_getSaveFileUrl3(parent.cPointer(), caption_ms, dir.cPointer()))
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
	_goptr := newQUrl(C.QFileDialog_getSaveFileUrl4(parent.cPointer(), caption_ms, dir.cPointer(), filter_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectory1(parent *QWidget) string {
	var _ms C.struct_miqt_string = C.QFileDialog_getExistingDirectory1(parent.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetExistingDirectory2(parent *QWidget, caption string) string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	var _ms C.struct_miqt_string = C.QFileDialog_getExistingDirectory2(parent.cPointer(), caption_ms)
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
	var _ms C.struct_miqt_string = C.QFileDialog_getExistingDirectory3(parent.cPointer(), caption_ms, dir_ms)
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
	var _ms C.struct_miqt_string = C.QFileDialog_getExistingDirectory4(parent.cPointer(), caption_ms, dir_ms, (C.int)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileDialog_GetExistingDirectoryUrl1(parent *QWidget) *QUrl {
	_goptr := newQUrl(C.QFileDialog_getExistingDirectoryUrl1(parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectoryUrl2(parent *QWidget, caption string) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_getExistingDirectoryUrl2(parent.cPointer(), caption_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectoryUrl3(parent *QWidget, caption string, dir *QUrl) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_getExistingDirectoryUrl3(parent.cPointer(), caption_ms, dir.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectoryUrl4(parent *QWidget, caption string, dir *QUrl, options QFileDialog__Option) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_goptr := newQUrl(C.QFileDialog_getExistingDirectoryUrl4(parent.cPointer(), caption_ms, dir.cPointer(), (C.int)(options)))
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
	_goptr := newQUrl(C.QFileDialog_getExistingDirectoryUrl5(parent.cPointer(), caption_ms, dir.cPointer(), (C.int)(options), supportedSchemes_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileNames1(parent *QWidget) []string {
	var _ma C.struct_miqt_array = C.QFileDialog_getOpenFileNames1(parent.cPointer())
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
	var _ma C.struct_miqt_array = C.QFileDialog_getOpenFileNames2(parent.cPointer(), caption_ms)
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
	var _ma C.struct_miqt_array = C.QFileDialog_getOpenFileNames3(parent.cPointer(), caption_ms, dir_ms)
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
	var _ma C.struct_miqt_array = C.QFileDialog_getOpenFileNames4(parent.cPointer(), caption_ms, dir_ms, filter_ms)
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
	var _ma C.struct_miqt_array = C.QFileDialog_getOpenFileUrls1(parent.cPointer())
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
	var _ma C.struct_miqt_array = C.QFileDialog_getOpenFileUrls2(parent.cPointer(), caption_ms)
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
	var _ma C.struct_miqt_array = C.QFileDialog_getOpenFileUrls3(parent.cPointer(), caption_ms, dir.cPointer())
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
	var _ma C.struct_miqt_array = C.QFileDialog_getOpenFileUrls4(parent.cPointer(), caption_ms, dir.cPointer(), filter_ms)
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

	C.QFileDialog_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QFileDialog) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QFileDialog_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_setVisible
func miqt_exec_callback_QFileDialog_setVisible(self *C.QFileDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QFileDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QFileDialog) callVirtualBase_Done(result int) {

	C.QFileDialog_virtualbase_done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QFileDialog) Ondone(slot func(super func(result int), result int)) {
	ok := C.QFileDialog_override_virtual_done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_done
func miqt_exec_callback_QFileDialog_done(self *C.QFileDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QFileDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QFileDialog) callVirtualBase_Accept() {

	C.QFileDialog_virtualbase_accept(unsafe.Pointer(this.h))

}
func (this *QFileDialog) Onaccept(slot func(super func())) {
	ok := C.QFileDialog_override_virtual_accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_accept
func miqt_exec_callback_QFileDialog_accept(self *C.QFileDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFileDialog{h: self}).callVirtualBase_Accept)

}

func (this *QFileDialog) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QFileDialog_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFileDialog) OnchangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QFileDialog_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_changeEvent
func miqt_exec_callback_QFileDialog_changeEvent(self *C.QFileDialog, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QFileDialog_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFileDialog) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFileDialog_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_sizeHint
func miqt_exec_callback_QFileDialog_sizeHint(self *C.QFileDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QFileDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QFileDialog_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFileDialog) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFileDialog_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_minimumSizeHint
func miqt_exec_callback_QFileDialog_minimumSizeHint(self *C.QFileDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QFileDialog) callVirtualBase_Open() {

	C.QFileDialog_virtualbase_open(unsafe.Pointer(this.h))

}
func (this *QFileDialog) Onopen(slot func(super func())) {
	ok := C.QFileDialog_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_open
func miqt_exec_callback_QFileDialog_open(self *C.QFileDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFileDialog{h: self}).callVirtualBase_Open)

}

func (this *QFileDialog) callVirtualBase_Exec() int {

	return (int)(C.QFileDialog_virtualbase_exec(unsafe.Pointer(this.h)))

}
func (this *QFileDialog) Onexec(slot func(super func() int) int) {
	ok := C.QFileDialog_override_virtual_exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_exec
func miqt_exec_callback_QFileDialog_exec(self *C.QFileDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_Reject() {

	C.QFileDialog_virtualbase_reject(unsafe.Pointer(this.h))

}
func (this *QFileDialog) Onreject(slot func(super func())) {
	ok := C.QFileDialog_override_virtual_reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_reject
func miqt_exec_callback_QFileDialog_reject(self *C.QFileDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFileDialog{h: self}).callVirtualBase_Reject)

}

func (this *QFileDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QFileDialog_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFileDialog) OnkeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QFileDialog_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_keyPressEvent
func miqt_exec_callback_QFileDialog_keyPressEvent(self *C.QFileDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QFileDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QFileDialog_virtualbase_closeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFileDialog) OncloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	ok := C.QFileDialog_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_closeEvent
func miqt_exec_callback_QFileDialog_closeEvent(self *C.QFileDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QFileDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QFileDialog_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFileDialog) OnshowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QFileDialog_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_showEvent
func miqt_exec_callback_QFileDialog_showEvent(self *C.QFileDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QFileDialog_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFileDialog) OnresizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QFileDialog_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_resizeEvent
func miqt_exec_callback_QFileDialog_resizeEvent(self *C.QFileDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QFileDialog_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFileDialog) OncontextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QFileDialog_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_contextMenuEvent
func miqt_exec_callback_QFileDialog_contextMenuEvent(self *C.QFileDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QFileDialog_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QFileDialog) OneventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QFileDialog_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_eventFilter
func miqt_exec_callback_QFileDialog_eventFilter(self *C.QFileDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
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

	return (int)(C.QFileDialog_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QFileDialog) OndevType(slot func(super func() int) int) {
	ok := C.QFileDialog_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_devType
func miqt_exec_callback_QFileDialog_devType(self *C.QFileDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QFileDialog_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFileDialog) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QFileDialog_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_heightForWidth
func miqt_exec_callback_QFileDialog_heightForWidth(self *C.QFileDialog, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QFileDialog_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QFileDialog) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QFileDialog_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_hasHeightForWidth
func miqt_exec_callback_QFileDialog_hasHeightForWidth(self *C.QFileDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QFileDialog_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QFileDialog) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QFileDialog_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_paintEngine
func miqt_exec_callback_QFileDialog_paintEngine(self *C.QFileDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QFileDialog) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QFileDialog_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QFileDialog) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QFileDialog_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_event
func miqt_exec_callback_QFileDialog_event(self *C.QFileDialog, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QFileDialog_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFileDialog_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_mousePressEvent
func miqt_exec_callback_QFileDialog_mousePressEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QFileDialog_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFileDialog_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_mouseReleaseEvent
func miqt_exec_callback_QFileDialog_mouseReleaseEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QFileDialog_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFileDialog_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_mouseDoubleClickEvent
func miqt_exec_callback_QFileDialog_mouseDoubleClickEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QFileDialog_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QFileDialog_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_mouseMoveEvent
func miqt_exec_callback_QFileDialog_mouseMoveEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QFileDialog_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QFileDialog_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_wheelEvent
func miqt_exec_callback_QFileDialog_wheelEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QFileDialog_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QFileDialog_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_keyReleaseEvent
func miqt_exec_callback_QFileDialog_keyReleaseEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QFileDialog_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QFileDialog_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_focusInEvent
func miqt_exec_callback_QFileDialog_focusInEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QFileDialog_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QFileDialog_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_focusOutEvent
func miqt_exec_callback_QFileDialog_focusOutEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QFileDialog_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnenterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QFileDialog_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_enterEvent
func miqt_exec_callback_QFileDialog_enterEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QFileDialog_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFileDialog_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_leaveEvent
func miqt_exec_callback_QFileDialog_leaveEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QFileDialog_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnpaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QFileDialog_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_paintEvent
func miqt_exec_callback_QFileDialog_paintEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QFileDialog_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QFileDialog_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_moveEvent
func miqt_exec_callback_QFileDialog_moveEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QFileDialog_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QFileDialog_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_tabletEvent
func miqt_exec_callback_QFileDialog_tabletEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QFileDialog_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QFileDialog_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_actionEvent
func miqt_exec_callback_QFileDialog_actionEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QFileDialog_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QFileDialog_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_dragEnterEvent
func miqt_exec_callback_QFileDialog_dragEnterEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QFileDialog_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QFileDialog_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_dragMoveEvent
func miqt_exec_callback_QFileDialog_dragMoveEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QFileDialog_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QFileDialog_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_dragLeaveEvent
func miqt_exec_callback_QFileDialog_dragLeaveEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QFileDialog_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QFileDialog_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_dropEvent
func miqt_exec_callback_QFileDialog_dropEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QFileDialog_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QFileDialog_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_hideEvent
func miqt_exec_callback_QFileDialog_hideEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QFileDialog_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QFileDialog) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QFileDialog_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_nativeEvent
func miqt_exec_callback_QFileDialog_nativeEvent(self *C.QFileDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QFileDialog) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QFileDialog_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFileDialog) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QFileDialog_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_metric
func miqt_exec_callback_QFileDialog_metric(self *C.QFileDialog, cb C.intptr_t, param1 C.int) C.int {
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

	C.QFileDialog_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QFileDialog) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QFileDialog_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_initPainter
func miqt_exec_callback_QFileDialog_initPainter(self *C.QFileDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QFileDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QFileDialog) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QFileDialog_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QFileDialog) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QFileDialog_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_redirected
func miqt_exec_callback_QFileDialog_redirected(self *C.QFileDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QFileDialog_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QFileDialog) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QFileDialog_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_sharedPainter
func miqt_exec_callback_QFileDialog_sharedPainter(self *C.QFileDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileDialog{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QFileDialog) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QFileDialog_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QFileDialog) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QFileDialog_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_inputMethodEvent
func miqt_exec_callback_QFileDialog_inputMethodEvent(self *C.QFileDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QFileDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QFileDialog_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFileDialog) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QFileDialog_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_inputMethodQuery
func miqt_exec_callback_QFileDialog_inputMethodQuery(self *C.QFileDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QFileDialog_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QFileDialog) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QFileDialog_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_focusNextPrevChild
func miqt_exec_callback_QFileDialog_focusNextPrevChild(self *C.QFileDialog, cb C.intptr_t, next C.bool) C.bool {
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

	C.QFileDialog_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFileDialog_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_timerEvent
func miqt_exec_callback_QFileDialog_timerEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFileDialog_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QFileDialog_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_childEvent
func miqt_exec_callback_QFileDialog_childEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFileDialog_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileDialog) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFileDialog_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_customEvent
func miqt_exec_callback_QFileDialog_customEvent(self *C.QFileDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFileDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFileDialog) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFileDialog_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFileDialog) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFileDialog_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_connectNotify
func miqt_exec_callback_QFileDialog_connectNotify(self *C.QFileDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFileDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFileDialog) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFileDialog_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFileDialog) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFileDialog_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileDialog_disconnectNotify
func miqt_exec_callback_QFileDialog_disconnectNotify(self *C.QFileDialog, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QFileDialog_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

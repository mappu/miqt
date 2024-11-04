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

func newQFileDialog(h *C.QFileDialog) *QFileDialog {
	if h == nil {
		return nil
	}
	return &QFileDialog{h: h, QDialog: UnsafeNewQDialog(unsafe.Pointer(h))}
}

func UnsafeNewQFileDialog(h unsafe.Pointer) *QFileDialog {
	return newQFileDialog((*C.QFileDialog)(h))
}

// NewQFileDialog constructs a new QFileDialog object.
func NewQFileDialog(parent *QWidget) *QFileDialog {
	ret := C.QFileDialog_new(parent.cPointer())
	return newQFileDialog(ret)
}

// NewQFileDialog2 constructs a new QFileDialog object.
func NewQFileDialog2(parent *QWidget, f WindowType) *QFileDialog {
	ret := C.QFileDialog_new2(parent.cPointer(), (C.int)(f))
	return newQFileDialog(ret)
}

// NewQFileDialog3 constructs a new QFileDialog object.
func NewQFileDialog3() *QFileDialog {
	ret := C.QFileDialog_new3()
	return newQFileDialog(ret)
}

// NewQFileDialog4 constructs a new QFileDialog object.
func NewQFileDialog4(parent *QWidget, caption string) *QFileDialog {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	ret := C.QFileDialog_new4(parent.cPointer(), caption_ms)
	return newQFileDialog(ret)
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
	ret := C.QFileDialog_new5(parent.cPointer(), caption_ms, directory_ms)
	return newQFileDialog(ret)
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
	ret := C.QFileDialog_new6(parent.cPointer(), caption_ms, directory_ms, filter_ms)
	return newQFileDialog(ret)
}

func (this *QFileDialog) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QFileDialog_MetaObject(this.h)))
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
	_ret := C.QFileDialog_Directory(this.h)
	_goptr := newQDir(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileDialog) SetDirectoryUrl(directory *QUrl) {
	C.QFileDialog_SetDirectoryUrl(this.h, directory.cPointer())
}

func (this *QFileDialog) DirectoryUrl() *QUrl {
	_ret := C.QFileDialog_DirectoryUrl(this.h)
	_goptr := newQUrl(_ret)
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
	var _ma *C.struct_miqt_array = C.QFileDialog_SelectedFiles(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QFileDialog) SelectUrl(url *QUrl) {
	C.QFileDialog_SelectUrl(this.h, url.cPointer())
}

func (this *QFileDialog) SelectedUrls() []QUrl {
	var _ma *C.struct_miqt_array = C.QFileDialog_SelectedUrls(this.h)
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQUrl(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
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
	filters_ma := &C.struct_miqt_array{len: C.size_t(len(filters)), data: unsafe.Pointer(filters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(filters_ma))
	C.QFileDialog_SetNameFilters(this.h, filters_ma)
}

func (this *QFileDialog) NameFilters() []string {
	var _ma *C.struct_miqt_array = C.QFileDialog_NameFilters(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
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
	filters_ma := &C.struct_miqt_array{len: C.size_t(len(filters)), data: unsafe.Pointer(filters_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(filters_ma))
	C.QFileDialog_SetMimeTypeFilters(this.h, filters_ma)
}

func (this *QFileDialog) MimeTypeFilters() []string {
	var _ma *C.struct_miqt_array = C.QFileDialog_MimeTypeFilters(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
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
	urls_ma := &C.struct_miqt_array{len: C.size_t(len(urls)), data: unsafe.Pointer(urls_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(urls_ma))
	C.QFileDialog_SetSidebarUrls(this.h, urls_ma)
}

func (this *QFileDialog) SidebarUrls() []QUrl {
	var _ma *C.struct_miqt_array = C.QFileDialog_SidebarUrls(this.h)
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQUrl(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
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
	state_alias.data = (*C.char)(unsafe.Pointer(&state[0]))
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
	paths_ma := &C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(paths_ma))
	C.QFileDialog_SetHistory(this.h, paths_ma)
}

func (this *QFileDialog) History() []string {
	var _ma *C.struct_miqt_array = C.QFileDialog_History(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QFileDialog) SetItemDelegate(delegate *QAbstractItemDelegate) {
	C.QFileDialog_SetItemDelegate(this.h, delegate.cPointer())
}

func (this *QFileDialog) ItemDelegate() *QAbstractItemDelegate {
	return UnsafeNewQAbstractItemDelegate(unsafe.Pointer(C.QFileDialog_ItemDelegate(this.h)))
}

func (this *QFileDialog) SetIconProvider(provider *QFileIconProvider) {
	C.QFileDialog_SetIconProvider(this.h, provider.cPointer())
}

func (this *QFileDialog) IconProvider() *QFileIconProvider {
	return UnsafeNewQFileIconProvider(unsafe.Pointer(C.QFileDialog_IconProvider(this.h)))
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
	schemes_ma := &C.struct_miqt_array{len: C.size_t(len(schemes)), data: unsafe.Pointer(schemes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(schemes_ma))
	C.QFileDialog_SetSupportedSchemes(this.h, schemes_ma)
}

func (this *QFileDialog) SupportedSchemes() []string {
	var _ma *C.struct_miqt_array = C.QFileDialog_SupportedSchemes(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QFileDialog) SetProxyModel(model *QAbstractProxyModel) {
	C.QFileDialog_SetProxyModel(this.h, model.cPointer())
}

func (this *QFileDialog) ProxyModel() *QAbstractProxyModel {
	return UnsafeNewQAbstractProxyModel(unsafe.Pointer(C.QFileDialog_ProxyModel(this.h)))
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
	files_ma := &C.struct_miqt_array{len: C.size_t(len(files)), data: unsafe.Pointer(files_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(files_ma))
	C.QFileDialog_FilesSelected(this.h, files_ma)
}
func (this *QFileDialog) OnFilesSelected(slot func(files []string)) {
	C.QFileDialog_connect_FilesSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_FilesSelected
func miqt_exec_callback_QFileDialog_FilesSelected(cb C.intptr_t, files *C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(files []string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var files_ma *C.struct_miqt_array = files
	files_ret := make([]string, int(files_ma.len))
	files_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(files_ma.data)) // hey ya
	for i := 0; i < int(files_ma.len); i++ {
		var files_lv_ms C.struct_miqt_string = files_outCast[i]
		files_lv_ret := C.GoStringN(files_lv_ms.data, C.int(int64(files_lv_ms.len)))
		C.free(unsafe.Pointer(files_lv_ms.data))
		files_ret[i] = files_lv_ret
	}
	C.free(unsafe.Pointer(files_ma))
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
	slotval1 := UnsafeNewQUrl(unsafe.Pointer(url))

	gofunc(slotval1)
}

func (this *QFileDialog) UrlsSelected(urls []QUrl) {
	urls_CArray := (*[0xffff]*C.QUrl)(C.malloc(C.size_t(8 * len(urls))))
	defer C.free(unsafe.Pointer(urls_CArray))
	for i := range urls {
		urls_CArray[i] = urls[i].cPointer()
	}
	urls_ma := &C.struct_miqt_array{len: C.size_t(len(urls)), data: unsafe.Pointer(urls_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(urls_ma))
	C.QFileDialog_UrlsSelected(this.h, urls_ma)
}
func (this *QFileDialog) OnUrlsSelected(slot func(urls []QUrl)) {
	C.QFileDialog_connect_UrlsSelected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileDialog_UrlsSelected
func miqt_exec_callback_QFileDialog_UrlsSelected(cb C.intptr_t, urls *C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(urls []QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var urls_ma *C.struct_miqt_array = urls
	urls_ret := make([]QUrl, int(urls_ma.len))
	urls_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(urls_ma.data)) // hey ya
	for i := 0; i < int(urls_ma.len); i++ {
		urls_lv_ret := urls_outCast[i]
		urls_lv_goptr := newQUrl(urls_lv_ret)
		urls_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		urls_ret[i] = *urls_lv_goptr
	}
	C.free(unsafe.Pointer(urls_ma))
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
	slotval1 := UnsafeNewQUrl(unsafe.Pointer(url))

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
	slotval1 := UnsafeNewQUrl(unsafe.Pointer(directory))

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
	_ret := C.QFileDialog_GetOpenFileUrl()
	_goptr := newQUrl(_ret)
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
	_ret := C.QFileDialog_GetSaveFileUrl()
	_goptr := newQUrl(_ret)
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
	_ret := C.QFileDialog_GetExistingDirectoryUrl()
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileNames() []string {
	var _ma *C.struct_miqt_array = C.QFileDialog_GetOpenFileNames()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFileDialog_GetOpenFileUrls() []QUrl {
	var _ma *C.struct_miqt_array = C.QFileDialog_GetOpenFileUrls()
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQUrl(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFileDialog_SaveFileContent(fileContent []byte, fileNameHint string) {
	fileContent_alias := C.struct_miqt_string{}
	fileContent_alias.data = (*C.char)(unsafe.Pointer(&fileContent[0]))
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
	_ret := C.QFileDialog_GetOpenFileUrl1(parent.cPointer())
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileUrl2(parent *QWidget, caption string) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_ret := C.QFileDialog_GetOpenFileUrl2(parent.cPointer(), caption_ms)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileUrl3(parent *QWidget, caption string, dir *QUrl) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_ret := C.QFileDialog_GetOpenFileUrl3(parent.cPointer(), caption_ms, dir.cPointer())
	_goptr := newQUrl(_ret)
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
	_ret := C.QFileDialog_GetOpenFileUrl4(parent.cPointer(), caption_ms, dir.cPointer(), filter_ms)
	_goptr := newQUrl(_ret)
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
	_ret := C.QFileDialog_GetSaveFileUrl1(parent.cPointer())
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetSaveFileUrl2(parent *QWidget, caption string) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_ret := C.QFileDialog_GetSaveFileUrl2(parent.cPointer(), caption_ms)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetSaveFileUrl3(parent *QWidget, caption string, dir *QUrl) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_ret := C.QFileDialog_GetSaveFileUrl3(parent.cPointer(), caption_ms, dir.cPointer())
	_goptr := newQUrl(_ret)
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
	_ret := C.QFileDialog_GetSaveFileUrl4(parent.cPointer(), caption_ms, dir.cPointer(), filter_ms)
	_goptr := newQUrl(_ret)
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
	_ret := C.QFileDialog_GetExistingDirectoryUrl1(parent.cPointer())
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectoryUrl2(parent *QWidget, caption string) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_ret := C.QFileDialog_GetExistingDirectoryUrl2(parent.cPointer(), caption_ms)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectoryUrl3(parent *QWidget, caption string, dir *QUrl) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_ret := C.QFileDialog_GetExistingDirectoryUrl3(parent.cPointer(), caption_ms, dir.cPointer())
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetExistingDirectoryUrl4(parent *QWidget, caption string, dir *QUrl, options QFileDialog__Option) *QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	_ret := C.QFileDialog_GetExistingDirectoryUrl4(parent.cPointer(), caption_ms, dir.cPointer(), (C.int)(options))
	_goptr := newQUrl(_ret)
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
	supportedSchemes_ma := &C.struct_miqt_array{len: C.size_t(len(supportedSchemes)), data: unsafe.Pointer(supportedSchemes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(supportedSchemes_ma))
	_ret := C.QFileDialog_GetExistingDirectoryUrl5(parent.cPointer(), caption_ms, dir.cPointer(), (C.int)(options), supportedSchemes_ma)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QFileDialog_GetOpenFileNames1(parent *QWidget) []string {
	var _ma *C.struct_miqt_array = C.QFileDialog_GetOpenFileNames1(parent.cPointer())
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFileDialog_GetOpenFileNames2(parent *QWidget, caption string) []string {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	var _ma *C.struct_miqt_array = C.QFileDialog_GetOpenFileNames2(parent.cPointer(), caption_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
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
	var _ma *C.struct_miqt_array = C.QFileDialog_GetOpenFileNames3(parent.cPointer(), caption_ms, dir_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
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
	var _ma *C.struct_miqt_array = C.QFileDialog_GetOpenFileNames4(parent.cPointer(), caption_ms, dir_ms, filter_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFileDialog_GetOpenFileUrls1(parent *QWidget) []QUrl {
	var _ma *C.struct_miqt_array = C.QFileDialog_GetOpenFileUrls1(parent.cPointer())
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQUrl(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFileDialog_GetOpenFileUrls2(parent *QWidget, caption string) []QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	var _ma *C.struct_miqt_array = C.QFileDialog_GetOpenFileUrls2(parent.cPointer(), caption_ms)
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQUrl(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFileDialog_GetOpenFileUrls3(parent *QWidget, caption string, dir *QUrl) []QUrl {
	caption_ms := C.struct_miqt_string{}
	caption_ms.data = C.CString(caption)
	caption_ms.len = C.size_t(len(caption))
	defer C.free(unsafe.Pointer(caption_ms.data))
	var _ma *C.struct_miqt_array = C.QFileDialog_GetOpenFileUrls3(parent.cPointer(), caption_ms, dir.cPointer())
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQUrl(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
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
	var _ma *C.struct_miqt_array = C.QFileDialog_GetOpenFileUrls4(parent.cPointer(), caption_ms, dir.cPointer(), filter_ms)
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQUrl(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
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

package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcombobox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QComboBox struct {
	h *C.QComboBox
	*QWidget
}

func (this *QComboBox) cPointer() *C.QComboBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQComboBox(h *C.QComboBox) *QComboBox {
	return &QComboBox{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQComboBox_U(h unsafe.Pointer) *QComboBox {
	return newQComboBox((*C.QComboBox)(h))
}

// NewQComboBox constructs a new QComboBox object.
func NewQComboBox() *QComboBox {
	ret := C.QComboBox_new()
	return newQComboBox(ret)
}

// NewQComboBox2 constructs a new QComboBox object.
func NewQComboBox2(parent *QWidget) *QComboBox {
	ret := C.QComboBox_new2(parent.cPointer())
	return newQComboBox(ret)
}

func (this *QComboBox) MetaObject() *QMetaObject {
	ret := C.QComboBox_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QComboBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QComboBox_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QComboBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QComboBox_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QComboBox) MaxVisibleItems() int {
	ret := C.QComboBox_MaxVisibleItems(this.h)
	return (int)(ret)
}

func (this *QComboBox) SetMaxVisibleItems(maxItems int) {
	C.QComboBox_SetMaxVisibleItems(this.h, (C.int)(maxItems))
}

func (this *QComboBox) Count() int {
	ret := C.QComboBox_Count(this.h)
	return (int)(ret)
}

func (this *QComboBox) SetMaxCount(max int) {
	C.QComboBox_SetMaxCount(this.h, (C.int)(max))
}

func (this *QComboBox) MaxCount() int {
	ret := C.QComboBox_MaxCount(this.h)
	return (int)(ret)
}

func (this *QComboBox) AutoCompletion() bool {
	ret := C.QComboBox_AutoCompletion(this.h)
	return (bool)(ret)
}

func (this *QComboBox) SetAutoCompletion(enable bool) {
	C.QComboBox_SetAutoCompletion(this.h, (C.bool)(enable))
}

func (this *QComboBox) AutoCompletionCaseSensitivity() uintptr {
	ret := C.QComboBox_AutoCompletionCaseSensitivity(this.h)
	return (uintptr)(ret)
}

func (this *QComboBox) SetAutoCompletionCaseSensitivity(sensitivity uintptr) {
	C.QComboBox_SetAutoCompletionCaseSensitivity(this.h, (C.uintptr_t)(sensitivity))
}

func (this *QComboBox) DuplicatesEnabled() bool {
	ret := C.QComboBox_DuplicatesEnabled(this.h)
	return (bool)(ret)
}

func (this *QComboBox) SetDuplicatesEnabled(enable bool) {
	C.QComboBox_SetDuplicatesEnabled(this.h, (C.bool)(enable))
}

func (this *QComboBox) SetFrame(frame bool) {
	C.QComboBox_SetFrame(this.h, (C.bool)(frame))
}

func (this *QComboBox) HasFrame() bool {
	ret := C.QComboBox_HasFrame(this.h)
	return (bool)(ret)
}

func (this *QComboBox) FindText(text string) int {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QComboBox_FindText(this.h, text_Cstring, C.ulong(len(text)))
	return (int)(ret)
}

func (this *QComboBox) FindData(data *QVariant) int {
	ret := C.QComboBox_FindData(this.h, data.cPointer())
	return (int)(ret)
}

func (this *QComboBox) InsertPolicy() uintptr {
	ret := C.QComboBox_InsertPolicy(this.h)
	return (uintptr)(ret)
}

func (this *QComboBox) SetInsertPolicy(policy uintptr) {
	C.QComboBox_SetInsertPolicy(this.h, (C.uintptr_t)(policy))
}

func (this *QComboBox) SizeAdjustPolicy() uintptr {
	ret := C.QComboBox_SizeAdjustPolicy(this.h)
	return (uintptr)(ret)
}

func (this *QComboBox) SetSizeAdjustPolicy(policy uintptr) {
	C.QComboBox_SetSizeAdjustPolicy(this.h, (C.uintptr_t)(policy))
}

func (this *QComboBox) MinimumContentsLength() int {
	ret := C.QComboBox_MinimumContentsLength(this.h)
	return (int)(ret)
}

func (this *QComboBox) SetMinimumContentsLength(characters int) {
	C.QComboBox_SetMinimumContentsLength(this.h, (C.int)(characters))
}

func (this *QComboBox) IconSize() *QSize {
	ret := C.QComboBox_IconSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QComboBox) SetIconSize(size *QSize) {
	C.QComboBox_SetIconSize(this.h, size.cPointer())
}

func (this *QComboBox) SetPlaceholderText(placeholderText string) {
	placeholderText_Cstring := C.CString(placeholderText)
	defer C.free(unsafe.Pointer(placeholderText_Cstring))
	C.QComboBox_SetPlaceholderText(this.h, placeholderText_Cstring, C.ulong(len(placeholderText)))
}

func (this *QComboBox) PlaceholderText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QComboBox_PlaceholderText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QComboBox) IsEditable() bool {
	ret := C.QComboBox_IsEditable(this.h)
	return (bool)(ret)
}

func (this *QComboBox) SetEditable(editable bool) {
	C.QComboBox_SetEditable(this.h, (C.bool)(editable))
}

func (this *QComboBox) SetLineEdit(edit *QLineEdit) {
	C.QComboBox_SetLineEdit(this.h, edit.cPointer())
}

func (this *QComboBox) LineEdit() *QLineEdit {
	ret := C.QComboBox_LineEdit(this.h)
	return newQLineEdit_U(unsafe.Pointer(ret))
}

func (this *QComboBox) SetValidator(v *QValidator) {
	C.QComboBox_SetValidator(this.h, v.cPointer())
}

func (this *QComboBox) Validator() *QValidator {
	ret := C.QComboBox_Validator(this.h)
	return newQValidator_U(unsafe.Pointer(ret))
}

func (this *QComboBox) SetCompleter(c *QCompleter) {
	C.QComboBox_SetCompleter(this.h, c.cPointer())
}

func (this *QComboBox) Completer() *QCompleter {
	ret := C.QComboBox_Completer(this.h)
	return newQCompleter_U(unsafe.Pointer(ret))
}

func (this *QComboBox) ItemDelegate() *QAbstractItemDelegate {
	ret := C.QComboBox_ItemDelegate(this.h)
	return newQAbstractItemDelegate_U(unsafe.Pointer(ret))
}

func (this *QComboBox) SetItemDelegate(delegate *QAbstractItemDelegate) {
	C.QComboBox_SetItemDelegate(this.h, delegate.cPointer())
}

func (this *QComboBox) Model() *QAbstractItemModel {
	ret := C.QComboBox_Model(this.h)
	return newQAbstractItemModel_U(unsafe.Pointer(ret))
}

func (this *QComboBox) SetModel(model *QAbstractItemModel) {
	C.QComboBox_SetModel(this.h, model.cPointer())
}

func (this *QComboBox) RootModelIndex() *QModelIndex {
	ret := C.QComboBox_RootModelIndex(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QComboBox) SetRootModelIndex(index *QModelIndex) {
	C.QComboBox_SetRootModelIndex(this.h, index.cPointer())
}

func (this *QComboBox) ModelColumn() int {
	ret := C.QComboBox_ModelColumn(this.h)
	return (int)(ret)
}

func (this *QComboBox) SetModelColumn(visibleColumn int) {
	C.QComboBox_SetModelColumn(this.h, (C.int)(visibleColumn))
}

func (this *QComboBox) CurrentIndex() int {
	ret := C.QComboBox_CurrentIndex(this.h)
	return (int)(ret)
}

func (this *QComboBox) CurrentText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QComboBox_CurrentText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QComboBox) CurrentData() *QVariant {
	ret := C.QComboBox_CurrentData(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QComboBox) ItemText(index int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QComboBox_ItemText(this.h, (C.int)(index), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QComboBox) ItemIcon(index int) *QIcon {
	ret := C.QComboBox_ItemIcon(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QComboBox) ItemData(index int) *QVariant {
	ret := C.QComboBox_ItemData(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QComboBox) AddItem(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QComboBox_AddItem(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QComboBox) AddItem2(icon *QIcon, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QComboBox_AddItem2(this.h, icon.cPointer(), text_Cstring, C.ulong(len(text)))
}

func (this *QComboBox) AddItems(texts []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	texts_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(texts))))
	texts_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(texts))))
	defer C.free(unsafe.Pointer(texts_CArray))
	defer C.free(unsafe.Pointer(texts_Lengths))
	for i := range texts {
		single_cstring := C.CString(texts[i])
		defer C.free(unsafe.Pointer(single_cstring))
		texts_CArray[i] = single_cstring
		texts_Lengths[i] = (C.size_t)(len(texts[i]))
	}
	C.QComboBox_AddItems(this.h, &texts_CArray[0], &texts_Lengths[0], C.ulong(len(texts)))
}

func (this *QComboBox) InsertItem(index int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QComboBox_InsertItem(this.h, (C.int)(index), text_Cstring, C.ulong(len(text)))
}

func (this *QComboBox) InsertItem2(index int, icon *QIcon, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QComboBox_InsertItem2(this.h, (C.int)(index), icon.cPointer(), text_Cstring, C.ulong(len(text)))
}

func (this *QComboBox) InsertItems(index int, texts []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	texts_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(texts))))
	texts_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(texts))))
	defer C.free(unsafe.Pointer(texts_CArray))
	defer C.free(unsafe.Pointer(texts_Lengths))
	for i := range texts {
		single_cstring := C.CString(texts[i])
		defer C.free(unsafe.Pointer(single_cstring))
		texts_CArray[i] = single_cstring
		texts_Lengths[i] = (C.size_t)(len(texts[i]))
	}
	C.QComboBox_InsertItems(this.h, (C.int)(index), &texts_CArray[0], &texts_Lengths[0], C.ulong(len(texts)))
}

func (this *QComboBox) InsertSeparator(index int) {
	C.QComboBox_InsertSeparator(this.h, (C.int)(index))
}

func (this *QComboBox) RemoveItem(index int) {
	C.QComboBox_RemoveItem(this.h, (C.int)(index))
}

func (this *QComboBox) SetItemText(index int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QComboBox_SetItemText(this.h, (C.int)(index), text_Cstring, C.ulong(len(text)))
}

func (this *QComboBox) SetItemIcon(index int, icon *QIcon) {
	C.QComboBox_SetItemIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QComboBox) SetItemData(index int, value *QVariant) {
	C.QComboBox_SetItemData(this.h, (C.int)(index), value.cPointer())
}

func (this *QComboBox) View() *QAbstractItemView {
	ret := C.QComboBox_View(this.h)
	return newQAbstractItemView_U(unsafe.Pointer(ret))
}

func (this *QComboBox) SetView(itemView *QAbstractItemView) {
	C.QComboBox_SetView(this.h, itemView.cPointer())
}

func (this *QComboBox) SizeHint() *QSize {
	ret := C.QComboBox_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QComboBox) MinimumSizeHint() *QSize {
	ret := C.QComboBox_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QComboBox) ShowPopup() {
	C.QComboBox_ShowPopup(this.h)
}

func (this *QComboBox) HidePopup() {
	C.QComboBox_HidePopup(this.h)
}

func (this *QComboBox) Event(event *QEvent) bool {
	ret := C.QComboBox_Event(this.h, event.cPointer())
	return (bool)(ret)
}

func (this *QComboBox) InputMethodQuery(param1 uintptr) *QVariant {
	ret := C.QComboBox_InputMethodQuery(this.h, (C.uintptr_t)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QComboBox) InputMethodQuery2(query uintptr, argument *QVariant) *QVariant {
	ret := C.QComboBox_InputMethodQuery2(this.h, (C.uintptr_t)(query), argument.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QComboBox) Clear() {
	C.QComboBox_Clear(this.h)
}

func (this *QComboBox) ClearEditText() {
	C.QComboBox_ClearEditText(this.h)
}

func (this *QComboBox) SetEditText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QComboBox_SetEditText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QComboBox) SetCurrentIndex(index int) {
	C.QComboBox_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QComboBox) SetCurrentText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QComboBox_SetCurrentText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QComboBox) EditTextChanged(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QComboBox_EditTextChanged(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QComboBox) OnEditTextChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QComboBox_connect_EditTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QComboBox) Activated(index int) {
	C.QComboBox_Activated(this.h, (C.int)(index))
}

func (this *QComboBox) OnActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QComboBox_connect_Activated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QComboBox) TextActivated(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QComboBox_TextActivated(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QComboBox) OnTextActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QComboBox_connect_TextActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QComboBox) Highlighted(index int) {
	C.QComboBox_Highlighted(this.h, (C.int)(index))
}

func (this *QComboBox) OnHighlighted(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QComboBox_connect_Highlighted(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QComboBox) TextHighlighted(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QComboBox_TextHighlighted(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QComboBox) OnTextHighlighted(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QComboBox_connect_TextHighlighted(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QComboBox) CurrentIndexChanged(index int) {
	C.QComboBox_CurrentIndexChanged(this.h, (C.int)(index))
}

func (this *QComboBox) OnCurrentIndexChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QComboBox_connect_CurrentIndexChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QComboBox) CurrentIndexChangedWithQString(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QComboBox_CurrentIndexChangedWithQString(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QComboBox) OnCurrentIndexChangedWithQString(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QComboBox_connect_CurrentIndexChangedWithQString(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QComboBox) CurrentTextChanged(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QComboBox_CurrentTextChanged(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QComboBox) OnCurrentTextChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QComboBox_connect_CurrentTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QComboBox) ActivatedWithQString(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QComboBox_ActivatedWithQString(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QComboBox) OnActivatedWithQString(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QComboBox_connect_ActivatedWithQString(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QComboBox) HighlightedWithQString(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QComboBox_HighlightedWithQString(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QComboBox) OnHighlightedWithQString(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QComboBox_connect_HighlightedWithQString(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QComboBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QComboBox_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QComboBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QComboBox_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QComboBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QComboBox_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QComboBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QComboBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QComboBox) FindText2(text string, flags int) int {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QComboBox_FindText2(this.h, text_Cstring, C.ulong(len(text)), (C.int)(flags))
	return (int)(ret)
}

func (this *QComboBox) FindData2(data *QVariant, role int) int {
	ret := C.QComboBox_FindData2(this.h, data.cPointer(), (C.int)(role))
	return (int)(ret)
}

func (this *QComboBox) FindData3(data *QVariant, role int, flags int) int {
	ret := C.QComboBox_FindData3(this.h, data.cPointer(), (C.int)(role), (C.int)(flags))
	return (int)(ret)
}

func (this *QComboBox) CurrentData1(role int) *QVariant {
	ret := C.QComboBox_CurrentData1(this.h, (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QComboBox) ItemData2(index int, role int) *QVariant {
	ret := C.QComboBox_ItemData2(this.h, (C.int)(index), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QComboBox) AddItem22(text string, userData *QVariant) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QComboBox_AddItem22(this.h, text_Cstring, C.ulong(len(text)), userData.cPointer())
}

func (this *QComboBox) AddItem3(icon *QIcon, text string, userData *QVariant) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QComboBox_AddItem3(this.h, icon.cPointer(), text_Cstring, C.ulong(len(text)), userData.cPointer())
}

func (this *QComboBox) InsertItem3(index int, text string, userData *QVariant) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QComboBox_InsertItem3(this.h, (C.int)(index), text_Cstring, C.ulong(len(text)), userData.cPointer())
}

func (this *QComboBox) InsertItem4(index int, icon *QIcon, text string, userData *QVariant) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QComboBox_InsertItem4(this.h, (C.int)(index), icon.cPointer(), text_Cstring, C.ulong(len(text)), userData.cPointer())
}

func (this *QComboBox) SetItemData3(index int, value *QVariant, role int) {
	C.QComboBox_SetItemData3(this.h, (C.int)(index), value.cPointer(), (C.int)(role))
}

func (this *QComboBox) Delete() {
	C.QComboBox_Delete(this.h)
}

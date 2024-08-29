package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qwizard.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWizard struct {
	h *C.QWizard
	*QDialog
}

func (this *QWizard) cPointer() *C.QWizard {
	if this == nil {
		return nil
	}
	return this.h
}

func newQWizard(h *C.QWizard) *QWizard {
	return &QWizard{h: h, QDialog: newQDialog_U(unsafe.Pointer(h))}
}

func newQWizard_U(h unsafe.Pointer) *QWizard {
	return newQWizard((*C.QWizard)(h))
}

// NewQWizard constructs a new QWizard object.
func NewQWizard() *QWizard {
	ret := C.QWizard_new()
	return newQWizard(ret)
}

// NewQWizard2 constructs a new QWizard object.
func NewQWizard2(parent *QWidget) *QWizard {
	ret := C.QWizard_new2(parent.cPointer())
	return newQWizard(ret)
}

// NewQWizard3 constructs a new QWizard object.
func NewQWizard3(parent *QWidget, flags int) *QWizard {
	ret := C.QWizard_new3(parent.cPointer(), (C.int)(flags))
	return newQWizard(ret)
}

func (this *QWizard) MetaObject() *QMetaObject {
	ret := C.QWizard_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QWizard_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizard_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWizard_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizard_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWizard) AddPage(page *QWizardPage) int {
	ret := C.QWizard_AddPage(this.h, page.cPointer())
	return (int)(ret)
}

func (this *QWizard) SetPage(id int, page *QWizardPage) {
	C.QWizard_SetPage(this.h, (C.int)(id), page.cPointer())
}

func (this *QWizard) RemovePage(id int) {
	C.QWizard_RemovePage(this.h, (C.int)(id))
}

func (this *QWizard) Page(id int) *QWizardPage {
	ret := C.QWizard_Page(this.h, (C.int)(id))
	return newQWizardPage_U(unsafe.Pointer(ret))
}

func (this *QWizard) HasVisitedPage(id int) bool {
	ret := C.QWizard_HasVisitedPage(this.h, (C.int)(id))
	return (bool)(ret)
}

func (this *QWizard) VisitedPages() []int {
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QWizard_VisitedPages(this.h, &_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWizard) VisitedIds() []int {
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QWizard_VisitedIds(this.h, &_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWizard) PageIds() []int {
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QWizard_PageIds(this.h, &_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWizard) SetStartId(id int) {
	C.QWizard_SetStartId(this.h, (C.int)(id))
}

func (this *QWizard) StartId() int {
	ret := C.QWizard_StartId(this.h)
	return (int)(ret)
}

func (this *QWizard) CurrentPage() *QWizardPage {
	ret := C.QWizard_CurrentPage(this.h)
	return newQWizardPage_U(unsafe.Pointer(ret))
}

func (this *QWizard) CurrentId() int {
	ret := C.QWizard_CurrentId(this.h)
	return (int)(ret)
}

func (this *QWizard) ValidateCurrentPage() bool {
	ret := C.QWizard_ValidateCurrentPage(this.h)
	return (bool)(ret)
}

func (this *QWizard) NextId() int {
	ret := C.QWizard_NextId(this.h)
	return (int)(ret)
}

func (this *QWizard) SetField(name string, value *QVariant) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QWizard_SetField(this.h, name_Cstring, C.ulong(len(name)), value.cPointer())
}

func (this *QWizard) Field(name string) *QVariant {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QWizard_Field(this.h, name_Cstring, C.ulong(len(name)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWizard) SetWizardStyle(style uintptr) {
	C.QWizard_SetWizardStyle(this.h, (C.uintptr_t)(style))
}

func (this *QWizard) WizardStyle() uintptr {
	ret := C.QWizard_WizardStyle(this.h)
	return (uintptr)(ret)
}

func (this *QWizard) SetOption(option uintptr) {
	C.QWizard_SetOption(this.h, (C.uintptr_t)(option))
}

func (this *QWizard) TestOption(option uintptr) bool {
	ret := C.QWizard_TestOption(this.h, (C.uintptr_t)(option))
	return (bool)(ret)
}

func (this *QWizard) SetOptions(options int) {
	C.QWizard_SetOptions(this.h, (C.int)(options))
}

func (this *QWizard) Options() int {
	ret := C.QWizard_Options(this.h)
	return (int)(ret)
}

func (this *QWizard) SetButtonText(which int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QWizard_SetButtonText(this.h, (C.int)(which), text_Cstring, C.ulong(len(text)))
}

func (this *QWizard) ButtonText(which int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizard_ButtonText(this.h, (C.int)(which), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWizard) SetButtonLayout(layout []int) {
	// For the C ABI, malloc a C array of raw pointers
	layout_CArray := (*[0xffff]C.int)(C.malloc(C.ulong(8 * len(layout))))
	defer C.free(unsafe.Pointer(layout_CArray))
	for i := range layout {
		layout_CArray[i] = (C.int)(layout[i])
	}
	C.QWizard_SetButtonLayout(this.h, &layout_CArray[0], C.ulong(len(layout)))
}

func (this *QWizard) SetButton(which int, button *QAbstractButton) {
	C.QWizard_SetButton(this.h, (C.int)(which), button.cPointer())
}

func (this *QWizard) Button(which int) *QAbstractButton {
	ret := C.QWizard_Button(this.h, (C.int)(which))
	return newQAbstractButton_U(unsafe.Pointer(ret))
}

func (this *QWizard) SetTitleFormat(format uintptr) {
	C.QWizard_SetTitleFormat(this.h, (C.uintptr_t)(format))
}

func (this *QWizard) TitleFormat() uintptr {
	ret := C.QWizard_TitleFormat(this.h)
	return (uintptr)(ret)
}

func (this *QWizard) SetSubTitleFormat(format uintptr) {
	C.QWizard_SetSubTitleFormat(this.h, (C.uintptr_t)(format))
}

func (this *QWizard) SubTitleFormat() uintptr {
	ret := C.QWizard_SubTitleFormat(this.h)
	return (uintptr)(ret)
}

func (this *QWizard) SetPixmap(which uintptr, pixmap *QPixmap) {
	C.QWizard_SetPixmap(this.h, (C.uintptr_t)(which), pixmap.cPointer())
}

func (this *QWizard) Pixmap(which uintptr) *QPixmap {
	ret := C.QWizard_Pixmap(this.h, (C.uintptr_t)(which))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWizard) SetSideWidget(widget *QWidget) {
	C.QWizard_SetSideWidget(this.h, widget.cPointer())
}

func (this *QWizard) SideWidget() *QWidget {
	ret := C.QWizard_SideWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QWizard) SetDefaultProperty(className string, property string, changedSignal string) {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	property_Cstring := C.CString(property)
	defer C.free(unsafe.Pointer(property_Cstring))
	changedSignal_Cstring := C.CString(changedSignal)
	defer C.free(unsafe.Pointer(changedSignal_Cstring))
	C.QWizard_SetDefaultProperty(this.h, className_Cstring, property_Cstring, changedSignal_Cstring)
}

func (this *QWizard) SetVisible(visible bool) {
	C.QWizard_SetVisible(this.h, (C.bool)(visible))
}

func (this *QWizard) SizeHint() *QSize {
	ret := C.QWizard_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWizard) CurrentIdChanged(id int) {
	C.QWizard_CurrentIdChanged(this.h, (C.int)(id))
}

func (this *QWizard) OnCurrentIdChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWizard_connect_CurrentIdChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWizard) HelpRequested() {
	C.QWizard_HelpRequested(this.h)
}

func (this *QWizard) OnHelpRequested(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWizard_connect_HelpRequested(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWizard) CustomButtonClicked(which int) {
	C.QWizard_CustomButtonClicked(this.h, (C.int)(which))
}

func (this *QWizard) OnCustomButtonClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWizard_connect_CustomButtonClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWizard) PageAdded(id int) {
	C.QWizard_PageAdded(this.h, (C.int)(id))
}

func (this *QWizard) OnPageAdded(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWizard_connect_PageAdded(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWizard) PageRemoved(id int) {
	C.QWizard_PageRemoved(this.h, (C.int)(id))
}

func (this *QWizard) OnPageRemoved(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWizard_connect_PageRemoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWizard) Back() {
	C.QWizard_Back(this.h)
}

func (this *QWizard) Next() {
	C.QWizard_Next(this.h)
}

func (this *QWizard) Restart() {
	C.QWizard_Restart(this.h)
}

func QWizard_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizard_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWizard_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizard_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWizard_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizard_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWizard_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizard_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWizard) SetOption2(option uintptr, on bool) {
	C.QWizard_SetOption2(this.h, (C.uintptr_t)(option), (C.bool)(on))
}

func (this *QWizard) Delete() {
	C.QWizard_Delete(this.h)
}

type QWizardPage struct {
	h *C.QWizardPage
	*QWidget
}

func (this *QWizardPage) cPointer() *C.QWizardPage {
	if this == nil {
		return nil
	}
	return this.h
}

func newQWizardPage(h *C.QWizardPage) *QWizardPage {
	return &QWizardPage{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQWizardPage_U(h unsafe.Pointer) *QWizardPage {
	return newQWizardPage((*C.QWizardPage)(h))
}

// NewQWizardPage constructs a new QWizardPage object.
func NewQWizardPage() *QWizardPage {
	ret := C.QWizardPage_new()
	return newQWizardPage(ret)
}

// NewQWizardPage2 constructs a new QWizardPage object.
func NewQWizardPage2(parent *QWidget) *QWizardPage {
	ret := C.QWizardPage_new2(parent.cPointer())
	return newQWizardPage(ret)
}

func (this *QWizardPage) MetaObject() *QMetaObject {
	ret := C.QWizardPage_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QWizardPage_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizardPage_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWizardPage_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizardPage_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWizardPage) SetTitle(title string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	C.QWizardPage_SetTitle(this.h, title_Cstring, C.ulong(len(title)))
}

func (this *QWizardPage) Title() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizardPage_Title(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWizardPage) SetSubTitle(subTitle string) {
	subTitle_Cstring := C.CString(subTitle)
	defer C.free(unsafe.Pointer(subTitle_Cstring))
	C.QWizardPage_SetSubTitle(this.h, subTitle_Cstring, C.ulong(len(subTitle)))
}

func (this *QWizardPage) SubTitle() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizardPage_SubTitle(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWizardPage) SetPixmap(which uintptr, pixmap *QPixmap) {
	C.QWizardPage_SetPixmap(this.h, (C.uintptr_t)(which), pixmap.cPointer())
}

func (this *QWizardPage) Pixmap(which uintptr) *QPixmap {
	ret := C.QWizardPage_Pixmap(this.h, (C.uintptr_t)(which))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWizardPage) SetFinalPage(finalPage bool) {
	C.QWizardPage_SetFinalPage(this.h, (C.bool)(finalPage))
}

func (this *QWizardPage) IsFinalPage() bool {
	ret := C.QWizardPage_IsFinalPage(this.h)
	return (bool)(ret)
}

func (this *QWizardPage) SetCommitPage(commitPage bool) {
	C.QWizardPage_SetCommitPage(this.h, (C.bool)(commitPage))
}

func (this *QWizardPage) IsCommitPage() bool {
	ret := C.QWizardPage_IsCommitPage(this.h)
	return (bool)(ret)
}

func (this *QWizardPage) SetButtonText(which int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QWizardPage_SetButtonText(this.h, (C.int)(which), text_Cstring, C.ulong(len(text)))
}

func (this *QWizardPage) ButtonText(which int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizardPage_ButtonText(this.h, (C.int)(which), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWizardPage) InitializePage() {
	C.QWizardPage_InitializePage(this.h)
}

func (this *QWizardPage) CleanupPage() {
	C.QWizardPage_CleanupPage(this.h)
}

func (this *QWizardPage) ValidatePage() bool {
	ret := C.QWizardPage_ValidatePage(this.h)
	return (bool)(ret)
}

func (this *QWizardPage) IsComplete() bool {
	ret := C.QWizardPage_IsComplete(this.h)
	return (bool)(ret)
}

func (this *QWizardPage) NextId() int {
	ret := C.QWizardPage_NextId(this.h)
	return (int)(ret)
}

func (this *QWizardPage) CompleteChanged() {
	C.QWizardPage_CompleteChanged(this.h)
}

func (this *QWizardPage) OnCompleteChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWizardPage_connect_CompleteChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QWizardPage_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizardPage_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWizardPage_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizardPage_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWizardPage_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizardPage_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWizardPage_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWizardPage_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWizardPage) Delete() {
	C.QWizardPage_Delete(this.h)
}

package qt6

/*

#include "gen_qwizard.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWizard__WizardButton int

const (
	QWizard__BackButton       QWizard__WizardButton = 0
	QWizard__NextButton       QWizard__WizardButton = 1
	QWizard__CommitButton     QWizard__WizardButton = 2
	QWizard__FinishButton     QWizard__WizardButton = 3
	QWizard__CancelButton     QWizard__WizardButton = 4
	QWizard__HelpButton       QWizard__WizardButton = 5
	QWizard__CustomButton1    QWizard__WizardButton = 6
	QWizard__CustomButton2    QWizard__WizardButton = 7
	QWizard__CustomButton3    QWizard__WizardButton = 8
	QWizard__Stretch          QWizard__WizardButton = 9
	QWizard__NoButton         QWizard__WizardButton = -1
	QWizard__NStandardButtons QWizard__WizardButton = 6
	QWizard__NButtons         QWizard__WizardButton = 9
)

type QWizard__WizardPixmap int

const (
	QWizard__WatermarkPixmap  QWizard__WizardPixmap = 0
	QWizard__LogoPixmap       QWizard__WizardPixmap = 1
	QWizard__BannerPixmap     QWizard__WizardPixmap = 2
	QWizard__BackgroundPixmap QWizard__WizardPixmap = 3
	QWizard__NPixmaps         QWizard__WizardPixmap = 4
)

type QWizard__WizardStyle int

const (
	QWizard__ClassicStyle QWizard__WizardStyle = 0
	QWizard__ModernStyle  QWizard__WizardStyle = 1
	QWizard__MacStyle     QWizard__WizardStyle = 2
	QWizard__AeroStyle    QWizard__WizardStyle = 3
	QWizard__NStyles      QWizard__WizardStyle = 4
)

type QWizard__WizardOption int

const (
	QWizard__IndependentPages             QWizard__WizardOption = 1
	QWizard__IgnoreSubTitles              QWizard__WizardOption = 2
	QWizard__ExtendedWatermarkPixmap      QWizard__WizardOption = 4
	QWizard__NoDefaultButton              QWizard__WizardOption = 8
	QWizard__NoBackButtonOnStartPage      QWizard__WizardOption = 16
	QWizard__NoBackButtonOnLastPage       QWizard__WizardOption = 32
	QWizard__DisabledBackButtonOnLastPage QWizard__WizardOption = 64
	QWizard__HaveNextButtonOnLastPage     QWizard__WizardOption = 128
	QWizard__HaveFinishButtonOnEarlyPages QWizard__WizardOption = 256
	QWizard__NoCancelButton               QWizard__WizardOption = 512
	QWizard__CancelButtonOnLeft           QWizard__WizardOption = 1024
	QWizard__HaveHelpButton               QWizard__WizardOption = 2048
	QWizard__HelpButtonOnRight            QWizard__WizardOption = 4096
	QWizard__HaveCustomButton1            QWizard__WizardOption = 8192
	QWizard__HaveCustomButton2            QWizard__WizardOption = 16384
	QWizard__HaveCustomButton3            QWizard__WizardOption = 32768
	QWizard__NoCancelButtonOnLastPage     QWizard__WizardOption = 65536
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

func (this *QWizard) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQWizard(h *C.QWizard) *QWizard {
	if h == nil {
		return nil
	}
	return &QWizard{h: h, QDialog: UnsafeNewQDialog(unsafe.Pointer(h))}
}

func UnsafeNewQWizard(h unsafe.Pointer) *QWizard {
	return newQWizard((*C.QWizard)(h))
}

// NewQWizard constructs a new QWizard object.
func NewQWizard(parent *QWidget) *QWizard {
	ret := C.QWizard_new(parent.cPointer())
	return newQWizard(ret)
}

// NewQWizard2 constructs a new QWizard object.
func NewQWizard2() *QWizard {
	ret := C.QWizard_new2()
	return newQWizard(ret)
}

// NewQWizard3 constructs a new QWizard object.
func NewQWizard3(parent *QWidget, flags WindowType) *QWizard {
	ret := C.QWizard_new3(parent.cPointer(), (C.int)(flags))
	return newQWizard(ret)
}

func (this *QWizard) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QWizard_MetaObject(this.h)))
}

func (this *QWizard) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWizard_Metacast(this.h, param1_Cstring))
}

func QWizard_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWizard_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizard) AddPage(page *QWizardPage) int {
	return (int)(C.QWizard_AddPage(this.h, page.cPointer()))
}

func (this *QWizard) SetPage(id int, page *QWizardPage) {
	C.QWizard_SetPage(this.h, (C.int)(id), page.cPointer())
}

func (this *QWizard) RemovePage(id int) {
	C.QWizard_RemovePage(this.h, (C.int)(id))
}

func (this *QWizard) Page(id int) *QWizardPage {
	return UnsafeNewQWizardPage(unsafe.Pointer(C.QWizard_Page(this.h, (C.int)(id))))
}

func (this *QWizard) HasVisitedPage(id int) bool {
	return (bool)(C.QWizard_HasVisitedPage(this.h, (C.int)(id)))
}

func (this *QWizard) VisitedIds() []int {
	var _ma *C.struct_miqt_array = C.QWizard_VisitedIds(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QWizard) PageIds() []int {
	var _ma *C.struct_miqt_array = C.QWizard_PageIds(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QWizard) SetStartId(id int) {
	C.QWizard_SetStartId(this.h, (C.int)(id))
}

func (this *QWizard) StartId() int {
	return (int)(C.QWizard_StartId(this.h))
}

func (this *QWizard) CurrentPage() *QWizardPage {
	return UnsafeNewQWizardPage(unsafe.Pointer(C.QWizard_CurrentPage(this.h)))
}

func (this *QWizard) CurrentId() int {
	return (int)(C.QWizard_CurrentId(this.h))
}

func (this *QWizard) ValidateCurrentPage() bool {
	return (bool)(C.QWizard_ValidateCurrentPage(this.h))
}

func (this *QWizard) NextId() int {
	return (int)(C.QWizard_NextId(this.h))
}

func (this *QWizard) SetField(name string, value *QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWizard_SetField(this.h, name_ms, value.cPointer())
}

func (this *QWizard) Field(name string) *QVariant {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_ret := C.QWizard_Field(this.h, name_ms)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWizard) SetWizardStyle(style QWizard__WizardStyle) {
	C.QWizard_SetWizardStyle(this.h, (C.int)(style))
}

func (this *QWizard) WizardStyle() QWizard__WizardStyle {
	return (QWizard__WizardStyle)(C.QWizard_WizardStyle(this.h))
}

func (this *QWizard) SetOption(option QWizard__WizardOption) {
	C.QWizard_SetOption(this.h, (C.int)(option))
}

func (this *QWizard) TestOption(option QWizard__WizardOption) bool {
	return (bool)(C.QWizard_TestOption(this.h, (C.int)(option)))
}

func (this *QWizard) SetOptions(options QWizard__WizardOption) {
	C.QWizard_SetOptions(this.h, (C.int)(options))
}

func (this *QWizard) Options() QWizard__WizardOption {
	return (QWizard__WizardOption)(C.QWizard_Options(this.h))
}

func (this *QWizard) SetButtonText(which QWizard__WizardButton, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QWizard_SetButtonText(this.h, (C.int)(which), text_ms)
}

func (this *QWizard) ButtonText(which QWizard__WizardButton) string {
	var _ms C.struct_miqt_string = C.QWizard_ButtonText(this.h, (C.int)(which))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizard) SetButtonLayout(layout []QWizard__WizardButton) {
	// For the C ABI, malloc a C array of raw pointers
	layout_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(layout))))
	defer C.free(unsafe.Pointer(layout_CArray))
	for i := range layout {
		layout_CArray[i] = (C.int)(layout[i])
	}
	layout_ma := &C.struct_miqt_array{len: C.size_t(len(layout)), data: unsafe.Pointer(layout_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(layout_ma))
	C.QWizard_SetButtonLayout(this.h, layout_ma)
}

func (this *QWizard) SetButton(which QWizard__WizardButton, button *QAbstractButton) {
	C.QWizard_SetButton(this.h, (C.int)(which), button.cPointer())
}

func (this *QWizard) Button(which QWizard__WizardButton) *QAbstractButton {
	return UnsafeNewQAbstractButton(unsafe.Pointer(C.QWizard_Button(this.h, (C.int)(which))))
}

func (this *QWizard) SetTitleFormat(format TextFormat) {
	C.QWizard_SetTitleFormat(this.h, (C.int)(format))
}

func (this *QWizard) TitleFormat() TextFormat {
	return (TextFormat)(C.QWizard_TitleFormat(this.h))
}

func (this *QWizard) SetSubTitleFormat(format TextFormat) {
	C.QWizard_SetSubTitleFormat(this.h, (C.int)(format))
}

func (this *QWizard) SubTitleFormat() TextFormat {
	return (TextFormat)(C.QWizard_SubTitleFormat(this.h))
}

func (this *QWizard) SetPixmap(which QWizard__WizardPixmap, pixmap *QPixmap) {
	C.QWizard_SetPixmap(this.h, (C.int)(which), pixmap.cPointer())
}

func (this *QWizard) Pixmap(which QWizard__WizardPixmap) *QPixmap {
	_ret := C.QWizard_Pixmap(this.h, (C.int)(which))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWizard) SetSideWidget(widget *QWidget) {
	C.QWizard_SetSideWidget(this.h, widget.cPointer())
}

func (this *QWizard) SideWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QWizard_SideWidget(this.h)))
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
	_ret := C.QWizard_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWizard) CurrentIdChanged(id int) {
	C.QWizard_CurrentIdChanged(this.h, (C.int)(id))
}
func (this *QWizard) OnCurrentIdChanged(slot func(id int)) {
	C.QWizard_connect_CurrentIdChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWizard_CurrentIdChanged
func miqt_exec_callback_QWizard_CurrentIdChanged(cb C.intptr_t, id C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	gofunc(slotval1)
}

func (this *QWizard) HelpRequested() {
	C.QWizard_HelpRequested(this.h)
}
func (this *QWizard) OnHelpRequested(slot func()) {
	C.QWizard_connect_HelpRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWizard_HelpRequested
func miqt_exec_callback_QWizard_HelpRequested(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWizard) CustomButtonClicked(which int) {
	C.QWizard_CustomButtonClicked(this.h, (C.int)(which))
}
func (this *QWizard) OnCustomButtonClicked(slot func(which int)) {
	C.QWizard_connect_CustomButtonClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWizard_CustomButtonClicked
func miqt_exec_callback_QWizard_CustomButtonClicked(cb C.intptr_t, which C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(which int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(which)

	gofunc(slotval1)
}

func (this *QWizard) PageAdded(id int) {
	C.QWizard_PageAdded(this.h, (C.int)(id))
}
func (this *QWizard) OnPageAdded(slot func(id int)) {
	C.QWizard_connect_PageAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWizard_PageAdded
func miqt_exec_callback_QWizard_PageAdded(cb C.intptr_t, id C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	gofunc(slotval1)
}

func (this *QWizard) PageRemoved(id int) {
	C.QWizard_PageRemoved(this.h, (C.int)(id))
}
func (this *QWizard) OnPageRemoved(slot func(id int)) {
	C.QWizard_connect_PageRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWizard_PageRemoved
func miqt_exec_callback_QWizard_PageRemoved(cb C.intptr_t, id C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	gofunc(slotval1)
}

func (this *QWizard) Back() {
	C.QWizard_Back(this.h)
}

func (this *QWizard) Next() {
	C.QWizard_Next(this.h)
}

func (this *QWizard) SetCurrentId(id int) {
	C.QWizard_SetCurrentId(this.h, (C.int)(id))
}

func (this *QWizard) Restart() {
	C.QWizard_Restart(this.h)
}

func QWizard_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWizard_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWizard_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWizard_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizard) SetOption2(option QWizard__WizardOption, on bool) {
	C.QWizard_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QWizard) Delete() {
	C.QWizard_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWizard) GoGC() {
	runtime.SetFinalizer(this, func(this *QWizard) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QWizardPage) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQWizardPage(h *C.QWizardPage) *QWizardPage {
	if h == nil {
		return nil
	}
	return &QWizardPage{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQWizardPage(h unsafe.Pointer) *QWizardPage {
	return newQWizardPage((*C.QWizardPage)(h))
}

// NewQWizardPage constructs a new QWizardPage object.
func NewQWizardPage(parent *QWidget) *QWizardPage {
	ret := C.QWizardPage_new(parent.cPointer())
	return newQWizardPage(ret)
}

// NewQWizardPage2 constructs a new QWizardPage object.
func NewQWizardPage2() *QWizardPage {
	ret := C.QWizardPage_new2()
	return newQWizardPage(ret)
}

func (this *QWizardPage) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QWizardPage_MetaObject(this.h)))
}

func (this *QWizardPage) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWizardPage_Metacast(this.h, param1_Cstring))
}

func QWizardPage_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWizardPage_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizardPage) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QWizardPage_SetTitle(this.h, title_ms)
}

func (this *QWizardPage) Title() string {
	var _ms C.struct_miqt_string = C.QWizardPage_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizardPage) SetSubTitle(subTitle string) {
	subTitle_ms := C.struct_miqt_string{}
	subTitle_ms.data = C.CString(subTitle)
	subTitle_ms.len = C.size_t(len(subTitle))
	defer C.free(unsafe.Pointer(subTitle_ms.data))
	C.QWizardPage_SetSubTitle(this.h, subTitle_ms)
}

func (this *QWizardPage) SubTitle() string {
	var _ms C.struct_miqt_string = C.QWizardPage_SubTitle(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizardPage) SetPixmap(which QWizard__WizardPixmap, pixmap *QPixmap) {
	C.QWizardPage_SetPixmap(this.h, (C.int)(which), pixmap.cPointer())
}

func (this *QWizardPage) Pixmap(which QWizard__WizardPixmap) *QPixmap {
	_ret := C.QWizardPage_Pixmap(this.h, (C.int)(which))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWizardPage) SetFinalPage(finalPage bool) {
	C.QWizardPage_SetFinalPage(this.h, (C.bool)(finalPage))
}

func (this *QWizardPage) IsFinalPage() bool {
	return (bool)(C.QWizardPage_IsFinalPage(this.h))
}

func (this *QWizardPage) SetCommitPage(commitPage bool) {
	C.QWizardPage_SetCommitPage(this.h, (C.bool)(commitPage))
}

func (this *QWizardPage) IsCommitPage() bool {
	return (bool)(C.QWizardPage_IsCommitPage(this.h))
}

func (this *QWizardPage) SetButtonText(which QWizard__WizardButton, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QWizardPage_SetButtonText(this.h, (C.int)(which), text_ms)
}

func (this *QWizardPage) ButtonText(which QWizard__WizardButton) string {
	var _ms C.struct_miqt_string = C.QWizardPage_ButtonText(this.h, (C.int)(which))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizardPage) InitializePage() {
	C.QWizardPage_InitializePage(this.h)
}

func (this *QWizardPage) CleanupPage() {
	C.QWizardPage_CleanupPage(this.h)
}

func (this *QWizardPage) ValidatePage() bool {
	return (bool)(C.QWizardPage_ValidatePage(this.h))
}

func (this *QWizardPage) IsComplete() bool {
	return (bool)(C.QWizardPage_IsComplete(this.h))
}

func (this *QWizardPage) NextId() int {
	return (int)(C.QWizardPage_NextId(this.h))
}

func (this *QWizardPage) CompleteChanged() {
	C.QWizardPage_CompleteChanged(this.h)
}
func (this *QWizardPage) OnCompleteChanged(slot func()) {
	C.QWizardPage_connect_CompleteChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWizardPage_CompleteChanged
func miqt_exec_callback_QWizardPage_CompleteChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QWizardPage_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWizardPage_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWizardPage_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWizardPage_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWizardPage) Delete() {
	C.QWizardPage_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWizardPage) GoGC() {
	runtime.SetFinalizer(this, func(this *QWizardPage) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

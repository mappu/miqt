package qt

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

// newQWizard constructs the type using only CGO pointers.
func newQWizard(h *C.QWizard) *QWizard {
	if h == nil {
		return nil
	}
	var outptr_QDialog *C.QDialog = nil
	C.QWizard_virtbase(h, &outptr_QDialog)

	return &QWizard{h: h,
		QDialog: newQDialog(outptr_QDialog)}
}

// UnsafeNewQWizard constructs the type using only unsafe pointers.
func UnsafeNewQWizard(h unsafe.Pointer) *QWizard {
	return newQWizard((*C.QWizard)(h))
}

// NewQWizard constructs a new QWizard object.
func NewQWizard(parent *QWidget) *QWizard {

	return newQWizard(C.QWizard_new(parent.cPointer()))
}

// NewQWizard2 constructs a new QWizard object.
func NewQWizard2() *QWizard {

	return newQWizard(C.QWizard_new2())
}

// NewQWizard3 constructs a new QWizard object.
func NewQWizard3(parent *QWidget, flags WindowType) *QWizard {

	return newQWizard(C.QWizard_new3(parent.cPointer(), (C.int)(flags)))
}

func (this *QWizard) MetaObject() *QMetaObject {
	return newQMetaObject(C.QWizard_metaObject(this.h))
}

func (this *QWizard) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWizard_metacast(this.h, param1_Cstring))
}

func QWizard_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWizard_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWizard_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWizard_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizard) AddPage(page *QWizardPage) int {
	return (int)(C.QWizard_addPage(this.h, page.cPointer()))
}

func (this *QWizard) SetPage(id int, page *QWizardPage) {
	C.QWizard_setPage(this.h, (C.int)(id), page.cPointer())
}

func (this *QWizard) RemovePage(id int) {
	C.QWizard_removePage(this.h, (C.int)(id))
}

func (this *QWizard) Page(id int) *QWizardPage {
	return newQWizardPage(C.QWizard_page(this.h, (C.int)(id)))
}

func (this *QWizard) HasVisitedPage(id int) bool {
	return (bool)(C.QWizard_hasVisitedPage(this.h, (C.int)(id)))
}

func (this *QWizard) VisitedPages() []int {
	var _ma C.struct_miqt_array = C.QWizard_visitedPages(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QWizard) VisitedIds() []int {
	var _ma C.struct_miqt_array = C.QWizard_visitedIds(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QWizard) PageIds() []int {
	var _ma C.struct_miqt_array = C.QWizard_pageIds(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QWizard) SetStartId(id int) {
	C.QWizard_setStartId(this.h, (C.int)(id))
}

func (this *QWizard) StartId() int {
	return (int)(C.QWizard_startId(this.h))
}

func (this *QWizard) CurrentPage() *QWizardPage {
	return newQWizardPage(C.QWizard_currentPage(this.h))
}

func (this *QWizard) CurrentId() int {
	return (int)(C.QWizard_currentId(this.h))
}

func (this *QWizard) ValidateCurrentPage() bool {
	return (bool)(C.QWizard_validateCurrentPage(this.h))
}

func (this *QWizard) NextId() int {
	return (int)(C.QWizard_nextId(this.h))
}

func (this *QWizard) SetField(name string, value *QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWizard_setField(this.h, name_ms, value.cPointer())
}

func (this *QWizard) Field(name string) *QVariant {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQVariant(C.QWizard_field(this.h, name_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWizard) SetWizardStyle(style QWizard__WizardStyle) {
	C.QWizard_setWizardStyle(this.h, (C.int)(style))
}

func (this *QWizard) WizardStyle() QWizard__WizardStyle {
	return (QWizard__WizardStyle)(C.QWizard_wizardStyle(this.h))
}

func (this *QWizard) SetOption(option QWizard__WizardOption) {
	C.QWizard_setOption(this.h, (C.int)(option))
}

func (this *QWizard) TestOption(option QWizard__WizardOption) bool {
	return (bool)(C.QWizard_testOption(this.h, (C.int)(option)))
}

func (this *QWizard) SetOptions(options QWizard__WizardOption) {
	C.QWizard_setOptions(this.h, (C.int)(options))
}

func (this *QWizard) Options() QWizard__WizardOption {
	return (QWizard__WizardOption)(C.QWizard_options(this.h))
}

func (this *QWizard) SetButtonText(which QWizard__WizardButton, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QWizard_setButtonText(this.h, (C.int)(which), text_ms)
}

func (this *QWizard) ButtonText(which QWizard__WizardButton) string {
	var _ms C.struct_miqt_string = C.QWizard_buttonText(this.h, (C.int)(which))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizard) SetButtonLayout(layout []QWizard__WizardButton) {
	layout_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(layout))))
	defer C.free(unsafe.Pointer(layout_CArray))
	for i := range layout {
		layout_CArray[i] = (C.int)(layout[i])
	}
	layout_ma := C.struct_miqt_array{len: C.size_t(len(layout)), data: unsafe.Pointer(layout_CArray)}
	C.QWizard_setButtonLayout(this.h, layout_ma)
}

func (this *QWizard) SetButton(which QWizard__WizardButton, button *QAbstractButton) {
	C.QWizard_setButton(this.h, (C.int)(which), button.cPointer())
}

func (this *QWizard) Button(which QWizard__WizardButton) *QAbstractButton {
	return newQAbstractButton(C.QWizard_button(this.h, (C.int)(which)))
}

func (this *QWizard) SetTitleFormat(format TextFormat) {
	C.QWizard_setTitleFormat(this.h, (C.int)(format))
}

func (this *QWizard) TitleFormat() TextFormat {
	return (TextFormat)(C.QWizard_titleFormat(this.h))
}

func (this *QWizard) SetSubTitleFormat(format TextFormat) {
	C.QWizard_setSubTitleFormat(this.h, (C.int)(format))
}

func (this *QWizard) SubTitleFormat() TextFormat {
	return (TextFormat)(C.QWizard_subTitleFormat(this.h))
}

func (this *QWizard) SetPixmap(which QWizard__WizardPixmap, pixmap *QPixmap) {
	C.QWizard_setPixmap(this.h, (C.int)(which), pixmap.cPointer())
}

func (this *QWizard) Pixmap(which QWizard__WizardPixmap) *QPixmap {
	_goptr := newQPixmap(C.QWizard_pixmap(this.h, (C.int)(which)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWizard) SetSideWidget(widget *QWidget) {
	C.QWizard_setSideWidget(this.h, widget.cPointer())
}

func (this *QWizard) SideWidget() *QWidget {
	return newQWidget(C.QWizard_sideWidget(this.h))
}

func (this *QWizard) SetDefaultProperty(className string, property string, changedSignal string) {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	property_Cstring := C.CString(property)
	defer C.free(unsafe.Pointer(property_Cstring))
	changedSignal_Cstring := C.CString(changedSignal)
	defer C.free(unsafe.Pointer(changedSignal_Cstring))
	C.QWizard_setDefaultProperty(this.h, className_Cstring, property_Cstring, changedSignal_Cstring)
}

func (this *QWizard) SetVisible(visible bool) {
	C.QWizard_setVisible(this.h, (C.bool)(visible))
}

func (this *QWizard) SizeHint() *QSize {
	_goptr := newQSize(C.QWizard_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWizard) CurrentIdChanged(id int) {
	C.QWizard_currentIdChanged(this.h, (C.int)(id))
}
func (this *QWizard) OnCurrentIdChanged(slot func(id int)) {
	C.QWizard_connect_currentIdChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWizard_currentIdChanged
func miqt_exec_callback_QWizard_currentIdChanged(cb C.intptr_t, id C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	gofunc(slotval1)
}

func (this *QWizard) HelpRequested() {
	C.QWizard_helpRequested(this.h)
}
func (this *QWizard) OnHelpRequested(slot func()) {
	C.QWizard_connect_helpRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWizard_helpRequested
func miqt_exec_callback_QWizard_helpRequested(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWizard) CustomButtonClicked(which int) {
	C.QWizard_customButtonClicked(this.h, (C.int)(which))
}
func (this *QWizard) OnCustomButtonClicked(slot func(which int)) {
	C.QWizard_connect_customButtonClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWizard_customButtonClicked
func miqt_exec_callback_QWizard_customButtonClicked(cb C.intptr_t, which C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(which int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(which)

	gofunc(slotval1)
}

func (this *QWizard) PageAdded(id int) {
	C.QWizard_pageAdded(this.h, (C.int)(id))
}
func (this *QWizard) OnPageAdded(slot func(id int)) {
	C.QWizard_connect_pageAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWizard_pageAdded
func miqt_exec_callback_QWizard_pageAdded(cb C.intptr_t, id C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	gofunc(slotval1)
}

func (this *QWizard) PageRemoved(id int) {
	C.QWizard_pageRemoved(this.h, (C.int)(id))
}
func (this *QWizard) OnPageRemoved(slot func(id int)) {
	C.QWizard_connect_pageRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWizard_pageRemoved
func miqt_exec_callback_QWizard_pageRemoved(cb C.intptr_t, id C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	gofunc(slotval1)
}

func (this *QWizard) Back() {
	C.QWizard_back(this.h)
}

func (this *QWizard) Next() {
	C.QWizard_next(this.h)
}

func (this *QWizard) Restart() {
	C.QWizard_restart(this.h)
}

func QWizard_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWizard_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWizard_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWizard_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWizard_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWizard_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWizard_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWizard_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizard) SetOption2(option QWizard__WizardOption, on bool) {
	C.QWizard_setOption2(this.h, (C.int)(option), (C.bool)(on))
}

func (this *QWizard) callVirtualBase_ValidateCurrentPage() bool {

	return (bool)(C.QWizard_virtualbase_validateCurrentPage(unsafe.Pointer(this.h)))

}
func (this *QWizard) OnValidateCurrentPage(slot func(super func() bool) bool) {
	ok := C.QWizard_override_virtual_validateCurrentPage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_validateCurrentPage
func miqt_exec_callback_QWizard_validateCurrentPage(self *C.QWizard, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_ValidateCurrentPage)

	return (C.bool)(virtualReturn)

}

func (this *QWizard) callVirtualBase_NextId() int {

	return (int)(C.QWizard_virtualbase_nextId(unsafe.Pointer(this.h)))

}
func (this *QWizard) OnNextId(slot func(super func() int) int) {
	ok := C.QWizard_override_virtual_nextId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_nextId
func miqt_exec_callback_QWizard_nextId(self *C.QWizard, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_NextId)

	return (C.int)(virtualReturn)

}

func (this *QWizard) callVirtualBase_SetVisible(visible bool) {

	C.QWizard_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QWizard) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QWizard_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_setVisible
func miqt_exec_callback_QWizard_setVisible(self *C.QWizard, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QWizard{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QWizard) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QWizard_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWizard) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QWizard_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_sizeHint
func miqt_exec_callback_QWizard_sizeHint(self *C.QWizard, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QWizard) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QWizard_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QWizard) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QWizard_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_event
func miqt_exec_callback_QWizard_event(self *C.QWizard, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWizard) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QWizard_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QWizard_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_resizeEvent
func miqt_exec_callback_QWizard_resizeEvent(self *C.QWizard, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QWizard) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QWizard_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QWizard_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_paintEvent
func miqt_exec_callback_QWizard_paintEvent(self *C.QWizard, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QWizard) callVirtualBase_Done(result int) {

	C.QWizard_virtualbase_done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QWizard) OnDone(slot func(super func(result int), result int)) {
	ok := C.QWizard_override_virtual_done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_done
func miqt_exec_callback_QWizard_done(self *C.QWizard, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QWizard{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QWizard) callVirtualBase_InitializePage(id int) {

	C.QWizard_virtualbase_initializePage(unsafe.Pointer(this.h), (C.int)(id))

}
func (this *QWizard) OnInitializePage(slot func(super func(id int), id int)) {
	ok := C.QWizard_override_virtual_initializePage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_initializePage
func miqt_exec_callback_QWizard_initializePage(self *C.QWizard, cb C.intptr_t, id C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(id int), id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	gofunc((&QWizard{h: self}).callVirtualBase_InitializePage, slotval1)

}

func (this *QWizard) callVirtualBase_CleanupPage(id int) {

	C.QWizard_virtualbase_cleanupPage(unsafe.Pointer(this.h), (C.int)(id))

}
func (this *QWizard) OnCleanupPage(slot func(super func(id int), id int)) {
	ok := C.QWizard_override_virtual_cleanupPage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_cleanupPage
func miqt_exec_callback_QWizard_cleanupPage(self *C.QWizard, cb C.intptr_t, id C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(id int), id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	gofunc((&QWizard{h: self}).callVirtualBase_CleanupPage, slotval1)

}

func (this *QWizard) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QWizard_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWizard) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QWizard_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_minimumSizeHint
func miqt_exec_callback_QWizard_minimumSizeHint(self *C.QWizard, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QWizard) callVirtualBase_Open() {

	C.QWizard_virtualbase_open(unsafe.Pointer(this.h))

}
func (this *QWizard) OnOpen(slot func(super func())) {
	ok := C.QWizard_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_open
func miqt_exec_callback_QWizard_open(self *C.QWizard, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QWizard{h: self}).callVirtualBase_Open)

}

func (this *QWizard) callVirtualBase_Exec() int {

	return (int)(C.QWizard_virtualbase_exec(unsafe.Pointer(this.h)))

}
func (this *QWizard) OnExec(slot func(super func() int) int) {
	ok := C.QWizard_override_virtual_exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_exec
func miqt_exec_callback_QWizard_exec(self *C.QWizard, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QWizard) callVirtualBase_Accept() {

	C.QWizard_virtualbase_accept(unsafe.Pointer(this.h))

}
func (this *QWizard) OnAccept(slot func(super func())) {
	ok := C.QWizard_override_virtual_accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_accept
func miqt_exec_callback_QWizard_accept(self *C.QWizard, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QWizard{h: self}).callVirtualBase_Accept)

}

func (this *QWizard) callVirtualBase_Reject() {

	C.QWizard_virtualbase_reject(unsafe.Pointer(this.h))

}
func (this *QWizard) OnReject(slot func(super func())) {
	ok := C.QWizard_override_virtual_reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_reject
func miqt_exec_callback_QWizard_reject(self *C.QWizard, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QWizard{h: self}).callVirtualBase_Reject)

}

func (this *QWizard) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QWizard_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWizard) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QWizard_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_keyPressEvent
func miqt_exec_callback_QWizard_keyPressEvent(self *C.QWizard, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QWizard{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QWizard) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QWizard_virtualbase_closeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWizard) OnCloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	ok := C.QWizard_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_closeEvent
func miqt_exec_callback_QWizard_closeEvent(self *C.QWizard, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QWizard{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QWizard) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QWizard_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWizard) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QWizard_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_showEvent
func miqt_exec_callback_QWizard_showEvent(self *C.QWizard, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QWizard{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QWizard) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QWizard_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWizard) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QWizard_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_contextMenuEvent
func miqt_exec_callback_QWizard_contextMenuEvent(self *C.QWizard, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QWizard{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QWizard) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QWizard_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QWizard) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QWizard_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_eventFilter
func miqt_exec_callback_QWizard_eventFilter(self *C.QWizard, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWizard) callVirtualBase_DevType() int {

	return (int)(C.QWizard_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QWizard) OnDevType(slot func(super func() int) int) {
	ok := C.QWizard_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_devType
func miqt_exec_callback_QWizard_devType(self *C.QWizard, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QWizard) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QWizard_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWizard) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWizard_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_heightForWidth
func miqt_exec_callback_QWizard_heightForWidth(self *C.QWizard, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWizard) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QWizard_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWizard) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QWizard_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_hasHeightForWidth
func miqt_exec_callback_QWizard_hasHeightForWidth(self *C.QWizard, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWizard) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QWizard_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QWizard) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QWizard_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_paintEngine
func miqt_exec_callback_QWizard_paintEngine(self *C.QWizard, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QWizard) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QWizard_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWizard_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_mousePressEvent
func miqt_exec_callback_QWizard_mousePressEvent(self *C.QWizard, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QWizard) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QWizard_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWizard_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_mouseReleaseEvent
func miqt_exec_callback_QWizard_mouseReleaseEvent(self *C.QWizard, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QWizard) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QWizard_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWizard_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_mouseDoubleClickEvent
func miqt_exec_callback_QWizard_mouseDoubleClickEvent(self *C.QWizard, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QWizard) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QWizard_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWizard_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_mouseMoveEvent
func miqt_exec_callback_QWizard_mouseMoveEvent(self *C.QWizard, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QWizard) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QWizard_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QWizard_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_wheelEvent
func miqt_exec_callback_QWizard_wheelEvent(self *C.QWizard, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QWizard) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QWizard_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QWizard_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_keyReleaseEvent
func miqt_exec_callback_QWizard_keyReleaseEvent(self *C.QWizard, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QWizard) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QWizard_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QWizard_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_focusInEvent
func miqt_exec_callback_QWizard_focusInEvent(self *C.QWizard, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QWizard) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QWizard_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QWizard_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_focusOutEvent
func miqt_exec_callback_QWizard_focusOutEvent(self *C.QWizard, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QWizard) callVirtualBase_EnterEvent(event *QEvent) {

	C.QWizard_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWizard_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_enterEvent
func miqt_exec_callback_QWizard_enterEvent(self *C.QWizard, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QWizard) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QWizard_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWizard_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_leaveEvent
func miqt_exec_callback_QWizard_leaveEvent(self *C.QWizard, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QWizard) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QWizard_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QWizard_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_moveEvent
func miqt_exec_callback_QWizard_moveEvent(self *C.QWizard, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QWizard) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QWizard_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QWizard_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_tabletEvent
func miqt_exec_callback_QWizard_tabletEvent(self *C.QWizard, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QWizard) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QWizard_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QWizard_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_actionEvent
func miqt_exec_callback_QWizard_actionEvent(self *C.QWizard, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QWizard) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QWizard_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QWizard_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_dragEnterEvent
func miqt_exec_callback_QWizard_dragEnterEvent(self *C.QWizard, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QWizard) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QWizard_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QWizard_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_dragMoveEvent
func miqt_exec_callback_QWizard_dragMoveEvent(self *C.QWizard, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QWizard) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QWizard_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QWizard_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_dragLeaveEvent
func miqt_exec_callback_QWizard_dragLeaveEvent(self *C.QWizard, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QWizard) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QWizard_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QWizard_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_dropEvent
func miqt_exec_callback_QWizard_dropEvent(self *C.QWizard, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QWizard) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QWizard_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QWizard_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_hideEvent
func miqt_exec_callback_QWizard_hideEvent(self *C.QWizard, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QWizard) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QWizard_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QWizard) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QWizard_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_nativeEvent
func miqt_exec_callback_QWizard_nativeEvent(self *C.QWizard, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QWizard) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QWizard_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWizard) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QWizard_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_changeEvent
func miqt_exec_callback_QWizard_changeEvent(self *C.QWizard, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QWizard{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QWizard) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QWizard_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWizard) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QWizard_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_metric
func miqt_exec_callback_QWizard_metric(self *C.QWizard, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWizard) callVirtualBase_InitPainter(painter *QPainter) {

	C.QWizard_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QWizard) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QWizard_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_initPainter
func miqt_exec_callback_QWizard_initPainter(self *C.QWizard, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QWizard{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QWizard) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QWizard_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QWizard) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QWizard_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_redirected
func miqt_exec_callback_QWizard_redirected(self *C.QWizard, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWizard) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QWizard_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QWizard) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QWizard_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_sharedPainter
func miqt_exec_callback_QWizard_sharedPainter(self *C.QWizard, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QWizard) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QWizard_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWizard) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QWizard_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_inputMethodEvent
func miqt_exec_callback_QWizard_inputMethodEvent(self *C.QWizard, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QWizard{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QWizard) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QWizard_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWizard) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QWizard_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_inputMethodQuery
func miqt_exec_callback_QWizard_inputMethodQuery(self *C.QWizard, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWizard) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QWizard_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QWizard) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QWizard_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_focusNextPrevChild
func miqt_exec_callback_QWizard_focusNextPrevChild(self *C.QWizard, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QWizard{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWizard) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QWizard_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QWizard_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_timerEvent
func miqt_exec_callback_QWizard_timerEvent(self *C.QWizard, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWizard) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QWizard_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QWizard_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_childEvent
func miqt_exec_callback_QWizard_childEvent(self *C.QWizard, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWizard) callVirtualBase_CustomEvent(event *QEvent) {

	C.QWizard_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizard) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWizard_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_customEvent
func miqt_exec_callback_QWizard_customEvent(self *C.QWizard, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWizard{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWizard) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QWizard_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWizard) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QWizard_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_connectNotify
func miqt_exec_callback_QWizard_connectNotify(self *C.QWizard, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QWizard{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWizard) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QWizard_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWizard) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QWizard_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizard_disconnectNotify
func miqt_exec_callback_QWizard_disconnectNotify(self *C.QWizard, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QWizard{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWizard) Delete() {
	C.QWizard_delete(this.h)
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

// newQWizardPage constructs the type using only CGO pointers.
func newQWizardPage(h *C.QWizardPage) *QWizardPage {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QWizardPage_virtbase(h, &outptr_QWidget)

	return &QWizardPage{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQWizardPage constructs the type using only unsafe pointers.
func UnsafeNewQWizardPage(h unsafe.Pointer) *QWizardPage {
	return newQWizardPage((*C.QWizardPage)(h))
}

// NewQWizardPage constructs a new QWizardPage object.
func NewQWizardPage(parent *QWidget) *QWizardPage {

	return newQWizardPage(C.QWizardPage_new(parent.cPointer()))
}

// NewQWizardPage2 constructs a new QWizardPage object.
func NewQWizardPage2() *QWizardPage {

	return newQWizardPage(C.QWizardPage_new2())
}

func (this *QWizardPage) MetaObject() *QMetaObject {
	return newQMetaObject(C.QWizardPage_metaObject(this.h))
}

func (this *QWizardPage) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWizardPage_metacast(this.h, param1_Cstring))
}

func QWizardPage_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWizardPage_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWizardPage_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWizardPage_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizardPage) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QWizardPage_setTitle(this.h, title_ms)
}

func (this *QWizardPage) Title() string {
	var _ms C.struct_miqt_string = C.QWizardPage_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizardPage) SetSubTitle(subTitle string) {
	subTitle_ms := C.struct_miqt_string{}
	subTitle_ms.data = C.CString(subTitle)
	subTitle_ms.len = C.size_t(len(subTitle))
	defer C.free(unsafe.Pointer(subTitle_ms.data))
	C.QWizardPage_setSubTitle(this.h, subTitle_ms)
}

func (this *QWizardPage) SubTitle() string {
	var _ms C.struct_miqt_string = C.QWizardPage_subTitle(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizardPage) SetPixmap(which QWizard__WizardPixmap, pixmap *QPixmap) {
	C.QWizardPage_setPixmap(this.h, (C.int)(which), pixmap.cPointer())
}

func (this *QWizardPage) Pixmap(which QWizard__WizardPixmap) *QPixmap {
	_goptr := newQPixmap(C.QWizardPage_pixmap(this.h, (C.int)(which)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWizardPage) SetFinalPage(finalPage bool) {
	C.QWizardPage_setFinalPage(this.h, (C.bool)(finalPage))
}

func (this *QWizardPage) IsFinalPage() bool {
	return (bool)(C.QWizardPage_isFinalPage(this.h))
}

func (this *QWizardPage) SetCommitPage(commitPage bool) {
	C.QWizardPage_setCommitPage(this.h, (C.bool)(commitPage))
}

func (this *QWizardPage) IsCommitPage() bool {
	return (bool)(C.QWizardPage_isCommitPage(this.h))
}

func (this *QWizardPage) SetButtonText(which QWizard__WizardButton, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QWizardPage_setButtonText(this.h, (C.int)(which), text_ms)
}

func (this *QWizardPage) ButtonText(which QWizard__WizardButton) string {
	var _ms C.struct_miqt_string = C.QWizardPage_buttonText(this.h, (C.int)(which))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizardPage) InitializePage() {
	C.QWizardPage_initializePage(this.h)
}

func (this *QWizardPage) CleanupPage() {
	C.QWizardPage_cleanupPage(this.h)
}

func (this *QWizardPage) ValidatePage() bool {
	return (bool)(C.QWizardPage_validatePage(this.h))
}

func (this *QWizardPage) IsComplete() bool {
	return (bool)(C.QWizardPage_isComplete(this.h))
}

func (this *QWizardPage) NextId() int {
	return (int)(C.QWizardPage_nextId(this.h))
}

func (this *QWizardPage) CompleteChanged() {
	C.QWizardPage_completeChanged(this.h)
}
func (this *QWizardPage) OnCompleteChanged(slot func()) {
	C.QWizardPage_connect_completeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWizardPage_completeChanged
func miqt_exec_callback_QWizardPage_completeChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QWizardPage_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWizardPage_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWizardPage_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWizardPage_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWizardPage_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWizardPage_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWizardPage_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWizardPage) callVirtualBase_InitializePage() {

	C.QWizardPage_virtualbase_initializePage(unsafe.Pointer(this.h))

}
func (this *QWizardPage) OnInitializePage(slot func(super func())) {
	ok := C.QWizardPage_override_virtual_initializePage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_initializePage
func miqt_exec_callback_QWizardPage_initializePage(self *C.QWizardPage, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QWizardPage{h: self}).callVirtualBase_InitializePage)

}

func (this *QWizardPage) callVirtualBase_CleanupPage() {

	C.QWizardPage_virtualbase_cleanupPage(unsafe.Pointer(this.h))

}
func (this *QWizardPage) OnCleanupPage(slot func(super func())) {
	ok := C.QWizardPage_override_virtual_cleanupPage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_cleanupPage
func miqt_exec_callback_QWizardPage_cleanupPage(self *C.QWizardPage, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QWizardPage{h: self}).callVirtualBase_CleanupPage)

}

func (this *QWizardPage) callVirtualBase_ValidatePage() bool {

	return (bool)(C.QWizardPage_virtualbase_validatePage(unsafe.Pointer(this.h)))

}
func (this *QWizardPage) OnValidatePage(slot func(super func() bool) bool) {
	ok := C.QWizardPage_override_virtual_validatePage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_validatePage
func miqt_exec_callback_QWizardPage_validatePage(self *C.QWizardPage, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_ValidatePage)

	return (C.bool)(virtualReturn)

}

func (this *QWizardPage) callVirtualBase_IsComplete() bool {

	return (bool)(C.QWizardPage_virtualbase_isComplete(unsafe.Pointer(this.h)))

}
func (this *QWizardPage) OnIsComplete(slot func(super func() bool) bool) {
	ok := C.QWizardPage_override_virtual_isComplete(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_isComplete
func miqt_exec_callback_QWizardPage_isComplete(self *C.QWizardPage, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_IsComplete)

	return (C.bool)(virtualReturn)

}

func (this *QWizardPage) callVirtualBase_NextId() int {

	return (int)(C.QWizardPage_virtualbase_nextId(unsafe.Pointer(this.h)))

}
func (this *QWizardPage) OnNextId(slot func(super func() int) int) {
	ok := C.QWizardPage_override_virtual_nextId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_nextId
func miqt_exec_callback_QWizardPage_nextId(self *C.QWizardPage, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_NextId)

	return (C.int)(virtualReturn)

}

func (this *QWizardPage) callVirtualBase_DevType() int {

	return (int)(C.QWizardPage_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QWizardPage) OnDevType(slot func(super func() int) int) {
	ok := C.QWizardPage_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_devType
func miqt_exec_callback_QWizardPage_devType(self *C.QWizardPage, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QWizardPage) callVirtualBase_SetVisible(visible bool) {

	C.QWizardPage_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QWizardPage) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QWizardPage_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_setVisible
func miqt_exec_callback_QWizardPage_setVisible(self *C.QWizardPage, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QWizardPage{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QWizardPage) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QWizardPage_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWizardPage) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QWizardPage_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_sizeHint
func miqt_exec_callback_QWizardPage_sizeHint(self *C.QWizardPage, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QWizardPage) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QWizardPage_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWizardPage) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QWizardPage_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_minimumSizeHint
func miqt_exec_callback_QWizardPage_minimumSizeHint(self *C.QWizardPage, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QWizardPage) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QWizardPage_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWizardPage) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWizardPage_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_heightForWidth
func miqt_exec_callback_QWizardPage_heightForWidth(self *C.QWizardPage, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWizardPage) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QWizardPage_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWizardPage) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QWizardPage_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_hasHeightForWidth
func miqt_exec_callback_QWizardPage_hasHeightForWidth(self *C.QWizardPage, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWizardPage) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QWizardPage_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QWizardPage) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QWizardPage_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_paintEngine
func miqt_exec_callback_QWizardPage_paintEngine(self *C.QWizardPage, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QWizardPage) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QWizardPage_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QWizardPage) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QWizardPage_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_event
func miqt_exec_callback_QWizardPage_event(self *C.QWizardPage, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWizardPage) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QWizardPage_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWizardPage_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_mousePressEvent
func miqt_exec_callback_QWizardPage_mousePressEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QWizardPage_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWizardPage_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_mouseReleaseEvent
func miqt_exec_callback_QWizardPage_mouseReleaseEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QWizardPage_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWizardPage_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_mouseDoubleClickEvent
func miqt_exec_callback_QWizardPage_mouseDoubleClickEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QWizardPage_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QWizardPage_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_mouseMoveEvent
func miqt_exec_callback_QWizardPage_mouseMoveEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QWizardPage_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QWizardPage_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_wheelEvent
func miqt_exec_callback_QWizardPage_wheelEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QWizardPage_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QWizardPage_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_keyPressEvent
func miqt_exec_callback_QWizardPage_keyPressEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QWizardPage_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QWizardPage_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_keyReleaseEvent
func miqt_exec_callback_QWizardPage_keyReleaseEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QWizardPage_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QWizardPage_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_focusInEvent
func miqt_exec_callback_QWizardPage_focusInEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QWizardPage_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QWizardPage_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_focusOutEvent
func miqt_exec_callback_QWizardPage_focusOutEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_EnterEvent(event *QEvent) {

	C.QWizardPage_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWizardPage_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_enterEvent
func miqt_exec_callback_QWizardPage_enterEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QWizardPage_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWizardPage_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_leaveEvent
func miqt_exec_callback_QWizardPage_leaveEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QWizardPage_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QWizardPage_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_paintEvent
func miqt_exec_callback_QWizardPage_paintEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QWizardPage_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QWizardPage_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_moveEvent
func miqt_exec_callback_QWizardPage_moveEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QWizardPage_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QWizardPage_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_resizeEvent
func miqt_exec_callback_QWizardPage_resizeEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QWizardPage_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QWizardPage_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_closeEvent
func miqt_exec_callback_QWizardPage_closeEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QWizardPage_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QWizardPage_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_contextMenuEvent
func miqt_exec_callback_QWizardPage_contextMenuEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QWizardPage_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QWizardPage_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_tabletEvent
func miqt_exec_callback_QWizardPage_tabletEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QWizardPage_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QWizardPage_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_actionEvent
func miqt_exec_callback_QWizardPage_actionEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QWizardPage_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QWizardPage_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_dragEnterEvent
func miqt_exec_callback_QWizardPage_dragEnterEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QWizardPage_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QWizardPage_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_dragMoveEvent
func miqt_exec_callback_QWizardPage_dragMoveEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QWizardPage_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QWizardPage_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_dragLeaveEvent
func miqt_exec_callback_QWizardPage_dragLeaveEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QWizardPage_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QWizardPage_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_dropEvent
func miqt_exec_callback_QWizardPage_dropEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QWizardPage_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QWizardPage_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_showEvent
func miqt_exec_callback_QWizardPage_showEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QWizardPage_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QWizardPage_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_hideEvent
func miqt_exec_callback_QWizardPage_hideEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QWizardPage_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QWizardPage) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QWizardPage_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_nativeEvent
func miqt_exec_callback_QWizardPage_nativeEvent(self *C.QWizardPage, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QWizardPage) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QWizardPage_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWizardPage) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QWizardPage_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_changeEvent
func miqt_exec_callback_QWizardPage_changeEvent(self *C.QWizardPage, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QWizardPage{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QWizardPage_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWizardPage) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QWizardPage_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_metric
func miqt_exec_callback_QWizardPage_metric(self *C.QWizardPage, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWizardPage) callVirtualBase_InitPainter(painter *QPainter) {

	C.QWizardPage_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QWizardPage) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QWizardPage_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_initPainter
func miqt_exec_callback_QWizardPage_initPainter(self *C.QWizardPage, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QWizardPage{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QWizardPage) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QWizardPage_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QWizardPage) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QWizardPage_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_redirected
func miqt_exec_callback_QWizardPage_redirected(self *C.QWizardPage, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWizardPage) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QWizardPage_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QWizardPage) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QWizardPage_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_sharedPainter
func miqt_exec_callback_QWizardPage_sharedPainter(self *C.QWizardPage, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QWizardPage) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QWizardPage_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWizardPage) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QWizardPage_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_inputMethodEvent
func miqt_exec_callback_QWizardPage_inputMethodEvent(self *C.QWizardPage, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QWizardPage{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QWizardPage_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWizardPage) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QWizardPage_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_inputMethodQuery
func miqt_exec_callback_QWizardPage_inputMethodQuery(self *C.QWizardPage, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWizardPage) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QWizardPage_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QWizardPage) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QWizardPage_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_focusNextPrevChild
func miqt_exec_callback_QWizardPage_focusNextPrevChild(self *C.QWizardPage, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWizardPage) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QWizardPage_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QWizardPage) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QWizardPage_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_eventFilter
func miqt_exec_callback_QWizardPage_eventFilter(self *C.QWizardPage, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QWizardPage{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWizardPage) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QWizardPage_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QWizardPage_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_timerEvent
func miqt_exec_callback_QWizardPage_timerEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QWizardPage_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QWizardPage_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_childEvent
func miqt_exec_callback_QWizardPage_childEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_CustomEvent(event *QEvent) {

	C.QWizardPage_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWizardPage) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWizardPage_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_customEvent
func miqt_exec_callback_QWizardPage_customEvent(self *C.QWizardPage, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWizardPage{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWizardPage) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QWizardPage_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWizardPage) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QWizardPage_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_connectNotify
func miqt_exec_callback_QWizardPage_connectNotify(self *C.QWizardPage, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QWizardPage{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWizardPage) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QWizardPage_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWizardPage) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QWizardPage_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWizardPage_disconnectNotify
func miqt_exec_callback_QWizardPage_disconnectNotify(self *C.QWizardPage, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QWizardPage{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWizardPage) Delete() {
	C.QWizardPage_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWizardPage) GoGC() {
	runtime.SetFinalizer(this, func(this *QWizardPage) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

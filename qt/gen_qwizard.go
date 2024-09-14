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
	QWizard__WizardButton__BackButton       QWizard__WizardButton = 0
	QWizard__WizardButton__NextButton       QWizard__WizardButton = 1
	QWizard__WizardButton__CommitButton     QWizard__WizardButton = 2
	QWizard__WizardButton__FinishButton     QWizard__WizardButton = 3
	QWizard__WizardButton__CancelButton     QWizard__WizardButton = 4
	QWizard__WizardButton__HelpButton       QWizard__WizardButton = 5
	QWizard__WizardButton__CustomButton1    QWizard__WizardButton = 6
	QWizard__WizardButton__CustomButton2    QWizard__WizardButton = 7
	QWizard__WizardButton__CustomButton3    QWizard__WizardButton = 8
	QWizard__WizardButton__Stretch          QWizard__WizardButton = 9
	QWizard__WizardButton__NoButton         QWizard__WizardButton = -1
	QWizard__WizardButton__NStandardButtons QWizard__WizardButton = 6
	QWizard__WizardButton__NButtons         QWizard__WizardButton = 9
)

type QWizard__WizardPixmap int

const (
	QWizard__WizardPixmap__WatermarkPixmap  QWizard__WizardPixmap = 0
	QWizard__WizardPixmap__LogoPixmap       QWizard__WizardPixmap = 1
	QWizard__WizardPixmap__BannerPixmap     QWizard__WizardPixmap = 2
	QWizard__WizardPixmap__BackgroundPixmap QWizard__WizardPixmap = 3
	QWizard__WizardPixmap__NPixmaps         QWizard__WizardPixmap = 4
)

type QWizard__WizardStyle int

const (
	QWizard__WizardStyle__ClassicStyle QWizard__WizardStyle = 0
	QWizard__WizardStyle__ModernStyle  QWizard__WizardStyle = 1
	QWizard__WizardStyle__MacStyle     QWizard__WizardStyle = 2
	QWizard__WizardStyle__AeroStyle    QWizard__WizardStyle = 3
	QWizard__WizardStyle__NStyles      QWizard__WizardStyle = 4
)

type QWizard__WizardOption int

const (
	QWizard__WizardOption__IndependentPages             QWizard__WizardOption = 1
	QWizard__WizardOption__IgnoreSubTitles              QWizard__WizardOption = 2
	QWizard__WizardOption__ExtendedWatermarkPixmap      QWizard__WizardOption = 4
	QWizard__WizardOption__NoDefaultButton              QWizard__WizardOption = 8
	QWizard__WizardOption__NoBackButtonOnStartPage      QWizard__WizardOption = 16
	QWizard__WizardOption__NoBackButtonOnLastPage       QWizard__WizardOption = 32
	QWizard__WizardOption__DisabledBackButtonOnLastPage QWizard__WizardOption = 64
	QWizard__WizardOption__HaveNextButtonOnLastPage     QWizard__WizardOption = 128
	QWizard__WizardOption__HaveFinishButtonOnEarlyPages QWizard__WizardOption = 256
	QWizard__WizardOption__NoCancelButton               QWizard__WizardOption = 512
	QWizard__WizardOption__CancelButtonOnLeft           QWizard__WizardOption = 1024
	QWizard__WizardOption__HaveHelpButton               QWizard__WizardOption = 2048
	QWizard__WizardOption__HelpButtonOnRight            QWizard__WizardOption = 4096
	QWizard__WizardOption__HaveCustomButton1            QWizard__WizardOption = 8192
	QWizard__WizardOption__HaveCustomButton2            QWizard__WizardOption = 16384
	QWizard__WizardOption__HaveCustomButton3            QWizard__WizardOption = 32768
	QWizard__WizardOption__NoCancelButtonOnLastPage     QWizard__WizardOption = 65536
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
	if h == nil {
		return nil
	}
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
	_ret := C.QWizard_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QWizard_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QWizard_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWizard_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QWizard_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWizard) AddPage(page *QWizardPage) int {
	_ret := C.QWizard_AddPage(this.h, page.cPointer())
	return (int)(_ret)
}

func (this *QWizard) SetPage(id int, page *QWizardPage) {
	C.QWizard_SetPage(this.h, (C.int)(id), page.cPointer())
}

func (this *QWizard) RemovePage(id int) {
	C.QWizard_RemovePage(this.h, (C.int)(id))
}

func (this *QWizard) Page(id int) *QWizardPage {
	_ret := C.QWizard_Page(this.h, (C.int)(id))
	return newQWizardPage_U(unsafe.Pointer(_ret))
}

func (this *QWizard) HasVisitedPage(id int) bool {
	_ret := C.QWizard_HasVisitedPage(this.h, (C.int)(id))
	return (bool)(_ret)
}

func (this *QWizard) VisitedPages() []int {
	var _ma *C.struct_miqt_array = C.QWizard_VisitedPages(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QWizard) VisitedIds() []int {
	var _ma *C.struct_miqt_array = C.QWizard_VisitedIds(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QWizard) PageIds() []int {
	var _ma *C.struct_miqt_array = C.QWizard_PageIds(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // mrs jackson
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
	_ret := C.QWizard_StartId(this.h)
	return (int)(_ret)
}

func (this *QWizard) CurrentPage() *QWizardPage {
	_ret := C.QWizard_CurrentPage(this.h)
	return newQWizardPage_U(unsafe.Pointer(_ret))
}

func (this *QWizard) CurrentId() int {
	_ret := C.QWizard_CurrentId(this.h)
	return (int)(_ret)
}

func (this *QWizard) ValidateCurrentPage() bool {
	_ret := C.QWizard_ValidateCurrentPage(this.h)
	return (bool)(_ret)
}

func (this *QWizard) NextId() int {
	_ret := C.QWizard_NextId(this.h)
	return (int)(_ret)
}

func (this *QWizard) SetField(name string, value *QVariant) {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	C.QWizard_SetField(this.h, (*C.struct_miqt_string)(name_ms), value.cPointer())
}

func (this *QWizard) Field(name string) *QVariant {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	_ret := C.QWizard_Field(this.h, (*C.struct_miqt_string)(name_ms))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWizard) SetWizardStyle(style QWizard__WizardStyle) {
	C.QWizard_SetWizardStyle(this.h, (C.uintptr_t)(style))
}

func (this *QWizard) WizardStyle() QWizard__WizardStyle {
	_ret := C.QWizard_WizardStyle(this.h)
	return (QWizard__WizardStyle)(_ret)
}

func (this *QWizard) SetOption(option QWizard__WizardOption) {
	C.QWizard_SetOption(this.h, (C.uintptr_t)(option))
}

func (this *QWizard) TestOption(option QWizard__WizardOption) bool {
	_ret := C.QWizard_TestOption(this.h, (C.uintptr_t)(option))
	return (bool)(_ret)
}

func (this *QWizard) SetOptions(options int) {
	C.QWizard_SetOptions(this.h, (C.int)(options))
}

func (this *QWizard) Options() int {
	_ret := C.QWizard_Options(this.h)
	return (int)(_ret)
}

func (this *QWizard) SetButtonText(which int, text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QWizard_SetButtonText(this.h, (C.int)(which), (*C.struct_miqt_string)(text_ms))
}

func (this *QWizard) ButtonText(which int) string {
	var _ms *C.struct_miqt_string = C.QWizard_ButtonText(this.h, (C.int)(which))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWizard) SetButtonLayout(layout []int) {
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

func (this *QWizard) SetButton(which int, button *QAbstractButton) {
	C.QWizard_SetButton(this.h, (C.int)(which), button.cPointer())
}

func (this *QWizard) Button(which int) *QAbstractButton {
	_ret := C.QWizard_Button(this.h, (C.int)(which))
	return newQAbstractButton_U(unsafe.Pointer(_ret))
}

func (this *QWizard) SetTitleFormat(format TextFormat) {
	C.QWizard_SetTitleFormat(this.h, (C.uintptr_t)(format))
}

func (this *QWizard) TitleFormat() TextFormat {
	_ret := C.QWizard_TitleFormat(this.h)
	return (TextFormat)(_ret)
}

func (this *QWizard) SetSubTitleFormat(format TextFormat) {
	C.QWizard_SetSubTitleFormat(this.h, (C.uintptr_t)(format))
}

func (this *QWizard) SubTitleFormat() TextFormat {
	_ret := C.QWizard_SubTitleFormat(this.h)
	return (TextFormat)(_ret)
}

func (this *QWizard) SetPixmap(which QWizard__WizardPixmap, pixmap *QPixmap) {
	C.QWizard_SetPixmap(this.h, (C.uintptr_t)(which), pixmap.cPointer())
}

func (this *QWizard) Pixmap(which QWizard__WizardPixmap) *QPixmap {
	_ret := C.QWizard_Pixmap(this.h, (C.uintptr_t)(which))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWizard) SetSideWidget(widget *QWidget) {
	C.QWizard_SetSideWidget(this.h, widget.cPointer())
}

func (this *QWizard) SideWidget() *QWidget {
	_ret := C.QWizard_SideWidget(this.h)
	return newQWidget_U(unsafe.Pointer(_ret))
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
	C.QWizard_connect_CurrentIdChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWizard_CurrentIdChanged
func miqt_exec_callback_QWizard_CurrentIdChanged(cb *C.void, id C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	id_ret := id
	slotval1 := (int)(id_ret)

	gofunc(slotval1)
}

func (this *QWizard) HelpRequested() {
	C.QWizard_HelpRequested(this.h)
}
func (this *QWizard) OnHelpRequested(slot func()) {
	C.QWizard_connect_HelpRequested(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWizard_HelpRequested
func miqt_exec_callback_QWizard_HelpRequested(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWizard) CustomButtonClicked(which int) {
	C.QWizard_CustomButtonClicked(this.h, (C.int)(which))
}
func (this *QWizard) OnCustomButtonClicked(slot func(which int)) {
	C.QWizard_connect_CustomButtonClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWizard_CustomButtonClicked
func miqt_exec_callback_QWizard_CustomButtonClicked(cb *C.void, which C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(which int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	which_ret := which
	slotval1 := (int)(which_ret)

	gofunc(slotval1)
}

func (this *QWizard) PageAdded(id int) {
	C.QWizard_PageAdded(this.h, (C.int)(id))
}
func (this *QWizard) OnPageAdded(slot func(id int)) {
	C.QWizard_connect_PageAdded(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWizard_PageAdded
func miqt_exec_callback_QWizard_PageAdded(cb *C.void, id C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	id_ret := id
	slotval1 := (int)(id_ret)

	gofunc(slotval1)
}

func (this *QWizard) PageRemoved(id int) {
	C.QWizard_PageRemoved(this.h, (C.int)(id))
}
func (this *QWizard) OnPageRemoved(slot func(id int)) {
	C.QWizard_connect_PageRemoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWizard_PageRemoved
func miqt_exec_callback_QWizard_PageRemoved(cb *C.void, id C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	id_ret := id
	slotval1 := (int)(id_ret)

	gofunc(slotval1)
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
	var _ms *C.struct_miqt_string = C.QWizard_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWizard_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWizard_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWizard_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWizard_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWizard_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWizard_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWizard) SetOption2(option QWizard__WizardOption, on bool) {
	C.QWizard_SetOption2(this.h, (C.uintptr_t)(option), (C.bool)(on))
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

func newQWizardPage(h *C.QWizardPage) *QWizardPage {
	if h == nil {
		return nil
	}
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
	_ret := C.QWizardPage_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QWizardPage_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QWizardPage_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWizardPage_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QWizardPage_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWizardPage) SetTitle(title string) {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	C.QWizardPage_SetTitle(this.h, (*C.struct_miqt_string)(title_ms))
}

func (this *QWizardPage) Title() string {
	var _ms *C.struct_miqt_string = C.QWizardPage_Title(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWizardPage) SetSubTitle(subTitle string) {
	subTitle_ms := miqt_strdupg(subTitle)
	defer C.free(subTitle_ms)
	C.QWizardPage_SetSubTitle(this.h, (*C.struct_miqt_string)(subTitle_ms))
}

func (this *QWizardPage) SubTitle() string {
	var _ms *C.struct_miqt_string = C.QWizardPage_SubTitle(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWizardPage) SetPixmap(which QWizard__WizardPixmap, pixmap *QPixmap) {
	C.QWizardPage_SetPixmap(this.h, (C.uintptr_t)(which), pixmap.cPointer())
}

func (this *QWizardPage) Pixmap(which QWizard__WizardPixmap) *QPixmap {
	_ret := C.QWizardPage_Pixmap(this.h, (C.uintptr_t)(which))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWizardPage) SetFinalPage(finalPage bool) {
	C.QWizardPage_SetFinalPage(this.h, (C.bool)(finalPage))
}

func (this *QWizardPage) IsFinalPage() bool {
	_ret := C.QWizardPage_IsFinalPage(this.h)
	return (bool)(_ret)
}

func (this *QWizardPage) SetCommitPage(commitPage bool) {
	C.QWizardPage_SetCommitPage(this.h, (C.bool)(commitPage))
}

func (this *QWizardPage) IsCommitPage() bool {
	_ret := C.QWizardPage_IsCommitPage(this.h)
	return (bool)(_ret)
}

func (this *QWizardPage) SetButtonText(which int, text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QWizardPage_SetButtonText(this.h, (C.int)(which), (*C.struct_miqt_string)(text_ms))
}

func (this *QWizardPage) ButtonText(which int) string {
	var _ms *C.struct_miqt_string = C.QWizardPage_ButtonText(this.h, (C.int)(which))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWizardPage) InitializePage() {
	C.QWizardPage_InitializePage(this.h)
}

func (this *QWizardPage) CleanupPage() {
	C.QWizardPage_CleanupPage(this.h)
}

func (this *QWizardPage) ValidatePage() bool {
	_ret := C.QWizardPage_ValidatePage(this.h)
	return (bool)(_ret)
}

func (this *QWizardPage) IsComplete() bool {
	_ret := C.QWizardPage_IsComplete(this.h)
	return (bool)(_ret)
}

func (this *QWizardPage) NextId() int {
	_ret := C.QWizardPage_NextId(this.h)
	return (int)(_ret)
}

func (this *QWizardPage) CompleteChanged() {
	C.QWizardPage_CompleteChanged(this.h)
}
func (this *QWizardPage) OnCompleteChanged(slot func()) {
	C.QWizardPage_connect_CompleteChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWizardPage_CompleteChanged
func miqt_exec_callback_QWizardPage_CompleteChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
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
	var _ms *C.struct_miqt_string = C.QWizardPage_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWizardPage_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWizardPage_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWizardPage_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWizardPage_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWizardPage_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWizardPage_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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

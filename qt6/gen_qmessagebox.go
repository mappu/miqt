package qt6

/*

#include "gen_qmessagebox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMessageBox__Icon int

const (
	QMessageBox__NoIcon      QMessageBox__Icon = 0
	QMessageBox__Information QMessageBox__Icon = 1
	QMessageBox__Warning     QMessageBox__Icon = 2
	QMessageBox__Critical    QMessageBox__Icon = 3
	QMessageBox__Question    QMessageBox__Icon = 4
)

type QMessageBox__ButtonRole int

const (
	QMessageBox__InvalidRole     QMessageBox__ButtonRole = -1
	QMessageBox__AcceptRole      QMessageBox__ButtonRole = 0
	QMessageBox__RejectRole      QMessageBox__ButtonRole = 1
	QMessageBox__DestructiveRole QMessageBox__ButtonRole = 2
	QMessageBox__ActionRole      QMessageBox__ButtonRole = 3
	QMessageBox__HelpRole        QMessageBox__ButtonRole = 4
	QMessageBox__YesRole         QMessageBox__ButtonRole = 5
	QMessageBox__NoRole          QMessageBox__ButtonRole = 6
	QMessageBox__ResetRole       QMessageBox__ButtonRole = 7
	QMessageBox__ApplyRole       QMessageBox__ButtonRole = 8
	QMessageBox__NRoles          QMessageBox__ButtonRole = 9
)

type QMessageBox__StandardButton int

const (
	QMessageBox__NoButton        QMessageBox__StandardButton = 0
	QMessageBox__Ok              QMessageBox__StandardButton = 1024
	QMessageBox__Save            QMessageBox__StandardButton = 2048
	QMessageBox__SaveAll         QMessageBox__StandardButton = 4096
	QMessageBox__Open            QMessageBox__StandardButton = 8192
	QMessageBox__Yes             QMessageBox__StandardButton = 16384
	QMessageBox__YesToAll        QMessageBox__StandardButton = 32768
	QMessageBox__No              QMessageBox__StandardButton = 65536
	QMessageBox__NoToAll         QMessageBox__StandardButton = 131072
	QMessageBox__Abort           QMessageBox__StandardButton = 262144
	QMessageBox__Retry           QMessageBox__StandardButton = 524288
	QMessageBox__Ignore          QMessageBox__StandardButton = 1048576
	QMessageBox__Close           QMessageBox__StandardButton = 2097152
	QMessageBox__Cancel          QMessageBox__StandardButton = 4194304
	QMessageBox__Discard         QMessageBox__StandardButton = 8388608
	QMessageBox__Help            QMessageBox__StandardButton = 16777216
	QMessageBox__Apply           QMessageBox__StandardButton = 33554432
	QMessageBox__Reset           QMessageBox__StandardButton = 67108864
	QMessageBox__RestoreDefaults QMessageBox__StandardButton = 134217728
	QMessageBox__FirstButton     QMessageBox__StandardButton = 1024
	QMessageBox__LastButton      QMessageBox__StandardButton = 134217728
	QMessageBox__YesAll          QMessageBox__StandardButton = 32768
	QMessageBox__NoAll           QMessageBox__StandardButton = 131072
	QMessageBox__Default         QMessageBox__StandardButton = 256
	QMessageBox__Escape          QMessageBox__StandardButton = 512
	QMessageBox__FlagMask        QMessageBox__StandardButton = 768
	QMessageBox__ButtonMask      QMessageBox__StandardButton = -769
)

type QMessageBox struct {
	h *C.QMessageBox
	*QDialog
}

func (this *QMessageBox) cPointer() *C.QMessageBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMessageBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMessageBox constructs the type using only CGO pointers.
func newQMessageBox(h *C.QMessageBox) *QMessageBox {
	if h == nil {
		return nil
	}
	var outptr_QDialog *C.QDialog = nil
	C.QMessageBox_virtbase(h, &outptr_QDialog)

	return &QMessageBox{h: h,
		QDialog: newQDialog(outptr_QDialog)}
}

// UnsafeNewQMessageBox constructs the type using only unsafe pointers.
func UnsafeNewQMessageBox(h unsafe.Pointer) *QMessageBox {
	return newQMessageBox((*C.QMessageBox)(h))
}

// NewQMessageBox constructs a new QMessageBox object.
func NewQMessageBox(parent *QWidget) *QMessageBox {

	return newQMessageBox(C.QMessageBox_new(parent.cPointer()))
}

// NewQMessageBox2 constructs a new QMessageBox object.
func NewQMessageBox2() *QMessageBox {

	return newQMessageBox(C.QMessageBox_new2())
}

// NewQMessageBox3 constructs a new QMessageBox object.
func NewQMessageBox3(icon QMessageBox__Icon, title string, text string) *QMessageBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQMessageBox(C.QMessageBox_new3((C.int)(icon), title_ms, text_ms))
}

// NewQMessageBox4 constructs a new QMessageBox object.
func NewQMessageBox4(title string, text string, icon QMessageBox__Icon, button0 int, button1 int, button2 int) *QMessageBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQMessageBox(C.QMessageBox_new4(title_ms, text_ms, (C.int)(icon), (C.int)(button0), (C.int)(button1), (C.int)(button2)))
}

// NewQMessageBox5 constructs a new QMessageBox object.
func NewQMessageBox5(icon QMessageBox__Icon, title string, text string, buttons QMessageBox__StandardButton) *QMessageBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQMessageBox(C.QMessageBox_new5((C.int)(icon), title_ms, text_ms, (C.int)(buttons)))
}

// NewQMessageBox6 constructs a new QMessageBox object.
func NewQMessageBox6(icon QMessageBox__Icon, title string, text string, buttons QMessageBox__StandardButton, parent *QWidget) *QMessageBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQMessageBox(C.QMessageBox_new6((C.int)(icon), title_ms, text_ms, (C.int)(buttons), parent.cPointer()))
}

// NewQMessageBox7 constructs a new QMessageBox object.
func NewQMessageBox7(icon QMessageBox__Icon, title string, text string, buttons QMessageBox__StandardButton, parent *QWidget, flags WindowType) *QMessageBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQMessageBox(C.QMessageBox_new7((C.int)(icon), title_ms, text_ms, (C.int)(buttons), parent.cPointer(), (C.int)(flags)))
}

// NewQMessageBox8 constructs a new QMessageBox object.
func NewQMessageBox8(title string, text string, icon QMessageBox__Icon, button0 int, button1 int, button2 int, parent *QWidget) *QMessageBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQMessageBox(C.QMessageBox_new8(title_ms, text_ms, (C.int)(icon), (C.int)(button0), (C.int)(button1), (C.int)(button2), parent.cPointer()))
}

// NewQMessageBox9 constructs a new QMessageBox object.
func NewQMessageBox9(title string, text string, icon QMessageBox__Icon, button0 int, button1 int, button2 int, parent *QWidget, f WindowType) *QMessageBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQMessageBox(C.QMessageBox_new9(title_ms, text_ms, (C.int)(icon), (C.int)(button0), (C.int)(button1), (C.int)(button2), parent.cPointer(), (C.int)(f)))
}

func (this *QMessageBox) MetaObject() *QMetaObject {
	return newQMetaObject(C.QMessageBox_MetaObject(this.h))
}

func (this *QMessageBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMessageBox_Metacast(this.h, param1_Cstring))
}

func QMessageBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMessageBox_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMessageBox) AddButton(button *QAbstractButton, role QMessageBox__ButtonRole) {
	C.QMessageBox_AddButton(this.h, button.cPointer(), (C.int)(role))
}

func (this *QMessageBox) AddButton2(text string, role QMessageBox__ButtonRole) *QPushButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQPushButton(C.QMessageBox_AddButton2(this.h, text_ms, (C.int)(role)))
}

func (this *QMessageBox) AddButtonWithButton(button QMessageBox__StandardButton) *QPushButton {
	return newQPushButton(C.QMessageBox_AddButtonWithButton(this.h, (C.int)(button)))
}

func (this *QMessageBox) RemoveButton(button *QAbstractButton) {
	C.QMessageBox_RemoveButton(this.h, button.cPointer())
}

func (this *QMessageBox) Buttons() []*QAbstractButton {
	var _ma C.struct_miqt_array = C.QMessageBox_Buttons(this.h)
	_ret := make([]*QAbstractButton, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractButton)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractButton(_outCast[i])
	}
	return _ret
}

func (this *QMessageBox) ButtonRole(button *QAbstractButton) QMessageBox__ButtonRole {
	return (QMessageBox__ButtonRole)(C.QMessageBox_ButtonRole(this.h, button.cPointer()))
}

func (this *QMessageBox) SetStandardButtons(buttons QMessageBox__StandardButton) {
	C.QMessageBox_SetStandardButtons(this.h, (C.int)(buttons))
}

func (this *QMessageBox) StandardButtons() QMessageBox__StandardButton {
	return (QMessageBox__StandardButton)(C.QMessageBox_StandardButtons(this.h))
}

func (this *QMessageBox) StandardButton(button *QAbstractButton) QMessageBox__StandardButton {
	return (QMessageBox__StandardButton)(C.QMessageBox_StandardButton(this.h, button.cPointer()))
}

func (this *QMessageBox) Button(which QMessageBox__StandardButton) *QAbstractButton {
	return newQAbstractButton(C.QMessageBox_Button(this.h, (C.int)(which)))
}

func (this *QMessageBox) DefaultButton() *QPushButton {
	return newQPushButton(C.QMessageBox_DefaultButton(this.h))
}

func (this *QMessageBox) SetDefaultButton(button *QPushButton) {
	C.QMessageBox_SetDefaultButton(this.h, button.cPointer())
}

func (this *QMessageBox) SetDefaultButtonWithButton(button QMessageBox__StandardButton) {
	C.QMessageBox_SetDefaultButtonWithButton(this.h, (C.int)(button))
}

func (this *QMessageBox) EscapeButton() *QAbstractButton {
	return newQAbstractButton(C.QMessageBox_EscapeButton(this.h))
}

func (this *QMessageBox) SetEscapeButton(button *QAbstractButton) {
	C.QMessageBox_SetEscapeButton(this.h, button.cPointer())
}

func (this *QMessageBox) SetEscapeButtonWithButton(button QMessageBox__StandardButton) {
	C.QMessageBox_SetEscapeButtonWithButton(this.h, (C.int)(button))
}

func (this *QMessageBox) ClickedButton() *QAbstractButton {
	return newQAbstractButton(C.QMessageBox_ClickedButton(this.h))
}

func (this *QMessageBox) Text() string {
	var _ms C.struct_miqt_string = C.QMessageBox_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMessageBox) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QMessageBox_SetText(this.h, text_ms)
}

func (this *QMessageBox) Icon() QMessageBox__Icon {
	return (QMessageBox__Icon)(C.QMessageBox_Icon(this.h))
}

func (this *QMessageBox) SetIcon(icon QMessageBox__Icon) {
	C.QMessageBox_SetIcon(this.h, (C.int)(icon))
}

func (this *QMessageBox) IconPixmap() *QPixmap {
	_goptr := newQPixmap(C.QMessageBox_IconPixmap(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMessageBox) SetIconPixmap(pixmap *QPixmap) {
	C.QMessageBox_SetIconPixmap(this.h, pixmap.cPointer())
}

func (this *QMessageBox) TextFormat() TextFormat {
	return (TextFormat)(C.QMessageBox_TextFormat(this.h))
}

func (this *QMessageBox) SetTextFormat(format TextFormat) {
	C.QMessageBox_SetTextFormat(this.h, (C.int)(format))
}

func (this *QMessageBox) SetTextInteractionFlags(flags TextInteractionFlag) {
	C.QMessageBox_SetTextInteractionFlags(this.h, (C.int)(flags))
}

func (this *QMessageBox) TextInteractionFlags() TextInteractionFlag {
	return (TextInteractionFlag)(C.QMessageBox_TextInteractionFlags(this.h))
}

func (this *QMessageBox) SetCheckBox(cb *QCheckBox) {
	C.QMessageBox_SetCheckBox(this.h, cb.cPointer())
}

func (this *QMessageBox) CheckBox() *QCheckBox {
	return newQCheckBox(C.QMessageBox_CheckBox(this.h))
}

func QMessageBox_Information(parent *QWidget, title string, text string) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Information(parent.cPointer(), title_ms, text_ms))
}

func QMessageBox_Information2(parent *QWidget, title string, text string, button0 QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Information2(parent.cPointer(), title_ms, text_ms, (C.int)(button0)))
}

func QMessageBox_Question(parent *QWidget, title string, text string) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Question(parent.cPointer(), title_ms, text_ms))
}

func QMessageBox_Question2(parent *QWidget, title string, text string, button0 QMessageBox__StandardButton, button1 QMessageBox__StandardButton) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Question2(parent.cPointer(), title_ms, text_ms, (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Warning(parent *QWidget, title string, text string) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Warning(parent.cPointer(), title_ms, text_ms))
}

func QMessageBox_Warning2(parent *QWidget, title string, text string, button0 QMessageBox__StandardButton, button1 QMessageBox__StandardButton) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Warning2(parent.cPointer(), title_ms, text_ms, (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Critical(parent *QWidget, title string, text string) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Critical(parent.cPointer(), title_ms, text_ms))
}

func QMessageBox_Critical2(parent *QWidget, title string, text string, button0 QMessageBox__StandardButton, button1 QMessageBox__StandardButton) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Critical2(parent.cPointer(), title_ms, text_ms, (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_About(parent *QWidget, title string, text string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QMessageBox_About(parent.cPointer(), title_ms, text_ms)
}

func QMessageBox_AboutQt(parent *QWidget) {
	C.QMessageBox_AboutQt(parent.cPointer())
}

func QMessageBox_Information3(parent *QWidget, title string, text string, button0 int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Information3(parent.cPointer(), title_ms, text_ms, (C.int)(button0)))
}

func QMessageBox_Information4(parent *QWidget, title string, text string, button0Text string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	return (int)(C.QMessageBox_Information4(parent.cPointer(), title_ms, text_ms, button0Text_ms))
}

func QMessageBox_Question3(parent *QWidget, title string, text string, button0 int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Question3(parent.cPointer(), title_ms, text_ms, (C.int)(button0)))
}

func QMessageBox_Question4(parent *QWidget, title string, text string, button0Text string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	return (int)(C.QMessageBox_Question4(parent.cPointer(), title_ms, text_ms, button0Text_ms))
}

func QMessageBox_Warning3(parent *QWidget, title string, text string, button0 int, button1 int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Warning3(parent.cPointer(), title_ms, text_ms, (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Warning4(parent *QWidget, title string, text string, button0Text string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	return (int)(C.QMessageBox_Warning4(parent.cPointer(), title_ms, text_ms, button0Text_ms))
}

func QMessageBox_Critical3(parent *QWidget, title string, text string, button0 int, button1 int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Critical3(parent.cPointer(), title_ms, text_ms, (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Critical4(parent *QWidget, title string, text string, button0Text string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	return (int)(C.QMessageBox_Critical4(parent.cPointer(), title_ms, text_ms, button0Text_ms))
}

func (this *QMessageBox) ButtonText(button int) string {
	var _ms C.struct_miqt_string = C.QMessageBox_ButtonText(this.h, (C.int)(button))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMessageBox) SetButtonText(button int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QMessageBox_SetButtonText(this.h, (C.int)(button), text_ms)
}

func (this *QMessageBox) InformativeText() string {
	var _ms C.struct_miqt_string = C.QMessageBox_InformativeText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMessageBox) SetInformativeText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QMessageBox_SetInformativeText(this.h, text_ms)
}

func (this *QMessageBox) DetailedText() string {
	var _ms C.struct_miqt_string = C.QMessageBox_DetailedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMessageBox) SetDetailedText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QMessageBox_SetDetailedText(this.h, text_ms)
}

func (this *QMessageBox) SetWindowTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QMessageBox_SetWindowTitle(this.h, title_ms)
}

func (this *QMessageBox) SetWindowModality(windowModality WindowModality) {
	C.QMessageBox_SetWindowModality(this.h, (C.int)(windowModality))
}

func QMessageBox_StandardIcon(icon QMessageBox__Icon) *QPixmap {
	_goptr := newQPixmap(C.QMessageBox_StandardIcon((C.int)(icon)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMessageBox) ButtonClicked(button *QAbstractButton) {
	C.QMessageBox_ButtonClicked(this.h, button.cPointer())
}
func (this *QMessageBox) OnButtonClicked(slot func(button *QAbstractButton)) {
	C.QMessageBox_connect_ButtonClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMessageBox_ButtonClicked
func miqt_exec_callback_QMessageBox_ButtonClicked(cb C.intptr_t, button *C.QAbstractButton) {
	gofunc, ok := cgo.Handle(cb).Value().(func(button *QAbstractButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractButton(button)

	gofunc(slotval1)
}

func QMessageBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMessageBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMessageBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMessageBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMessageBox_Information42(parent *QWidget, title string, text string, buttons QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Information42(parent.cPointer(), title_ms, text_ms, (C.int)(buttons)))
}

func QMessageBox_Information5(parent *QWidget, title string, text string, buttons QMessageBox__StandardButton, defaultButton QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Information5(parent.cPointer(), title_ms, text_ms, (C.int)(buttons), (C.int)(defaultButton)))
}

func QMessageBox_Information52(parent *QWidget, title string, text string, button0 QMessageBox__StandardButton, button1 QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Information52(parent.cPointer(), title_ms, text_ms, (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Question42(parent *QWidget, title string, text string, buttons QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Question42(parent.cPointer(), title_ms, text_ms, (C.int)(buttons)))
}

func QMessageBox_Question5(parent *QWidget, title string, text string, buttons QMessageBox__StandardButton, defaultButton QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Question5(parent.cPointer(), title_ms, text_ms, (C.int)(buttons), (C.int)(defaultButton)))
}

func QMessageBox_Warning42(parent *QWidget, title string, text string, buttons QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Warning42(parent.cPointer(), title_ms, text_ms, (C.int)(buttons)))
}

func QMessageBox_Warning5(parent *QWidget, title string, text string, buttons QMessageBox__StandardButton, defaultButton QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Warning5(parent.cPointer(), title_ms, text_ms, (C.int)(buttons), (C.int)(defaultButton)))
}

func QMessageBox_Critical42(parent *QWidget, title string, text string, buttons QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Critical42(parent.cPointer(), title_ms, text_ms, (C.int)(buttons)))
}

func QMessageBox_Critical5(parent *QWidget, title string, text string, buttons QMessageBox__StandardButton, defaultButton QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (QMessageBox__StandardButton)(C.QMessageBox_Critical5(parent.cPointer(), title_ms, text_ms, (C.int)(buttons), (C.int)(defaultButton)))
}

func QMessageBox_AboutQt2(parent *QWidget, title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QMessageBox_AboutQt2(parent.cPointer(), title_ms)
}

func QMessageBox_Information53(parent *QWidget, title string, text string, button0 int, button1 int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Information53(parent.cPointer(), title_ms, text_ms, (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Information6(parent *QWidget, title string, text string, button0 int, button1 int, button2 int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Information6(parent.cPointer(), title_ms, text_ms, (C.int)(button0), (C.int)(button1), (C.int)(button2)))
}

func QMessageBox_Information54(parent *QWidget, title string, text string, button0Text string, button1Text string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	return (int)(C.QMessageBox_Information54(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms))
}

func QMessageBox_Information62(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	button2Text_ms := C.struct_miqt_string{}
	button2Text_ms.data = C.CString(button2Text)
	button2Text_ms.len = C.size_t(len(button2Text))
	defer C.free(unsafe.Pointer(button2Text_ms.data))
	return (int)(C.QMessageBox_Information62(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms, button2Text_ms))
}

func QMessageBox_Information7(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	button2Text_ms := C.struct_miqt_string{}
	button2Text_ms.data = C.CString(button2Text)
	button2Text_ms.len = C.size_t(len(button2Text))
	defer C.free(unsafe.Pointer(button2Text_ms.data))
	return (int)(C.QMessageBox_Information7(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms, button2Text_ms, (C.int)(defaultButtonNumber)))
}

func QMessageBox_Information8(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int, escapeButtonNumber int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	button2Text_ms := C.struct_miqt_string{}
	button2Text_ms.data = C.CString(button2Text)
	button2Text_ms.len = C.size_t(len(button2Text))
	defer C.free(unsafe.Pointer(button2Text_ms.data))
	return (int)(C.QMessageBox_Information8(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms, button2Text_ms, (C.int)(defaultButtonNumber), (C.int)(escapeButtonNumber)))
}

func QMessageBox_Question52(parent *QWidget, title string, text string, button0 int, button1 int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Question52(parent.cPointer(), title_ms, text_ms, (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Question6(parent *QWidget, title string, text string, button0 int, button1 int, button2 int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Question6(parent.cPointer(), title_ms, text_ms, (C.int)(button0), (C.int)(button1), (C.int)(button2)))
}

func QMessageBox_Question53(parent *QWidget, title string, text string, button0Text string, button1Text string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	return (int)(C.QMessageBox_Question53(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms))
}

func QMessageBox_Question62(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	button2Text_ms := C.struct_miqt_string{}
	button2Text_ms.data = C.CString(button2Text)
	button2Text_ms.len = C.size_t(len(button2Text))
	defer C.free(unsafe.Pointer(button2Text_ms.data))
	return (int)(C.QMessageBox_Question62(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms, button2Text_ms))
}

func QMessageBox_Question7(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	button2Text_ms := C.struct_miqt_string{}
	button2Text_ms.data = C.CString(button2Text)
	button2Text_ms.len = C.size_t(len(button2Text))
	defer C.free(unsafe.Pointer(button2Text_ms.data))
	return (int)(C.QMessageBox_Question7(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms, button2Text_ms, (C.int)(defaultButtonNumber)))
}

func QMessageBox_Question8(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int, escapeButtonNumber int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	button2Text_ms := C.struct_miqt_string{}
	button2Text_ms.data = C.CString(button2Text)
	button2Text_ms.len = C.size_t(len(button2Text))
	defer C.free(unsafe.Pointer(button2Text_ms.data))
	return (int)(C.QMessageBox_Question8(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms, button2Text_ms, (C.int)(defaultButtonNumber), (C.int)(escapeButtonNumber)))
}

func QMessageBox_Warning6(parent *QWidget, title string, text string, button0 int, button1 int, button2 int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Warning6(parent.cPointer(), title_ms, text_ms, (C.int)(button0), (C.int)(button1), (C.int)(button2)))
}

func QMessageBox_Warning52(parent *QWidget, title string, text string, button0Text string, button1Text string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	return (int)(C.QMessageBox_Warning52(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms))
}

func QMessageBox_Warning62(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	button2Text_ms := C.struct_miqt_string{}
	button2Text_ms.data = C.CString(button2Text)
	button2Text_ms.len = C.size_t(len(button2Text))
	defer C.free(unsafe.Pointer(button2Text_ms.data))
	return (int)(C.QMessageBox_Warning62(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms, button2Text_ms))
}

func QMessageBox_Warning7(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	button2Text_ms := C.struct_miqt_string{}
	button2Text_ms.data = C.CString(button2Text)
	button2Text_ms.len = C.size_t(len(button2Text))
	defer C.free(unsafe.Pointer(button2Text_ms.data))
	return (int)(C.QMessageBox_Warning7(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms, button2Text_ms, (C.int)(defaultButtonNumber)))
}

func QMessageBox_Warning8(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int, escapeButtonNumber int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	button2Text_ms := C.struct_miqt_string{}
	button2Text_ms.data = C.CString(button2Text)
	button2Text_ms.len = C.size_t(len(button2Text))
	defer C.free(unsafe.Pointer(button2Text_ms.data))
	return (int)(C.QMessageBox_Warning8(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms, button2Text_ms, (C.int)(defaultButtonNumber), (C.int)(escapeButtonNumber)))
}

func QMessageBox_Critical6(parent *QWidget, title string, text string, button0 int, button1 int, button2 int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QMessageBox_Critical6(parent.cPointer(), title_ms, text_ms, (C.int)(button0), (C.int)(button1), (C.int)(button2)))
}

func QMessageBox_Critical52(parent *QWidget, title string, text string, button0Text string, button1Text string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	return (int)(C.QMessageBox_Critical52(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms))
}

func QMessageBox_Critical62(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	button2Text_ms := C.struct_miqt_string{}
	button2Text_ms.data = C.CString(button2Text)
	button2Text_ms.len = C.size_t(len(button2Text))
	defer C.free(unsafe.Pointer(button2Text_ms.data))
	return (int)(C.QMessageBox_Critical62(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms, button2Text_ms))
}

func QMessageBox_Critical7(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	button2Text_ms := C.struct_miqt_string{}
	button2Text_ms.data = C.CString(button2Text)
	button2Text_ms.len = C.size_t(len(button2Text))
	defer C.free(unsafe.Pointer(button2Text_ms.data))
	return (int)(C.QMessageBox_Critical7(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms, button2Text_ms, (C.int)(defaultButtonNumber)))
}

func QMessageBox_Critical8(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int, escapeButtonNumber int) int {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	button0Text_ms := C.struct_miqt_string{}
	button0Text_ms.data = C.CString(button0Text)
	button0Text_ms.len = C.size_t(len(button0Text))
	defer C.free(unsafe.Pointer(button0Text_ms.data))
	button1Text_ms := C.struct_miqt_string{}
	button1Text_ms.data = C.CString(button1Text)
	button1Text_ms.len = C.size_t(len(button1Text))
	defer C.free(unsafe.Pointer(button1Text_ms.data))
	button2Text_ms := C.struct_miqt_string{}
	button2Text_ms.data = C.CString(button2Text)
	button2Text_ms.len = C.size_t(len(button2Text))
	defer C.free(unsafe.Pointer(button2Text_ms.data))
	return (int)(C.QMessageBox_Critical8(parent.cPointer(), title_ms, text_ms, button0Text_ms, button1Text_ms, button2Text_ms, (C.int)(defaultButtonNumber), (C.int)(escapeButtonNumber)))
}

func (this *QMessageBox) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QMessageBox_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QMessageBox) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QMessageBox_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_Event
func miqt_exec_callback_QMessageBox_Event(self *C.QMessageBox, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QMessageBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMessageBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QMessageBox_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMessageBox) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QMessageBox_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_ResizeEvent
func miqt_exec_callback_QMessageBox_ResizeEvent(self *C.QMessageBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QMessageBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QMessageBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QMessageBox_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMessageBox) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QMessageBox_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_ShowEvent
func miqt_exec_callback_QMessageBox_ShowEvent(self *C.QMessageBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QMessageBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QMessageBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QMessageBox_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMessageBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QMessageBox_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_CloseEvent
func miqt_exec_callback_QMessageBox_CloseEvent(self *C.QMessageBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QMessageBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QMessageBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QMessageBox_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMessageBox) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QMessageBox_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_KeyPressEvent
func miqt_exec_callback_QMessageBox_KeyPressEvent(self *C.QMessageBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QMessageBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QMessageBox) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QMessageBox_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMessageBox) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMessageBox_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_ChangeEvent
func miqt_exec_callback_QMessageBox_ChangeEvent(self *C.QMessageBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMessageBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QMessageBox) callVirtualBase_SetVisible(visible bool) {

	C.QMessageBox_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QMessageBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QMessageBox_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_SetVisible
func miqt_exec_callback_QMessageBox_SetVisible(self *C.QMessageBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QMessageBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QMessageBox) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QMessageBox_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMessageBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMessageBox_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_SizeHint
func miqt_exec_callback_QMessageBox_SizeHint(self *C.QMessageBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMessageBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QMessageBox) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QMessageBox_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMessageBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMessageBox_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_MinimumSizeHint
func miqt_exec_callback_QMessageBox_MinimumSizeHint(self *C.QMessageBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMessageBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMessageBox) callVirtualBase_Open() {

	C.QMessageBox_virtualbase_Open(unsafe.Pointer(this.h))

}
func (this *QMessageBox) OnOpen(slot func(super func())) {
	ok := C.QMessageBox_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_Open
func miqt_exec_callback_QMessageBox_Open(self *C.QMessageBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QMessageBox{h: self}).callVirtualBase_Open)

}

func (this *QMessageBox) callVirtualBase_Exec() int {

	return (int)(C.QMessageBox_virtualbase_Exec(unsafe.Pointer(this.h)))

}
func (this *QMessageBox) OnExec(slot func(super func() int) int) {
	ok := C.QMessageBox_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_Exec
func miqt_exec_callback_QMessageBox_Exec(self *C.QMessageBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMessageBox{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QMessageBox) callVirtualBase_Done(param1 int) {

	C.QMessageBox_virtualbase_Done(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QMessageBox) OnDone(slot func(super func(param1 int), param1 int)) {
	ok := C.QMessageBox_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_Done
func miqt_exec_callback_QMessageBox_Done(self *C.QMessageBox, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QMessageBox{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QMessageBox) callVirtualBase_Accept() {

	C.QMessageBox_virtualbase_Accept(unsafe.Pointer(this.h))

}
func (this *QMessageBox) OnAccept(slot func(super func())) {
	ok := C.QMessageBox_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_Accept
func miqt_exec_callback_QMessageBox_Accept(self *C.QMessageBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QMessageBox{h: self}).callVirtualBase_Accept)

}

func (this *QMessageBox) callVirtualBase_Reject() {

	C.QMessageBox_virtualbase_Reject(unsafe.Pointer(this.h))

}
func (this *QMessageBox) OnReject(slot func(super func())) {
	ok := C.QMessageBox_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_Reject
func miqt_exec_callback_QMessageBox_Reject(self *C.QMessageBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QMessageBox{h: self}).callVirtualBase_Reject)

}

func (this *QMessageBox) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QMessageBox_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMessageBox) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QMessageBox_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_ContextMenuEvent
func miqt_exec_callback_QMessageBox_ContextMenuEvent(self *C.QMessageBox, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QMessageBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QMessageBox) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QMessageBox_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QMessageBox) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QMessageBox_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMessageBox_EventFilter
func miqt_exec_callback_QMessageBox_EventFilter(self *C.QMessageBox, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QMessageBox{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QMessageBox) Delete() {
	C.QMessageBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMessageBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QMessageBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

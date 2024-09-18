package qt

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
	QMessageBox__Icon__NoIcon      QMessageBox__Icon = 0
	QMessageBox__Icon__Information QMessageBox__Icon = 1
	QMessageBox__Icon__Warning     QMessageBox__Icon = 2
	QMessageBox__Icon__Critical    QMessageBox__Icon = 3
	QMessageBox__Icon__Question    QMessageBox__Icon = 4
)

type QMessageBox__ButtonRole int

const (
	QMessageBox__ButtonRole__InvalidRole     QMessageBox__ButtonRole = -1
	QMessageBox__ButtonRole__AcceptRole      QMessageBox__ButtonRole = 0
	QMessageBox__ButtonRole__RejectRole      QMessageBox__ButtonRole = 1
	QMessageBox__ButtonRole__DestructiveRole QMessageBox__ButtonRole = 2
	QMessageBox__ButtonRole__ActionRole      QMessageBox__ButtonRole = 3
	QMessageBox__ButtonRole__HelpRole        QMessageBox__ButtonRole = 4
	QMessageBox__ButtonRole__YesRole         QMessageBox__ButtonRole = 5
	QMessageBox__ButtonRole__NoRole          QMessageBox__ButtonRole = 6
	QMessageBox__ButtonRole__ResetRole       QMessageBox__ButtonRole = 7
	QMessageBox__ButtonRole__ApplyRole       QMessageBox__ButtonRole = 8
	QMessageBox__ButtonRole__NRoles          QMessageBox__ButtonRole = 9
)

type QMessageBox__StandardButton int

const (
	QMessageBox__StandardButton__NoButton        QMessageBox__StandardButton = 0
	QMessageBox__StandardButton__Ok              QMessageBox__StandardButton = 1024
	QMessageBox__StandardButton__Save            QMessageBox__StandardButton = 2048
	QMessageBox__StandardButton__SaveAll         QMessageBox__StandardButton = 4096
	QMessageBox__StandardButton__Open            QMessageBox__StandardButton = 8192
	QMessageBox__StandardButton__Yes             QMessageBox__StandardButton = 16384
	QMessageBox__StandardButton__YesToAll        QMessageBox__StandardButton = 32768
	QMessageBox__StandardButton__No              QMessageBox__StandardButton = 65536
	QMessageBox__StandardButton__NoToAll         QMessageBox__StandardButton = 131072
	QMessageBox__StandardButton__Abort           QMessageBox__StandardButton = 262144
	QMessageBox__StandardButton__Retry           QMessageBox__StandardButton = 524288
	QMessageBox__StandardButton__Ignore          QMessageBox__StandardButton = 1048576
	QMessageBox__StandardButton__Close           QMessageBox__StandardButton = 2097152
	QMessageBox__StandardButton__Cancel          QMessageBox__StandardButton = 4194304
	QMessageBox__StandardButton__Discard         QMessageBox__StandardButton = 8388608
	QMessageBox__StandardButton__Help            QMessageBox__StandardButton = 16777216
	QMessageBox__StandardButton__Apply           QMessageBox__StandardButton = 33554432
	QMessageBox__StandardButton__Reset           QMessageBox__StandardButton = 67108864
	QMessageBox__StandardButton__RestoreDefaults QMessageBox__StandardButton = 134217728
	QMessageBox__StandardButton__FirstButton     QMessageBox__StandardButton = 1024
	QMessageBox__StandardButton__LastButton      QMessageBox__StandardButton = 134217728
	QMessageBox__StandardButton__YesAll          QMessageBox__StandardButton = 32768
	QMessageBox__StandardButton__NoAll           QMessageBox__StandardButton = 131072
	QMessageBox__StandardButton__Default         QMessageBox__StandardButton = 256
	QMessageBox__StandardButton__Escape          QMessageBox__StandardButton = 512
	QMessageBox__StandardButton__FlagMask        QMessageBox__StandardButton = 768
	QMessageBox__StandardButton__ButtonMask      QMessageBox__StandardButton = -769
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

func newQMessageBox(h *C.QMessageBox) *QMessageBox {
	if h == nil {
		return nil
	}
	return &QMessageBox{h: h, QDialog: newQDialog_U(unsafe.Pointer(h))}
}

func newQMessageBox_U(h unsafe.Pointer) *QMessageBox {
	return newQMessageBox((*C.QMessageBox)(h))
}

// NewQMessageBox constructs a new QMessageBox object.
func NewQMessageBox() *QMessageBox {
	ret := C.QMessageBox_new()
	return newQMessageBox(ret)
}

// NewQMessageBox2 constructs a new QMessageBox object.
func NewQMessageBox2(icon QMessageBox__Icon, title string, text string) *QMessageBox {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QMessageBox_new2((C.int)(icon), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms))
	return newQMessageBox(ret)
}

// NewQMessageBox3 constructs a new QMessageBox object.
func NewQMessageBox3(title string, text string, icon QMessageBox__Icon, button0 int, button1 int, button2 int) *QMessageBox {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QMessageBox_new3((*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(icon), (C.int)(button0), (C.int)(button1), (C.int)(button2))
	return newQMessageBox(ret)
}

// NewQMessageBox4 constructs a new QMessageBox object.
func NewQMessageBox4(parent *QWidget) *QMessageBox {
	ret := C.QMessageBox_new4(parent.cPointer())
	return newQMessageBox(ret)
}

// NewQMessageBox5 constructs a new QMessageBox object.
func NewQMessageBox5(icon QMessageBox__Icon, title string, text string, buttons int) *QMessageBox {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QMessageBox_new5((C.int)(icon), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(buttons))
	return newQMessageBox(ret)
}

// NewQMessageBox6 constructs a new QMessageBox object.
func NewQMessageBox6(icon QMessageBox__Icon, title string, text string, buttons int, parent *QWidget) *QMessageBox {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QMessageBox_new6((C.int)(icon), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(buttons), parent.cPointer())
	return newQMessageBox(ret)
}

// NewQMessageBox7 constructs a new QMessageBox object.
func NewQMessageBox7(icon QMessageBox__Icon, title string, text string, buttons int, parent *QWidget, flags int) *QMessageBox {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QMessageBox_new7((C.int)(icon), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(buttons), parent.cPointer(), (C.int)(flags))
	return newQMessageBox(ret)
}

// NewQMessageBox8 constructs a new QMessageBox object.
func NewQMessageBox8(title string, text string, icon QMessageBox__Icon, button0 int, button1 int, button2 int, parent *QWidget) *QMessageBox {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QMessageBox_new8((*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(icon), (C.int)(button0), (C.int)(button1), (C.int)(button2), parent.cPointer())
	return newQMessageBox(ret)
}

// NewQMessageBox9 constructs a new QMessageBox object.
func NewQMessageBox9(title string, text string, icon QMessageBox__Icon, button0 int, button1 int, button2 int, parent *QWidget, f int) *QMessageBox {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QMessageBox_new9((*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(icon), (C.int)(button0), (C.int)(button1), (C.int)(button2), parent.cPointer(), (C.int)(f))
	return newQMessageBox(ret)
}

func (this *QMessageBox) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QMessageBox_MetaObject(this.h)))
}

func QMessageBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QMessageBox_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMessageBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QMessageBox_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMessageBox) AddButton(button *QAbstractButton, role QMessageBox__ButtonRole) {
	C.QMessageBox_AddButton(this.h, button.cPointer(), (C.int)(role))
}

func (this *QMessageBox) AddButton2(text string, role QMessageBox__ButtonRole) *QPushButton {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return newQPushButton_U(unsafe.Pointer(C.QMessageBox_AddButton2(this.h, (*C.struct_miqt_string)(text_ms), (C.int)(role))))
}

func (this *QMessageBox) AddButtonWithButton(button QMessageBox__StandardButton) *QPushButton {
	return newQPushButton_U(unsafe.Pointer(C.QMessageBox_AddButtonWithButton(this.h, (C.int)(button))))
}

func (this *QMessageBox) RemoveButton(button *QAbstractButton) {
	C.QMessageBox_RemoveButton(this.h, button.cPointer())
}

func (this *QMessageBox) Buttons() []*QAbstractButton {
	var _ma *C.struct_miqt_array = C.QMessageBox_Buttons(this.h)
	_ret := make([]*QAbstractButton, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractButton)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractButton_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMessageBox) ButtonRole(button *QAbstractButton) QMessageBox__ButtonRole {
	return (QMessageBox__ButtonRole)(C.QMessageBox_ButtonRole(this.h, button.cPointer()))
}

func (this *QMessageBox) SetStandardButtons(buttons int) {
	C.QMessageBox_SetStandardButtons(this.h, (C.int)(buttons))
}

func (this *QMessageBox) StandardButtons() int {
	return (int)(C.QMessageBox_StandardButtons(this.h))
}

func (this *QMessageBox) StandardButton(button *QAbstractButton) QMessageBox__StandardButton {
	return (QMessageBox__StandardButton)(C.QMessageBox_StandardButton(this.h, button.cPointer()))
}

func (this *QMessageBox) Button(which QMessageBox__StandardButton) *QAbstractButton {
	return newQAbstractButton_U(unsafe.Pointer(C.QMessageBox_Button(this.h, (C.int)(which))))
}

func (this *QMessageBox) DefaultButton() *QPushButton {
	return newQPushButton_U(unsafe.Pointer(C.QMessageBox_DefaultButton(this.h)))
}

func (this *QMessageBox) SetDefaultButton(button *QPushButton) {
	C.QMessageBox_SetDefaultButton(this.h, button.cPointer())
}

func (this *QMessageBox) SetDefaultButtonWithButton(button QMessageBox__StandardButton) {
	C.QMessageBox_SetDefaultButtonWithButton(this.h, (C.int)(button))
}

func (this *QMessageBox) EscapeButton() *QAbstractButton {
	return newQAbstractButton_U(unsafe.Pointer(C.QMessageBox_EscapeButton(this.h)))
}

func (this *QMessageBox) SetEscapeButton(button *QAbstractButton) {
	C.QMessageBox_SetEscapeButton(this.h, button.cPointer())
}

func (this *QMessageBox) SetEscapeButtonWithButton(button QMessageBox__StandardButton) {
	C.QMessageBox_SetEscapeButtonWithButton(this.h, (C.int)(button))
}

func (this *QMessageBox) ClickedButton() *QAbstractButton {
	return newQAbstractButton_U(unsafe.Pointer(C.QMessageBox_ClickedButton(this.h)))
}

func (this *QMessageBox) Text() string {
	var _ms *C.struct_miqt_string = C.QMessageBox_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMessageBox) SetText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QMessageBox_SetText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QMessageBox) Icon() QMessageBox__Icon {
	return (QMessageBox__Icon)(C.QMessageBox_Icon(this.h))
}

func (this *QMessageBox) SetIcon(icon QMessageBox__Icon) {
	C.QMessageBox_SetIcon(this.h, (C.int)(icon))
}

func (this *QMessageBox) IconPixmap() *QPixmap {
	_ret := C.QMessageBox_IconPixmap(this.h)
	_goptr := newQPixmap(_ret)
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

func (this *QMessageBox) SetTextInteractionFlags(flags int) {
	C.QMessageBox_SetTextInteractionFlags(this.h, (C.int)(flags))
}

func (this *QMessageBox) TextInteractionFlags() int {
	return (int)(C.QMessageBox_TextInteractionFlags(this.h))
}

func (this *QMessageBox) SetCheckBox(cb *QCheckBox) {
	C.QMessageBox_SetCheckBox(this.h, cb.cPointer())
}

func (this *QMessageBox) CheckBox() *QCheckBox {
	return newQCheckBox_U(unsafe.Pointer(C.QMessageBox_CheckBox(this.h)))
}

func QMessageBox_Information(parent *QWidget, title string, text string) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Information(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms)))
}

func QMessageBox_Question(parent *QWidget, title string, text string) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Question(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms)))
}

func QMessageBox_Warning(parent *QWidget, title string, text string) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Warning(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms)))
}

func QMessageBox_Critical(parent *QWidget, title string, text string) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Critical(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms)))
}

func QMessageBox_About(parent *QWidget, title string, text string) {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QMessageBox_About(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms))
}

func QMessageBox_AboutQt(parent *QWidget) {
	C.QMessageBox_AboutQt(parent.cPointer())
}

func QMessageBox_Information2(parent *QWidget, title string, text string, button0 int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Information2(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0)))
}

func QMessageBox_Information3(parent *QWidget, title string, text string, button0Text string) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	return (int)(C.QMessageBox_Information3(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms)))
}

func QMessageBox_Information4(parent *QWidget, title string, text string, button0 QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Information4(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0)))
}

func QMessageBox_Question2(parent *QWidget, title string, text string, button0 int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Question2(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0)))
}

func QMessageBox_Question3(parent *QWidget, title string, text string, button0Text string) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	return (int)(C.QMessageBox_Question3(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms)))
}

func QMessageBox_Question4(parent *QWidget, title string, text string, button0 QMessageBox__StandardButton, button1 QMessageBox__StandardButton) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Question4(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Warning2(parent *QWidget, title string, text string, button0 int, button1 int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Warning2(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Warning3(parent *QWidget, title string, text string, button0Text string) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	return (int)(C.QMessageBox_Warning3(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms)))
}

func QMessageBox_Warning4(parent *QWidget, title string, text string, button0 QMessageBox__StandardButton, button1 QMessageBox__StandardButton) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Warning4(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Critical2(parent *QWidget, title string, text string, button0 int, button1 int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Critical2(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Critical3(parent *QWidget, title string, text string, button0Text string) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	return (int)(C.QMessageBox_Critical3(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms)))
}

func QMessageBox_Critical4(parent *QWidget, title string, text string, button0 QMessageBox__StandardButton, button1 QMessageBox__StandardButton) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Critical4(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0), (C.int)(button1)))
}

func (this *QMessageBox) ButtonText(button int) string {
	var _ms *C.struct_miqt_string = C.QMessageBox_ButtonText(this.h, (C.int)(button))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMessageBox) SetButtonText(button int, text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QMessageBox_SetButtonText(this.h, (C.int)(button), (*C.struct_miqt_string)(text_ms))
}

func (this *QMessageBox) InformativeText() string {
	var _ms *C.struct_miqt_string = C.QMessageBox_InformativeText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMessageBox) SetInformativeText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QMessageBox_SetInformativeText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QMessageBox) DetailedText() string {
	var _ms *C.struct_miqt_string = C.QMessageBox_DetailedText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMessageBox) SetDetailedText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QMessageBox_SetDetailedText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QMessageBox) SetWindowTitle(title string) {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	C.QMessageBox_SetWindowTitle(this.h, (*C.struct_miqt_string)(title_ms))
}

func (this *QMessageBox) SetWindowModality(windowModality WindowModality) {
	C.QMessageBox_SetWindowModality(this.h, (C.int)(windowModality))
}

func QMessageBox_StandardIcon(icon QMessageBox__Icon) *QPixmap {
	_ret := C.QMessageBox_StandardIcon((C.int)(icon))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMessageBox) ButtonClicked(button *QAbstractButton) {
	C.QMessageBox_ButtonClicked(this.h, button.cPointer())
}
func (this *QMessageBox) OnButtonClicked(slot func(button *QAbstractButton)) {
	C.QMessageBox_connect_ButtonClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QMessageBox_ButtonClicked
func miqt_exec_callback_QMessageBox_ButtonClicked(cb *C.void, button *C.QAbstractButton) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(button *QAbstractButton))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractButton_U(unsafe.Pointer(button))

	gofunc(slotval1)
}

func QMessageBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMessageBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMessageBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMessageBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMessageBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMessageBox_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMessageBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMessageBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMessageBox_Information42(parent *QWidget, title string, text string, buttons int) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Information42(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(buttons)))
}

func QMessageBox_Information5(parent *QWidget, title string, text string, buttons int, defaultButton QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Information5(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(buttons), (C.int)(defaultButton)))
}

func QMessageBox_Question42(parent *QWidget, title string, text string, buttons int) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Question42(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(buttons)))
}

func QMessageBox_Question5(parent *QWidget, title string, text string, buttons int, defaultButton QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Question5(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(buttons), (C.int)(defaultButton)))
}

func QMessageBox_Warning42(parent *QWidget, title string, text string, buttons int) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Warning42(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(buttons)))
}

func QMessageBox_Warning5(parent *QWidget, title string, text string, buttons int, defaultButton QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Warning5(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(buttons), (C.int)(defaultButton)))
}

func QMessageBox_Critical42(parent *QWidget, title string, text string, buttons int) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Critical42(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(buttons)))
}

func QMessageBox_Critical5(parent *QWidget, title string, text string, buttons int, defaultButton QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Critical5(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(buttons), (C.int)(defaultButton)))
}

func QMessageBox_AboutQt2(parent *QWidget, title string) {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	C.QMessageBox_AboutQt2(parent.cPointer(), (*C.struct_miqt_string)(title_ms))
}

func QMessageBox_Information52(parent *QWidget, title string, text string, button0 int, button1 int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Information52(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Information6(parent *QWidget, title string, text string, button0 int, button1 int, button2 int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Information6(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0), (C.int)(button1), (C.int)(button2)))
}

func QMessageBox_Information53(parent *QWidget, title string, text string, button0Text string, button1Text string) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	return (int)(C.QMessageBox_Information53(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms)))
}

func QMessageBox_Information62(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	button2Text_ms := miqt_strdupg(button2Text)
	defer C.free(button2Text_ms)
	return (int)(C.QMessageBox_Information62(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms), (*C.struct_miqt_string)(button2Text_ms)))
}

func QMessageBox_Information7(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	button2Text_ms := miqt_strdupg(button2Text)
	defer C.free(button2Text_ms)
	return (int)(C.QMessageBox_Information7(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms), (*C.struct_miqt_string)(button2Text_ms), (C.int)(defaultButtonNumber)))
}

func QMessageBox_Information8(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int, escapeButtonNumber int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	button2Text_ms := miqt_strdupg(button2Text)
	defer C.free(button2Text_ms)
	return (int)(C.QMessageBox_Information8(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms), (*C.struct_miqt_string)(button2Text_ms), (C.int)(defaultButtonNumber), (C.int)(escapeButtonNumber)))
}

func QMessageBox_Information54(parent *QWidget, title string, text string, button0 QMessageBox__StandardButton, button1 QMessageBox__StandardButton) QMessageBox__StandardButton {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (QMessageBox__StandardButton)(C.QMessageBox_Information54(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Question52(parent *QWidget, title string, text string, button0 int, button1 int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Question52(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0), (C.int)(button1)))
}

func QMessageBox_Question6(parent *QWidget, title string, text string, button0 int, button1 int, button2 int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Question6(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0), (C.int)(button1), (C.int)(button2)))
}

func QMessageBox_Question53(parent *QWidget, title string, text string, button0Text string, button1Text string) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	return (int)(C.QMessageBox_Question53(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms)))
}

func QMessageBox_Question62(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	button2Text_ms := miqt_strdupg(button2Text)
	defer C.free(button2Text_ms)
	return (int)(C.QMessageBox_Question62(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms), (*C.struct_miqt_string)(button2Text_ms)))
}

func QMessageBox_Question7(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	button2Text_ms := miqt_strdupg(button2Text)
	defer C.free(button2Text_ms)
	return (int)(C.QMessageBox_Question7(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms), (*C.struct_miqt_string)(button2Text_ms), (C.int)(defaultButtonNumber)))
}

func QMessageBox_Question8(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int, escapeButtonNumber int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	button2Text_ms := miqt_strdupg(button2Text)
	defer C.free(button2Text_ms)
	return (int)(C.QMessageBox_Question8(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms), (*C.struct_miqt_string)(button2Text_ms), (C.int)(defaultButtonNumber), (C.int)(escapeButtonNumber)))
}

func QMessageBox_Warning6(parent *QWidget, title string, text string, button0 int, button1 int, button2 int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Warning6(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0), (C.int)(button1), (C.int)(button2)))
}

func QMessageBox_Warning52(parent *QWidget, title string, text string, button0Text string, button1Text string) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	return (int)(C.QMessageBox_Warning52(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms)))
}

func QMessageBox_Warning62(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	button2Text_ms := miqt_strdupg(button2Text)
	defer C.free(button2Text_ms)
	return (int)(C.QMessageBox_Warning62(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms), (*C.struct_miqt_string)(button2Text_ms)))
}

func QMessageBox_Warning7(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	button2Text_ms := miqt_strdupg(button2Text)
	defer C.free(button2Text_ms)
	return (int)(C.QMessageBox_Warning7(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms), (*C.struct_miqt_string)(button2Text_ms), (C.int)(defaultButtonNumber)))
}

func QMessageBox_Warning8(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int, escapeButtonNumber int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	button2Text_ms := miqt_strdupg(button2Text)
	defer C.free(button2Text_ms)
	return (int)(C.QMessageBox_Warning8(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms), (*C.struct_miqt_string)(button2Text_ms), (C.int)(defaultButtonNumber), (C.int)(escapeButtonNumber)))
}

func QMessageBox_Critical6(parent *QWidget, title string, text string, button0 int, button1 int, button2 int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return (int)(C.QMessageBox_Critical6(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (C.int)(button0), (C.int)(button1), (C.int)(button2)))
}

func QMessageBox_Critical52(parent *QWidget, title string, text string, button0Text string, button1Text string) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	return (int)(C.QMessageBox_Critical52(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms)))
}

func QMessageBox_Critical62(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	button2Text_ms := miqt_strdupg(button2Text)
	defer C.free(button2Text_ms)
	return (int)(C.QMessageBox_Critical62(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms), (*C.struct_miqt_string)(button2Text_ms)))
}

func QMessageBox_Critical7(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	button2Text_ms := miqt_strdupg(button2Text)
	defer C.free(button2Text_ms)
	return (int)(C.QMessageBox_Critical7(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms), (*C.struct_miqt_string)(button2Text_ms), (C.int)(defaultButtonNumber)))
}

func QMessageBox_Critical8(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int, escapeButtonNumber int) int {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	button0Text_ms := miqt_strdupg(button0Text)
	defer C.free(button0Text_ms)
	button1Text_ms := miqt_strdupg(button1Text)
	defer C.free(button1Text_ms)
	button2Text_ms := miqt_strdupg(button2Text)
	defer C.free(button2Text_ms)
	return (int)(C.QMessageBox_Critical8(parent.cPointer(), (*C.struct_miqt_string)(title_ms), (*C.struct_miqt_string)(text_ms), (*C.struct_miqt_string)(button0Text_ms), (*C.struct_miqt_string)(button1Text_ms), (*C.struct_miqt_string)(button2Text_ms), (C.int)(defaultButtonNumber), (C.int)(escapeButtonNumber)))
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

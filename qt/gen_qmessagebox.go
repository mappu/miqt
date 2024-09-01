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
func NewQMessageBox2(icon uintptr, title string, text string) *QMessageBox {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_new2((C.uintptr_t)(icon), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)))
	return newQMessageBox(ret)
}

// NewQMessageBox3 constructs a new QMessageBox object.
func NewQMessageBox3(title string, text string, icon uintptr, button0 int, button1 int, button2 int) *QMessageBox {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_new3(title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.uintptr_t)(icon), (C.int)(button0), (C.int)(button1), (C.int)(button2))
	return newQMessageBox(ret)
}

// NewQMessageBox4 constructs a new QMessageBox object.
func NewQMessageBox4(parent *QWidget) *QMessageBox {
	ret := C.QMessageBox_new4(parent.cPointer())
	return newQMessageBox(ret)
}

// NewQMessageBox5 constructs a new QMessageBox object.
func NewQMessageBox5(icon uintptr, title string, text string, buttons int) *QMessageBox {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_new5((C.uintptr_t)(icon), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(buttons))
	return newQMessageBox(ret)
}

// NewQMessageBox6 constructs a new QMessageBox object.
func NewQMessageBox6(icon uintptr, title string, text string, buttons int, parent *QWidget) *QMessageBox {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_new6((C.uintptr_t)(icon), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(buttons), parent.cPointer())
	return newQMessageBox(ret)
}

// NewQMessageBox7 constructs a new QMessageBox object.
func NewQMessageBox7(icon uintptr, title string, text string, buttons int, parent *QWidget, flags int) *QMessageBox {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_new7((C.uintptr_t)(icon), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(buttons), parent.cPointer(), (C.int)(flags))
	return newQMessageBox(ret)
}

// NewQMessageBox8 constructs a new QMessageBox object.
func NewQMessageBox8(title string, text string, icon uintptr, button0 int, button1 int, button2 int, parent *QWidget) *QMessageBox {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_new8(title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.uintptr_t)(icon), (C.int)(button0), (C.int)(button1), (C.int)(button2), parent.cPointer())
	return newQMessageBox(ret)
}

// NewQMessageBox9 constructs a new QMessageBox object.
func NewQMessageBox9(title string, text string, icon uintptr, button0 int, button1 int, button2 int, parent *QWidget, f int) *QMessageBox {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_new9(title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.uintptr_t)(icon), (C.int)(button0), (C.int)(button1), (C.int)(button2), parent.cPointer(), (C.int)(f))
	return newQMessageBox(ret)
}

func (this *QMessageBox) MetaObject() *QMetaObject {
	ret := C.QMessageBox_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QMessageBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMessageBox_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMessageBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMessageBox_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMessageBox) AddButton(button *QAbstractButton, role uintptr) {
	C.QMessageBox_AddButton(this.h, button.cPointer(), (C.uintptr_t)(role))
}

func (this *QMessageBox) AddButton2(text string, role uintptr) *QPushButton {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_AddButton2(this.h, text_Cstring, C.size_t(len(text)), (C.uintptr_t)(role))
	return newQPushButton_U(unsafe.Pointer(ret))
}

func (this *QMessageBox) AddButtonWithButton(button uintptr) *QPushButton {
	ret := C.QMessageBox_AddButtonWithButton(this.h, (C.uintptr_t)(button))
	return newQPushButton_U(unsafe.Pointer(ret))
}

func (this *QMessageBox) RemoveButton(button *QAbstractButton) {
	C.QMessageBox_RemoveButton(this.h, button.cPointer())
}

func (this *QMessageBox) Buttons() []*QAbstractButton {
	var _out **C.QAbstractButton = nil
	var _out_len C.size_t = 0
	C.QMessageBox_Buttons(this.h, &_out, &_out_len)
	ret := make([]*QAbstractButton, int(_out_len))
	_outCast := (*[0xffff]*C.QAbstractButton)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAbstractButton(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMessageBox) ButtonRole(button *QAbstractButton) uintptr {
	ret := C.QMessageBox_ButtonRole(this.h, button.cPointer())
	return (uintptr)(ret)
}

func (this *QMessageBox) SetStandardButtons(buttons int) {
	C.QMessageBox_SetStandardButtons(this.h, (C.int)(buttons))
}

func (this *QMessageBox) StandardButtons() int {
	ret := C.QMessageBox_StandardButtons(this.h)
	return (int)(ret)
}

func (this *QMessageBox) StandardButton(button *QAbstractButton) uintptr {
	ret := C.QMessageBox_StandardButton(this.h, button.cPointer())
	return (uintptr)(ret)
}

func (this *QMessageBox) Button(which uintptr) *QAbstractButton {
	ret := C.QMessageBox_Button(this.h, (C.uintptr_t)(which))
	return newQAbstractButton_U(unsafe.Pointer(ret))
}

func (this *QMessageBox) DefaultButton() *QPushButton {
	ret := C.QMessageBox_DefaultButton(this.h)
	return newQPushButton_U(unsafe.Pointer(ret))
}

func (this *QMessageBox) SetDefaultButton(button *QPushButton) {
	C.QMessageBox_SetDefaultButton(this.h, button.cPointer())
}

func (this *QMessageBox) SetDefaultButtonWithButton(button uintptr) {
	C.QMessageBox_SetDefaultButtonWithButton(this.h, (C.uintptr_t)(button))
}

func (this *QMessageBox) EscapeButton() *QAbstractButton {
	ret := C.QMessageBox_EscapeButton(this.h)
	return newQAbstractButton_U(unsafe.Pointer(ret))
}

func (this *QMessageBox) SetEscapeButton(button *QAbstractButton) {
	C.QMessageBox_SetEscapeButton(this.h, button.cPointer())
}

func (this *QMessageBox) SetEscapeButtonWithButton(button uintptr) {
	C.QMessageBox_SetEscapeButtonWithButton(this.h, (C.uintptr_t)(button))
}

func (this *QMessageBox) ClickedButton() *QAbstractButton {
	ret := C.QMessageBox_ClickedButton(this.h)
	return newQAbstractButton_U(unsafe.Pointer(ret))
}

func (this *QMessageBox) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMessageBox_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMessageBox) SetText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QMessageBox_SetText(this.h, text_Cstring, C.size_t(len(text)))
}

func (this *QMessageBox) Icon() uintptr {
	ret := C.QMessageBox_Icon(this.h)
	return (uintptr)(ret)
}

func (this *QMessageBox) SetIcon(icon uintptr) {
	C.QMessageBox_SetIcon(this.h, (C.uintptr_t)(icon))
}

func (this *QMessageBox) IconPixmap() *QPixmap {
	ret := C.QMessageBox_IconPixmap(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMessageBox) SetIconPixmap(pixmap *QPixmap) {
	C.QMessageBox_SetIconPixmap(this.h, pixmap.cPointer())
}

func (this *QMessageBox) TextFormat() uintptr {
	ret := C.QMessageBox_TextFormat(this.h)
	return (uintptr)(ret)
}

func (this *QMessageBox) SetTextFormat(format uintptr) {
	C.QMessageBox_SetTextFormat(this.h, (C.uintptr_t)(format))
}

func (this *QMessageBox) SetTextInteractionFlags(flags int) {
	C.QMessageBox_SetTextInteractionFlags(this.h, (C.int)(flags))
}

func (this *QMessageBox) TextInteractionFlags() int {
	ret := C.QMessageBox_TextInteractionFlags(this.h)
	return (int)(ret)
}

func (this *QMessageBox) SetCheckBox(cb *QCheckBox) {
	C.QMessageBox_SetCheckBox(this.h, cb.cPointer())
}

func (this *QMessageBox) CheckBox() *QCheckBox {
	ret := C.QMessageBox_CheckBox(this.h)
	return newQCheckBox_U(unsafe.Pointer(ret))
}

func QMessageBox_Information(parent *QWidget, title string, text string) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Information(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)))
	return (uintptr)(ret)
}

func QMessageBox_Question(parent *QWidget, title string, text string) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Question(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)))
	return (uintptr)(ret)
}

func QMessageBox_Warning(parent *QWidget, title string, text string) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Warning(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)))
	return (uintptr)(ret)
}

func QMessageBox_Critical(parent *QWidget, title string, text string) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Critical(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)))
	return (uintptr)(ret)
}

func QMessageBox_About(parent *QWidget, title string, text string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QMessageBox_About(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)))
}

func QMessageBox_AboutQt(parent *QWidget) {
	C.QMessageBox_AboutQt(parent.cPointer())
}

func QMessageBox_Information2(parent *QWidget, title string, text string, button0 int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Information2(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(button0))
	return (int)(ret)
}

func QMessageBox_Information3(parent *QWidget, title string, text string, button0Text string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	ret := C.QMessageBox_Information3(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)))
	return (int)(ret)
}

func QMessageBox_Information4(parent *QWidget, title string, text string, button0 uintptr) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Information4(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.uintptr_t)(button0))
	return (uintptr)(ret)
}

func QMessageBox_Question2(parent *QWidget, title string, text string, button0 int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Question2(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(button0))
	return (int)(ret)
}

func QMessageBox_Question3(parent *QWidget, title string, text string, button0Text string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	ret := C.QMessageBox_Question3(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)))
	return (int)(ret)
}

func QMessageBox_Question4(parent *QWidget, title string, text string, button0 uintptr, button1 uintptr) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Question4(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.uintptr_t)(button0), (C.uintptr_t)(button1))
	return (int)(ret)
}

func QMessageBox_Warning2(parent *QWidget, title string, text string, button0 int, button1 int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Warning2(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(button0), (C.int)(button1))
	return (int)(ret)
}

func QMessageBox_Warning3(parent *QWidget, title string, text string, button0Text string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	ret := C.QMessageBox_Warning3(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)))
	return (int)(ret)
}

func QMessageBox_Warning4(parent *QWidget, title string, text string, button0 uintptr, button1 uintptr) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Warning4(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.uintptr_t)(button0), (C.uintptr_t)(button1))
	return (int)(ret)
}

func QMessageBox_Critical2(parent *QWidget, title string, text string, button0 int, button1 int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Critical2(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(button0), (C.int)(button1))
	return (int)(ret)
}

func QMessageBox_Critical3(parent *QWidget, title string, text string, button0Text string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	ret := C.QMessageBox_Critical3(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)))
	return (int)(ret)
}

func QMessageBox_Critical4(parent *QWidget, title string, text string, button0 uintptr, button1 uintptr) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Critical4(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.uintptr_t)(button0), (C.uintptr_t)(button1))
	return (int)(ret)
}

func (this *QMessageBox) ButtonText(button int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMessageBox_ButtonText(this.h, (C.int)(button), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMessageBox) SetButtonText(button int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QMessageBox_SetButtonText(this.h, (C.int)(button), text_Cstring, C.size_t(len(text)))
}

func (this *QMessageBox) InformativeText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMessageBox_InformativeText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMessageBox) SetInformativeText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QMessageBox_SetInformativeText(this.h, text_Cstring, C.size_t(len(text)))
}

func (this *QMessageBox) DetailedText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMessageBox_DetailedText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMessageBox) SetDetailedText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QMessageBox_SetDetailedText(this.h, text_Cstring, C.size_t(len(text)))
}

func (this *QMessageBox) SetWindowTitle(title string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	C.QMessageBox_SetWindowTitle(this.h, title_Cstring, C.size_t(len(title)))
}

func (this *QMessageBox) SetWindowModality(windowModality uintptr) {
	C.QMessageBox_SetWindowModality(this.h, (C.uintptr_t)(windowModality))
}

func QMessageBox_StandardIcon(icon uintptr) *QPixmap {
	ret := C.QMessageBox_StandardIcon((C.uintptr_t)(icon))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMessageBox) ButtonClicked(button *QAbstractButton) {
	C.QMessageBox_ButtonClicked(this.h, button.cPointer())
}

func (this *QMessageBox) OnButtonClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMessageBox_connect_ButtonClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QMessageBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMessageBox_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMessageBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMessageBox_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMessageBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMessageBox_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMessageBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMessageBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMessageBox_Information42(parent *QWidget, title string, text string, buttons int) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Information42(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(buttons))
	return (uintptr)(ret)
}

func QMessageBox_Information5(parent *QWidget, title string, text string, buttons int, defaultButton uintptr) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Information5(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(buttons), (C.uintptr_t)(defaultButton))
	return (uintptr)(ret)
}

func QMessageBox_Question42(parent *QWidget, title string, text string, buttons int) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Question42(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(buttons))
	return (uintptr)(ret)
}

func QMessageBox_Question5(parent *QWidget, title string, text string, buttons int, defaultButton uintptr) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Question5(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(buttons), (C.uintptr_t)(defaultButton))
	return (uintptr)(ret)
}

func QMessageBox_Warning42(parent *QWidget, title string, text string, buttons int) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Warning42(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(buttons))
	return (uintptr)(ret)
}

func QMessageBox_Warning5(parent *QWidget, title string, text string, buttons int, defaultButton uintptr) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Warning5(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(buttons), (C.uintptr_t)(defaultButton))
	return (uintptr)(ret)
}

func QMessageBox_Critical42(parent *QWidget, title string, text string, buttons int) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Critical42(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(buttons))
	return (uintptr)(ret)
}

func QMessageBox_Critical5(parent *QWidget, title string, text string, buttons int, defaultButton uintptr) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Critical5(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(buttons), (C.uintptr_t)(defaultButton))
	return (uintptr)(ret)
}

func QMessageBox_AboutQt2(parent *QWidget, title string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	C.QMessageBox_AboutQt2(parent.cPointer(), title_Cstring, C.size_t(len(title)))
}

func QMessageBox_Information52(parent *QWidget, title string, text string, button0 int, button1 int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Information52(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(button0), (C.int)(button1))
	return (int)(ret)
}

func QMessageBox_Information6(parent *QWidget, title string, text string, button0 int, button1 int, button2 int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Information6(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(button0), (C.int)(button1), (C.int)(button2))
	return (int)(ret)
}

func QMessageBox_Information53(parent *QWidget, title string, text string, button0Text string, button1Text string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	ret := C.QMessageBox_Information53(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)))
	return (int)(ret)
}

func QMessageBox_Information62(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	button2Text_Cstring := C.CString(button2Text)
	defer C.free(unsafe.Pointer(button2Text_Cstring))
	ret := C.QMessageBox_Information62(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)), button2Text_Cstring, C.size_t(len(button2Text)))
	return (int)(ret)
}

func QMessageBox_Information7(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	button2Text_Cstring := C.CString(button2Text)
	defer C.free(unsafe.Pointer(button2Text_Cstring))
	ret := C.QMessageBox_Information7(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)), button2Text_Cstring, C.size_t(len(button2Text)), (C.int)(defaultButtonNumber))
	return (int)(ret)
}

func QMessageBox_Information8(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int, escapeButtonNumber int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	button2Text_Cstring := C.CString(button2Text)
	defer C.free(unsafe.Pointer(button2Text_Cstring))
	ret := C.QMessageBox_Information8(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)), button2Text_Cstring, C.size_t(len(button2Text)), (C.int)(defaultButtonNumber), (C.int)(escapeButtonNumber))
	return (int)(ret)
}

func QMessageBox_Information54(parent *QWidget, title string, text string, button0 uintptr, button1 uintptr) uintptr {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Information54(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.uintptr_t)(button0), (C.uintptr_t)(button1))
	return (uintptr)(ret)
}

func QMessageBox_Question52(parent *QWidget, title string, text string, button0 int, button1 int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Question52(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(button0), (C.int)(button1))
	return (int)(ret)
}

func QMessageBox_Question6(parent *QWidget, title string, text string, button0 int, button1 int, button2 int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Question6(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(button0), (C.int)(button1), (C.int)(button2))
	return (int)(ret)
}

func QMessageBox_Question53(parent *QWidget, title string, text string, button0Text string, button1Text string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	ret := C.QMessageBox_Question53(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)))
	return (int)(ret)
}

func QMessageBox_Question62(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	button2Text_Cstring := C.CString(button2Text)
	defer C.free(unsafe.Pointer(button2Text_Cstring))
	ret := C.QMessageBox_Question62(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)), button2Text_Cstring, C.size_t(len(button2Text)))
	return (int)(ret)
}

func QMessageBox_Question7(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	button2Text_Cstring := C.CString(button2Text)
	defer C.free(unsafe.Pointer(button2Text_Cstring))
	ret := C.QMessageBox_Question7(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)), button2Text_Cstring, C.size_t(len(button2Text)), (C.int)(defaultButtonNumber))
	return (int)(ret)
}

func QMessageBox_Question8(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int, escapeButtonNumber int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	button2Text_Cstring := C.CString(button2Text)
	defer C.free(unsafe.Pointer(button2Text_Cstring))
	ret := C.QMessageBox_Question8(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)), button2Text_Cstring, C.size_t(len(button2Text)), (C.int)(defaultButtonNumber), (C.int)(escapeButtonNumber))
	return (int)(ret)
}

func QMessageBox_Warning6(parent *QWidget, title string, text string, button0 int, button1 int, button2 int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Warning6(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(button0), (C.int)(button1), (C.int)(button2))
	return (int)(ret)
}

func QMessageBox_Warning52(parent *QWidget, title string, text string, button0Text string, button1Text string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	ret := C.QMessageBox_Warning52(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)))
	return (int)(ret)
}

func QMessageBox_Warning62(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	button2Text_Cstring := C.CString(button2Text)
	defer C.free(unsafe.Pointer(button2Text_Cstring))
	ret := C.QMessageBox_Warning62(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)), button2Text_Cstring, C.size_t(len(button2Text)))
	return (int)(ret)
}

func QMessageBox_Warning7(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	button2Text_Cstring := C.CString(button2Text)
	defer C.free(unsafe.Pointer(button2Text_Cstring))
	ret := C.QMessageBox_Warning7(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)), button2Text_Cstring, C.size_t(len(button2Text)), (C.int)(defaultButtonNumber))
	return (int)(ret)
}

func QMessageBox_Warning8(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int, escapeButtonNumber int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	button2Text_Cstring := C.CString(button2Text)
	defer C.free(unsafe.Pointer(button2Text_Cstring))
	ret := C.QMessageBox_Warning8(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)), button2Text_Cstring, C.size_t(len(button2Text)), (C.int)(defaultButtonNumber), (C.int)(escapeButtonNumber))
	return (int)(ret)
}

func QMessageBox_Critical6(parent *QWidget, title string, text string, button0 int, button1 int, button2 int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QMessageBox_Critical6(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), (C.int)(button0), (C.int)(button1), (C.int)(button2))
	return (int)(ret)
}

func QMessageBox_Critical52(parent *QWidget, title string, text string, button0Text string, button1Text string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	ret := C.QMessageBox_Critical52(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)))
	return (int)(ret)
}

func QMessageBox_Critical62(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	button2Text_Cstring := C.CString(button2Text)
	defer C.free(unsafe.Pointer(button2Text_Cstring))
	ret := C.QMessageBox_Critical62(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)), button2Text_Cstring, C.size_t(len(button2Text)))
	return (int)(ret)
}

func QMessageBox_Critical7(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	button2Text_Cstring := C.CString(button2Text)
	defer C.free(unsafe.Pointer(button2Text_Cstring))
	ret := C.QMessageBox_Critical7(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)), button2Text_Cstring, C.size_t(len(button2Text)), (C.int)(defaultButtonNumber))
	return (int)(ret)
}

func QMessageBox_Critical8(parent *QWidget, title string, text string, button0Text string, button1Text string, button2Text string, defaultButtonNumber int, escapeButtonNumber int) int {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	button0Text_Cstring := C.CString(button0Text)
	defer C.free(unsafe.Pointer(button0Text_Cstring))
	button1Text_Cstring := C.CString(button1Text)
	defer C.free(unsafe.Pointer(button1Text_Cstring))
	button2Text_Cstring := C.CString(button2Text)
	defer C.free(unsafe.Pointer(button2Text_Cstring))
	ret := C.QMessageBox_Critical8(parent.cPointer(), title_Cstring, C.size_t(len(title)), text_Cstring, C.size_t(len(text)), button0Text_Cstring, C.size_t(len(button0Text)), button1Text_Cstring, C.size_t(len(button1Text)), button2Text_Cstring, C.size_t(len(button2Text)), (C.int)(defaultButtonNumber), (C.int)(escapeButtonNumber))
	return (int)(ret)
}

func (this *QMessageBox) Delete() {
	C.QMessageBox_Delete(this.h)
}

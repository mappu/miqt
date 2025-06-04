package qtermwidget

/*

#include "gen_Emulation.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type Konsole__ int

const (
	Konsole__NOTIFYNORMAL   Konsole__ = 0
	Konsole__NOTIFYBELL     Konsole__ = 1
	Konsole__NOTIFYACTIVITY Konsole__ = 2
	Konsole__NOTIFYSILENCE  Konsole__ = 3
)

type Konsole__Emulation__KeyboardCursorShape int

const (
	Konsole__Emulation__BlockCursor     Konsole__Emulation__KeyboardCursorShape = 0
	Konsole__Emulation__UnderlineCursor Konsole__Emulation__KeyboardCursorShape = 1
	Konsole__Emulation__IBeamCursor     Konsole__Emulation__KeyboardCursorShape = 2
)

type Konsole__Emulation__EmulationCodec int

const (
	Konsole__Emulation__LocaleCodec Konsole__Emulation__EmulationCodec = 0
	Konsole__Emulation__Utf8Codec   Konsole__Emulation__EmulationCodec = 1
)

type Konsole__Emulation struct {
	h *C.Konsole__Emulation
	*qt.QObject
}

func (this *Konsole__Emulation) cPointer() *C.Konsole__Emulation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__Emulation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__Emulation constructs the type using only CGO pointers.
func newKonsole__Emulation(h *C.Konsole__Emulation) *Konsole__Emulation {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.Konsole__Emulation_virtbase(h, &outptr_QObject)

	return &Konsole__Emulation{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewKonsole__Emulation constructs the type using only unsafe pointers.
func UnsafeNewKonsole__Emulation(h unsafe.Pointer) *Konsole__Emulation {
	return newKonsole__Emulation((*C.Konsole__Emulation)(h))
}

// NewKonsole__Emulation constructs a new Konsole::Emulation object.
func NewKonsole__Emulation() *Konsole__Emulation {

	return newKonsole__Emulation(C.Konsole__Emulation_new())
}

func (this *Konsole__Emulation) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.Konsole__Emulation_metaObject(this.h)))
}

func (this *Konsole__Emulation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.Konsole__Emulation_metacast(this.h, param1_Cstring))
}

func Konsole__Emulation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__Emulation_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Konsole__Emulation_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__Emulation_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *Konsole__Emulation) ImageSize() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.Konsole__Emulation_imageSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Konsole__Emulation) LineCount() int {
	return (int)(C.Konsole__Emulation_lineCount(this.h))
}

func (this *Konsole__Emulation) ClearHistory() {
	C.Konsole__Emulation_clearHistory(this.h)
}

func (this *Konsole__Emulation) Codec() *qt.QTextCodec {
	return qt.UnsafeNewQTextCodec(unsafe.Pointer(C.Konsole__Emulation_codec(this.h)))
}

func (this *Konsole__Emulation) SetCodec(codec *qt.QTextCodec) {
	C.Konsole__Emulation_setCodec(this.h, (*C.QTextCodec)(codec.UnsafePointer()))
}

func (this *Konsole__Emulation) Utf8() bool {
	return (bool)(C.Konsole__Emulation_utf8(this.h))
}

func (this *Konsole__Emulation) EraseChar() int8 {
	return (int8)(C.Konsole__Emulation_eraseChar(this.h))
}

func (this *Konsole__Emulation) SetKeyBindings(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.Konsole__Emulation_setKeyBindings(this.h, name_ms)
}

func (this *Konsole__Emulation) KeyBindings() string {
	var _ms C.struct_miqt_string = C.Konsole__Emulation_keyBindings(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *Konsole__Emulation) ClearEntireScreen() {
	C.Konsole__Emulation_clearEntireScreen(this.h)
}

func (this *Konsole__Emulation) Reset() {
	C.Konsole__Emulation_reset(this.h)
}

func (this *Konsole__Emulation) ProgramUsesMouse() bool {
	return (bool)(C.Konsole__Emulation_programUsesMouse(this.h))
}

func (this *Konsole__Emulation) ProgramBracketedPasteMode() bool {
	return (bool)(C.Konsole__Emulation_programBracketedPasteMode(this.h))
}

func (this *Konsole__Emulation) SetImageSize(lines int, columns int) {
	C.Konsole__Emulation_setImageSize(this.h, (C.int)(lines), (C.int)(columns))
}

func (this *Konsole__Emulation) SendText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.Konsole__Emulation_sendText(this.h, text_ms)
}

func (this *Konsole__Emulation) SendKeyEvent(param1 *qt.QKeyEvent, fromPaste bool) {
	C.Konsole__Emulation_sendKeyEvent(this.h, (*C.QKeyEvent)(param1.UnsafePointer()), (C.bool)(fromPaste))
}

func (this *Konsole__Emulation) SendMouseEvent(buttons int, column int, line int, eventType int) {
	C.Konsole__Emulation_sendMouseEvent(this.h, (C.int)(buttons), (C.int)(column), (C.int)(line), (C.int)(eventType))
}

func (this *Konsole__Emulation) SendString(stringVal string, length int) {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	C.Konsole__Emulation_sendString(this.h, stringVal_Cstring, (C.int)(length))
}

func (this *Konsole__Emulation) ReceiveData(buffer string, lenVal int) {
	buffer_Cstring := C.CString(buffer)
	defer C.free(unsafe.Pointer(buffer_Cstring))
	C.Konsole__Emulation_receiveData(this.h, buffer_Cstring, (C.int)(lenVal))
}

func (this *Konsole__Emulation) SendData(data string, lenVal int) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.Konsole__Emulation_sendData(this.h, data_Cstring, (C.int)(lenVal))
}
func (this *Konsole__Emulation) OnSendData(slot func(data string, lenVal int)) {
	C.Konsole__Emulation_connect_sendData(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_sendData
func miqt_exec_callback_Konsole__Emulation_sendData(cb C.intptr_t, data *C.const_char, lenVal C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(data string, lenVal int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int)(lenVal)

	gofunc(slotval1, slotval2)
}

func (this *Konsole__Emulation) LockPtyRequest(suspend bool) {
	C.Konsole__Emulation_lockPtyRequest(this.h, (C.bool)(suspend))
}
func (this *Konsole__Emulation) OnLockPtyRequest(slot func(suspend bool)) {
	C.Konsole__Emulation_connect_lockPtyRequest(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_lockPtyRequest
func miqt_exec_callback_Konsole__Emulation_lockPtyRequest(cb C.intptr_t, suspend C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(suspend bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(suspend)

	gofunc(slotval1)
}

func (this *Konsole__Emulation) UseUtf8Request(param1 bool) {
	C.Konsole__Emulation_useUtf8Request(this.h, (C.bool)(param1))
}
func (this *Konsole__Emulation) OnUseUtf8Request(slot func(param1 bool)) {
	C.Konsole__Emulation_connect_useUtf8Request(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_useUtf8Request
func miqt_exec_callback_Konsole__Emulation_useUtf8Request(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *Konsole__Emulation) StateSet(state int) {
	C.Konsole__Emulation_stateSet(this.h, (C.int)(state))
}
func (this *Konsole__Emulation) OnStateSet(slot func(state int)) {
	C.Konsole__Emulation_connect_stateSet(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_stateSet
func miqt_exec_callback_Konsole__Emulation_stateSet(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(state)

	gofunc(slotval1)
}

func (this *Konsole__Emulation) ZmodemDetected() {
	C.Konsole__Emulation_zmodemDetected(this.h)
}
func (this *Konsole__Emulation) OnZmodemDetected(slot func()) {
	C.Konsole__Emulation_connect_zmodemDetected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_zmodemDetected
func miqt_exec_callback_Konsole__Emulation_zmodemDetected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *Konsole__Emulation) ChangeTabTextColorRequest(color int) {
	C.Konsole__Emulation_changeTabTextColorRequest(this.h, (C.int)(color))
}
func (this *Konsole__Emulation) OnChangeTabTextColorRequest(slot func(color int)) {
	C.Konsole__Emulation_connect_changeTabTextColorRequest(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_changeTabTextColorRequest
func miqt_exec_callback_Konsole__Emulation_changeTabTextColorRequest(cb C.intptr_t, color C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(color)

	gofunc(slotval1)
}

func (this *Konsole__Emulation) ProgramUsesMouseChanged(usesMouse bool) {
	C.Konsole__Emulation_programUsesMouseChanged(this.h, (C.bool)(usesMouse))
}
func (this *Konsole__Emulation) OnProgramUsesMouseChanged(slot func(usesMouse bool)) {
	C.Konsole__Emulation_connect_programUsesMouseChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_programUsesMouseChanged
func miqt_exec_callback_Konsole__Emulation_programUsesMouseChanged(cb C.intptr_t, usesMouse C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(usesMouse bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(usesMouse)

	gofunc(slotval1)
}

func (this *Konsole__Emulation) ProgramBracketedPasteModeChanged(bracketedPasteMode bool) {
	C.Konsole__Emulation_programBracketedPasteModeChanged(this.h, (C.bool)(bracketedPasteMode))
}
func (this *Konsole__Emulation) OnProgramBracketedPasteModeChanged(slot func(bracketedPasteMode bool)) {
	C.Konsole__Emulation_connect_programBracketedPasteModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_programBracketedPasteModeChanged
func miqt_exec_callback_Konsole__Emulation_programBracketedPasteModeChanged(cb C.intptr_t, bracketedPasteMode C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(bracketedPasteMode bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(bracketedPasteMode)

	gofunc(slotval1)
}

func (this *Konsole__Emulation) OutputChanged() {
	C.Konsole__Emulation_outputChanged(this.h)
}
func (this *Konsole__Emulation) OnOutputChanged(slot func()) {
	C.Konsole__Emulation_connect_outputChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_outputChanged
func miqt_exec_callback_Konsole__Emulation_outputChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *Konsole__Emulation) TitleChanged(title int, newTitle string) {
	newTitle_ms := C.struct_miqt_string{}
	newTitle_ms.data = C.CString(newTitle)
	newTitle_ms.len = C.size_t(len(newTitle))
	defer C.free(unsafe.Pointer(newTitle_ms.data))
	C.Konsole__Emulation_titleChanged(this.h, (C.int)(title), newTitle_ms)
}
func (this *Konsole__Emulation) OnTitleChanged(slot func(title int, newTitle string)) {
	C.Konsole__Emulation_connect_titleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_titleChanged
func miqt_exec_callback_Konsole__Emulation_titleChanged(cb C.intptr_t, title C.int, newTitle C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(title int, newTitle string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(title)

	var newTitle_ms C.struct_miqt_string = newTitle
	newTitle_ret := C.GoStringN(newTitle_ms.data, C.int(int64(newTitle_ms.len)))
	C.free(unsafe.Pointer(newTitle_ms.data))
	slotval2 := newTitle_ret

	gofunc(slotval1, slotval2)
}

func (this *Konsole__Emulation) ImageSizeChanged(lineCount int, columnCount int) {
	C.Konsole__Emulation_imageSizeChanged(this.h, (C.int)(lineCount), (C.int)(columnCount))
}
func (this *Konsole__Emulation) OnImageSizeChanged(slot func(lineCount int, columnCount int)) {
	C.Konsole__Emulation_connect_imageSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_imageSizeChanged
func miqt_exec_callback_Konsole__Emulation_imageSizeChanged(cb C.intptr_t, lineCount C.int, columnCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(lineCount int, columnCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(lineCount)

	slotval2 := (int)(columnCount)

	gofunc(slotval1, slotval2)
}

func (this *Konsole__Emulation) ImageSizeInitialized() {
	C.Konsole__Emulation_imageSizeInitialized(this.h)
}
func (this *Konsole__Emulation) OnImageSizeInitialized(slot func()) {
	C.Konsole__Emulation_connect_imageSizeInitialized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_imageSizeInitialized
func miqt_exec_callback_Konsole__Emulation_imageSizeInitialized(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *Konsole__Emulation) ImageResizeRequest(sizz *qt.QSize) {
	C.Konsole__Emulation_imageResizeRequest(this.h, (*C.QSize)(sizz.UnsafePointer()))
}
func (this *Konsole__Emulation) OnImageResizeRequest(slot func(sizz *qt.QSize)) {
	C.Konsole__Emulation_connect_imageResizeRequest(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_imageResizeRequest
func miqt_exec_callback_Konsole__Emulation_imageResizeRequest(cb C.intptr_t, sizz *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sizz *qt.QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSize(unsafe.Pointer(sizz))

	gofunc(slotval1)
}

func (this *Konsole__Emulation) ProfileChangeCommandReceived(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.Konsole__Emulation_profileChangeCommandReceived(this.h, text_ms)
}
func (this *Konsole__Emulation) OnProfileChangeCommandReceived(slot func(text string)) {
	C.Konsole__Emulation_connect_profileChangeCommandReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_profileChangeCommandReceived
func miqt_exec_callback_Konsole__Emulation_profileChangeCommandReceived(cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc(slotval1)
}

func (this *Konsole__Emulation) FlowControlKeyPressed(suspendKeyPressed bool) {
	C.Konsole__Emulation_flowControlKeyPressed(this.h, (C.bool)(suspendKeyPressed))
}
func (this *Konsole__Emulation) OnFlowControlKeyPressed(slot func(suspendKeyPressed bool)) {
	C.Konsole__Emulation_connect_flowControlKeyPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_flowControlKeyPressed
func miqt_exec_callback_Konsole__Emulation_flowControlKeyPressed(cb C.intptr_t, suspendKeyPressed C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(suspendKeyPressed bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(suspendKeyPressed)

	gofunc(slotval1)
}

func (this *Konsole__Emulation) CursorChanged(cursorShape Konsole__Emulation__KeyboardCursorShape, blinkingCursorEnabled bool) {
	C.Konsole__Emulation_cursorChanged(this.h, (C.int)(cursorShape), (C.bool)(blinkingCursorEnabled))
}
func (this *Konsole__Emulation) OnCursorChanged(slot func(cursorShape Konsole__Emulation__KeyboardCursorShape, blinkingCursorEnabled bool)) {
	C.Konsole__Emulation_connect_cursorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_cursorChanged
func miqt_exec_callback_Konsole__Emulation_cursorChanged(cb C.intptr_t, cursorShape C.int, blinkingCursorEnabled C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(cursorShape Konsole__Emulation__KeyboardCursorShape, blinkingCursorEnabled bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (Konsole__Emulation__KeyboardCursorShape)(cursorShape)

	slotval2 := (bool)(blinkingCursorEnabled)

	gofunc(slotval1, slotval2)
}

func (this *Konsole__Emulation) OutputFromKeypressEvent() {
	C.Konsole__Emulation_outputFromKeypressEvent(this.h)
}
func (this *Konsole__Emulation) OnOutputFromKeypressEvent(slot func()) {
	C.Konsole__Emulation_connect_outputFromKeypressEvent(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_Konsole__Emulation_outputFromKeypressEvent
func miqt_exec_callback_Konsole__Emulation_outputFromKeypressEvent(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func Konsole__Emulation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__Emulation_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Konsole__Emulation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__Emulation_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Konsole__Emulation_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__Emulation_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Konsole__Emulation_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.Konsole__Emulation_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetScreen can only be called from a Konsole__Emulation that was directly constructed.
func (this *Konsole__Emulation) SetScreen(index int) {

	var _dynamic_cast_ok C.bool = false
	C.Konsole__Emulation_protectedbase_setScreen(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(index))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetCodecWithCodec can only be called from a Konsole__Emulation that was directly constructed.
func (this *Konsole__Emulation) SetCodecWithCodec(codec Konsole__Emulation__EmulationCodec) {

	var _dynamic_cast_ok C.bool = false
	C.Konsole__Emulation_protectedbase_setCodecWithCodec(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(codec))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BufferedUpdate can only be called from a Konsole__Emulation that was directly constructed.
func (this *Konsole__Emulation) BufferedUpdate() {

	var _dynamic_cast_ok C.bool = false
	C.Konsole__Emulation_protectedbase_bufferedUpdate(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a Konsole__Emulation that was directly constructed.
func (this *Konsole__Emulation) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.Konsole__Emulation_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a Konsole__Emulation that was directly constructed.
func (this *Konsole__Emulation) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.Konsole__Emulation_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a Konsole__Emulation that was directly constructed.
func (this *Konsole__Emulation) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.Konsole__Emulation_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a Konsole__Emulation that was directly constructed.
func (this *Konsole__Emulation) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.Konsole__Emulation_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *Konsole__Emulation) callVirtualBase_EraseChar() int8 {

	return (int8)(C.Konsole__Emulation_virtualbase_eraseChar(unsafe.Pointer(this.h)))

}
func (this *Konsole__Emulation) OnEraseChar(slot func(super func() int8) int8) {
	ok := C.Konsole__Emulation_override_virtual_eraseChar(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_eraseChar
func miqt_exec_callback_Konsole__Emulation_eraseChar(self *C.Konsole__Emulation, cb C.intptr_t) C.char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int8) int8)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&Konsole__Emulation{h: self}).callVirtualBase_EraseChar)

	return (C.char)(virtualReturn)

}
func (this *Konsole__Emulation) OnClearEntireScreen(slot func()) {
	ok := C.Konsole__Emulation_override_virtual_clearEntireScreen(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_clearEntireScreen
func miqt_exec_callback_Konsole__Emulation_clearEntireScreen(self *C.Konsole__Emulation, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *Konsole__Emulation) OnReset(slot func()) {
	ok := C.Konsole__Emulation_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_reset
func miqt_exec_callback_Konsole__Emulation_reset(self *C.Konsole__Emulation, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

func (this *Konsole__Emulation) callVirtualBase_SetImageSize(lines int, columns int) {

	C.Konsole__Emulation_virtualbase_setImageSize(unsafe.Pointer(this.h), (C.int)(lines), (C.int)(columns))

}
func (this *Konsole__Emulation) OnSetImageSize(slot func(super func(lines int, columns int), lines int, columns int)) {
	ok := C.Konsole__Emulation_override_virtual_setImageSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_setImageSize
func miqt_exec_callback_Konsole__Emulation_setImageSize(self *C.Konsole__Emulation, cb C.intptr_t, lines C.int, columns C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(lines int, columns int), lines int, columns int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(lines)

	slotval2 := (int)(columns)

	gofunc((&Konsole__Emulation{h: self}).callVirtualBase_SetImageSize, slotval1, slotval2)

}
func (this *Konsole__Emulation) OnSendText(slot func(text string)) {
	ok := C.Konsole__Emulation_override_virtual_sendText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_sendText
func miqt_exec_callback_Konsole__Emulation_sendText(self *C.Konsole__Emulation, cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc(slotval1)

}

func (this *Konsole__Emulation) callVirtualBase_SendKeyEvent(param1 *qt.QKeyEvent, fromPaste bool) {

	C.Konsole__Emulation_virtualbase_sendKeyEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()), (C.bool)(fromPaste))

}
func (this *Konsole__Emulation) OnSendKeyEvent(slot func(super func(param1 *qt.QKeyEvent, fromPaste bool), param1 *qt.QKeyEvent, fromPaste bool)) {
	ok := C.Konsole__Emulation_override_virtual_sendKeyEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_sendKeyEvent
func miqt_exec_callback_Konsole__Emulation_sendKeyEvent(self *C.Konsole__Emulation, cb C.intptr_t, param1 *C.QKeyEvent, fromPaste C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent, fromPaste bool), param1 *qt.QKeyEvent, fromPaste bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	slotval2 := (bool)(fromPaste)

	gofunc((&Konsole__Emulation{h: self}).callVirtualBase_SendKeyEvent, slotval1, slotval2)

}

func (this *Konsole__Emulation) callVirtualBase_SendMouseEvent(buttons int, column int, line int, eventType int) {

	C.Konsole__Emulation_virtualbase_sendMouseEvent(unsafe.Pointer(this.h), (C.int)(buttons), (C.int)(column), (C.int)(line), (C.int)(eventType))

}
func (this *Konsole__Emulation) OnSendMouseEvent(slot func(super func(buttons int, column int, line int, eventType int), buttons int, column int, line int, eventType int)) {
	ok := C.Konsole__Emulation_override_virtual_sendMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_sendMouseEvent
func miqt_exec_callback_Konsole__Emulation_sendMouseEvent(self *C.Konsole__Emulation, cb C.intptr_t, buttons C.int, column C.int, line C.int, eventType C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(buttons int, column int, line int, eventType int), buttons int, column int, line int, eventType int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(buttons)

	slotval2 := (int)(column)

	slotval3 := (int)(line)

	slotval4 := (int)(eventType)

	gofunc((&Konsole__Emulation{h: self}).callVirtualBase_SendMouseEvent, slotval1, slotval2, slotval3, slotval4)

}
func (this *Konsole__Emulation) OnSendString(slot func(stringVal string, length int)) {
	ok := C.Konsole__Emulation_override_virtual_sendString(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_sendString
func miqt_exec_callback_Konsole__Emulation_sendString(self *C.Konsole__Emulation, cb C.intptr_t, stringVal *C.const_char, length C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stringVal string, length int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	stringVal_ret := stringVal
	slotval1 := C.GoString(stringVal_ret)

	slotval2 := (int)(length)

	gofunc(slotval1, slotval2)

}
func (this *Konsole__Emulation) OnSetMode(slot func(mode int)) {
	ok := C.Konsole__Emulation_override_virtual_setMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_setMode
func miqt_exec_callback_Konsole__Emulation_setMode(self *C.Konsole__Emulation, cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(mode)

	gofunc(slotval1)

}
func (this *Konsole__Emulation) OnResetMode(slot func(mode int)) {
	ok := C.Konsole__Emulation_override_virtual_resetMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_resetMode
func miqt_exec_callback_Konsole__Emulation_resetMode(self *C.Konsole__Emulation, cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(mode)

	gofunc(slotval1)

}

func (this *Konsole__Emulation) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.Konsole__Emulation_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *Konsole__Emulation) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.Konsole__Emulation_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_event
func miqt_exec_callback_Konsole__Emulation_event(self *C.Konsole__Emulation, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&Konsole__Emulation{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *Konsole__Emulation) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.Konsole__Emulation_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *Konsole__Emulation) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.Konsole__Emulation_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_eventFilter
func miqt_exec_callback_Konsole__Emulation_eventFilter(self *C.Konsole__Emulation, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&Konsole__Emulation{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *Konsole__Emulation) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.Konsole__Emulation_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *Konsole__Emulation) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.Konsole__Emulation_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_timerEvent
func miqt_exec_callback_Konsole__Emulation_timerEvent(self *C.Konsole__Emulation, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&Konsole__Emulation{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *Konsole__Emulation) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.Konsole__Emulation_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *Konsole__Emulation) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.Konsole__Emulation_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_childEvent
func miqt_exec_callback_Konsole__Emulation_childEvent(self *C.Konsole__Emulation, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&Konsole__Emulation{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *Konsole__Emulation) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.Konsole__Emulation_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *Konsole__Emulation) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.Konsole__Emulation_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_customEvent
func miqt_exec_callback_Konsole__Emulation_customEvent(self *C.Konsole__Emulation, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&Konsole__Emulation{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *Konsole__Emulation) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.Konsole__Emulation_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *Konsole__Emulation) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.Konsole__Emulation_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_connectNotify
func miqt_exec_callback_Konsole__Emulation_connectNotify(self *C.Konsole__Emulation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&Konsole__Emulation{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *Konsole__Emulation) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.Konsole__Emulation_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *Konsole__Emulation) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.Konsole__Emulation_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_Konsole__Emulation_disconnectNotify
func miqt_exec_callback_Konsole__Emulation_disconnectNotify(self *C.Konsole__Emulation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&Konsole__Emulation{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *Konsole__Emulation) Delete() {
	C.Konsole__Emulation_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__Emulation) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__Emulation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

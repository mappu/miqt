package qtermwidget

/*

#include "gen_qtermwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTermWidget struct {
	h *C.QTermWidget
	*qt.QWidget
	*QTermWidgetInterface
}

func (this *QTermWidget) cPointer() *C.QTermWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTermWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTermWidget constructs the type using only CGO pointers.
func newQTermWidget(h *C.QTermWidget) *QTermWidget {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	var outptr_QTermWidgetInterface *C.QTermWidgetInterface = nil
	C.QTermWidget_virtbase(h, &outptr_QWidget, &outptr_QTermWidgetInterface)

	return &QTermWidget{h: h,
		QWidget:              qt.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget)),
		QTermWidgetInterface: newQTermWidgetInterface(outptr_QTermWidgetInterface)}
}

// UnsafeNewQTermWidget constructs the type using only unsafe pointers.
func UnsafeNewQTermWidget(h unsafe.Pointer) *QTermWidget {
	return newQTermWidget((*C.QTermWidget)(h))
}

// NewQTermWidget constructs a new QTermWidget object.
func NewQTermWidget(parent *qt.QWidget) *QTermWidget {

	return newQTermWidget(C.QTermWidget_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQTermWidget2 constructs a new QTermWidget object.
func NewQTermWidget2(startnow int) *QTermWidget {

	return newQTermWidget(C.QTermWidget_new2((C.int)(startnow)))
}

// NewQTermWidget3 constructs a new QTermWidget object.
func NewQTermWidget3() *QTermWidget {

	return newQTermWidget(C.QTermWidget_new3())
}

// NewQTermWidget4 constructs a new QTermWidget object.
func NewQTermWidget4(startnow int, parent *qt.QWidget) *QTermWidget {

	return newQTermWidget(C.QTermWidget_new4((C.int)(startnow), (*C.QWidget)(parent.UnsafePointer())))
}

func (this *QTermWidget) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QTermWidget_metaObject(this.h)))
}

func (this *QTermWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTermWidget_metacast(this.h, param1_Cstring))
}

func QTermWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTermWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTermWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTermWidget_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTermWidget) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QTermWidget_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTermWidget) SetTerminalSizeHint(enabled bool) {
	C.QTermWidget_setTerminalSizeHint(this.h, (C.bool)(enabled))
}

func (this *QTermWidget) TerminalSizeHint() bool {
	return (bool)(C.QTermWidget_terminalSizeHint(this.h))
}

func (this *QTermWidget) StartShellProgram() {
	C.QTermWidget_startShellProgram(this.h)
}

func (this *QTermWidget) StartTerminalTeletype() {
	C.QTermWidget_startTerminalTeletype(this.h)
}

func (this *QTermWidget) GetShellPID() int {
	return (int)(C.QTermWidget_getShellPID(this.h))
}

func (this *QTermWidget) ChangeDir(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QTermWidget_changeDir(this.h, dir_ms)
}

func (this *QTermWidget) SetTerminalFont(font *qt.QFont) {
	C.QTermWidget_setTerminalFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QTermWidget) GetTerminalFont() *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QTermWidget_getTerminalFont(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTermWidget) SetTerminalOpacity(level float64) {
	C.QTermWidget_setTerminalOpacity(this.h, (C.double)(level))
}

func (this *QTermWidget) SetTerminalBackgroundImage(backgroundImage string) {
	backgroundImage_ms := C.struct_miqt_string{}
	backgroundImage_ms.data = C.CString(backgroundImage)
	backgroundImage_ms.len = C.size_t(len(backgroundImage))
	defer C.free(unsafe.Pointer(backgroundImage_ms.data))
	C.QTermWidget_setTerminalBackgroundImage(this.h, backgroundImage_ms)
}

func (this *QTermWidget) SetTerminalBackgroundMode(mode int) {
	C.QTermWidget_setTerminalBackgroundMode(this.h, (C.int)(mode))
}

func (this *QTermWidget) SetEnvironment(environment []string) {
	environment_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(environment))))
	defer C.free(unsafe.Pointer(environment_CArray))
	for i := range environment {
		environment_i_ms := C.struct_miqt_string{}
		environment_i_ms.data = C.CString(environment[i])
		environment_i_ms.len = C.size_t(len(environment[i]))
		defer C.free(unsafe.Pointer(environment_i_ms.data))
		environment_CArray[i] = environment_i_ms
	}
	environment_ma := C.struct_miqt_array{len: C.size_t(len(environment)), data: unsafe.Pointer(environment_CArray)}
	C.QTermWidget_setEnvironment(this.h, environment_ma)
}

func (this *QTermWidget) SetShellProgram(program string) {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	C.QTermWidget_setShellProgram(this.h, program_ms)
}

func (this *QTermWidget) SetWorkingDirectory(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QTermWidget_setWorkingDirectory(this.h, dir_ms)
}

func (this *QTermWidget) WorkingDirectory() string {
	var _ms C.struct_miqt_string = C.QTermWidget_workingDirectory(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTermWidget) SetArgs(args []string) {
	args_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(args))))
	defer C.free(unsafe.Pointer(args_CArray))
	for i := range args {
		args_i_ms := C.struct_miqt_string{}
		args_i_ms.data = C.CString(args[i])
		args_i_ms.len = C.size_t(len(args[i]))
		defer C.free(unsafe.Pointer(args_i_ms.data))
		args_CArray[i] = args_i_ms
	}
	args_ma := C.struct_miqt_array{len: C.size_t(len(args)), data: unsafe.Pointer(args_CArray)}
	C.QTermWidget_setArgs(this.h, args_ma)
}

func (this *QTermWidget) SetTextCodec(codec *qt.QTextCodec) {
	C.QTermWidget_setTextCodec(this.h, (*C.QTextCodec)(codec.UnsafePointer()))
}

func (this *QTermWidget) SetColorScheme(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTermWidget_setColorScheme(this.h, name_ms)
}

func (this *QTermWidget) GetAvailableColorSchemes() []string {
	var _ma C.struct_miqt_array = C.QTermWidget_getAvailableColorSchemes(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QTermWidget_AvailableColorSchemes() []string {
	var _ma C.struct_miqt_array = C.QTermWidget_availableColorSchemes()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QTermWidget_AddCustomColorSchemeDir(custom_dir string) {
	custom_dir_ms := C.struct_miqt_string{}
	custom_dir_ms.data = C.CString(custom_dir)
	custom_dir_ms.len = C.size_t(len(custom_dir))
	defer C.free(unsafe.Pointer(custom_dir_ms.data))
	C.QTermWidget_addCustomColorSchemeDir(custom_dir_ms)
}

func (this *QTermWidget) SetHistorySize(lines int) {
	C.QTermWidget_setHistorySize(this.h, (C.int)(lines))
}

func (this *QTermWidget) HistorySize() int {
	return (int)(C.QTermWidget_historySize(this.h))
}

func (this *QTermWidget) SetScrollBarPosition(scrollBarPosition QTermWidgetInterface__ScrollBarPosition) {
	C.QTermWidget_setScrollBarPosition(this.h, (C.int)(scrollBarPosition))
}

func (this *QTermWidget) ScrollToEnd() {
	C.QTermWidget_scrollToEnd(this.h)
}

func (this *QTermWidget) SendText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTermWidget_sendText(this.h, text_ms)
}

func (this *QTermWidget) SendKeyEvent(e *qt.QKeyEvent) {
	C.QTermWidget_sendKeyEvent(this.h, (*C.QKeyEvent)(e.UnsafePointer()))
}

func (this *QTermWidget) SetFlowControlEnabled(enabled bool) {
	C.QTermWidget_setFlowControlEnabled(this.h, (C.bool)(enabled))
}

func (this *QTermWidget) FlowControlEnabled() bool {
	return (bool)(C.QTermWidget_flowControlEnabled(this.h))
}

func (this *QTermWidget) SetFlowControlWarningEnabled(enabled bool) {
	C.QTermWidget_setFlowControlWarningEnabled(this.h, (C.bool)(enabled))
}

func QTermWidget_AvailableKeyBindings() []string {
	var _ma C.struct_miqt_array = C.QTermWidget_availableKeyBindings()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QTermWidget) KeyBindings() string {
	var _ms C.struct_miqt_string = C.QTermWidget_keyBindings(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTermWidget) SetMotionAfterPasting(motionAfterPasting int) {
	C.QTermWidget_setMotionAfterPasting(this.h, (C.int)(motionAfterPasting))
}

func (this *QTermWidget) HistoryLinesCount() int {
	return (int)(C.QTermWidget_historyLinesCount(this.h))
}

func (this *QTermWidget) ScreenColumnsCount() int {
	return (int)(C.QTermWidget_screenColumnsCount(this.h))
}

func (this *QTermWidget) ScreenLinesCount() int {
	return (int)(C.QTermWidget_screenLinesCount(this.h))
}

func (this *QTermWidget) SetSelectionStart(row int, column int) {
	C.QTermWidget_setSelectionStart(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTermWidget) SetSelectionEnd(row int, column int) {
	C.QTermWidget_setSelectionEnd(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTermWidget) GetSelectionStart(row *int, column *int) {
	C.QTermWidget_getSelectionStart(this.h, (*C.int)(unsafe.Pointer(row)), (*C.int)(unsafe.Pointer(column)))
}

func (this *QTermWidget) GetSelectionEnd(row *int, column *int) {
	C.QTermWidget_getSelectionEnd(this.h, (*C.int)(unsafe.Pointer(row)), (*C.int)(unsafe.Pointer(column)))
}

func (this *QTermWidget) SelectedText(preserveLineBreaks bool) string {
	var _ms C.struct_miqt_string = C.QTermWidget_selectedText(this.h, (C.bool)(preserveLineBreaks))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTermWidget) SetMonitorActivity(monitorActivity bool) {
	C.QTermWidget_setMonitorActivity(this.h, (C.bool)(monitorActivity))
}

func (this *QTermWidget) SetMonitorSilence(monitorSilence bool) {
	C.QTermWidget_setMonitorSilence(this.h, (C.bool)(monitorSilence))
}

func (this *QTermWidget) SetSilenceTimeout(seconds int) {
	C.QTermWidget_setSilenceTimeout(this.h, (C.int)(seconds))
}

func (this *QTermWidget) FilterActions(position *qt.QPoint) []*qt.QAction {
	var _ma C.struct_miqt_array = C.QTermWidget_filterActions(this.h, (*C.QPoint)(position.UnsafePointer()))
	_ret := make([]*qt.QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt.UnsafeNewQAction(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QTermWidget) GetPtySlaveFd() int {
	return (int)(C.QTermWidget_getPtySlaveFd(this.h))
}

func (this *QTermWidget) SetKeyboardCursorShape(shape Konsole__Emulation__KeyboardCursorShape) {
	C.QTermWidget_setKeyboardCursorShape(this.h, (C.int)(shape))
}

func (this *QTermWidget) SetBlinkingCursor(blink bool) {
	C.QTermWidget_setBlinkingCursor(this.h, (C.bool)(blink))
}

func (this *QTermWidget) SetBidiEnabled(enabled bool) {
	C.QTermWidget_setBidiEnabled(this.h, (C.bool)(enabled))
}

func (this *QTermWidget) IsBidiEnabled() bool {
	return (bool)(C.QTermWidget_isBidiEnabled(this.h))
}

func (this *QTermWidget) SetAutoClose(autoClose bool) {
	C.QTermWidget_setAutoClose(this.h, (C.bool)(autoClose))
}

func (this *QTermWidget) Title() string {
	var _ms C.struct_miqt_string = C.QTermWidget_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTermWidget) Icon() string {
	var _ms C.struct_miqt_string = C.QTermWidget_icon(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTermWidget) IsTitleChanged() bool {
	return (bool)(C.QTermWidget_isTitleChanged(this.h))
}

func (this *QTermWidget) BracketText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTermWidget_bracketText(this.h, text_ms)
}

func (this *QTermWidget) DisableBracketedPasteMode(disable bool) {
	C.QTermWidget_disableBracketedPasteMode(this.h, (C.bool)(disable))
}

func (this *QTermWidget) BracketedPasteModeIsDisabled() bool {
	return (bool)(C.QTermWidget_bracketedPasteModeIsDisabled(this.h))
}

func (this *QTermWidget) SetMargin(margin int) {
	C.QTermWidget_setMargin(this.h, (C.int)(margin))
}

func (this *QTermWidget) GetMargin() int {
	return (int)(C.QTermWidget_getMargin(this.h))
}

func (this *QTermWidget) SetDrawLineChars(drawLineChars bool) {
	C.QTermWidget_setDrawLineChars(this.h, (C.bool)(drawLineChars))
}

func (this *QTermWidget) SetBoldIntense(boldIntense bool) {
	C.QTermWidget_setBoldIntense(this.h, (C.bool)(boldIntense))
}

func (this *QTermWidget) SetConfirmMultilinePaste(confirmMultilinePaste bool) {
	C.QTermWidget_setConfirmMultilinePaste(this.h, (C.bool)(confirmMultilinePaste))
}

func (this *QTermWidget) SetTrimPastedTrailingNewlines(trimPastedTrailingNewlines bool) {
	C.QTermWidget_setTrimPastedTrailingNewlines(this.h, (C.bool)(trimPastedTrailingNewlines))
}

func (this *QTermWidget) CreateWidget(startnow int) *QTermWidgetInterface {
	return newQTermWidgetInterface(C.QTermWidget_createWidget(this.h, (C.int)(startnow)))
}

func (this *QTermWidget) Finished() {
	C.QTermWidget_finished(this.h)
}
func (this *QTermWidget) OnFinished(slot func()) {
	C.QTermWidget_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_finished
func miqt_exec_callback_QTermWidget_finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTermWidget) CopyAvailable(param1 bool) {
	C.QTermWidget_copyAvailable(this.h, (C.bool)(param1))
}
func (this *QTermWidget) OnCopyAvailable(slot func(param1 bool)) {
	C.QTermWidget_connect_copyAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_copyAvailable
func miqt_exec_callback_QTermWidget_copyAvailable(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QTermWidget) TermGetFocus() {
	C.QTermWidget_termGetFocus(this.h)
}
func (this *QTermWidget) OnTermGetFocus(slot func()) {
	C.QTermWidget_connect_termGetFocus(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_termGetFocus
func miqt_exec_callback_QTermWidget_termGetFocus(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTermWidget) TermLostFocus() {
	C.QTermWidget_termLostFocus(this.h)
}
func (this *QTermWidget) OnTermLostFocus(slot func()) {
	C.QTermWidget_connect_termLostFocus(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_termLostFocus
func miqt_exec_callback_QTermWidget_termLostFocus(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTermWidget) TermKeyPressed(param1 *qt.QKeyEvent) {
	C.QTermWidget_termKeyPressed(this.h, (*C.QKeyEvent)(param1.UnsafePointer()))
}
func (this *QTermWidget) OnTermKeyPressed(slot func(param1 *qt.QKeyEvent)) {
	C.QTermWidget_connect_termKeyPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_termKeyPressed
func miqt_exec_callback_QTermWidget_termKeyPressed(cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QTermWidget) UrlActivated(param1 *qt.QUrl, fromContextMenu bool) {
	C.QTermWidget_urlActivated(this.h, (*C.QUrl)(param1.UnsafePointer()), (C.bool)(fromContextMenu))
}
func (this *QTermWidget) OnUrlActivated(slot func(param1 *qt.QUrl, fromContextMenu bool)) {
	C.QTermWidget_connect_urlActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_urlActivated
func miqt_exec_callback_QTermWidget_urlActivated(cb C.intptr_t, param1 *C.QUrl, fromContextMenu C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *qt.QUrl, fromContextMenu bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(param1))

	slotval2 := (bool)(fromContextMenu)

	gofunc(slotval1, slotval2)
}

func (this *QTermWidget) Bell(message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QTermWidget_bell(this.h, message_ms)
}
func (this *QTermWidget) OnBell(slot func(message string)) {
	C.QTermWidget_connect_bell(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_bell
func miqt_exec_callback_QTermWidget_bell(cb C.intptr_t, message C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(message string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var message_ms C.struct_miqt_string = message
	message_ret := C.GoStringN(message_ms.data, C.int(int64(message_ms.len)))
	C.free(unsafe.Pointer(message_ms.data))
	slotval1 := message_ret

	gofunc(slotval1)
}

func (this *QTermWidget) Activity() {
	C.QTermWidget_activity(this.h)
}
func (this *QTermWidget) OnActivity(slot func()) {
	C.QTermWidget_connect_activity(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_activity
func miqt_exec_callback_QTermWidget_activity(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTermWidget) Silence() {
	C.QTermWidget_silence(this.h)
}
func (this *QTermWidget) OnSilence(slot func()) {
	C.QTermWidget_connect_silence(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_silence
func miqt_exec_callback_QTermWidget_silence(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTermWidget) SendData(param1 string, param2 int) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QTermWidget_sendData(this.h, param1_Cstring, (C.int)(param2))
}
func (this *QTermWidget) OnSendData(slot func(param1 string, param2 int)) {
	C.QTermWidget_connect_sendData(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_sendData
func miqt_exec_callback_QTermWidget_sendData(cb C.intptr_t, param1 *C.const_char, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	param1_ret := param1
	slotval1 := C.GoString(param1_ret)

	slotval2 := (int)(param2)

	gofunc(slotval1, slotval2)
}

func (this *QTermWidget) ProfileChanged(profile string) {
	profile_ms := C.struct_miqt_string{}
	profile_ms.data = C.CString(profile)
	profile_ms.len = C.size_t(len(profile))
	defer C.free(unsafe.Pointer(profile_ms.data))
	C.QTermWidget_profileChanged(this.h, profile_ms)
}
func (this *QTermWidget) OnProfileChanged(slot func(profile string)) {
	C.QTermWidget_connect_profileChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_profileChanged
func miqt_exec_callback_QTermWidget_profileChanged(cb C.intptr_t, profile C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(profile string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var profile_ms C.struct_miqt_string = profile
	profile_ret := C.GoStringN(profile_ms.data, C.int(int64(profile_ms.len)))
	C.free(unsafe.Pointer(profile_ms.data))
	slotval1 := profile_ret

	gofunc(slotval1)
}

func (this *QTermWidget) TitleChanged() {
	C.QTermWidget_titleChanged(this.h)
}
func (this *QTermWidget) OnTitleChanged(slot func()) {
	C.QTermWidget_connect_titleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_titleChanged
func miqt_exec_callback_QTermWidget_titleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTermWidget) ReceivedData(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTermWidget_receivedData(this.h, text_ms)
}
func (this *QTermWidget) OnReceivedData(slot func(text string)) {
	C.QTermWidget_connect_receivedData(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTermWidget_receivedData
func miqt_exec_callback_QTermWidget_receivedData(cb C.intptr_t, text C.struct_miqt_string) {
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

func (this *QTermWidget) CopyClipboard() {
	C.QTermWidget_copyClipboard(this.h)
}

func (this *QTermWidget) PasteClipboard() {
	C.QTermWidget_pasteClipboard(this.h)
}

func (this *QTermWidget) PasteSelection() {
	C.QTermWidget_pasteSelection(this.h)
}

func (this *QTermWidget) ZoomIn() {
	C.QTermWidget_zoomIn(this.h)
}

func (this *QTermWidget) ZoomOut() {
	C.QTermWidget_zoomOut(this.h)
}

func (this *QTermWidget) SetSize(size *qt.QSize) {
	C.QTermWidget_setSize(this.h, (*C.QSize)(size.UnsafePointer()))
}

func (this *QTermWidget) SetKeyBindings(kb string) {
	kb_ms := C.struct_miqt_string{}
	kb_ms.data = C.CString(kb)
	kb_ms.len = C.size_t(len(kb))
	defer C.free(unsafe.Pointer(kb_ms.data))
	C.QTermWidget_setKeyBindings(this.h, kb_ms)
}

func (this *QTermWidget) Clear() {
	C.QTermWidget_clear(this.h)
}

func (this *QTermWidget) ToggleShowSearchBar() {
	C.QTermWidget_toggleShowSearchBar(this.h)
}

func (this *QTermWidget) SaveHistory(device *qt.QIODevice) {
	C.QTermWidget_saveHistory(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func QTermWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTermWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTermWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTermWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTermWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTermWidget_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTermWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTermWidget_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SessionFinished can only be called from a QTermWidget that was directly constructed.
func (this *QTermWidget) SessionFinished() {

	var _dynamic_cast_ok C.bool = false
	C.QTermWidget_protectedbase_sessionFinished(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SelectionChanged can only be called from a QTermWidget that was directly constructed.
func (this *QTermWidget) SelectionChanged(textSelected bool) {

	var _dynamic_cast_ok C.bool = false
	C.QTermWidget_protectedbase_selectionChanged(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(textSelected))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QTermWidget that was directly constructed.
func (this *QTermWidget) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QTermWidget_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QTermWidget that was directly constructed.
func (this *QTermWidget) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QTermWidget_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QTermWidget that was directly constructed.
func (this *QTermWidget) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QTermWidget_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QTermWidget that was directly constructed.
func (this *QTermWidget) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTermWidget_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QTermWidget that was directly constructed.
func (this *QTermWidget) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTermWidget_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QTermWidget that was directly constructed.
func (this *QTermWidget) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QTermWidget_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTermWidget that was directly constructed.
func (this *QTermWidget) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTermWidget_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTermWidget that was directly constructed.
func (this *QTermWidget) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTermWidget_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTermWidget that was directly constructed.
func (this *QTermWidget) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTermWidget_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTermWidget) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QTermWidget_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTermWidget) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QTermWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_sizeHint
func miqt_exec_callback_QTermWidget_sizeHint(self *C.QTermWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QTermWidget) callVirtualBase_SetTerminalSizeHint(enabled bool) {

	C.QTermWidget_virtualbase_setTerminalSizeHint(unsafe.Pointer(this.h), (C.bool)(enabled))

}
func (this *QTermWidget) OnSetTerminalSizeHint(slot func(super func(enabled bool), enabled bool)) {
	ok := C.QTermWidget_override_virtual_setTerminalSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setTerminalSizeHint
func miqt_exec_callback_QTermWidget_setTerminalSizeHint(self *C.QTermWidget, cb C.intptr_t, enabled C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(enabled bool), enabled bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enabled)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetTerminalSizeHint, slotval1)

}

func (this *QTermWidget) callVirtualBase_TerminalSizeHint() bool {

	return (bool)(C.QTermWidget_virtualbase_terminalSizeHint(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnTerminalSizeHint(slot func(super func() bool) bool) {
	ok := C.QTermWidget_override_virtual_terminalSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_terminalSizeHint
func miqt_exec_callback_QTermWidget_terminalSizeHint(self *C.QTermWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_TerminalSizeHint)

	return (C.bool)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_StartShellProgram() {

	C.QTermWidget_virtualbase_startShellProgram(unsafe.Pointer(this.h))

}
func (this *QTermWidget) OnStartShellProgram(slot func(super func())) {
	ok := C.QTermWidget_override_virtual_startShellProgram(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_startShellProgram
func miqt_exec_callback_QTermWidget_startShellProgram(self *C.QTermWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTermWidget{h: self}).callVirtualBase_StartShellProgram)

}

func (this *QTermWidget) callVirtualBase_StartTerminalTeletype() {

	C.QTermWidget_virtualbase_startTerminalTeletype(unsafe.Pointer(this.h))

}
func (this *QTermWidget) OnStartTerminalTeletype(slot func(super func())) {
	ok := C.QTermWidget_override_virtual_startTerminalTeletype(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_startTerminalTeletype
func miqt_exec_callback_QTermWidget_startTerminalTeletype(self *C.QTermWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTermWidget{h: self}).callVirtualBase_StartTerminalTeletype)

}

func (this *QTermWidget) callVirtualBase_GetShellPID() int {

	return (int)(C.QTermWidget_virtualbase_getShellPID(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnGetShellPID(slot func(super func() int) int) {
	ok := C.QTermWidget_override_virtual_getShellPID(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_getShellPID
func miqt_exec_callback_QTermWidget_getShellPID(self *C.QTermWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_GetShellPID)

	return (C.int)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_ChangeDir(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))

	C.QTermWidget_virtualbase_changeDir(unsafe.Pointer(this.h), dir_ms)

}
func (this *QTermWidget) OnChangeDir(slot func(super func(dir string), dir string)) {
	ok := C.QTermWidget_override_virtual_changeDir(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_changeDir
func miqt_exec_callback_QTermWidget_changeDir(self *C.QTermWidget, cb C.intptr_t, dir C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dir string), dir string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var dir_ms C.struct_miqt_string = dir
	dir_ret := C.GoStringN(dir_ms.data, C.int(int64(dir_ms.len)))
	C.free(unsafe.Pointer(dir_ms.data))
	slotval1 := dir_ret

	gofunc((&QTermWidget{h: self}).callVirtualBase_ChangeDir, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetTerminalFont(font *qt.QFont) {

	C.QTermWidget_virtualbase_setTerminalFont(unsafe.Pointer(this.h), (*C.QFont)(font.UnsafePointer()))

}
func (this *QTermWidget) OnSetTerminalFont(slot func(super func(font *qt.QFont), font *qt.QFont)) {
	ok := C.QTermWidget_override_virtual_setTerminalFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setTerminalFont
func miqt_exec_callback_QTermWidget_setTerminalFont(self *C.QTermWidget, cb C.intptr_t, font *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(font *qt.QFont), font *qt.QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(font))

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetTerminalFont, slotval1)

}

func (this *QTermWidget) callVirtualBase_GetTerminalFont() *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QTermWidget_virtualbase_getTerminalFont(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTermWidget) OnGetTerminalFont(slot func(super func() *qt.QFont) *qt.QFont) {
	ok := C.QTermWidget_override_virtual_getTerminalFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_getTerminalFont
func miqt_exec_callback_QTermWidget_getTerminalFont(self *C.QTermWidget, cb C.intptr_t) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QFont) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_GetTerminalFont)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QTermWidget) callVirtualBase_SetTerminalOpacity(level float64) {

	C.QTermWidget_virtualbase_setTerminalOpacity(unsafe.Pointer(this.h), (C.double)(level))

}
func (this *QTermWidget) OnSetTerminalOpacity(slot func(super func(level float64), level float64)) {
	ok := C.QTermWidget_override_virtual_setTerminalOpacity(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setTerminalOpacity
func miqt_exec_callback_QTermWidget_setTerminalOpacity(self *C.QTermWidget, cb C.intptr_t, level C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(level float64), level float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(level)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetTerminalOpacity, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetTerminalBackgroundImage(backgroundImage string) {
	backgroundImage_ms := C.struct_miqt_string{}
	backgroundImage_ms.data = C.CString(backgroundImage)
	backgroundImage_ms.len = C.size_t(len(backgroundImage))
	defer C.free(unsafe.Pointer(backgroundImage_ms.data))

	C.QTermWidget_virtualbase_setTerminalBackgroundImage(unsafe.Pointer(this.h), backgroundImage_ms)

}
func (this *QTermWidget) OnSetTerminalBackgroundImage(slot func(super func(backgroundImage string), backgroundImage string)) {
	ok := C.QTermWidget_override_virtual_setTerminalBackgroundImage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setTerminalBackgroundImage
func miqt_exec_callback_QTermWidget_setTerminalBackgroundImage(self *C.QTermWidget, cb C.intptr_t, backgroundImage C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(backgroundImage string), backgroundImage string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var backgroundImage_ms C.struct_miqt_string = backgroundImage
	backgroundImage_ret := C.GoStringN(backgroundImage_ms.data, C.int(int64(backgroundImage_ms.len)))
	C.free(unsafe.Pointer(backgroundImage_ms.data))
	slotval1 := backgroundImage_ret

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetTerminalBackgroundImage, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetTerminalBackgroundMode(mode int) {

	C.QTermWidget_virtualbase_setTerminalBackgroundMode(unsafe.Pointer(this.h), (C.int)(mode))

}
func (this *QTermWidget) OnSetTerminalBackgroundMode(slot func(super func(mode int), mode int)) {
	ok := C.QTermWidget_override_virtual_setTerminalBackgroundMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setTerminalBackgroundMode
func miqt_exec_callback_QTermWidget_setTerminalBackgroundMode(self *C.QTermWidget, cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode int), mode int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(mode)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetTerminalBackgroundMode, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetEnvironment(environment []string) {
	environment_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(environment))))
	defer C.free(unsafe.Pointer(environment_CArray))
	for i := range environment {
		environment_i_ms := C.struct_miqt_string{}
		environment_i_ms.data = C.CString(environment[i])
		environment_i_ms.len = C.size_t(len(environment[i]))
		defer C.free(unsafe.Pointer(environment_i_ms.data))
		environment_CArray[i] = environment_i_ms
	}
	environment_ma := C.struct_miqt_array{len: C.size_t(len(environment)), data: unsafe.Pointer(environment_CArray)}

	C.QTermWidget_virtualbase_setEnvironment(unsafe.Pointer(this.h), environment_ma)

}
func (this *QTermWidget) OnSetEnvironment(slot func(super func(environment []string), environment []string)) {
	ok := C.QTermWidget_override_virtual_setEnvironment(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setEnvironment
func miqt_exec_callback_QTermWidget_setEnvironment(self *C.QTermWidget, cb C.intptr_t, environment C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(environment []string), environment []string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var environment_ma C.struct_miqt_array = environment
	environment_ret := make([]string, int(environment_ma.len))
	environment_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(environment_ma.data)) // hey ya
	for i := 0; i < int(environment_ma.len); i++ {
		var environment_lv_ms C.struct_miqt_string = environment_outCast[i]
		environment_lv_ret := C.GoStringN(environment_lv_ms.data, C.int(int64(environment_lv_ms.len)))
		C.free(unsafe.Pointer(environment_lv_ms.data))
		environment_ret[i] = environment_lv_ret
	}
	slotval1 := environment_ret

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetEnvironment, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetShellProgram(program string) {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))

	C.QTermWidget_virtualbase_setShellProgram(unsafe.Pointer(this.h), program_ms)

}
func (this *QTermWidget) OnSetShellProgram(slot func(super func(program string), program string)) {
	ok := C.QTermWidget_override_virtual_setShellProgram(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setShellProgram
func miqt_exec_callback_QTermWidget_setShellProgram(self *C.QTermWidget, cb C.intptr_t, program C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(program string), program string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var program_ms C.struct_miqt_string = program
	program_ret := C.GoStringN(program_ms.data, C.int(int64(program_ms.len)))
	C.free(unsafe.Pointer(program_ms.data))
	slotval1 := program_ret

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetShellProgram, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetWorkingDirectory(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))

	C.QTermWidget_virtualbase_setWorkingDirectory(unsafe.Pointer(this.h), dir_ms)

}
func (this *QTermWidget) OnSetWorkingDirectory(slot func(super func(dir string), dir string)) {
	ok := C.QTermWidget_override_virtual_setWorkingDirectory(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setWorkingDirectory
func miqt_exec_callback_QTermWidget_setWorkingDirectory(self *C.QTermWidget, cb C.intptr_t, dir C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dir string), dir string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var dir_ms C.struct_miqt_string = dir
	dir_ret := C.GoStringN(dir_ms.data, C.int(int64(dir_ms.len)))
	C.free(unsafe.Pointer(dir_ms.data))
	slotval1 := dir_ret

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetWorkingDirectory, slotval1)

}

func (this *QTermWidget) callVirtualBase_WorkingDirectory() string {

	var _ms C.struct_miqt_string = C.QTermWidget_virtualbase_workingDirectory(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QTermWidget) OnWorkingDirectory(slot func(super func() string) string) {
	ok := C.QTermWidget_override_virtual_workingDirectory(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_workingDirectory
func miqt_exec_callback_QTermWidget_workingDirectory(self *C.QTermWidget, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_WorkingDirectory)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QTermWidget) callVirtualBase_SetArgs(args []string) {
	args_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(args))))
	defer C.free(unsafe.Pointer(args_CArray))
	for i := range args {
		args_i_ms := C.struct_miqt_string{}
		args_i_ms.data = C.CString(args[i])
		args_i_ms.len = C.size_t(len(args[i]))
		defer C.free(unsafe.Pointer(args_i_ms.data))
		args_CArray[i] = args_i_ms
	}
	args_ma := C.struct_miqt_array{len: C.size_t(len(args)), data: unsafe.Pointer(args_CArray)}

	C.QTermWidget_virtualbase_setArgs(unsafe.Pointer(this.h), args_ma)

}
func (this *QTermWidget) OnSetArgs(slot func(super func(args []string), args []string)) {
	ok := C.QTermWidget_override_virtual_setArgs(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setArgs
func miqt_exec_callback_QTermWidget_setArgs(self *C.QTermWidget, cb C.intptr_t, args C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(args []string), args []string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var args_ma C.struct_miqt_array = args
	args_ret := make([]string, int(args_ma.len))
	args_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(args_ma.data)) // hey ya
	for i := 0; i < int(args_ma.len); i++ {
		var args_lv_ms C.struct_miqt_string = args_outCast[i]
		args_lv_ret := C.GoStringN(args_lv_ms.data, C.int(int64(args_lv_ms.len)))
		C.free(unsafe.Pointer(args_lv_ms.data))
		args_ret[i] = args_lv_ret
	}
	slotval1 := args_ret

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetArgs, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetTextCodec(codec *qt.QTextCodec) {

	C.QTermWidget_virtualbase_setTextCodec(unsafe.Pointer(this.h), (*C.QTextCodec)(codec.UnsafePointer()))

}
func (this *QTermWidget) OnSetTextCodec(slot func(super func(codec *qt.QTextCodec), codec *qt.QTextCodec)) {
	ok := C.QTermWidget_override_virtual_setTextCodec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setTextCodec
func miqt_exec_callback_QTermWidget_setTextCodec(self *C.QTermWidget, cb C.intptr_t, codec *C.QTextCodec) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(codec *qt.QTextCodec), codec *qt.QTextCodec))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTextCodec(unsafe.Pointer(codec))

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetTextCodec, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetColorScheme(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	C.QTermWidget_virtualbase_setColorScheme(unsafe.Pointer(this.h), name_ms)

}
func (this *QTermWidget) OnSetColorScheme(slot func(super func(name string), name string)) {
	ok := C.QTermWidget_override_virtual_setColorScheme(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setColorScheme
func miqt_exec_callback_QTermWidget_setColorScheme(self *C.QTermWidget, cb C.intptr_t, name C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string), name string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetColorScheme, slotval1)

}

func (this *QTermWidget) callVirtualBase_GetAvailableColorSchemes() []string {

	var _ma C.struct_miqt_array = C.QTermWidget_virtualbase_getAvailableColorSchemes(unsafe.Pointer(this.h))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret

}
func (this *QTermWidget) OnGetAvailableColorSchemes(slot func(super func() []string) []string) {
	ok := C.QTermWidget_override_virtual_getAvailableColorSchemes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_getAvailableColorSchemes
func miqt_exec_callback_QTermWidget_getAvailableColorSchemes(self *C.QTermWidget, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_GetAvailableColorSchemes)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QTermWidget) callVirtualBase_SetHistorySize(lines int) {

	C.QTermWidget_virtualbase_setHistorySize(unsafe.Pointer(this.h), (C.int)(lines))

}
func (this *QTermWidget) OnSetHistorySize(slot func(super func(lines int), lines int)) {
	ok := C.QTermWidget_override_virtual_setHistorySize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setHistorySize
func miqt_exec_callback_QTermWidget_setHistorySize(self *C.QTermWidget, cb C.intptr_t, lines C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(lines int), lines int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(lines)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetHistorySize, slotval1)

}

func (this *QTermWidget) callVirtualBase_HistorySize() int {

	return (int)(C.QTermWidget_virtualbase_historySize(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnHistorySize(slot func(super func() int) int) {
	ok := C.QTermWidget_override_virtual_historySize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_historySize
func miqt_exec_callback_QTermWidget_historySize(self *C.QTermWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_HistorySize)

	return (C.int)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_SetScrollBarPosition(scrollBarPosition QTermWidgetInterface__ScrollBarPosition) {

	C.QTermWidget_virtualbase_setScrollBarPosition(unsafe.Pointer(this.h), (C.int)(scrollBarPosition))

}
func (this *QTermWidget) OnSetScrollBarPosition(slot func(super func(scrollBarPosition QTermWidgetInterface__ScrollBarPosition), scrollBarPosition QTermWidgetInterface__ScrollBarPosition)) {
	ok := C.QTermWidget_override_virtual_setScrollBarPosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setScrollBarPosition
func miqt_exec_callback_QTermWidget_setScrollBarPosition(self *C.QTermWidget, cb C.intptr_t, scrollBarPosition C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(scrollBarPosition QTermWidgetInterface__ScrollBarPosition), scrollBarPosition QTermWidgetInterface__ScrollBarPosition))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QTermWidgetInterface__ScrollBarPosition)(scrollBarPosition)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetScrollBarPosition, slotval1)

}

func (this *QTermWidget) callVirtualBase_ScrollToEnd() {

	C.QTermWidget_virtualbase_scrollToEnd(unsafe.Pointer(this.h))

}
func (this *QTermWidget) OnScrollToEnd(slot func(super func())) {
	ok := C.QTermWidget_override_virtual_scrollToEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_scrollToEnd
func miqt_exec_callback_QTermWidget_scrollToEnd(self *C.QTermWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTermWidget{h: self}).callVirtualBase_ScrollToEnd)

}

func (this *QTermWidget) callVirtualBase_SendText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	C.QTermWidget_virtualbase_sendText(unsafe.Pointer(this.h), text_ms)

}
func (this *QTermWidget) OnSendText(slot func(super func(text string), text string)) {
	ok := C.QTermWidget_override_virtual_sendText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_sendText
func miqt_exec_callback_QTermWidget_sendText(self *C.QTermWidget, cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string), text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc((&QTermWidget{h: self}).callVirtualBase_SendText, slotval1)

}

func (this *QTermWidget) callVirtualBase_SendKeyEvent(e *qt.QKeyEvent) {

	C.QTermWidget_virtualbase_sendKeyEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(e.UnsafePointer()))

}
func (this *QTermWidget) OnSendKeyEvent(slot func(super func(e *qt.QKeyEvent), e *qt.QKeyEvent)) {
	ok := C.QTermWidget_override_virtual_sendKeyEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_sendKeyEvent
func miqt_exec_callback_QTermWidget_sendKeyEvent(self *C.QTermWidget, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QKeyEvent), e *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(e))

	gofunc((&QTermWidget{h: self}).callVirtualBase_SendKeyEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetFlowControlEnabled(enabled bool) {

	C.QTermWidget_virtualbase_setFlowControlEnabled(unsafe.Pointer(this.h), (C.bool)(enabled))

}
func (this *QTermWidget) OnSetFlowControlEnabled(slot func(super func(enabled bool), enabled bool)) {
	ok := C.QTermWidget_override_virtual_setFlowControlEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setFlowControlEnabled
func miqt_exec_callback_QTermWidget_setFlowControlEnabled(self *C.QTermWidget, cb C.intptr_t, enabled C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(enabled bool), enabled bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enabled)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetFlowControlEnabled, slotval1)

}

func (this *QTermWidget) callVirtualBase_FlowControlEnabled() bool {

	return (bool)(C.QTermWidget_virtualbase_flowControlEnabled(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnFlowControlEnabled(slot func(super func() bool) bool) {
	ok := C.QTermWidget_override_virtual_flowControlEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_flowControlEnabled
func miqt_exec_callback_QTermWidget_flowControlEnabled(self *C.QTermWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_FlowControlEnabled)

	return (C.bool)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_SetFlowControlWarningEnabled(enabled bool) {

	C.QTermWidget_virtualbase_setFlowControlWarningEnabled(unsafe.Pointer(this.h), (C.bool)(enabled))

}
func (this *QTermWidget) OnSetFlowControlWarningEnabled(slot func(super func(enabled bool), enabled bool)) {
	ok := C.QTermWidget_override_virtual_setFlowControlWarningEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setFlowControlWarningEnabled
func miqt_exec_callback_QTermWidget_setFlowControlWarningEnabled(self *C.QTermWidget, cb C.intptr_t, enabled C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(enabled bool), enabled bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enabled)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetFlowControlWarningEnabled, slotval1)

}

func (this *QTermWidget) callVirtualBase_KeyBindings() string {

	var _ms C.struct_miqt_string = C.QTermWidget_virtualbase_keyBindings(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QTermWidget) OnKeyBindings(slot func(super func() string) string) {
	ok := C.QTermWidget_override_virtual_keyBindings(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_keyBindings
func miqt_exec_callback_QTermWidget_keyBindings(self *C.QTermWidget, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_KeyBindings)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QTermWidget) callVirtualBase_SetMotionAfterPasting(motionAfterPasting int) {

	C.QTermWidget_virtualbase_setMotionAfterPasting(unsafe.Pointer(this.h), (C.int)(motionAfterPasting))

}
func (this *QTermWidget) OnSetMotionAfterPasting(slot func(super func(motionAfterPasting int), motionAfterPasting int)) {
	ok := C.QTermWidget_override_virtual_setMotionAfterPasting(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setMotionAfterPasting
func miqt_exec_callback_QTermWidget_setMotionAfterPasting(self *C.QTermWidget, cb C.intptr_t, motionAfterPasting C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(motionAfterPasting int), motionAfterPasting int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(motionAfterPasting)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetMotionAfterPasting, slotval1)

}

func (this *QTermWidget) callVirtualBase_HistoryLinesCount() int {

	return (int)(C.QTermWidget_virtualbase_historyLinesCount(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnHistoryLinesCount(slot func(super func() int) int) {
	ok := C.QTermWidget_override_virtual_historyLinesCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_historyLinesCount
func miqt_exec_callback_QTermWidget_historyLinesCount(self *C.QTermWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_HistoryLinesCount)

	return (C.int)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_ScreenColumnsCount() int {

	return (int)(C.QTermWidget_virtualbase_screenColumnsCount(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnScreenColumnsCount(slot func(super func() int) int) {
	ok := C.QTermWidget_override_virtual_screenColumnsCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_screenColumnsCount
func miqt_exec_callback_QTermWidget_screenColumnsCount(self *C.QTermWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_ScreenColumnsCount)

	return (C.int)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_ScreenLinesCount() int {

	return (int)(C.QTermWidget_virtualbase_screenLinesCount(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnScreenLinesCount(slot func(super func() int) int) {
	ok := C.QTermWidget_override_virtual_screenLinesCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_screenLinesCount
func miqt_exec_callback_QTermWidget_screenLinesCount(self *C.QTermWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_ScreenLinesCount)

	return (C.int)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_SetSelectionStart(row int, column int) {

	C.QTermWidget_virtualbase_setSelectionStart(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column))

}
func (this *QTermWidget) OnSetSelectionStart(slot func(super func(row int, column int), row int, column int)) {
	ok := C.QTermWidget_override_virtual_setSelectionStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setSelectionStart
func miqt_exec_callback_QTermWidget_setSelectionStart(self *C.QTermWidget, cb C.intptr_t, row C.int, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int), row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetSelectionStart, slotval1, slotval2)

}

func (this *QTermWidget) callVirtualBase_SetSelectionEnd(row int, column int) {

	C.QTermWidget_virtualbase_setSelectionEnd(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column))

}
func (this *QTermWidget) OnSetSelectionEnd(slot func(super func(row int, column int), row int, column int)) {
	ok := C.QTermWidget_override_virtual_setSelectionEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setSelectionEnd
func miqt_exec_callback_QTermWidget_setSelectionEnd(self *C.QTermWidget, cb C.intptr_t, row C.int, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int), row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetSelectionEnd, slotval1, slotval2)

}

func (this *QTermWidget) callVirtualBase_GetSelectionStart(row *int, column *int) {

	C.QTermWidget_virtualbase_getSelectionStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(row)), (*C.int)(unsafe.Pointer(column)))

}
func (this *QTermWidget) OnGetSelectionStart(slot func(super func(row *int, column *int), row *int, column *int)) {
	ok := C.QTermWidget_override_virtual_getSelectionStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_getSelectionStart
func miqt_exec_callback_QTermWidget_getSelectionStart(self *C.QTermWidget, cb C.intptr_t, row *C.int, column *C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row *int, column *int), row *int, column *int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(row))

	slotval2 := (*int)(unsafe.Pointer(column))

	gofunc((&QTermWidget{h: self}).callVirtualBase_GetSelectionStart, slotval1, slotval2)

}

func (this *QTermWidget) callVirtualBase_GetSelectionEnd(row *int, column *int) {

	C.QTermWidget_virtualbase_getSelectionEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(row)), (*C.int)(unsafe.Pointer(column)))

}
func (this *QTermWidget) OnGetSelectionEnd(slot func(super func(row *int, column *int), row *int, column *int)) {
	ok := C.QTermWidget_override_virtual_getSelectionEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_getSelectionEnd
func miqt_exec_callback_QTermWidget_getSelectionEnd(self *C.QTermWidget, cb C.intptr_t, row *C.int, column *C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row *int, column *int), row *int, column *int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(row))

	slotval2 := (*int)(unsafe.Pointer(column))

	gofunc((&QTermWidget{h: self}).callVirtualBase_GetSelectionEnd, slotval1, slotval2)

}

func (this *QTermWidget) callVirtualBase_SelectedText(preserveLineBreaks bool) string {

	var _ms C.struct_miqt_string = C.QTermWidget_virtualbase_selectedText(unsafe.Pointer(this.h), (C.bool)(preserveLineBreaks))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QTermWidget) OnSelectedText(slot func(super func(preserveLineBreaks bool) string, preserveLineBreaks bool) string) {
	ok := C.QTermWidget_override_virtual_selectedText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_selectedText
func miqt_exec_callback_QTermWidget_selectedText(self *C.QTermWidget, cb C.intptr_t, preserveLineBreaks C.bool) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(preserveLineBreaks bool) string, preserveLineBreaks bool) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(preserveLineBreaks)

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_SelectedText, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QTermWidget) callVirtualBase_SetMonitorActivity(monitorActivity bool) {

	C.QTermWidget_virtualbase_setMonitorActivity(unsafe.Pointer(this.h), (C.bool)(monitorActivity))

}
func (this *QTermWidget) OnSetMonitorActivity(slot func(super func(monitorActivity bool), monitorActivity bool)) {
	ok := C.QTermWidget_override_virtual_setMonitorActivity(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setMonitorActivity
func miqt_exec_callback_QTermWidget_setMonitorActivity(self *C.QTermWidget, cb C.intptr_t, monitorActivity C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(monitorActivity bool), monitorActivity bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(monitorActivity)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetMonitorActivity, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetMonitorSilence(monitorSilence bool) {

	C.QTermWidget_virtualbase_setMonitorSilence(unsafe.Pointer(this.h), (C.bool)(monitorSilence))

}
func (this *QTermWidget) OnSetMonitorSilence(slot func(super func(monitorSilence bool), monitorSilence bool)) {
	ok := C.QTermWidget_override_virtual_setMonitorSilence(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setMonitorSilence
func miqt_exec_callback_QTermWidget_setMonitorSilence(self *C.QTermWidget, cb C.intptr_t, monitorSilence C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(monitorSilence bool), monitorSilence bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(monitorSilence)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetMonitorSilence, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetSilenceTimeout(seconds int) {

	C.QTermWidget_virtualbase_setSilenceTimeout(unsafe.Pointer(this.h), (C.int)(seconds))

}
func (this *QTermWidget) OnSetSilenceTimeout(slot func(super func(seconds int), seconds int)) {
	ok := C.QTermWidget_override_virtual_setSilenceTimeout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setSilenceTimeout
func miqt_exec_callback_QTermWidget_setSilenceTimeout(self *C.QTermWidget, cb C.intptr_t, seconds C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(seconds int), seconds int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(seconds)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetSilenceTimeout, slotval1)

}

func (this *QTermWidget) callVirtualBase_FilterActions(position *qt.QPoint) []*qt.QAction {

	var _ma C.struct_miqt_array = C.QTermWidget_virtualbase_filterActions(unsafe.Pointer(this.h), (*C.QPoint)(position.UnsafePointer()))
	_ret := make([]*qt.QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt.UnsafeNewQAction(unsafe.Pointer(_outCast[i]))
	}
	return _ret

}
func (this *QTermWidget) OnFilterActions(slot func(super func(position *qt.QPoint) []*qt.QAction, position *qt.QPoint) []*qt.QAction) {
	ok := C.QTermWidget_override_virtual_filterActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_filterActions
func miqt_exec_callback_QTermWidget_filterActions(self *C.QTermWidget, cb C.intptr_t, position *C.QPoint) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(position *qt.QPoint) []*qt.QAction, position *qt.QPoint) []*qt.QAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(position))

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_FilterActions, slotval1)
	virtualReturn_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (*C.QAction)(virtualReturn[i].UnsafePointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QTermWidget) callVirtualBase_GetPtySlaveFd() int {

	return (int)(C.QTermWidget_virtualbase_getPtySlaveFd(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnGetPtySlaveFd(slot func(super func() int) int) {
	ok := C.QTermWidget_override_virtual_getPtySlaveFd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_getPtySlaveFd
func miqt_exec_callback_QTermWidget_getPtySlaveFd(self *C.QTermWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_GetPtySlaveFd)

	return (C.int)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_SetBlinkingCursor(blink bool) {

	C.QTermWidget_virtualbase_setBlinkingCursor(unsafe.Pointer(this.h), (C.bool)(blink))

}
func (this *QTermWidget) OnSetBlinkingCursor(slot func(super func(blink bool), blink bool)) {
	ok := C.QTermWidget_override_virtual_setBlinkingCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setBlinkingCursor
func miqt_exec_callback_QTermWidget_setBlinkingCursor(self *C.QTermWidget, cb C.intptr_t, blink C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(blink bool), blink bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(blink)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetBlinkingCursor, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetBidiEnabled(enabled bool) {

	C.QTermWidget_virtualbase_setBidiEnabled(unsafe.Pointer(this.h), (C.bool)(enabled))

}
func (this *QTermWidget) OnSetBidiEnabled(slot func(super func(enabled bool), enabled bool)) {
	ok := C.QTermWidget_override_virtual_setBidiEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setBidiEnabled
func miqt_exec_callback_QTermWidget_setBidiEnabled(self *C.QTermWidget, cb C.intptr_t, enabled C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(enabled bool), enabled bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enabled)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetBidiEnabled, slotval1)

}

func (this *QTermWidget) callVirtualBase_IsBidiEnabled() bool {

	return (bool)(C.QTermWidget_virtualbase_isBidiEnabled(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnIsBidiEnabled(slot func(super func() bool) bool) {
	ok := C.QTermWidget_override_virtual_isBidiEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_isBidiEnabled
func miqt_exec_callback_QTermWidget_isBidiEnabled(self *C.QTermWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_IsBidiEnabled)

	return (C.bool)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_SetAutoClose(autoClose bool) {

	C.QTermWidget_virtualbase_setAutoClose(unsafe.Pointer(this.h), (C.bool)(autoClose))

}
func (this *QTermWidget) OnSetAutoClose(slot func(super func(autoClose bool), autoClose bool)) {
	ok := C.QTermWidget_override_virtual_setAutoClose(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setAutoClose
func miqt_exec_callback_QTermWidget_setAutoClose(self *C.QTermWidget, cb C.intptr_t, autoClose C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoClose bool), autoClose bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(autoClose)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetAutoClose, slotval1)

}

func (this *QTermWidget) callVirtualBase_Title() string {

	var _ms C.struct_miqt_string = C.QTermWidget_virtualbase_title(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QTermWidget) OnTitle(slot func(super func() string) string) {
	ok := C.QTermWidget_override_virtual_title(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_title
func miqt_exec_callback_QTermWidget_title(self *C.QTermWidget, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_Title)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QTermWidget) callVirtualBase_Icon() string {

	var _ms C.struct_miqt_string = C.QTermWidget_virtualbase_icon(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QTermWidget) OnIcon(slot func(super func() string) string) {
	ok := C.QTermWidget_override_virtual_icon(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_icon
func miqt_exec_callback_QTermWidget_icon(self *C.QTermWidget, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_Icon)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QTermWidget) callVirtualBase_IsTitleChanged() bool {

	return (bool)(C.QTermWidget_virtualbase_isTitleChanged(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnIsTitleChanged(slot func(super func() bool) bool) {
	ok := C.QTermWidget_override_virtual_isTitleChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_isTitleChanged
func miqt_exec_callback_QTermWidget_isTitleChanged(self *C.QTermWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_IsTitleChanged)

	return (C.bool)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_BracketText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	C.QTermWidget_virtualbase_bracketText(unsafe.Pointer(this.h), text_ms)

}
func (this *QTermWidget) OnBracketText(slot func(super func(text string), text string)) {
	ok := C.QTermWidget_override_virtual_bracketText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_bracketText
func miqt_exec_callback_QTermWidget_bracketText(self *C.QTermWidget, cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string), text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc((&QTermWidget{h: self}).callVirtualBase_BracketText, slotval1)

}

func (this *QTermWidget) callVirtualBase_DisableBracketedPasteMode(disable bool) {

	C.QTermWidget_virtualbase_disableBracketedPasteMode(unsafe.Pointer(this.h), (C.bool)(disable))

}
func (this *QTermWidget) OnDisableBracketedPasteMode(slot func(super func(disable bool), disable bool)) {
	ok := C.QTermWidget_override_virtual_disableBracketedPasteMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_disableBracketedPasteMode
func miqt_exec_callback_QTermWidget_disableBracketedPasteMode(self *C.QTermWidget, cb C.intptr_t, disable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(disable bool), disable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(disable)

	gofunc((&QTermWidget{h: self}).callVirtualBase_DisableBracketedPasteMode, slotval1)

}

func (this *QTermWidget) callVirtualBase_BracketedPasteModeIsDisabled() bool {

	return (bool)(C.QTermWidget_virtualbase_bracketedPasteModeIsDisabled(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnBracketedPasteModeIsDisabled(slot func(super func() bool) bool) {
	ok := C.QTermWidget_override_virtual_bracketedPasteModeIsDisabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_bracketedPasteModeIsDisabled
func miqt_exec_callback_QTermWidget_bracketedPasteModeIsDisabled(self *C.QTermWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_BracketedPasteModeIsDisabled)

	return (C.bool)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_SetMargin(margin int) {

	C.QTermWidget_virtualbase_setMargin(unsafe.Pointer(this.h), (C.int)(margin))

}
func (this *QTermWidget) OnSetMargin(slot func(super func(margin int), margin int)) {
	ok := C.QTermWidget_override_virtual_setMargin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setMargin
func miqt_exec_callback_QTermWidget_setMargin(self *C.QTermWidget, cb C.intptr_t, margin C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(margin int), margin int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(margin)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetMargin, slotval1)

}

func (this *QTermWidget) callVirtualBase_GetMargin() int {

	return (int)(C.QTermWidget_virtualbase_getMargin(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnGetMargin(slot func(super func() int) int) {
	ok := C.QTermWidget_override_virtual_getMargin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_getMargin
func miqt_exec_callback_QTermWidget_getMargin(self *C.QTermWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_GetMargin)

	return (C.int)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_SetDrawLineChars(drawLineChars bool) {

	C.QTermWidget_virtualbase_setDrawLineChars(unsafe.Pointer(this.h), (C.bool)(drawLineChars))

}
func (this *QTermWidget) OnSetDrawLineChars(slot func(super func(drawLineChars bool), drawLineChars bool)) {
	ok := C.QTermWidget_override_virtual_setDrawLineChars(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setDrawLineChars
func miqt_exec_callback_QTermWidget_setDrawLineChars(self *C.QTermWidget, cb C.intptr_t, drawLineChars C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(drawLineChars bool), drawLineChars bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(drawLineChars)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetDrawLineChars, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetBoldIntense(boldIntense bool) {

	C.QTermWidget_virtualbase_setBoldIntense(unsafe.Pointer(this.h), (C.bool)(boldIntense))

}
func (this *QTermWidget) OnSetBoldIntense(slot func(super func(boldIntense bool), boldIntense bool)) {
	ok := C.QTermWidget_override_virtual_setBoldIntense(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setBoldIntense
func miqt_exec_callback_QTermWidget_setBoldIntense(self *C.QTermWidget, cb C.intptr_t, boldIntense C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(boldIntense bool), boldIntense bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(boldIntense)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetBoldIntense, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetConfirmMultilinePaste(confirmMultilinePaste bool) {

	C.QTermWidget_virtualbase_setConfirmMultilinePaste(unsafe.Pointer(this.h), (C.bool)(confirmMultilinePaste))

}
func (this *QTermWidget) OnSetConfirmMultilinePaste(slot func(super func(confirmMultilinePaste bool), confirmMultilinePaste bool)) {
	ok := C.QTermWidget_override_virtual_setConfirmMultilinePaste(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setConfirmMultilinePaste
func miqt_exec_callback_QTermWidget_setConfirmMultilinePaste(self *C.QTermWidget, cb C.intptr_t, confirmMultilinePaste C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(confirmMultilinePaste bool), confirmMultilinePaste bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(confirmMultilinePaste)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetConfirmMultilinePaste, slotval1)

}

func (this *QTermWidget) callVirtualBase_SetTrimPastedTrailingNewlines(trimPastedTrailingNewlines bool) {

	C.QTermWidget_virtualbase_setTrimPastedTrailingNewlines(unsafe.Pointer(this.h), (C.bool)(trimPastedTrailingNewlines))

}
func (this *QTermWidget) OnSetTrimPastedTrailingNewlines(slot func(super func(trimPastedTrailingNewlines bool), trimPastedTrailingNewlines bool)) {
	ok := C.QTermWidget_override_virtual_setTrimPastedTrailingNewlines(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setTrimPastedTrailingNewlines
func miqt_exec_callback_QTermWidget_setTrimPastedTrailingNewlines(self *C.QTermWidget, cb C.intptr_t, trimPastedTrailingNewlines C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(trimPastedTrailingNewlines bool), trimPastedTrailingNewlines bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(trimPastedTrailingNewlines)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetTrimPastedTrailingNewlines, slotval1)

}

func (this *QTermWidget) callVirtualBase_CreateWidget(startnow int) *QTermWidgetInterface {

	return newQTermWidgetInterface(C.QTermWidget_virtualbase_createWidget(unsafe.Pointer(this.h), (C.int)(startnow)))

}
func (this *QTermWidget) OnCreateWidget(slot func(super func(startnow int) *QTermWidgetInterface, startnow int) *QTermWidgetInterface) {
	ok := C.QTermWidget_override_virtual_createWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_createWidget
func miqt_exec_callback_QTermWidget_createWidget(self *C.QTermWidget, cb C.intptr_t, startnow C.int) *C.QTermWidgetInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(startnow int) *QTermWidgetInterface, startnow int) *QTermWidgetInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(startnow)

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_CreateWidget, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTermWidget) callVirtualBase_ResizeEvent(param1 *qt.QResizeEvent) {

	C.QTermWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QTermWidget) OnResizeEvent(slot func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent)) {
	ok := C.QTermWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_resizeEvent
func miqt_exec_callback_QTermWidget_resizeEvent(self *C.QTermWidget, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QTermWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_DevType() int {

	return (int)(C.QTermWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QTermWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_devType
func miqt_exec_callback_QTermWidget_devType(self *C.QTermWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_SetVisible(visible bool) {

	C.QTermWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTermWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTermWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_setVisible
func miqt_exec_callback_QTermWidget_setVisible(self *C.QTermWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTermWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTermWidget) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QTermWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTermWidget) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QTermWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_minimumSizeHint
func miqt_exec_callback_QTermWidget_minimumSizeHint(self *C.QTermWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QTermWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTermWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTermWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QTermWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_heightForWidth
func miqt_exec_callback_QTermWidget_heightForWidth(self *C.QTermWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QTermWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTermWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTermWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_hasHeightForWidth
func miqt_exec_callback_QTermWidget_hasHeightForWidth(self *C.QTermWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QTermWidget_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QTermWidget) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QTermWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_paintEngine
func miqt_exec_callback_QTermWidget_paintEngine(self *C.QTermWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QTermWidget) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QTermWidget_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QTermWidget) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QTermWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_event
func miqt_exec_callback_QTermWidget_event(self *C.QTermWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QTermWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QTermWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_mousePressEvent
func miqt_exec_callback_QTermWidget_mousePressEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QTermWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QTermWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_mouseReleaseEvent
func miqt_exec_callback_QTermWidget_mouseReleaseEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QTermWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QTermWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_mouseDoubleClickEvent
func miqt_exec_callback_QTermWidget_mouseDoubleClickEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QTermWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QTermWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_mouseMoveEvent
func miqt_exec_callback_QTermWidget_mouseMoveEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QTermWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QTermWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_wheelEvent
func miqt_exec_callback_QTermWidget_wheelEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QTermWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QTermWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_keyPressEvent
func miqt_exec_callback_QTermWidget_keyPressEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QTermWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QTermWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_keyReleaseEvent
func miqt_exec_callback_QTermWidget_keyReleaseEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QTermWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QTermWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_focusInEvent
func miqt_exec_callback_QTermWidget_focusInEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QTermWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QTermWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_focusOutEvent
func miqt_exec_callback_QTermWidget_focusOutEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QTermWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QTermWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_enterEvent
func miqt_exec_callback_QTermWidget_enterEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QTermWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QTermWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_leaveEvent
func miqt_exec_callback_QTermWidget_leaveEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_PaintEvent(event *qt.QPaintEvent) {

	C.QTermWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnPaintEvent(slot func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent)) {
	ok := C.QTermWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_paintEvent
func miqt_exec_callback_QTermWidget_paintEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QTermWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QTermWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_moveEvent
func miqt_exec_callback_QTermWidget_moveEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QTermWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QTermWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_closeEvent
func miqt_exec_callback_QTermWidget_closeEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QTermWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QTermWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_contextMenuEvent
func miqt_exec_callback_QTermWidget_contextMenuEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QTermWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QTermWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_tabletEvent
func miqt_exec_callback_QTermWidget_tabletEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QTermWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QTermWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_actionEvent
func miqt_exec_callback_QTermWidget_actionEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QTermWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QTermWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_dragEnterEvent
func miqt_exec_callback_QTermWidget_dragEnterEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QTermWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QTermWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_dragMoveEvent
func miqt_exec_callback_QTermWidget_dragMoveEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QTermWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QTermWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_dragLeaveEvent
func miqt_exec_callback_QTermWidget_dragLeaveEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QTermWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QTermWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_dropEvent
func miqt_exec_callback_QTermWidget_dropEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QTermWidget_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QTermWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_showEvent
func miqt_exec_callback_QTermWidget_showEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QTermWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QTermWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_hideEvent
func miqt_exec_callback_QTermWidget_hideEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTermWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QTermWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QTermWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_nativeEvent
func miqt_exec_callback_QTermWidget_nativeEvent(self *C.QTermWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QTermWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QTermWidget) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QTermWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_changeEvent
func miqt_exec_callback_QTermWidget_changeEvent(self *C.QTermWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QTermWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTermWidget_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTermWidget) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTermWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_metric
func miqt_exec_callback_QTermWidget_metric(self *C.QTermWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QTermWidget_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QTermWidget) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QTermWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_initPainter
func miqt_exec_callback_QTermWidget_initPainter(self *C.QTermWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QTermWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTermWidget) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QTermWidget_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QTermWidget) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QTermWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_redirected
func miqt_exec_callback_QTermWidget_redirected(self *C.QTermWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QTermWidget) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QTermWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QTermWidget) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QTermWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_sharedPainter
func miqt_exec_callback_QTermWidget_sharedPainter(self *C.QTermWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QTermWidget) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QTermWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QTermWidget) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QTermWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_inputMethodEvent
func miqt_exec_callback_QTermWidget_inputMethodEvent(self *C.QTermWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QTermWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QTermWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTermWidget) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QTermWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_inputMethodQuery
func miqt_exec_callback_QTermWidget_inputMethodQuery(self *C.QTermWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QTermWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTermWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTermWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTermWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_focusNextPrevChild
func miqt_exec_callback_QTermWidget_focusNextPrevChild(self *C.QTermWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QTermWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QTermWidget) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QTermWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_eventFilter
func miqt_exec_callback_QTermWidget_eventFilter(self *C.QTermWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QTermWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTermWidget) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QTermWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QTermWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_timerEvent
func miqt_exec_callback_QTermWidget_timerEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QTermWidget_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QTermWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_childEvent
func miqt_exec_callback_QTermWidget_childEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QTermWidget_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QTermWidget) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QTermWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_customEvent
func miqt_exec_callback_QTermWidget_customEvent(self *C.QTermWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QTermWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTermWidget) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QTermWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QTermWidget) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QTermWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_connectNotify
func miqt_exec_callback_QTermWidget_connectNotify(self *C.QTermWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTermWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTermWidget) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QTermWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QTermWidget) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QTermWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTermWidget_disconnectNotify
func miqt_exec_callback_QTermWidget_disconnectNotify(self *C.QTermWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QTermWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTermWidget) Delete() {
	C.QTermWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTermWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QTermWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

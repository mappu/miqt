package qtermwidget

/*

#include "gen_qtermwidget_interface.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QTermWidgetInterface__ScrollBarPosition int

const (
	QTermWidgetInterface__NoScrollBar    QTermWidgetInterface__ScrollBarPosition = 0
	QTermWidgetInterface__ScrollBarLeft  QTermWidgetInterface__ScrollBarPosition = 1
	QTermWidgetInterface__ScrollBarRight QTermWidgetInterface__ScrollBarPosition = 2
)

type QTermWidgetInterface struct {
	h *C.QTermWidgetInterface
}

func (this *QTermWidgetInterface) cPointer() *C.QTermWidgetInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTermWidgetInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTermWidgetInterface constructs the type using only CGO pointers.
func newQTermWidgetInterface(h *C.QTermWidgetInterface) *QTermWidgetInterface {
	if h == nil {
		return nil
	}

	return &QTermWidgetInterface{h: h}
}

// UnsafeNewQTermWidgetInterface constructs the type using only unsafe pointers.
func UnsafeNewQTermWidgetInterface(h unsafe.Pointer) *QTermWidgetInterface {
	return newQTermWidgetInterface((*C.QTermWidgetInterface)(h))
}

func (this *QTermWidgetInterface) SetTerminalSizeHint(enabled bool) {
	C.QTermWidgetInterface_setTerminalSizeHint(this.h, (C.bool)(enabled))
}

func (this *QTermWidgetInterface) TerminalSizeHint() bool {
	return (bool)(C.QTermWidgetInterface_terminalSizeHint(this.h))
}

func (this *QTermWidgetInterface) StartShellProgram() {
	C.QTermWidgetInterface_startShellProgram(this.h)
}

func (this *QTermWidgetInterface) StartTerminalTeletype() {
	C.QTermWidgetInterface_startTerminalTeletype(this.h)
}

func (this *QTermWidgetInterface) GetShellPID() int {
	return (int)(C.QTermWidgetInterface_getShellPID(this.h))
}

func (this *QTermWidgetInterface) ChangeDir(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QTermWidgetInterface_changeDir(this.h, dir_ms)
}

func (this *QTermWidgetInterface) SetTerminalFont(font *qt.QFont) {
	C.QTermWidgetInterface_setTerminalFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QTermWidgetInterface) GetTerminalFont() *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QTermWidgetInterface_getTerminalFont(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTermWidgetInterface) SetTerminalOpacity(level float64) {
	C.QTermWidgetInterface_setTerminalOpacity(this.h, (C.double)(level))
}

func (this *QTermWidgetInterface) SetTerminalBackgroundImage(backgroundImage string) {
	backgroundImage_ms := C.struct_miqt_string{}
	backgroundImage_ms.data = C.CString(backgroundImage)
	backgroundImage_ms.len = C.size_t(len(backgroundImage))
	defer C.free(unsafe.Pointer(backgroundImage_ms.data))
	C.QTermWidgetInterface_setTerminalBackgroundImage(this.h, backgroundImage_ms)
}

func (this *QTermWidgetInterface) SetTerminalBackgroundMode(mode int) {
	C.QTermWidgetInterface_setTerminalBackgroundMode(this.h, (C.int)(mode))
}

func (this *QTermWidgetInterface) SetEnvironment(environment []string) {
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
	C.QTermWidgetInterface_setEnvironment(this.h, environment_ma)
}

func (this *QTermWidgetInterface) SetShellProgram(program string) {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	C.QTermWidgetInterface_setShellProgram(this.h, program_ms)
}

func (this *QTermWidgetInterface) SetWorkingDirectory(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QTermWidgetInterface_setWorkingDirectory(this.h, dir_ms)
}

func (this *QTermWidgetInterface) WorkingDirectory() string {
	var _ms C.struct_miqt_string = C.QTermWidgetInterface_workingDirectory(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTermWidgetInterface) SetArgs(args []string) {
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
	C.QTermWidgetInterface_setArgs(this.h, args_ma)
}

func (this *QTermWidgetInterface) SetTextCodec(codec *qt.QTextCodec) {
	C.QTermWidgetInterface_setTextCodec(this.h, (*C.QTextCodec)(codec.UnsafePointer()))
}

func (this *QTermWidgetInterface) SetColorScheme(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTermWidgetInterface_setColorScheme(this.h, name_ms)
}

func (this *QTermWidgetInterface) GetAvailableColorSchemes() []string {
	var _ma C.struct_miqt_array = C.QTermWidgetInterface_getAvailableColorSchemes(this.h)
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

func (this *QTermWidgetInterface) SetHistorySize(lines int) {
	C.QTermWidgetInterface_setHistorySize(this.h, (C.int)(lines))
}

func (this *QTermWidgetInterface) HistorySize() int {
	return (int)(C.QTermWidgetInterface_historySize(this.h))
}

func (this *QTermWidgetInterface) SetScrollBarPosition(scrollBarPosition QTermWidgetInterface__ScrollBarPosition) {
	C.QTermWidgetInterface_setScrollBarPosition(this.h, (C.int)(scrollBarPosition))
}

func (this *QTermWidgetInterface) ScrollToEnd() {
	C.QTermWidgetInterface_scrollToEnd(this.h)
}

func (this *QTermWidgetInterface) SendText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTermWidgetInterface_sendText(this.h, text_ms)
}

func (this *QTermWidgetInterface) SendKeyEvent(e *qt.QKeyEvent) {
	C.QTermWidgetInterface_sendKeyEvent(this.h, (*C.QKeyEvent)(e.UnsafePointer()))
}

func (this *QTermWidgetInterface) SetFlowControlEnabled(enabled bool) {
	C.QTermWidgetInterface_setFlowControlEnabled(this.h, (C.bool)(enabled))
}

func (this *QTermWidgetInterface) FlowControlEnabled() bool {
	return (bool)(C.QTermWidgetInterface_flowControlEnabled(this.h))
}

func (this *QTermWidgetInterface) SetFlowControlWarningEnabled(enabled bool) {
	C.QTermWidgetInterface_setFlowControlWarningEnabled(this.h, (C.bool)(enabled))
}

func (this *QTermWidgetInterface) KeyBindings() string {
	var _ms C.struct_miqt_string = C.QTermWidgetInterface_keyBindings(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTermWidgetInterface) SetMotionAfterPasting(motionAfterPasting int) {
	C.QTermWidgetInterface_setMotionAfterPasting(this.h, (C.int)(motionAfterPasting))
}

func (this *QTermWidgetInterface) HistoryLinesCount() int {
	return (int)(C.QTermWidgetInterface_historyLinesCount(this.h))
}

func (this *QTermWidgetInterface) ScreenColumnsCount() int {
	return (int)(C.QTermWidgetInterface_screenColumnsCount(this.h))
}

func (this *QTermWidgetInterface) ScreenLinesCount() int {
	return (int)(C.QTermWidgetInterface_screenLinesCount(this.h))
}

func (this *QTermWidgetInterface) SetSelectionStart(row int, column int) {
	C.QTermWidgetInterface_setSelectionStart(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTermWidgetInterface) SetSelectionEnd(row int, column int) {
	C.QTermWidgetInterface_setSelectionEnd(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTermWidgetInterface) GetSelectionStart(row *int, column *int) {
	C.QTermWidgetInterface_getSelectionStart(this.h, (*C.int)(unsafe.Pointer(row)), (*C.int)(unsafe.Pointer(column)))
}

func (this *QTermWidgetInterface) GetSelectionEnd(row *int, column *int) {
	C.QTermWidgetInterface_getSelectionEnd(this.h, (*C.int)(unsafe.Pointer(row)), (*C.int)(unsafe.Pointer(column)))
}

func (this *QTermWidgetInterface) SelectedText(preserveLineBreaks bool) string {
	var _ms C.struct_miqt_string = C.QTermWidgetInterface_selectedText(this.h, (C.bool)(preserveLineBreaks))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTermWidgetInterface) SetMonitorActivity(monitorActivity bool) {
	C.QTermWidgetInterface_setMonitorActivity(this.h, (C.bool)(monitorActivity))
}

func (this *QTermWidgetInterface) SetMonitorSilence(monitorSilence bool) {
	C.QTermWidgetInterface_setMonitorSilence(this.h, (C.bool)(monitorSilence))
}

func (this *QTermWidgetInterface) SetSilenceTimeout(seconds int) {
	C.QTermWidgetInterface_setSilenceTimeout(this.h, (C.int)(seconds))
}

func (this *QTermWidgetInterface) FilterActions(position *qt.QPoint) []*qt.QAction {
	var _ma C.struct_miqt_array = C.QTermWidgetInterface_filterActions(this.h, (*C.QPoint)(position.UnsafePointer()))
	_ret := make([]*qt.QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt.UnsafeNewQAction(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QTermWidgetInterface) GetPtySlaveFd() int {
	return (int)(C.QTermWidgetInterface_getPtySlaveFd(this.h))
}

func (this *QTermWidgetInterface) SetBlinkingCursor(blink bool) {
	C.QTermWidgetInterface_setBlinkingCursor(this.h, (C.bool)(blink))
}

func (this *QTermWidgetInterface) SetBidiEnabled(enabled bool) {
	C.QTermWidgetInterface_setBidiEnabled(this.h, (C.bool)(enabled))
}

func (this *QTermWidgetInterface) IsBidiEnabled() bool {
	return (bool)(C.QTermWidgetInterface_isBidiEnabled(this.h))
}

func (this *QTermWidgetInterface) SetAutoClose(autoClose bool) {
	C.QTermWidgetInterface_setAutoClose(this.h, (C.bool)(autoClose))
}

func (this *QTermWidgetInterface) Title() string {
	var _ms C.struct_miqt_string = C.QTermWidgetInterface_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTermWidgetInterface) Icon() string {
	var _ms C.struct_miqt_string = C.QTermWidgetInterface_icon(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTermWidgetInterface) IsTitleChanged() bool {
	return (bool)(C.QTermWidgetInterface_isTitleChanged(this.h))
}

func (this *QTermWidgetInterface) BracketText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTermWidgetInterface_bracketText(this.h, text_ms)
}

func (this *QTermWidgetInterface) DisableBracketedPasteMode(disable bool) {
	C.QTermWidgetInterface_disableBracketedPasteMode(this.h, (C.bool)(disable))
}

func (this *QTermWidgetInterface) BracketedPasteModeIsDisabled() bool {
	return (bool)(C.QTermWidgetInterface_bracketedPasteModeIsDisabled(this.h))
}

func (this *QTermWidgetInterface) SetMargin(margin int) {
	C.QTermWidgetInterface_setMargin(this.h, (C.int)(margin))
}

func (this *QTermWidgetInterface) GetMargin() int {
	return (int)(C.QTermWidgetInterface_getMargin(this.h))
}

func (this *QTermWidgetInterface) SetDrawLineChars(drawLineChars bool) {
	C.QTermWidgetInterface_setDrawLineChars(this.h, (C.bool)(drawLineChars))
}

func (this *QTermWidgetInterface) SetBoldIntense(boldIntense bool) {
	C.QTermWidgetInterface_setBoldIntense(this.h, (C.bool)(boldIntense))
}

func (this *QTermWidgetInterface) SetConfirmMultilinePaste(confirmMultilinePaste bool) {
	C.QTermWidgetInterface_setConfirmMultilinePaste(this.h, (C.bool)(confirmMultilinePaste))
}

func (this *QTermWidgetInterface) SetTrimPastedTrailingNewlines(trimPastedTrailingNewlines bool) {
	C.QTermWidgetInterface_setTrimPastedTrailingNewlines(this.h, (C.bool)(trimPastedTrailingNewlines))
}

func (this *QTermWidgetInterface) CreateWidget(startnow int) *QTermWidgetInterface {
	return newQTermWidgetInterface(C.QTermWidgetInterface_createWidget(this.h, (C.int)(startnow)))
}

func (this *QTermWidgetInterface) OperatorAssign(param1 *QTermWidgetInterface) {
	C.QTermWidgetInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTermWidgetInterface) Delete() {
	C.QTermWidgetInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTermWidgetInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QTermWidgetInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

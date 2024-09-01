package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qstylehints.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QStyleHints struct {
	h *C.QStyleHints
	*QObject
}

func (this *QStyleHints) cPointer() *C.QStyleHints {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyleHints(h *C.QStyleHints) *QStyleHints {
	if h == nil {
		return nil
	}
	return &QStyleHints{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQStyleHints_U(h unsafe.Pointer) *QStyleHints {
	return newQStyleHints((*C.QStyleHints)(h))
}

func (this *QStyleHints) MetaObject() *QMetaObject {
	ret := C.QStyleHints_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QStyleHints_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStyleHints_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStyleHints_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStyleHints_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStyleHints) SetMouseDoubleClickInterval(mouseDoubleClickInterval int) {
	C.QStyleHints_SetMouseDoubleClickInterval(this.h, (C.int)(mouseDoubleClickInterval))
}

func (this *QStyleHints) MouseDoubleClickInterval() int {
	ret := C.QStyleHints_MouseDoubleClickInterval(this.h)
	return (int)(ret)
}

func (this *QStyleHints) MouseDoubleClickDistance() int {
	ret := C.QStyleHints_MouseDoubleClickDistance(this.h)
	return (int)(ret)
}

func (this *QStyleHints) TouchDoubleTapDistance() int {
	ret := C.QStyleHints_TouchDoubleTapDistance(this.h)
	return (int)(ret)
}

func (this *QStyleHints) SetMousePressAndHoldInterval(mousePressAndHoldInterval int) {
	C.QStyleHints_SetMousePressAndHoldInterval(this.h, (C.int)(mousePressAndHoldInterval))
}

func (this *QStyleHints) MousePressAndHoldInterval() int {
	ret := C.QStyleHints_MousePressAndHoldInterval(this.h)
	return (int)(ret)
}

func (this *QStyleHints) SetStartDragDistance(startDragDistance int) {
	C.QStyleHints_SetStartDragDistance(this.h, (C.int)(startDragDistance))
}

func (this *QStyleHints) StartDragDistance() int {
	ret := C.QStyleHints_StartDragDistance(this.h)
	return (int)(ret)
}

func (this *QStyleHints) SetStartDragTime(startDragTime int) {
	C.QStyleHints_SetStartDragTime(this.h, (C.int)(startDragTime))
}

func (this *QStyleHints) StartDragTime() int {
	ret := C.QStyleHints_StartDragTime(this.h)
	return (int)(ret)
}

func (this *QStyleHints) StartDragVelocity() int {
	ret := C.QStyleHints_StartDragVelocity(this.h)
	return (int)(ret)
}

func (this *QStyleHints) SetKeyboardInputInterval(keyboardInputInterval int) {
	C.QStyleHints_SetKeyboardInputInterval(this.h, (C.int)(keyboardInputInterval))
}

func (this *QStyleHints) KeyboardInputInterval() int {
	ret := C.QStyleHints_KeyboardInputInterval(this.h)
	return (int)(ret)
}

func (this *QStyleHints) KeyboardAutoRepeatRate() int {
	ret := C.QStyleHints_KeyboardAutoRepeatRate(this.h)
	return (int)(ret)
}

func (this *QStyleHints) SetCursorFlashTime(cursorFlashTime int) {
	C.QStyleHints_SetCursorFlashTime(this.h, (C.int)(cursorFlashTime))
}

func (this *QStyleHints) CursorFlashTime() int {
	ret := C.QStyleHints_CursorFlashTime(this.h)
	return (int)(ret)
}

func (this *QStyleHints) ShowIsFullScreen() bool {
	ret := C.QStyleHints_ShowIsFullScreen(this.h)
	return (bool)(ret)
}

func (this *QStyleHints) ShowIsMaximized() bool {
	ret := C.QStyleHints_ShowIsMaximized(this.h)
	return (bool)(ret)
}

func (this *QStyleHints) ShowShortcutsInContextMenus() bool {
	ret := C.QStyleHints_ShowShortcutsInContextMenus(this.h)
	return (bool)(ret)
}

func (this *QStyleHints) SetShowShortcutsInContextMenus(showShortcutsInContextMenus bool) {
	C.QStyleHints_SetShowShortcutsInContextMenus(this.h, (C.bool)(showShortcutsInContextMenus))
}

func (this *QStyleHints) PasswordMaskDelay() int {
	ret := C.QStyleHints_PasswordMaskDelay(this.h)
	return (int)(ret)
}

func (this *QStyleHints) PasswordMaskCharacter() *QChar {
	ret := C.QStyleHints_PasswordMaskCharacter(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyleHints) FontSmoothingGamma() float64 {
	ret := C.QStyleHints_FontSmoothingGamma(this.h)
	return (float64)(ret)
}

func (this *QStyleHints) UseRtlExtensions() bool {
	ret := C.QStyleHints_UseRtlExtensions(this.h)
	return (bool)(ret)
}

func (this *QStyleHints) SetFocusOnTouchRelease() bool {
	ret := C.QStyleHints_SetFocusOnTouchRelease(this.h)
	return (bool)(ret)
}

func (this *QStyleHints) TabFocusBehavior() uintptr {
	ret := C.QStyleHints_TabFocusBehavior(this.h)
	return (uintptr)(ret)
}

func (this *QStyleHints) SetTabFocusBehavior(tabFocusBehavior uintptr) {
	C.QStyleHints_SetTabFocusBehavior(this.h, (C.uintptr_t)(tabFocusBehavior))
}

func (this *QStyleHints) SingleClickActivation() bool {
	ret := C.QStyleHints_SingleClickActivation(this.h)
	return (bool)(ret)
}

func (this *QStyleHints) UseHoverEffects() bool {
	ret := C.QStyleHints_UseHoverEffects(this.h)
	return (bool)(ret)
}

func (this *QStyleHints) SetUseHoverEffects(useHoverEffects bool) {
	C.QStyleHints_SetUseHoverEffects(this.h, (C.bool)(useHoverEffects))
}

func (this *QStyleHints) WheelScrollLines() int {
	ret := C.QStyleHints_WheelScrollLines(this.h)
	return (int)(ret)
}

func (this *QStyleHints) SetWheelScrollLines(scrollLines int) {
	C.QStyleHints_SetWheelScrollLines(this.h, (C.int)(scrollLines))
}

func (this *QStyleHints) SetMouseQuickSelectionThreshold(threshold int) {
	C.QStyleHints_SetMouseQuickSelectionThreshold(this.h, (C.int)(threshold))
}

func (this *QStyleHints) MouseQuickSelectionThreshold() int {
	ret := C.QStyleHints_MouseQuickSelectionThreshold(this.h)
	return (int)(ret)
}

func (this *QStyleHints) CursorFlashTimeChanged(cursorFlashTime int) {
	C.QStyleHints_CursorFlashTimeChanged(this.h, (C.int)(cursorFlashTime))
}

func (this *QStyleHints) OnCursorFlashTimeChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStyleHints_connect_CursorFlashTimeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStyleHints) KeyboardInputIntervalChanged(keyboardInputInterval int) {
	C.QStyleHints_KeyboardInputIntervalChanged(this.h, (C.int)(keyboardInputInterval))
}

func (this *QStyleHints) OnKeyboardInputIntervalChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStyleHints_connect_KeyboardInputIntervalChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStyleHints) MouseDoubleClickIntervalChanged(mouseDoubleClickInterval int) {
	C.QStyleHints_MouseDoubleClickIntervalChanged(this.h, (C.int)(mouseDoubleClickInterval))
}

func (this *QStyleHints) OnMouseDoubleClickIntervalChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStyleHints_connect_MouseDoubleClickIntervalChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStyleHints) MousePressAndHoldIntervalChanged(mousePressAndHoldInterval int) {
	C.QStyleHints_MousePressAndHoldIntervalChanged(this.h, (C.int)(mousePressAndHoldInterval))
}

func (this *QStyleHints) OnMousePressAndHoldIntervalChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStyleHints_connect_MousePressAndHoldIntervalChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStyleHints) StartDragDistanceChanged(startDragDistance int) {
	C.QStyleHints_StartDragDistanceChanged(this.h, (C.int)(startDragDistance))
}

func (this *QStyleHints) OnStartDragDistanceChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStyleHints_connect_StartDragDistanceChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStyleHints) StartDragTimeChanged(startDragTime int) {
	C.QStyleHints_StartDragTimeChanged(this.h, (C.int)(startDragTime))
}

func (this *QStyleHints) OnStartDragTimeChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStyleHints_connect_StartDragTimeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStyleHints) TabFocusBehaviorChanged(tabFocusBehavior uintptr) {
	C.QStyleHints_TabFocusBehaviorChanged(this.h, (C.uintptr_t)(tabFocusBehavior))
}

func (this *QStyleHints) OnTabFocusBehaviorChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStyleHints_connect_TabFocusBehaviorChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStyleHints) UseHoverEffectsChanged(useHoverEffects bool) {
	C.QStyleHints_UseHoverEffectsChanged(this.h, (C.bool)(useHoverEffects))
}

func (this *QStyleHints) OnUseHoverEffectsChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStyleHints_connect_UseHoverEffectsChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStyleHints) ShowShortcutsInContextMenusChanged(param1 bool) {
	C.QStyleHints_ShowShortcutsInContextMenusChanged(this.h, (C.bool)(param1))
}

func (this *QStyleHints) OnShowShortcutsInContextMenusChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStyleHints_connect_ShowShortcutsInContextMenusChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStyleHints) WheelScrollLinesChanged(scrollLines int) {
	C.QStyleHints_WheelScrollLinesChanged(this.h, (C.int)(scrollLines))
}

func (this *QStyleHints) OnWheelScrollLinesChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStyleHints_connect_WheelScrollLinesChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStyleHints) MouseQuickSelectionThresholdChanged(threshold int) {
	C.QStyleHints_MouseQuickSelectionThresholdChanged(this.h, (C.int)(threshold))
}

func (this *QStyleHints) OnMouseQuickSelectionThresholdChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStyleHints_connect_MouseQuickSelectionThresholdChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QStyleHints_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStyleHints_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStyleHints_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStyleHints_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStyleHints_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStyleHints_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStyleHints_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStyleHints_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStyleHints) Delete() {
	C.QStyleHints_Delete(this.h)
}

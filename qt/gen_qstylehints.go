package qt

/*

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
	return newQMetaObject_U(unsafe.Pointer(C.QStyleHints_MetaObject(this.h)))
}

func QStyleHints_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QStyleHints_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStyleHints_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QStyleHints_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStyleHints) SetMouseDoubleClickInterval(mouseDoubleClickInterval int) {
	C.QStyleHints_SetMouseDoubleClickInterval(this.h, (C.int)(mouseDoubleClickInterval))
}

func (this *QStyleHints) MouseDoubleClickInterval() int {
	return (int)(C.QStyleHints_MouseDoubleClickInterval(this.h))
}

func (this *QStyleHints) MouseDoubleClickDistance() int {
	return (int)(C.QStyleHints_MouseDoubleClickDistance(this.h))
}

func (this *QStyleHints) TouchDoubleTapDistance() int {
	return (int)(C.QStyleHints_TouchDoubleTapDistance(this.h))
}

func (this *QStyleHints) SetMousePressAndHoldInterval(mousePressAndHoldInterval int) {
	C.QStyleHints_SetMousePressAndHoldInterval(this.h, (C.int)(mousePressAndHoldInterval))
}

func (this *QStyleHints) MousePressAndHoldInterval() int {
	return (int)(C.QStyleHints_MousePressAndHoldInterval(this.h))
}

func (this *QStyleHints) SetStartDragDistance(startDragDistance int) {
	C.QStyleHints_SetStartDragDistance(this.h, (C.int)(startDragDistance))
}

func (this *QStyleHints) StartDragDistance() int {
	return (int)(C.QStyleHints_StartDragDistance(this.h))
}

func (this *QStyleHints) SetStartDragTime(startDragTime int) {
	C.QStyleHints_SetStartDragTime(this.h, (C.int)(startDragTime))
}

func (this *QStyleHints) StartDragTime() int {
	return (int)(C.QStyleHints_StartDragTime(this.h))
}

func (this *QStyleHints) StartDragVelocity() int {
	return (int)(C.QStyleHints_StartDragVelocity(this.h))
}

func (this *QStyleHints) SetKeyboardInputInterval(keyboardInputInterval int) {
	C.QStyleHints_SetKeyboardInputInterval(this.h, (C.int)(keyboardInputInterval))
}

func (this *QStyleHints) KeyboardInputInterval() int {
	return (int)(C.QStyleHints_KeyboardInputInterval(this.h))
}

func (this *QStyleHints) KeyboardAutoRepeatRate() int {
	return (int)(C.QStyleHints_KeyboardAutoRepeatRate(this.h))
}

func (this *QStyleHints) SetCursorFlashTime(cursorFlashTime int) {
	C.QStyleHints_SetCursorFlashTime(this.h, (C.int)(cursorFlashTime))
}

func (this *QStyleHints) CursorFlashTime() int {
	return (int)(C.QStyleHints_CursorFlashTime(this.h))
}

func (this *QStyleHints) ShowIsFullScreen() bool {
	return (bool)(C.QStyleHints_ShowIsFullScreen(this.h))
}

func (this *QStyleHints) ShowIsMaximized() bool {
	return (bool)(C.QStyleHints_ShowIsMaximized(this.h))
}

func (this *QStyleHints) ShowShortcutsInContextMenus() bool {
	return (bool)(C.QStyleHints_ShowShortcutsInContextMenus(this.h))
}

func (this *QStyleHints) SetShowShortcutsInContextMenus(showShortcutsInContextMenus bool) {
	C.QStyleHints_SetShowShortcutsInContextMenus(this.h, (C.bool)(showShortcutsInContextMenus))
}

func (this *QStyleHints) PasswordMaskDelay() int {
	return (int)(C.QStyleHints_PasswordMaskDelay(this.h))
}

func (this *QStyleHints) PasswordMaskCharacter() *QChar {
	_ret := C.QStyleHints_PasswordMaskCharacter(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyleHints) FontSmoothingGamma() float64 {
	return (float64)(C.QStyleHints_FontSmoothingGamma(this.h))
}

func (this *QStyleHints) UseRtlExtensions() bool {
	return (bool)(C.QStyleHints_UseRtlExtensions(this.h))
}

func (this *QStyleHints) SetFocusOnTouchRelease() bool {
	return (bool)(C.QStyleHints_SetFocusOnTouchRelease(this.h))
}

func (this *QStyleHints) TabFocusBehavior() TabFocusBehavior {
	return (TabFocusBehavior)(C.QStyleHints_TabFocusBehavior(this.h))
}

func (this *QStyleHints) SetTabFocusBehavior(tabFocusBehavior TabFocusBehavior) {
	C.QStyleHints_SetTabFocusBehavior(this.h, (C.int)(tabFocusBehavior))
}

func (this *QStyleHints) SingleClickActivation() bool {
	return (bool)(C.QStyleHints_SingleClickActivation(this.h))
}

func (this *QStyleHints) UseHoverEffects() bool {
	return (bool)(C.QStyleHints_UseHoverEffects(this.h))
}

func (this *QStyleHints) SetUseHoverEffects(useHoverEffects bool) {
	C.QStyleHints_SetUseHoverEffects(this.h, (C.bool)(useHoverEffects))
}

func (this *QStyleHints) WheelScrollLines() int {
	return (int)(C.QStyleHints_WheelScrollLines(this.h))
}

func (this *QStyleHints) SetWheelScrollLines(scrollLines int) {
	C.QStyleHints_SetWheelScrollLines(this.h, (C.int)(scrollLines))
}

func (this *QStyleHints) SetMouseQuickSelectionThreshold(threshold int) {
	C.QStyleHints_SetMouseQuickSelectionThreshold(this.h, (C.int)(threshold))
}

func (this *QStyleHints) MouseQuickSelectionThreshold() int {
	return (int)(C.QStyleHints_MouseQuickSelectionThreshold(this.h))
}

func (this *QStyleHints) CursorFlashTimeChanged(cursorFlashTime int) {
	C.QStyleHints_CursorFlashTimeChanged(this.h, (C.int)(cursorFlashTime))
}
func (this *QStyleHints) OnCursorFlashTimeChanged(slot func(cursorFlashTime int)) {
	C.QStyleHints_connect_CursorFlashTimeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QStyleHints_CursorFlashTimeChanged
func miqt_exec_callback_QStyleHints_CursorFlashTimeChanged(cb *C.void, cursorFlashTime C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(cursorFlashTime int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(cursorFlashTime)

	gofunc(slotval1)
}

func (this *QStyleHints) KeyboardInputIntervalChanged(keyboardInputInterval int) {
	C.QStyleHints_KeyboardInputIntervalChanged(this.h, (C.int)(keyboardInputInterval))
}
func (this *QStyleHints) OnKeyboardInputIntervalChanged(slot func(keyboardInputInterval int)) {
	C.QStyleHints_connect_KeyboardInputIntervalChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QStyleHints_KeyboardInputIntervalChanged
func miqt_exec_callback_QStyleHints_KeyboardInputIntervalChanged(cb *C.void, keyboardInputInterval C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(keyboardInputInterval int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(keyboardInputInterval)

	gofunc(slotval1)
}

func (this *QStyleHints) MouseDoubleClickIntervalChanged(mouseDoubleClickInterval int) {
	C.QStyleHints_MouseDoubleClickIntervalChanged(this.h, (C.int)(mouseDoubleClickInterval))
}
func (this *QStyleHints) OnMouseDoubleClickIntervalChanged(slot func(mouseDoubleClickInterval int)) {
	C.QStyleHints_connect_MouseDoubleClickIntervalChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QStyleHints_MouseDoubleClickIntervalChanged
func miqt_exec_callback_QStyleHints_MouseDoubleClickIntervalChanged(cb *C.void, mouseDoubleClickInterval C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(mouseDoubleClickInterval int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(mouseDoubleClickInterval)

	gofunc(slotval1)
}

func (this *QStyleHints) MousePressAndHoldIntervalChanged(mousePressAndHoldInterval int) {
	C.QStyleHints_MousePressAndHoldIntervalChanged(this.h, (C.int)(mousePressAndHoldInterval))
}
func (this *QStyleHints) OnMousePressAndHoldIntervalChanged(slot func(mousePressAndHoldInterval int)) {
	C.QStyleHints_connect_MousePressAndHoldIntervalChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QStyleHints_MousePressAndHoldIntervalChanged
func miqt_exec_callback_QStyleHints_MousePressAndHoldIntervalChanged(cb *C.void, mousePressAndHoldInterval C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(mousePressAndHoldInterval int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(mousePressAndHoldInterval)

	gofunc(slotval1)
}

func (this *QStyleHints) StartDragDistanceChanged(startDragDistance int) {
	C.QStyleHints_StartDragDistanceChanged(this.h, (C.int)(startDragDistance))
}
func (this *QStyleHints) OnStartDragDistanceChanged(slot func(startDragDistance int)) {
	C.QStyleHints_connect_StartDragDistanceChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QStyleHints_StartDragDistanceChanged
func miqt_exec_callback_QStyleHints_StartDragDistanceChanged(cb *C.void, startDragDistance C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(startDragDistance int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(startDragDistance)

	gofunc(slotval1)
}

func (this *QStyleHints) StartDragTimeChanged(startDragTime int) {
	C.QStyleHints_StartDragTimeChanged(this.h, (C.int)(startDragTime))
}
func (this *QStyleHints) OnStartDragTimeChanged(slot func(startDragTime int)) {
	C.QStyleHints_connect_StartDragTimeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QStyleHints_StartDragTimeChanged
func miqt_exec_callback_QStyleHints_StartDragTimeChanged(cb *C.void, startDragTime C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(startDragTime int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(startDragTime)

	gofunc(slotval1)
}

func (this *QStyleHints) TabFocusBehaviorChanged(tabFocusBehavior TabFocusBehavior) {
	C.QStyleHints_TabFocusBehaviorChanged(this.h, (C.int)(tabFocusBehavior))
}
func (this *QStyleHints) OnTabFocusBehaviorChanged(slot func(tabFocusBehavior TabFocusBehavior)) {
	C.QStyleHints_connect_TabFocusBehaviorChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QStyleHints_TabFocusBehaviorChanged
func miqt_exec_callback_QStyleHints_TabFocusBehaviorChanged(cb *C.void, tabFocusBehavior C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(tabFocusBehavior TabFocusBehavior))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (TabFocusBehavior)(tabFocusBehavior)

	gofunc(slotval1)
}

func (this *QStyleHints) UseHoverEffectsChanged(useHoverEffects bool) {
	C.QStyleHints_UseHoverEffectsChanged(this.h, (C.bool)(useHoverEffects))
}
func (this *QStyleHints) OnUseHoverEffectsChanged(slot func(useHoverEffects bool)) {
	C.QStyleHints_connect_UseHoverEffectsChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QStyleHints_UseHoverEffectsChanged
func miqt_exec_callback_QStyleHints_UseHoverEffectsChanged(cb *C.void, useHoverEffects C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(useHoverEffects bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(useHoverEffects)

	gofunc(slotval1)
}

func (this *QStyleHints) ShowShortcutsInContextMenusChanged(param1 bool) {
	C.QStyleHints_ShowShortcutsInContextMenusChanged(this.h, (C.bool)(param1))
}
func (this *QStyleHints) OnShowShortcutsInContextMenusChanged(slot func(param1 bool)) {
	C.QStyleHints_connect_ShowShortcutsInContextMenusChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QStyleHints_ShowShortcutsInContextMenusChanged
func miqt_exec_callback_QStyleHints_ShowShortcutsInContextMenusChanged(cb *C.void, param1 C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QStyleHints) WheelScrollLinesChanged(scrollLines int) {
	C.QStyleHints_WheelScrollLinesChanged(this.h, (C.int)(scrollLines))
}
func (this *QStyleHints) OnWheelScrollLinesChanged(slot func(scrollLines int)) {
	C.QStyleHints_connect_WheelScrollLinesChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QStyleHints_WheelScrollLinesChanged
func miqt_exec_callback_QStyleHints_WheelScrollLinesChanged(cb *C.void, scrollLines C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(scrollLines int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(scrollLines)

	gofunc(slotval1)
}

func (this *QStyleHints) MouseQuickSelectionThresholdChanged(threshold int) {
	C.QStyleHints_MouseQuickSelectionThresholdChanged(this.h, (C.int)(threshold))
}
func (this *QStyleHints) OnMouseQuickSelectionThresholdChanged(slot func(threshold int)) {
	C.QStyleHints_connect_MouseQuickSelectionThresholdChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QStyleHints_MouseQuickSelectionThresholdChanged
func miqt_exec_callback_QStyleHints_MouseQuickSelectionThresholdChanged(cb *C.void, threshold C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(threshold int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(threshold)

	gofunc(slotval1)
}

func QStyleHints_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStyleHints_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStyleHints_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStyleHints_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStyleHints_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStyleHints_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStyleHints_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStyleHints_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QStyleHints) Delete() {
	C.QStyleHints_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleHints) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleHints) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

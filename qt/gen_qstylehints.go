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

func (this *QStyleHints) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyleHints constructs the type using only CGO pointers.
func newQStyleHints(h *C.QStyleHints) *QStyleHints {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QStyleHints_virtbase(h, &outptr_QObject)

	return &QStyleHints{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQStyleHints constructs the type using only unsafe pointers.
func UnsafeNewQStyleHints(h unsafe.Pointer) *QStyleHints {
	return newQStyleHints((*C.QStyleHints)(h))
}

func (this *QStyleHints) MetaObject() *QMetaObject {
	return newQMetaObject(C.QStyleHints_metaObject(this.h))
}

func (this *QStyleHints) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStyleHints_metacast(this.h, param1_Cstring))
}

func QStyleHints_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStyleHints_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyleHints_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStyleHints_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStyleHints) SetMouseDoubleClickInterval(mouseDoubleClickInterval int) {
	C.QStyleHints_setMouseDoubleClickInterval(this.h, (C.int)(mouseDoubleClickInterval))
}

func (this *QStyleHints) MouseDoubleClickInterval() int {
	return (int)(C.QStyleHints_mouseDoubleClickInterval(this.h))
}

func (this *QStyleHints) MouseDoubleClickDistance() int {
	return (int)(C.QStyleHints_mouseDoubleClickDistance(this.h))
}

func (this *QStyleHints) TouchDoubleTapDistance() int {
	return (int)(C.QStyleHints_touchDoubleTapDistance(this.h))
}

func (this *QStyleHints) SetMousePressAndHoldInterval(mousePressAndHoldInterval int) {
	C.QStyleHints_setMousePressAndHoldInterval(this.h, (C.int)(mousePressAndHoldInterval))
}

func (this *QStyleHints) MousePressAndHoldInterval() int {
	return (int)(C.QStyleHints_mousePressAndHoldInterval(this.h))
}

func (this *QStyleHints) SetStartDragDistance(startDragDistance int) {
	C.QStyleHints_setStartDragDistance(this.h, (C.int)(startDragDistance))
}

func (this *QStyleHints) StartDragDistance() int {
	return (int)(C.QStyleHints_startDragDistance(this.h))
}

func (this *QStyleHints) SetStartDragTime(startDragTime int) {
	C.QStyleHints_setStartDragTime(this.h, (C.int)(startDragTime))
}

func (this *QStyleHints) StartDragTime() int {
	return (int)(C.QStyleHints_startDragTime(this.h))
}

func (this *QStyleHints) StartDragVelocity() int {
	return (int)(C.QStyleHints_startDragVelocity(this.h))
}

func (this *QStyleHints) SetKeyboardInputInterval(keyboardInputInterval int) {
	C.QStyleHints_setKeyboardInputInterval(this.h, (C.int)(keyboardInputInterval))
}

func (this *QStyleHints) KeyboardInputInterval() int {
	return (int)(C.QStyleHints_keyboardInputInterval(this.h))
}

func (this *QStyleHints) KeyboardAutoRepeatRate() int {
	return (int)(C.QStyleHints_keyboardAutoRepeatRate(this.h))
}

func (this *QStyleHints) SetCursorFlashTime(cursorFlashTime int) {
	C.QStyleHints_setCursorFlashTime(this.h, (C.int)(cursorFlashTime))
}

func (this *QStyleHints) CursorFlashTime() int {
	return (int)(C.QStyleHints_cursorFlashTime(this.h))
}

func (this *QStyleHints) ShowIsFullScreen() bool {
	return (bool)(C.QStyleHints_showIsFullScreen(this.h))
}

func (this *QStyleHints) ShowIsMaximized() bool {
	return (bool)(C.QStyleHints_showIsMaximized(this.h))
}

func (this *QStyleHints) ShowShortcutsInContextMenus() bool {
	return (bool)(C.QStyleHints_showShortcutsInContextMenus(this.h))
}

func (this *QStyleHints) SetShowShortcutsInContextMenus(showShortcutsInContextMenus bool) {
	C.QStyleHints_setShowShortcutsInContextMenus(this.h, (C.bool)(showShortcutsInContextMenus))
}

func (this *QStyleHints) PasswordMaskDelay() int {
	return (int)(C.QStyleHints_passwordMaskDelay(this.h))
}

func (this *QStyleHints) PasswordMaskCharacter() *QChar {
	_goptr := newQChar(C.QStyleHints_passwordMaskCharacter(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyleHints) FontSmoothingGamma() float64 {
	return (float64)(C.QStyleHints_fontSmoothingGamma(this.h))
}

func (this *QStyleHints) UseRtlExtensions() bool {
	return (bool)(C.QStyleHints_useRtlExtensions(this.h))
}

func (this *QStyleHints) SetFocusOnTouchRelease() bool {
	return (bool)(C.QStyleHints_setFocusOnTouchRelease(this.h))
}

func (this *QStyleHints) TabFocusBehavior() TabFocusBehavior {
	return (TabFocusBehavior)(C.QStyleHints_tabFocusBehavior(this.h))
}

func (this *QStyleHints) SetTabFocusBehavior(tabFocusBehavior TabFocusBehavior) {
	C.QStyleHints_setTabFocusBehavior(this.h, (C.int)(tabFocusBehavior))
}

func (this *QStyleHints) SingleClickActivation() bool {
	return (bool)(C.QStyleHints_singleClickActivation(this.h))
}

func (this *QStyleHints) UseHoverEffects() bool {
	return (bool)(C.QStyleHints_useHoverEffects(this.h))
}

func (this *QStyleHints) SetUseHoverEffects(useHoverEffects bool) {
	C.QStyleHints_setUseHoverEffects(this.h, (C.bool)(useHoverEffects))
}

func (this *QStyleHints) WheelScrollLines() int {
	return (int)(C.QStyleHints_wheelScrollLines(this.h))
}

func (this *QStyleHints) SetWheelScrollLines(scrollLines int) {
	C.QStyleHints_setWheelScrollLines(this.h, (C.int)(scrollLines))
}

func (this *QStyleHints) SetMouseQuickSelectionThreshold(threshold int) {
	C.QStyleHints_setMouseQuickSelectionThreshold(this.h, (C.int)(threshold))
}

func (this *QStyleHints) MouseQuickSelectionThreshold() int {
	return (int)(C.QStyleHints_mouseQuickSelectionThreshold(this.h))
}

func (this *QStyleHints) CursorFlashTimeChanged(cursorFlashTime int) {
	C.QStyleHints_cursorFlashTimeChanged(this.h, (C.int)(cursorFlashTime))
}
func (this *QStyleHints) OnCursorFlashTimeChanged(slot func(cursorFlashTime int)) {
	C.QStyleHints_connect_cursorFlashTimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStyleHints_cursorFlashTimeChanged
func miqt_exec_callback_QStyleHints_cursorFlashTimeChanged(cb C.intptr_t, cursorFlashTime C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(cursorFlashTime int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(cursorFlashTime)

	gofunc(slotval1)
}

func (this *QStyleHints) KeyboardInputIntervalChanged(keyboardInputInterval int) {
	C.QStyleHints_keyboardInputIntervalChanged(this.h, (C.int)(keyboardInputInterval))
}
func (this *QStyleHints) OnKeyboardInputIntervalChanged(slot func(keyboardInputInterval int)) {
	C.QStyleHints_connect_keyboardInputIntervalChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStyleHints_keyboardInputIntervalChanged
func miqt_exec_callback_QStyleHints_keyboardInputIntervalChanged(cb C.intptr_t, keyboardInputInterval C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(keyboardInputInterval int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(keyboardInputInterval)

	gofunc(slotval1)
}

func (this *QStyleHints) MouseDoubleClickIntervalChanged(mouseDoubleClickInterval int) {
	C.QStyleHints_mouseDoubleClickIntervalChanged(this.h, (C.int)(mouseDoubleClickInterval))
}
func (this *QStyleHints) OnMouseDoubleClickIntervalChanged(slot func(mouseDoubleClickInterval int)) {
	C.QStyleHints_connect_mouseDoubleClickIntervalChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStyleHints_mouseDoubleClickIntervalChanged
func miqt_exec_callback_QStyleHints_mouseDoubleClickIntervalChanged(cb C.intptr_t, mouseDoubleClickInterval C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mouseDoubleClickInterval int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(mouseDoubleClickInterval)

	gofunc(slotval1)
}

func (this *QStyleHints) MousePressAndHoldIntervalChanged(mousePressAndHoldInterval int) {
	C.QStyleHints_mousePressAndHoldIntervalChanged(this.h, (C.int)(mousePressAndHoldInterval))
}
func (this *QStyleHints) OnMousePressAndHoldIntervalChanged(slot func(mousePressAndHoldInterval int)) {
	C.QStyleHints_connect_mousePressAndHoldIntervalChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStyleHints_mousePressAndHoldIntervalChanged
func miqt_exec_callback_QStyleHints_mousePressAndHoldIntervalChanged(cb C.intptr_t, mousePressAndHoldInterval C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mousePressAndHoldInterval int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(mousePressAndHoldInterval)

	gofunc(slotval1)
}

func (this *QStyleHints) StartDragDistanceChanged(startDragDistance int) {
	C.QStyleHints_startDragDistanceChanged(this.h, (C.int)(startDragDistance))
}
func (this *QStyleHints) OnStartDragDistanceChanged(slot func(startDragDistance int)) {
	C.QStyleHints_connect_startDragDistanceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStyleHints_startDragDistanceChanged
func miqt_exec_callback_QStyleHints_startDragDistanceChanged(cb C.intptr_t, startDragDistance C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(startDragDistance int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(startDragDistance)

	gofunc(slotval1)
}

func (this *QStyleHints) StartDragTimeChanged(startDragTime int) {
	C.QStyleHints_startDragTimeChanged(this.h, (C.int)(startDragTime))
}
func (this *QStyleHints) OnStartDragTimeChanged(slot func(startDragTime int)) {
	C.QStyleHints_connect_startDragTimeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStyleHints_startDragTimeChanged
func miqt_exec_callback_QStyleHints_startDragTimeChanged(cb C.intptr_t, startDragTime C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(startDragTime int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(startDragTime)

	gofunc(slotval1)
}

func (this *QStyleHints) TabFocusBehaviorChanged(tabFocusBehavior TabFocusBehavior) {
	C.QStyleHints_tabFocusBehaviorChanged(this.h, (C.int)(tabFocusBehavior))
}
func (this *QStyleHints) OnTabFocusBehaviorChanged(slot func(tabFocusBehavior TabFocusBehavior)) {
	C.QStyleHints_connect_tabFocusBehaviorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStyleHints_tabFocusBehaviorChanged
func miqt_exec_callback_QStyleHints_tabFocusBehaviorChanged(cb C.intptr_t, tabFocusBehavior C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(tabFocusBehavior TabFocusBehavior))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (TabFocusBehavior)(tabFocusBehavior)

	gofunc(slotval1)
}

func (this *QStyleHints) UseHoverEffectsChanged(useHoverEffects bool) {
	C.QStyleHints_useHoverEffectsChanged(this.h, (C.bool)(useHoverEffects))
}
func (this *QStyleHints) OnUseHoverEffectsChanged(slot func(useHoverEffects bool)) {
	C.QStyleHints_connect_useHoverEffectsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStyleHints_useHoverEffectsChanged
func miqt_exec_callback_QStyleHints_useHoverEffectsChanged(cb C.intptr_t, useHoverEffects C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(useHoverEffects bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(useHoverEffects)

	gofunc(slotval1)
}

func (this *QStyleHints) ShowShortcutsInContextMenusChanged(param1 bool) {
	C.QStyleHints_showShortcutsInContextMenusChanged(this.h, (C.bool)(param1))
}
func (this *QStyleHints) OnShowShortcutsInContextMenusChanged(slot func(param1 bool)) {
	C.QStyleHints_connect_showShortcutsInContextMenusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStyleHints_showShortcutsInContextMenusChanged
func miqt_exec_callback_QStyleHints_showShortcutsInContextMenusChanged(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QStyleHints) WheelScrollLinesChanged(scrollLines int) {
	C.QStyleHints_wheelScrollLinesChanged(this.h, (C.int)(scrollLines))
}
func (this *QStyleHints) OnWheelScrollLinesChanged(slot func(scrollLines int)) {
	C.QStyleHints_connect_wheelScrollLinesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStyleHints_wheelScrollLinesChanged
func miqt_exec_callback_QStyleHints_wheelScrollLinesChanged(cb C.intptr_t, scrollLines C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(scrollLines int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(scrollLines)

	gofunc(slotval1)
}

func (this *QStyleHints) MouseQuickSelectionThresholdChanged(threshold int) {
	C.QStyleHints_mouseQuickSelectionThresholdChanged(this.h, (C.int)(threshold))
}
func (this *QStyleHints) OnMouseQuickSelectionThresholdChanged(slot func(threshold int)) {
	C.QStyleHints_connect_mouseQuickSelectionThresholdChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStyleHints_mouseQuickSelectionThresholdChanged
func miqt_exec_callback_QStyleHints_mouseQuickSelectionThresholdChanged(cb C.intptr_t, threshold C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(threshold int))
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
	var _ms C.struct_miqt_string = C.QStyleHints_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyleHints_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStyleHints_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyleHints_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStyleHints_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyleHints_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStyleHints_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QStyleHints) Delete() {
	C.QStyleHints_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyleHints) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyleHints) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

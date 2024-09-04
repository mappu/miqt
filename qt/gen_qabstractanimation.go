package qt

/*

#include "gen_qabstractanimation.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

type QAbstractAnimation__Direction int

const (
	QAbstractAnimation__Direction__Forward  QAbstractAnimation__Direction = 0
	QAbstractAnimation__Direction__Backward QAbstractAnimation__Direction = 1
)

type QAbstractAnimation__State int

const (
	QAbstractAnimation__State__Stopped QAbstractAnimation__State = 0
	QAbstractAnimation__State__Paused  QAbstractAnimation__State = 1
	QAbstractAnimation__State__Running QAbstractAnimation__State = 2
)

type QAbstractAnimation__DeletionPolicy int

const (
	QAbstractAnimation__DeletionPolicy__KeepWhenStopped   QAbstractAnimation__DeletionPolicy = 0
	QAbstractAnimation__DeletionPolicy__DeleteWhenStopped QAbstractAnimation__DeletionPolicy = 1
)

type QAbstractAnimation struct {
	h *C.QAbstractAnimation
	*QObject
}

func (this *QAbstractAnimation) cPointer() *C.QAbstractAnimation {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractAnimation(h *C.QAbstractAnimation) *QAbstractAnimation {
	if h == nil {
		return nil
	}
	return &QAbstractAnimation{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAbstractAnimation_U(h unsafe.Pointer) *QAbstractAnimation {
	return newQAbstractAnimation((*C.QAbstractAnimation)(h))
}

func (this *QAbstractAnimation) MetaObject() *QMetaObject {
	ret := C.QAbstractAnimation_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractAnimation_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractAnimation_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractAnimation_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractAnimation) State() QAbstractAnimation__State {
	ret := C.QAbstractAnimation_State(this.h)
	return (QAbstractAnimation__State)(ret)
}

func (this *QAbstractAnimation) Group() *QAnimationGroup {
	ret := C.QAbstractAnimation_Group(this.h)
	return newQAnimationGroup_U(unsafe.Pointer(ret))
}

func (this *QAbstractAnimation) Direction() QAbstractAnimation__Direction {
	ret := C.QAbstractAnimation_Direction(this.h)
	return (QAbstractAnimation__Direction)(ret)
}

func (this *QAbstractAnimation) SetDirection(direction QAbstractAnimation__Direction) {
	C.QAbstractAnimation_SetDirection(this.h, (C.uintptr_t)(direction))
}

func (this *QAbstractAnimation) CurrentTime() int {
	ret := C.QAbstractAnimation_CurrentTime(this.h)
	return (int)(ret)
}

func (this *QAbstractAnimation) CurrentLoopTime() int {
	ret := C.QAbstractAnimation_CurrentLoopTime(this.h)
	return (int)(ret)
}

func (this *QAbstractAnimation) LoopCount() int {
	ret := C.QAbstractAnimation_LoopCount(this.h)
	return (int)(ret)
}

func (this *QAbstractAnimation) SetLoopCount(loopCount int) {
	C.QAbstractAnimation_SetLoopCount(this.h, (C.int)(loopCount))
}

func (this *QAbstractAnimation) CurrentLoop() int {
	ret := C.QAbstractAnimation_CurrentLoop(this.h)
	return (int)(ret)
}

func (this *QAbstractAnimation) Duration() int {
	ret := C.QAbstractAnimation_Duration(this.h)
	return (int)(ret)
}

func (this *QAbstractAnimation) TotalDuration() int {
	ret := C.QAbstractAnimation_TotalDuration(this.h)
	return (int)(ret)
}

func (this *QAbstractAnimation) Finished() {
	C.QAbstractAnimation_Finished(this.h)
}

func (this *QAbstractAnimation) OnFinished(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractAnimation_connect_Finished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractAnimation) StateChanged(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {
	C.QAbstractAnimation_StateChanged(this.h, (C.uintptr_t)(newState), (C.uintptr_t)(oldState))
}

func (this *QAbstractAnimation) OnStateChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractAnimation_connect_StateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractAnimation) CurrentLoopChanged(currentLoop int) {
	C.QAbstractAnimation_CurrentLoopChanged(this.h, (C.int)(currentLoop))
}

func (this *QAbstractAnimation) OnCurrentLoopChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractAnimation_connect_CurrentLoopChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractAnimation) DirectionChanged(param1 QAbstractAnimation__Direction) {
	C.QAbstractAnimation_DirectionChanged(this.h, (C.uintptr_t)(param1))
}

func (this *QAbstractAnimation) OnDirectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractAnimation_connect_DirectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractAnimation) Start() {
	C.QAbstractAnimation_Start(this.h)
}

func (this *QAbstractAnimation) Pause() {
	C.QAbstractAnimation_Pause(this.h)
}

func (this *QAbstractAnimation) Resume() {
	C.QAbstractAnimation_Resume(this.h)
}

func (this *QAbstractAnimation) SetPaused(paused bool) {
	C.QAbstractAnimation_SetPaused(this.h, (C.bool)(paused))
}

func (this *QAbstractAnimation) Stop() {
	C.QAbstractAnimation_Stop(this.h)
}

func (this *QAbstractAnimation) SetCurrentTime(msecs int) {
	C.QAbstractAnimation_SetCurrentTime(this.h, (C.int)(msecs))
}

func QAbstractAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractAnimation_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractAnimation_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractAnimation_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractAnimation_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractAnimation_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractAnimation_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractAnimation) Start1(policy QAbstractAnimation__DeletionPolicy) {
	C.QAbstractAnimation_Start1(this.h, (C.uintptr_t)(policy))
}

func (this *QAbstractAnimation) Delete() {
	C.QAbstractAnimation_Delete(this.h)
}

type QAnimationDriver struct {
	h *C.QAnimationDriver
	*QObject
}

func (this *QAnimationDriver) cPointer() *C.QAnimationDriver {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAnimationDriver(h *C.QAnimationDriver) *QAnimationDriver {
	if h == nil {
		return nil
	}
	return &QAnimationDriver{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAnimationDriver_U(h unsafe.Pointer) *QAnimationDriver {
	return newQAnimationDriver((*C.QAnimationDriver)(h))
}

// NewQAnimationDriver constructs a new QAnimationDriver object.
func NewQAnimationDriver() *QAnimationDriver {
	ret := C.QAnimationDriver_new()
	return newQAnimationDriver(ret)
}

// NewQAnimationDriver2 constructs a new QAnimationDriver object.
func NewQAnimationDriver2(parent *QObject) *QAnimationDriver {
	ret := C.QAnimationDriver_new2(parent.cPointer())
	return newQAnimationDriver(ret)
}

func (this *QAnimationDriver) MetaObject() *QMetaObject {
	ret := C.QAnimationDriver_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAnimationDriver_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAnimationDriver_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAnimationDriver_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAnimationDriver_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAnimationDriver) Advance() {
	C.QAnimationDriver_Advance(this.h)
}

func (this *QAnimationDriver) Install() {
	C.QAnimationDriver_Install(this.h)
}

func (this *QAnimationDriver) Uninstall() {
	C.QAnimationDriver_Uninstall(this.h)
}

func (this *QAnimationDriver) IsRunning() bool {
	ret := C.QAnimationDriver_IsRunning(this.h)
	return (bool)(ret)
}

func (this *QAnimationDriver) Elapsed() int64 {
	ret := C.QAnimationDriver_Elapsed(this.h)
	return (int64)(ret)
}

func (this *QAnimationDriver) SetStartTime(startTime int64) {
	C.QAnimationDriver_SetStartTime(this.h, (C.longlong)(startTime))
}

func (this *QAnimationDriver) StartTime() int64 {
	ret := C.QAnimationDriver_StartTime(this.h)
	return (int64)(ret)
}

func (this *QAnimationDriver) Started() {
	C.QAnimationDriver_Started(this.h)
}

func (this *QAnimationDriver) OnStarted(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAnimationDriver_connect_Started(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAnimationDriver) Stopped() {
	C.QAnimationDriver_Stopped(this.h)
}

func (this *QAnimationDriver) OnStopped(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAnimationDriver_connect_Stopped(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QAnimationDriver_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAnimationDriver_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAnimationDriver_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAnimationDriver_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAnimationDriver_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAnimationDriver_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAnimationDriver_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAnimationDriver_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAnimationDriver) Delete() {
	C.QAnimationDriver_Delete(this.h)
}

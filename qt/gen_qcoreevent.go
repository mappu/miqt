package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcoreevent.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QEvent struct {
	h *C.QEvent
}

func (this *QEvent) cPointer() *C.QEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQEvent(h *C.QEvent) *QEvent {
	if h == nil {
		return nil
	}
	return &QEvent{h: h}
}

func newQEvent_U(h unsafe.Pointer) *QEvent {
	return newQEvent((*C.QEvent)(h))
}

// NewQEvent constructs a new QEvent object.
func NewQEvent(typeVal uintptr) *QEvent {
	ret := C.QEvent_new((C.uintptr_t)(typeVal))
	return newQEvent(ret)
}

// NewQEvent2 constructs a new QEvent object.
func NewQEvent2(other *QEvent) *QEvent {
	ret := C.QEvent_new2(other.cPointer())
	return newQEvent(ret)
}

func (this *QEvent) OperatorAssign(other *QEvent) {
	C.QEvent_OperatorAssign(this.h, other.cPointer())
}

func (this *QEvent) Type() uintptr {
	ret := C.QEvent_Type(this.h)
	return (uintptr)(ret)
}

func (this *QEvent) Spontaneous() bool {
	ret := C.QEvent_Spontaneous(this.h)
	return (bool)(ret)
}

func (this *QEvent) SetAccepted(accepted bool) {
	C.QEvent_SetAccepted(this.h, (C.bool)(accepted))
}

func (this *QEvent) IsAccepted() bool {
	ret := C.QEvent_IsAccepted(this.h)
	return (bool)(ret)
}

func (this *QEvent) Accept() {
	C.QEvent_Accept(this.h)
}

func (this *QEvent) Ignore() {
	C.QEvent_Ignore(this.h)
}

func QEvent_RegisterEventType() int {
	ret := C.QEvent_RegisterEventType()
	return (int)(ret)
}

func QEvent_RegisterEventType1(hint int) int {
	ret := C.QEvent_RegisterEventType1((C.int)(hint))
	return (int)(ret)
}

func (this *QEvent) Delete() {
	C.QEvent_Delete(this.h)
}

type QTimerEvent struct {
	h *C.QTimerEvent
	*QEvent
}

func (this *QTimerEvent) cPointer() *C.QTimerEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTimerEvent(h *C.QTimerEvent) *QTimerEvent {
	if h == nil {
		return nil
	}
	return &QTimerEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQTimerEvent_U(h unsafe.Pointer) *QTimerEvent {
	return newQTimerEvent((*C.QTimerEvent)(h))
}

// NewQTimerEvent constructs a new QTimerEvent object.
func NewQTimerEvent(timerId int) *QTimerEvent {
	ret := C.QTimerEvent_new((C.int)(timerId))
	return newQTimerEvent(ret)
}

// NewQTimerEvent2 constructs a new QTimerEvent object.
func NewQTimerEvent2(param1 *QTimerEvent) *QTimerEvent {
	ret := C.QTimerEvent_new2(param1.cPointer())
	return newQTimerEvent(ret)
}

func (this *QTimerEvent) TimerId() int {
	ret := C.QTimerEvent_TimerId(this.h)
	return (int)(ret)
}

func (this *QTimerEvent) Delete() {
	C.QTimerEvent_Delete(this.h)
}

type QChildEvent struct {
	h *C.QChildEvent
	*QEvent
}

func (this *QChildEvent) cPointer() *C.QChildEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQChildEvent(h *C.QChildEvent) *QChildEvent {
	if h == nil {
		return nil
	}
	return &QChildEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQChildEvent_U(h unsafe.Pointer) *QChildEvent {
	return newQChildEvent((*C.QChildEvent)(h))
}

// NewQChildEvent constructs a new QChildEvent object.
func NewQChildEvent(typeVal uintptr, child *QObject) *QChildEvent {
	ret := C.QChildEvent_new((C.uintptr_t)(typeVal), child.cPointer())
	return newQChildEvent(ret)
}

// NewQChildEvent2 constructs a new QChildEvent object.
func NewQChildEvent2(param1 *QChildEvent) *QChildEvent {
	ret := C.QChildEvent_new2(param1.cPointer())
	return newQChildEvent(ret)
}

func (this *QChildEvent) Child() *QObject {
	ret := C.QChildEvent_Child(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QChildEvent) Added() bool {
	ret := C.QChildEvent_Added(this.h)
	return (bool)(ret)
}

func (this *QChildEvent) Polished() bool {
	ret := C.QChildEvent_Polished(this.h)
	return (bool)(ret)
}

func (this *QChildEvent) Removed() bool {
	ret := C.QChildEvent_Removed(this.h)
	return (bool)(ret)
}

func (this *QChildEvent) Delete() {
	C.QChildEvent_Delete(this.h)
}

type QDynamicPropertyChangeEvent struct {
	h *C.QDynamicPropertyChangeEvent
	*QEvent
}

func (this *QDynamicPropertyChangeEvent) cPointer() *C.QDynamicPropertyChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDynamicPropertyChangeEvent(h *C.QDynamicPropertyChangeEvent) *QDynamicPropertyChangeEvent {
	if h == nil {
		return nil
	}
	return &QDynamicPropertyChangeEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQDynamicPropertyChangeEvent_U(h unsafe.Pointer) *QDynamicPropertyChangeEvent {
	return newQDynamicPropertyChangeEvent((*C.QDynamicPropertyChangeEvent)(h))
}

// NewQDynamicPropertyChangeEvent constructs a new QDynamicPropertyChangeEvent object.
func NewQDynamicPropertyChangeEvent(name *QByteArray) *QDynamicPropertyChangeEvent {
	ret := C.QDynamicPropertyChangeEvent_new(name.cPointer())
	return newQDynamicPropertyChangeEvent(ret)
}

// NewQDynamicPropertyChangeEvent2 constructs a new QDynamicPropertyChangeEvent object.
func NewQDynamicPropertyChangeEvent2(param1 *QDynamicPropertyChangeEvent) *QDynamicPropertyChangeEvent {
	ret := C.QDynamicPropertyChangeEvent_new2(param1.cPointer())
	return newQDynamicPropertyChangeEvent(ret)
}

func (this *QDynamicPropertyChangeEvent) PropertyName() *QByteArray {
	ret := C.QDynamicPropertyChangeEvent_PropertyName(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDynamicPropertyChangeEvent) Delete() {
	C.QDynamicPropertyChangeEvent_Delete(this.h)
}

type QDeferredDeleteEvent struct {
	h *C.QDeferredDeleteEvent
	*QEvent
}

func (this *QDeferredDeleteEvent) cPointer() *C.QDeferredDeleteEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDeferredDeleteEvent(h *C.QDeferredDeleteEvent) *QDeferredDeleteEvent {
	if h == nil {
		return nil
	}
	return &QDeferredDeleteEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQDeferredDeleteEvent_U(h unsafe.Pointer) *QDeferredDeleteEvent {
	return newQDeferredDeleteEvent((*C.QDeferredDeleteEvent)(h))
}

// NewQDeferredDeleteEvent constructs a new QDeferredDeleteEvent object.
func NewQDeferredDeleteEvent() *QDeferredDeleteEvent {
	ret := C.QDeferredDeleteEvent_new()
	return newQDeferredDeleteEvent(ret)
}

// NewQDeferredDeleteEvent2 constructs a new QDeferredDeleteEvent object.
func NewQDeferredDeleteEvent2(param1 *QDeferredDeleteEvent) *QDeferredDeleteEvent {
	ret := C.QDeferredDeleteEvent_new2(param1.cPointer())
	return newQDeferredDeleteEvent(ret)
}

func (this *QDeferredDeleteEvent) LoopLevel() int {
	ret := C.QDeferredDeleteEvent_LoopLevel(this.h)
	return (int)(ret)
}

func (this *QDeferredDeleteEvent) Delete() {
	C.QDeferredDeleteEvent_Delete(this.h)
}

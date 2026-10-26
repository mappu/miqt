package network

/*

#include "gen_qnetworkinformation.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QNetworkInformation__Reachability int

const (
	QNetworkInformation__Reachability__Unknown      QNetworkInformation__Reachability = 0
	QNetworkInformation__Reachability__Disconnected QNetworkInformation__Reachability = 1
	QNetworkInformation__Reachability__Local        QNetworkInformation__Reachability = 2
	QNetworkInformation__Reachability__Site         QNetworkInformation__Reachability = 3
	QNetworkInformation__Reachability__Online       QNetworkInformation__Reachability = 4
)

type QNetworkInformation__TransportMedium int

const (
	QNetworkInformation__TransportMedium__Unknown   QNetworkInformation__TransportMedium = 0
	QNetworkInformation__TransportMedium__Ethernet  QNetworkInformation__TransportMedium = 1
	QNetworkInformation__TransportMedium__Cellular  QNetworkInformation__TransportMedium = 2
	QNetworkInformation__TransportMedium__WiFi      QNetworkInformation__TransportMedium = 3
	QNetworkInformation__TransportMedium__Bluetooth QNetworkInformation__TransportMedium = 4
)

type QNetworkInformation__Feature int

const (
	QNetworkInformation__Feature__Reachability    QNetworkInformation__Feature = 1
	QNetworkInformation__Feature__CaptivePortal   QNetworkInformation__Feature = 2
	QNetworkInformation__Feature__TransportMedium QNetworkInformation__Feature = 4
	QNetworkInformation__Feature__Metered         QNetworkInformation__Feature = 8
)

type QNetworkInformation struct {
	h  *C.QNetworkInformation
	gc *[1]unsafe.Pointer
	*qt6.QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QNetworkInformation) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QNetworkInformation) cPointer() *C.QNetworkInformation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkInformation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkInformation constructs the type using only CGO pointers.
func newQNetworkInformation(h *C.QNetworkInformation) *QNetworkInformation {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QNetworkInformation_virtbase(h, &outptr_QObject)

	return &QNetworkInformation{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQNetworkInformation constructs the type using only unsafe pointers.
func UnsafeNewQNetworkInformation(h unsafe.Pointer) *QNetworkInformation {
	return newQNetworkInformation((*C.QNetworkInformation)(h))
}

func (this *QNetworkInformation) MetaObject() *qt6.QMetaObject {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkInformation_metaObject(this.h)))
}

func (this *QNetworkInformation) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkInformation_metacast(this.h, param1_Cstring))
}

func QNetworkInformation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkInformation_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkInformation) Reachability() QNetworkInformation__Reachability {
	defer runtime.KeepAlive(this)
	return (QNetworkInformation__Reachability)(C.QNetworkInformation_reachability(this.h))
}

func (this *QNetworkInformation) IsBehindCaptivePortal() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QNetworkInformation_isBehindCaptivePortal(this.h))
}

func (this *QNetworkInformation) TransportMedium() QNetworkInformation__TransportMedium {
	defer runtime.KeepAlive(this)
	return (QNetworkInformation__TransportMedium)(C.QNetworkInformation_transportMedium(this.h))
}

func (this *QNetworkInformation) IsMetered() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QNetworkInformation_isMetered(this.h))
}

func (this *QNetworkInformation) BackendName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QNetworkInformation_backendName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkInformation) Supports(features QNetworkInformation__Feature) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QNetworkInformation_supports(this.h, (C.int)(features)))
}

func (this *QNetworkInformation) SupportedFeatures() QNetworkInformation__Feature {
	defer runtime.KeepAlive(this)
	return (QNetworkInformation__Feature)(C.QNetworkInformation_supportedFeatures(this.h))
}

func QNetworkInformation_LoadDefaultBackend() bool {
	return (bool)(C.QNetworkInformation_loadDefaultBackend())
}

func QNetworkInformation_LoadBackendByFeatures(features QNetworkInformation__Feature) bool {
	return (bool)(C.QNetworkInformation_loadBackendByFeatures((C.int)(features)))
}

func QNetworkInformation_LoadWithFeatures(features QNetworkInformation__Feature) bool {
	return (bool)(C.QNetworkInformation_loadWithFeatures((C.int)(features)))
}

func QNetworkInformation_AvailableBackends() []string {
	var _ma C.struct_miqt_array = C.QNetworkInformation_availableBackends()
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QNetworkInformation_Instance() *QNetworkInformation {
	return newQNetworkInformation(C.QNetworkInformation_instance())
}

func (this *QNetworkInformation) ReachabilityChanged(newReachability QNetworkInformation__Reachability) {
	defer runtime.KeepAlive(this)
	C.QNetworkInformation_reachabilityChanged(this.h, (C.int)(newReachability))
}
func (this *QNetworkInformation) OnReachabilityChanged(slot func(newReachability QNetworkInformation__Reachability)) {
	C.QNetworkInformation_connect_reachabilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkInformation_reachabilityChanged
func miqt_exec_callback_QNetworkInformation_reachabilityChanged(cb C.intptr_t, newReachability C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newReachability QNetworkInformation__Reachability))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QNetworkInformation__Reachability)(newReachability)

	gofunc(slotval1)
}

func (this *QNetworkInformation) IsBehindCaptivePortalChanged(state bool) {
	defer runtime.KeepAlive(this)
	C.QNetworkInformation_isBehindCaptivePortalChanged(this.h, (C.bool)(state))
}
func (this *QNetworkInformation) OnIsBehindCaptivePortalChanged(slot func(state bool)) {
	C.QNetworkInformation_connect_isBehindCaptivePortalChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkInformation_isBehindCaptivePortalChanged
func miqt_exec_callback_QNetworkInformation_isBehindCaptivePortalChanged(cb C.intptr_t, state C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(state)

	gofunc(slotval1)
}

func (this *QNetworkInformation) TransportMediumChanged(current QNetworkInformation__TransportMedium) {
	defer runtime.KeepAlive(this)
	C.QNetworkInformation_transportMediumChanged(this.h, (C.int)(current))
}
func (this *QNetworkInformation) OnTransportMediumChanged(slot func(current QNetworkInformation__TransportMedium)) {
	C.QNetworkInformation_connect_transportMediumChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkInformation_transportMediumChanged
func miqt_exec_callback_QNetworkInformation_transportMediumChanged(cb C.intptr_t, current C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current QNetworkInformation__TransportMedium))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QNetworkInformation__TransportMedium)(current)

	gofunc(slotval1)
}

func (this *QNetworkInformation) IsMeteredChanged(isMetered bool) {
	defer runtime.KeepAlive(this)
	C.QNetworkInformation_isMeteredChanged(this.h, (C.bool)(isMetered))
}
func (this *QNetworkInformation) OnIsMeteredChanged(slot func(isMetered bool)) {
	C.QNetworkInformation_connect_isMeteredChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkInformation_isMeteredChanged
func miqt_exec_callback_QNetworkInformation_isMeteredChanged(cb C.intptr_t, isMetered C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(isMetered bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(isMetered)

	gofunc(slotval1)
}

func QNetworkInformation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkInformation_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkInformation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkInformation_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

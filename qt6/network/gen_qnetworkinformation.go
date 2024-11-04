package network

/*

#include "gen_qnetworkinformation.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
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
	QNetworkInformation__Reachability    QNetworkInformation__Feature = 1
	QNetworkInformation__CaptivePortal   QNetworkInformation__Feature = 2
	QNetworkInformation__TransportMedium QNetworkInformation__Feature = 4
	QNetworkInformation__Metered         QNetworkInformation__Feature = 8
)

type QNetworkInformation struct {
	h *C.QNetworkInformation
	*qt6.QObject
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

func newQNetworkInformation(h *C.QNetworkInformation) *QNetworkInformation {
	if h == nil {
		return nil
	}
	return &QNetworkInformation{h: h, QObject: qt6.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQNetworkInformation(h unsafe.Pointer) *QNetworkInformation {
	return newQNetworkInformation((*C.QNetworkInformation)(h))
}

func (this *QNetworkInformation) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkInformation_MetaObject(this.h)))
}

func (this *QNetworkInformation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkInformation_Metacast(this.h, param1_Cstring))
}

func QNetworkInformation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkInformation_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkInformation) Reachability() QNetworkInformation__Reachability {
	return (QNetworkInformation__Reachability)(C.QNetworkInformation_Reachability(this.h))
}

func (this *QNetworkInformation) IsBehindCaptivePortal() bool {
	return (bool)(C.QNetworkInformation_IsBehindCaptivePortal(this.h))
}

func (this *QNetworkInformation) TransportMedium() QNetworkInformation__TransportMedium {
	return (QNetworkInformation__TransportMedium)(C.QNetworkInformation_TransportMedium(this.h))
}

func (this *QNetworkInformation) IsMetered() bool {
	return (bool)(C.QNetworkInformation_IsMetered(this.h))
}

func (this *QNetworkInformation) BackendName() string {
	var _ms C.struct_miqt_string = C.QNetworkInformation_BackendName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkInformation) Supports(features QNetworkInformation__Feature) bool {
	return (bool)(C.QNetworkInformation_Supports(this.h, (C.int)(features)))
}

func (this *QNetworkInformation) SupportedFeatures() QNetworkInformation__Feature {
	return (QNetworkInformation__Feature)(C.QNetworkInformation_SupportedFeatures(this.h))
}

func QNetworkInformation_LoadDefaultBackend() bool {
	return (bool)(C.QNetworkInformation_LoadDefaultBackend())
}

func QNetworkInformation_LoadBackendByFeatures(features QNetworkInformation__Feature) bool {
	return (bool)(C.QNetworkInformation_LoadBackendByFeatures((C.int)(features)))
}

func QNetworkInformation_LoadWithFeatures(features QNetworkInformation__Feature) bool {
	return (bool)(C.QNetworkInformation_LoadWithFeatures((C.int)(features)))
}

func QNetworkInformation_AvailableBackends() []string {
	var _ma C.struct_miqt_array = C.QNetworkInformation_AvailableBackends()
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

func QNetworkInformation_Instance() *QNetworkInformation {
	return UnsafeNewQNetworkInformation(unsafe.Pointer(C.QNetworkInformation_Instance()))
}

func (this *QNetworkInformation) ReachabilityChanged(newReachability QNetworkInformation__Reachability) {
	C.QNetworkInformation_ReachabilityChanged(this.h, (C.int)(newReachability))
}
func (this *QNetworkInformation) OnReachabilityChanged(slot func(newReachability QNetworkInformation__Reachability)) {
	C.QNetworkInformation_connect_ReachabilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkInformation_ReachabilityChanged
func miqt_exec_callback_QNetworkInformation_ReachabilityChanged(cb C.intptr_t, newReachability C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newReachability QNetworkInformation__Reachability))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QNetworkInformation__Reachability)(newReachability)

	gofunc(slotval1)
}

func (this *QNetworkInformation) IsBehindCaptivePortalChanged(state bool) {
	C.QNetworkInformation_IsBehindCaptivePortalChanged(this.h, (C.bool)(state))
}
func (this *QNetworkInformation) OnIsBehindCaptivePortalChanged(slot func(state bool)) {
	C.QNetworkInformation_connect_IsBehindCaptivePortalChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkInformation_IsBehindCaptivePortalChanged
func miqt_exec_callback_QNetworkInformation_IsBehindCaptivePortalChanged(cb C.intptr_t, state C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(state)

	gofunc(slotval1)
}

func (this *QNetworkInformation) TransportMediumChanged(current QNetworkInformation__TransportMedium) {
	C.QNetworkInformation_TransportMediumChanged(this.h, (C.int)(current))
}
func (this *QNetworkInformation) OnTransportMediumChanged(slot func(current QNetworkInformation__TransportMedium)) {
	C.QNetworkInformation_connect_TransportMediumChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkInformation_TransportMediumChanged
func miqt_exec_callback_QNetworkInformation_TransportMediumChanged(cb C.intptr_t, current C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current QNetworkInformation__TransportMedium))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QNetworkInformation__TransportMedium)(current)

	gofunc(slotval1)
}

func (this *QNetworkInformation) IsMeteredChanged(isMetered bool) {
	C.QNetworkInformation_IsMeteredChanged(this.h, (C.bool)(isMetered))
}
func (this *QNetworkInformation) OnIsMeteredChanged(slot func(isMetered bool)) {
	C.QNetworkInformation_connect_IsMeteredChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkInformation_IsMeteredChanged
func miqt_exec_callback_QNetworkInformation_IsMeteredChanged(cb C.intptr_t, isMetered C.bool) {
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
	var _ms C.struct_miqt_string = C.QNetworkInformation_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkInformation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkInformation_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

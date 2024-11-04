package network

/*

#include "gen_qnetworkconfigmanager.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QNetworkConfigurationManager__Capability int

const (
	QNetworkConfigurationManager__CanStartAndStopInterfaces QNetworkConfigurationManager__Capability = 1
	QNetworkConfigurationManager__DirectConnectionRouting   QNetworkConfigurationManager__Capability = 2
	QNetworkConfigurationManager__SystemSessionSupport      QNetworkConfigurationManager__Capability = 4
	QNetworkConfigurationManager__ApplicationLevelRoaming   QNetworkConfigurationManager__Capability = 8
	QNetworkConfigurationManager__ForcedRoaming             QNetworkConfigurationManager__Capability = 16
	QNetworkConfigurationManager__DataStatistics            QNetworkConfigurationManager__Capability = 32
	QNetworkConfigurationManager__NetworkSessionRequired    QNetworkConfigurationManager__Capability = 64
)

type QNetworkConfigurationManager struct {
	h *C.QNetworkConfigurationManager
	*qt.QObject
}

func (this *QNetworkConfigurationManager) cPointer() *C.QNetworkConfigurationManager {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkConfigurationManager) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQNetworkConfigurationManager(h *C.QNetworkConfigurationManager) *QNetworkConfigurationManager {
	if h == nil {
		return nil
	}
	return &QNetworkConfigurationManager{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQNetworkConfigurationManager(h unsafe.Pointer) *QNetworkConfigurationManager {
	return newQNetworkConfigurationManager((*C.QNetworkConfigurationManager)(h))
}

// NewQNetworkConfigurationManager constructs a new QNetworkConfigurationManager object.
func NewQNetworkConfigurationManager() *QNetworkConfigurationManager {
	ret := C.QNetworkConfigurationManager_new()
	return newQNetworkConfigurationManager(ret)
}

// NewQNetworkConfigurationManager2 constructs a new QNetworkConfigurationManager object.
func NewQNetworkConfigurationManager2(parent *qt.QObject) *QNetworkConfigurationManager {
	ret := C.QNetworkConfigurationManager_new2((*C.QObject)(parent.UnsafePointer()))
	return newQNetworkConfigurationManager(ret)
}

func (this *QNetworkConfigurationManager) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkConfigurationManager_MetaObject(this.h)))
}

func (this *QNetworkConfigurationManager) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkConfigurationManager_Metacast(this.h, param1_Cstring))
}

func QNetworkConfigurationManager_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkConfigurationManager_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkConfigurationManager) Capabilities() QNetworkConfigurationManager__Capability {
	return (QNetworkConfigurationManager__Capability)(C.QNetworkConfigurationManager_Capabilities(this.h))
}

func (this *QNetworkConfigurationManager) DefaultConfiguration() *QNetworkConfiguration {
	_ret := C.QNetworkConfigurationManager_DefaultConfiguration(this.h)
	_goptr := newQNetworkConfiguration(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkConfigurationManager) AllConfigurations() []QNetworkConfiguration {
	var _ma C.struct_miqt_array = C.QNetworkConfigurationManager_AllConfigurations(this.h)
	_ret := make([]QNetworkConfiguration, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkConfiguration)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQNetworkConfiguration(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QNetworkConfigurationManager) ConfigurationFromIdentifier(identifier string) *QNetworkConfiguration {
	identifier_ms := C.struct_miqt_string{}
	identifier_ms.data = C.CString(identifier)
	identifier_ms.len = C.size_t(len(identifier))
	defer C.free(unsafe.Pointer(identifier_ms.data))
	_ret := C.QNetworkConfigurationManager_ConfigurationFromIdentifier(this.h, identifier_ms)
	_goptr := newQNetworkConfiguration(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkConfigurationManager) IsOnline() bool {
	return (bool)(C.QNetworkConfigurationManager_IsOnline(this.h))
}

func (this *QNetworkConfigurationManager) UpdateConfigurations() {
	C.QNetworkConfigurationManager_UpdateConfigurations(this.h)
}

func (this *QNetworkConfigurationManager) ConfigurationAdded(config *QNetworkConfiguration) {
	C.QNetworkConfigurationManager_ConfigurationAdded(this.h, config.cPointer())
}
func (this *QNetworkConfigurationManager) OnConfigurationAdded(slot func(config *QNetworkConfiguration)) {
	C.QNetworkConfigurationManager_connect_ConfigurationAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_ConfigurationAdded
func miqt_exec_callback_QNetworkConfigurationManager_ConfigurationAdded(cb C.intptr_t, config *C.QNetworkConfiguration) {
	gofunc, ok := cgo.Handle(cb).Value().(func(config *QNetworkConfiguration))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQNetworkConfiguration(unsafe.Pointer(config))

	gofunc(slotval1)
}

func (this *QNetworkConfigurationManager) ConfigurationRemoved(config *QNetworkConfiguration) {
	C.QNetworkConfigurationManager_ConfigurationRemoved(this.h, config.cPointer())
}
func (this *QNetworkConfigurationManager) OnConfigurationRemoved(slot func(config *QNetworkConfiguration)) {
	C.QNetworkConfigurationManager_connect_ConfigurationRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_ConfigurationRemoved
func miqt_exec_callback_QNetworkConfigurationManager_ConfigurationRemoved(cb C.intptr_t, config *C.QNetworkConfiguration) {
	gofunc, ok := cgo.Handle(cb).Value().(func(config *QNetworkConfiguration))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQNetworkConfiguration(unsafe.Pointer(config))

	gofunc(slotval1)
}

func (this *QNetworkConfigurationManager) ConfigurationChanged(config *QNetworkConfiguration) {
	C.QNetworkConfigurationManager_ConfigurationChanged(this.h, config.cPointer())
}
func (this *QNetworkConfigurationManager) OnConfigurationChanged(slot func(config *QNetworkConfiguration)) {
	C.QNetworkConfigurationManager_connect_ConfigurationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_ConfigurationChanged
func miqt_exec_callback_QNetworkConfigurationManager_ConfigurationChanged(cb C.intptr_t, config *C.QNetworkConfiguration) {
	gofunc, ok := cgo.Handle(cb).Value().(func(config *QNetworkConfiguration))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQNetworkConfiguration(unsafe.Pointer(config))

	gofunc(slotval1)
}

func (this *QNetworkConfigurationManager) OnlineStateChanged(isOnline bool) {
	C.QNetworkConfigurationManager_OnlineStateChanged(this.h, (C.bool)(isOnline))
}
func (this *QNetworkConfigurationManager) OnOnlineStateChanged(slot func(isOnline bool)) {
	C.QNetworkConfigurationManager_connect_OnlineStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_OnlineStateChanged
func miqt_exec_callback_QNetworkConfigurationManager_OnlineStateChanged(cb C.intptr_t, isOnline C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(isOnline bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(isOnline)

	gofunc(slotval1)
}

func (this *QNetworkConfigurationManager) UpdateCompleted() {
	C.QNetworkConfigurationManager_UpdateCompleted(this.h)
}
func (this *QNetworkConfigurationManager) OnUpdateCompleted(slot func()) {
	C.QNetworkConfigurationManager_connect_UpdateCompleted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_UpdateCompleted
func miqt_exec_callback_QNetworkConfigurationManager_UpdateCompleted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QNetworkConfigurationManager_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkConfigurationManager_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkConfigurationManager_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkConfigurationManager_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkConfigurationManager) AllConfigurations1(flags QNetworkConfiguration__StateFlag) []QNetworkConfiguration {
	var _ma C.struct_miqt_array = C.QNetworkConfigurationManager_AllConfigurations1(this.h, (C.int)(flags))
	_ret := make([]QNetworkConfiguration, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkConfiguration)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQNetworkConfiguration(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QNetworkConfigurationManager) Delete() {
	C.QNetworkConfigurationManager_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkConfigurationManager) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkConfigurationManager) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

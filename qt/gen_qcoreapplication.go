package qt

/*

#include "gen_qcoreapplication.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCoreApplication__ int

const (
	QCoreApplication__ApplicationFlags QCoreApplication__ = 331528
)

type QCoreApplication struct {
	h *C.QCoreApplication
	*QObject
}

func (this *QCoreApplication) cPointer() *C.QCoreApplication {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCoreApplication) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCoreApplication constructs the type using only CGO pointers.
func newQCoreApplication(h *C.QCoreApplication) *QCoreApplication {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QCoreApplication_virtbase(h, &outptr_QObject)

	return &QCoreApplication{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQCoreApplication constructs the type using only unsafe pointers.
func UnsafeNewQCoreApplication(h unsafe.Pointer) *QCoreApplication {
	return newQCoreApplication((*C.QCoreApplication)(h))
}

// NewQCoreApplication constructs a new QCoreApplication object.
func NewQCoreApplication(args []string) *QCoreApplication {
	// Convert []string to long-lived int& argc, char** argv, never call free()
	argc := (*C.int)(C.malloc(8))
	*argc = C.int(len(args))
	argv := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}

	runtime.LockOSThread() // Prevent Go from migrating the main Qt thread

	return newQCoreApplication(C.QCoreApplication_new(argc, &argv[0]))
}

// NewQCoreApplication2 constructs a new QCoreApplication object.
func NewQCoreApplication2(args []string, param3 int) *QCoreApplication {
	// Convert []string to long-lived int& argc, char** argv, never call free()
	argc := (*C.int)(C.malloc(8))
	*argc = C.int(len(args))
	argv := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}

	runtime.LockOSThread() // Prevent Go from migrating the main Qt thread

	return newQCoreApplication(C.QCoreApplication_new2(argc, &argv[0], (C.int)(param3)))
}

func (this *QCoreApplication) MetaObject() *QMetaObject {
	return newQMetaObject(C.QCoreApplication_metaObject(this.h))
}

func (this *QCoreApplication) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCoreApplication_metacast(this.h, param1_Cstring))
}

func QCoreApplication_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCoreApplication_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCoreApplication_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_Arguments() []string {
	var _ma C.struct_miqt_array = C.QCoreApplication_arguments()
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

func QCoreApplication_SetAttribute(attribute ApplicationAttribute) {
	C.QCoreApplication_setAttribute((C.int)(attribute))
}

func QCoreApplication_TestAttribute(attribute ApplicationAttribute) bool {
	return (bool)(C.QCoreApplication_testAttribute((C.int)(attribute)))
}

func QCoreApplication_SetOrganizationDomain(orgDomain string) {
	orgDomain_ms := C.struct_miqt_string{}
	orgDomain_ms.data = C.CString(orgDomain)
	orgDomain_ms.len = C.size_t(len(orgDomain))
	defer C.free(unsafe.Pointer(orgDomain_ms.data))
	C.QCoreApplication_setOrganizationDomain(orgDomain_ms)
}

func QCoreApplication_OrganizationDomain() string {
	var _ms C.struct_miqt_string = C.QCoreApplication_organizationDomain()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_SetOrganizationName(orgName string) {
	orgName_ms := C.struct_miqt_string{}
	orgName_ms.data = C.CString(orgName)
	orgName_ms.len = C.size_t(len(orgName))
	defer C.free(unsafe.Pointer(orgName_ms.data))
	C.QCoreApplication_setOrganizationName(orgName_ms)
}

func QCoreApplication_OrganizationName() string {
	var _ms C.struct_miqt_string = C.QCoreApplication_organizationName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_SetApplicationName(application string) {
	application_ms := C.struct_miqt_string{}
	application_ms.data = C.CString(application)
	application_ms.len = C.size_t(len(application))
	defer C.free(unsafe.Pointer(application_ms.data))
	C.QCoreApplication_setApplicationName(application_ms)
}

func QCoreApplication_ApplicationName() string {
	var _ms C.struct_miqt_string = C.QCoreApplication_applicationName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_SetApplicationVersion(version string) {
	version_ms := C.struct_miqt_string{}
	version_ms.data = C.CString(version)
	version_ms.len = C.size_t(len(version))
	defer C.free(unsafe.Pointer(version_ms.data))
	C.QCoreApplication_setApplicationVersion(version_ms)
}

func QCoreApplication_ApplicationVersion() string {
	var _ms C.struct_miqt_string = C.QCoreApplication_applicationVersion()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_SetSetuidAllowed(allow bool) {
	C.QCoreApplication_setSetuidAllowed((C.bool)(allow))
}

func QCoreApplication_IsSetuidAllowed() bool {
	return (bool)(C.QCoreApplication_isSetuidAllowed())
}

func QCoreApplication_Instance() *QCoreApplication {
	return newQCoreApplication(C.QCoreApplication_instance())
}

func QCoreApplication_Exec() int {
	return (int)(C.QCoreApplication_exec())
}

func QCoreApplication_ProcessEvents() {
	C.QCoreApplication_processEvents()
}

func QCoreApplication_ProcessEvents2(flags QEventLoop__ProcessEventsFlag, maxtime int) {
	C.QCoreApplication_processEvents2((C.int)(flags), (C.int)(maxtime))
}

func QCoreApplication_Exit() {
	C.QCoreApplication_exit()
}

func QCoreApplication_SendEvent(receiver *QObject, event *QEvent) bool {
	return (bool)(C.QCoreApplication_sendEvent(receiver.cPointer(), event.cPointer()))
}

func QCoreApplication_PostEvent(receiver *QObject, event *QEvent) {
	C.QCoreApplication_postEvent(receiver.cPointer(), event.cPointer())
}

func QCoreApplication_SendPostedEvents() {
	C.QCoreApplication_sendPostedEvents()
}

func QCoreApplication_RemovePostedEvents(receiver *QObject) {
	C.QCoreApplication_removePostedEvents(receiver.cPointer())
}

func QCoreApplication_HasPendingEvents() bool {
	return (bool)(C.QCoreApplication_hasPendingEvents())
}

func QCoreApplication_EventDispatcher() *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher(C.QCoreApplication_eventDispatcher())
}

func QCoreApplication_SetEventDispatcher(eventDispatcher *QAbstractEventDispatcher) {
	C.QCoreApplication_setEventDispatcher(eventDispatcher.cPointer())
}

func (this *QCoreApplication) Notify(param1 *QObject, param2 *QEvent) bool {
	return (bool)(C.QCoreApplication_notify(this.h, param1.cPointer(), param2.cPointer()))
}

func QCoreApplication_StartingUp() bool {
	return (bool)(C.QCoreApplication_startingUp())
}

func QCoreApplication_ClosingDown() bool {
	return (bool)(C.QCoreApplication_closingDown())
}

func QCoreApplication_ApplicationDirPath() string {
	var _ms C.struct_miqt_string = C.QCoreApplication_applicationDirPath()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_ApplicationFilePath() string {
	var _ms C.struct_miqt_string = C.QCoreApplication_applicationFilePath()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_ApplicationPid() int64 {
	return (int64)(C.QCoreApplication_applicationPid())
}

func QCoreApplication_SetLibraryPaths(libraryPaths []string) {
	libraryPaths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(libraryPaths))))
	defer C.free(unsafe.Pointer(libraryPaths_CArray))
	for i := range libraryPaths {
		libraryPaths_i_ms := C.struct_miqt_string{}
		libraryPaths_i_ms.data = C.CString(libraryPaths[i])
		libraryPaths_i_ms.len = C.size_t(len(libraryPaths[i]))
		defer C.free(unsafe.Pointer(libraryPaths_i_ms.data))
		libraryPaths_CArray[i] = libraryPaths_i_ms
	}
	libraryPaths_ma := C.struct_miqt_array{len: C.size_t(len(libraryPaths)), data: unsafe.Pointer(libraryPaths_CArray)}
	C.QCoreApplication_setLibraryPaths(libraryPaths_ma)
}

func QCoreApplication_LibraryPaths() []string {
	var _ma C.struct_miqt_array = C.QCoreApplication_libraryPaths()
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

func QCoreApplication_AddLibraryPath(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QCoreApplication_addLibraryPath(param1_ms)
}

func QCoreApplication_RemoveLibraryPath(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QCoreApplication_removeLibraryPath(param1_ms)
}

func QCoreApplication_InstallTranslator(messageFile *QTranslator) bool {
	return (bool)(C.QCoreApplication_installTranslator(messageFile.cPointer()))
}

func QCoreApplication_RemoveTranslator(messageFile *QTranslator) bool {
	return (bool)(C.QCoreApplication_removeTranslator(messageFile.cPointer()))
}

func QCoreApplication_Translate(context string, key string) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	var _ms C.struct_miqt_string = C.QCoreApplication_translate(context_Cstring, key_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_Flush() {
	C.QCoreApplication_flush()
}

func (this *QCoreApplication) InstallNativeEventFilter(filterObj *QAbstractNativeEventFilter) {
	C.QCoreApplication_installNativeEventFilter(this.h, filterObj.cPointer())
}

func (this *QCoreApplication) RemoveNativeEventFilter(filterObj *QAbstractNativeEventFilter) {
	C.QCoreApplication_removeNativeEventFilter(this.h, filterObj.cPointer())
}

func QCoreApplication_IsQuitLockEnabled() bool {
	return (bool)(C.QCoreApplication_isQuitLockEnabled())
}

func QCoreApplication_SetQuitLockEnabled(enabled bool) {
	C.QCoreApplication_setQuitLockEnabled((C.bool)(enabled))
}

func QCoreApplication_Quit() {
	C.QCoreApplication_quit()
}

func (this *QCoreApplication) OrganizationNameChanged() {
	C.QCoreApplication_organizationNameChanged(this.h)
}
func (this *QCoreApplication) OnOrganizationNameChanged(slot func()) {
	C.QCoreApplication_connect_organizationNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCoreApplication_organizationNameChanged
func miqt_exec_callback_QCoreApplication_organizationNameChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCoreApplication) OrganizationDomainChanged() {
	C.QCoreApplication_organizationDomainChanged(this.h)
}
func (this *QCoreApplication) OnOrganizationDomainChanged(slot func()) {
	C.QCoreApplication_connect_organizationDomainChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCoreApplication_organizationDomainChanged
func miqt_exec_callback_QCoreApplication_organizationDomainChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCoreApplication) ApplicationNameChanged() {
	C.QCoreApplication_applicationNameChanged(this.h)
}
func (this *QCoreApplication) OnApplicationNameChanged(slot func()) {
	C.QCoreApplication_connect_applicationNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCoreApplication_applicationNameChanged
func miqt_exec_callback_QCoreApplication_applicationNameChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCoreApplication) ApplicationVersionChanged() {
	C.QCoreApplication_applicationVersionChanged(this.h)
}
func (this *QCoreApplication) OnApplicationVersionChanged(slot func()) {
	C.QCoreApplication_connect_applicationVersionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCoreApplication_applicationVersionChanged
func miqt_exec_callback_QCoreApplication_applicationVersionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QCoreApplication_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCoreApplication_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCoreApplication_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCoreApplication_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCoreApplication_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_SetAttribute2(attribute ApplicationAttribute, on bool) {
	C.QCoreApplication_setAttribute2((C.int)(attribute), (C.bool)(on))
}

func QCoreApplication_ProcessEventsWithFlags(flags QEventLoop__ProcessEventsFlag) {
	C.QCoreApplication_processEventsWithFlags((C.int)(flags))
}

func QCoreApplication_ExitWithRetcode(retcode int) {
	C.QCoreApplication_exitWithRetcode((C.int)(retcode))
}

func QCoreApplication_PostEvent2(receiver *QObject, event *QEvent, priority int) {
	C.QCoreApplication_postEvent2(receiver.cPointer(), event.cPointer(), (C.int)(priority))
}

func QCoreApplication_SendPostedEventsWithReceiver(receiver *QObject) {
	C.QCoreApplication_sendPostedEventsWithReceiver(receiver.cPointer())
}

func QCoreApplication_SendPostedEvents2(receiver *QObject, event_type int) {
	C.QCoreApplication_sendPostedEvents2(receiver.cPointer(), (C.int)(event_type))
}

func QCoreApplication_RemovePostedEvents2(receiver *QObject, eventType int) {
	C.QCoreApplication_removePostedEvents2(receiver.cPointer(), (C.int)(eventType))
}

func QCoreApplication_Translate2(context string, key string, disambiguation string) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QCoreApplication_translate2(context_Cstring, key_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCoreApplication_Translate3(context string, key string, disambiguation string, n int) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms C.struct_miqt_string = C.QCoreApplication_translate3(context_Cstring, key_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QCoreApplication that was directly constructed.
func (this *QCoreApplication) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QCoreApplication_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QCoreApplication that was directly constructed.
func (this *QCoreApplication) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCoreApplication_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QCoreApplication that was directly constructed.
func (this *QCoreApplication) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCoreApplication_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QCoreApplication that was directly constructed.
func (this *QCoreApplication) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QCoreApplication_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QCoreApplication) callVirtualBase_Notify(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QCoreApplication_virtualbase_notify(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QCoreApplication) OnNotify(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QCoreApplication_override_virtual_notify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCoreApplication_notify
func miqt_exec_callback_QCoreApplication_notify(self *C.QCoreApplication, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QCoreApplication{h: self}).callVirtualBase_Notify, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCoreApplication) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QCoreApplication_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QCoreApplication) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QCoreApplication_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCoreApplication_event
func miqt_exec_callback_QCoreApplication_event(self *C.QCoreApplication, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QCoreApplication{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCoreApplication) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QCoreApplication_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QCoreApplication) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QCoreApplication_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCoreApplication_eventFilter
func miqt_exec_callback_QCoreApplication_eventFilter(self *C.QCoreApplication, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QCoreApplication{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCoreApplication) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QCoreApplication_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCoreApplication) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QCoreApplication_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCoreApplication_timerEvent
func miqt_exec_callback_QCoreApplication_timerEvent(self *C.QCoreApplication, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QCoreApplication{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCoreApplication) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QCoreApplication_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCoreApplication) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QCoreApplication_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCoreApplication_childEvent
func miqt_exec_callback_QCoreApplication_childEvent(self *C.QCoreApplication, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QCoreApplication{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCoreApplication) callVirtualBase_CustomEvent(event *QEvent) {

	C.QCoreApplication_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCoreApplication) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCoreApplication_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCoreApplication_customEvent
func miqt_exec_callback_QCoreApplication_customEvent(self *C.QCoreApplication, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCoreApplication{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCoreApplication) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QCoreApplication_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCoreApplication) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QCoreApplication_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCoreApplication_connectNotify
func miqt_exec_callback_QCoreApplication_connectNotify(self *C.QCoreApplication, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCoreApplication{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCoreApplication) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QCoreApplication_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCoreApplication) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QCoreApplication_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCoreApplication_disconnectNotify
func miqt_exec_callback_QCoreApplication_disconnectNotify(self *C.QCoreApplication, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCoreApplication{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QCoreApplication) OnAboutToQuit(slot func()) {
	C.QCoreApplication_connect_aboutToQuit(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCoreApplication_aboutToQuit
func miqt_exec_callback_QCoreApplication_aboutToQuit(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

// Delete this object from C++ memory.
func (this *QCoreApplication) Delete() {
	C.QCoreApplication_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCoreApplication) GoGC() {
	runtime.SetFinalizer(this, func(this *QCoreApplication) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

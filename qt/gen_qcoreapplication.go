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
	QCoreApplication____ApplicationFlags QCoreApplication__ = 331528
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

func newQCoreApplication(h *C.QCoreApplication) *QCoreApplication {
	if h == nil {
		return nil
	}
	return &QCoreApplication{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQCoreApplication_U(h unsafe.Pointer) *QCoreApplication {
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
	ret := C.QCoreApplication_new(argc, &argv[0])
	return newQCoreApplication(ret)
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
	ret := C.QCoreApplication_new2(argc, &argv[0], (C.int)(param3))
	return newQCoreApplication(ret)
}

func (this *QCoreApplication) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QCoreApplication_MetaObject(this.h)))
}

func QCoreApplication_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QCoreApplication_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QCoreApplication_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_Arguments() []string {
	var _ma *C.struct_miqt_array = C.QCoreApplication_Arguments()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QCoreApplication_SetAttribute(attribute ApplicationAttribute) {
	C.QCoreApplication_SetAttribute((C.int)(attribute))
}

func QCoreApplication_TestAttribute(attribute ApplicationAttribute) bool {
	return (bool)(C.QCoreApplication_TestAttribute((C.int)(attribute)))
}

func QCoreApplication_SetOrganizationDomain(orgDomain string) {
	orgDomain_ms := miqt_strdupg(orgDomain)
	defer C.free(orgDomain_ms)
	C.QCoreApplication_SetOrganizationDomain((*C.struct_miqt_string)(orgDomain_ms))
}

func QCoreApplication_OrganizationDomain() string {
	var _ms *C.struct_miqt_string = C.QCoreApplication_OrganizationDomain()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_SetOrganizationName(orgName string) {
	orgName_ms := miqt_strdupg(orgName)
	defer C.free(orgName_ms)
	C.QCoreApplication_SetOrganizationName((*C.struct_miqt_string)(orgName_ms))
}

func QCoreApplication_OrganizationName() string {
	var _ms *C.struct_miqt_string = C.QCoreApplication_OrganizationName()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_SetApplicationName(application string) {
	application_ms := miqt_strdupg(application)
	defer C.free(application_ms)
	C.QCoreApplication_SetApplicationName((*C.struct_miqt_string)(application_ms))
}

func QCoreApplication_ApplicationName() string {
	var _ms *C.struct_miqt_string = C.QCoreApplication_ApplicationName()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_SetApplicationVersion(version string) {
	version_ms := miqt_strdupg(version)
	defer C.free(version_ms)
	C.QCoreApplication_SetApplicationVersion((*C.struct_miqt_string)(version_ms))
}

func QCoreApplication_ApplicationVersion() string {
	var _ms *C.struct_miqt_string = C.QCoreApplication_ApplicationVersion()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_SetSetuidAllowed(allow bool) {
	C.QCoreApplication_SetSetuidAllowed((C.bool)(allow))
}

func QCoreApplication_IsSetuidAllowed() bool {
	return (bool)(C.QCoreApplication_IsSetuidAllowed())
}

func QCoreApplication_Instance() *QCoreApplication {
	return newQCoreApplication_U(unsafe.Pointer(C.QCoreApplication_Instance()))
}

func QCoreApplication_Exec() int {
	return (int)(C.QCoreApplication_Exec())
}

func QCoreApplication_ProcessEvents() {
	C.QCoreApplication_ProcessEvents()
}

func QCoreApplication_ProcessEvents2(flags QEventLoop__ProcessEventsFlag, maxtime int) {
	C.QCoreApplication_ProcessEvents2((C.int)(flags), (C.int)(maxtime))
}

func QCoreApplication_Exit() {
	C.QCoreApplication_Exit()
}

func QCoreApplication_SendEvent(receiver *QObject, event *QEvent) bool {
	return (bool)(C.QCoreApplication_SendEvent(receiver.cPointer(), event.cPointer()))
}

func QCoreApplication_PostEvent(receiver *QObject, event *QEvent) {
	C.QCoreApplication_PostEvent(receiver.cPointer(), event.cPointer())
}

func QCoreApplication_SendPostedEvents() {
	C.QCoreApplication_SendPostedEvents()
}

func QCoreApplication_RemovePostedEvents(receiver *QObject) {
	C.QCoreApplication_RemovePostedEvents(receiver.cPointer())
}

func QCoreApplication_HasPendingEvents() bool {
	return (bool)(C.QCoreApplication_HasPendingEvents())
}

func QCoreApplication_EventDispatcher() *QAbstractEventDispatcher {
	return newQAbstractEventDispatcher_U(unsafe.Pointer(C.QCoreApplication_EventDispatcher()))
}

func QCoreApplication_SetEventDispatcher(eventDispatcher *QAbstractEventDispatcher) {
	C.QCoreApplication_SetEventDispatcher(eventDispatcher.cPointer())
}

func (this *QCoreApplication) Notify(param1 *QObject, param2 *QEvent) bool {
	return (bool)(C.QCoreApplication_Notify(this.h, param1.cPointer(), param2.cPointer()))
}

func QCoreApplication_StartingUp() bool {
	return (bool)(C.QCoreApplication_StartingUp())
}

func QCoreApplication_ClosingDown() bool {
	return (bool)(C.QCoreApplication_ClosingDown())
}

func QCoreApplication_ApplicationDirPath() string {
	var _ms *C.struct_miqt_string = C.QCoreApplication_ApplicationDirPath()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_ApplicationFilePath() string {
	var _ms *C.struct_miqt_string = C.QCoreApplication_ApplicationFilePath()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_ApplicationPid() int64 {
	return (int64)(C.QCoreApplication_ApplicationPid())
}

func QCoreApplication_SetLibraryPaths(libraryPaths []string) {
	// For the C ABI, malloc a C array of raw pointers
	libraryPaths_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(libraryPaths))))
	defer C.free(unsafe.Pointer(libraryPaths_CArray))
	for i := range libraryPaths {
		libraryPaths_i_ms := miqt_strdupg(libraryPaths[i])
		defer C.free(libraryPaths_i_ms)
		libraryPaths_CArray[i] = (*C.struct_miqt_string)(libraryPaths_i_ms)
	}
	libraryPaths_ma := &C.struct_miqt_array{len: C.size_t(len(libraryPaths)), data: unsafe.Pointer(libraryPaths_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(libraryPaths_ma))
	C.QCoreApplication_SetLibraryPaths(libraryPaths_ma)
}

func QCoreApplication_LibraryPaths() []string {
	var _ma *C.struct_miqt_array = C.QCoreApplication_LibraryPaths()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QCoreApplication_AddLibraryPath(param1 string) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QCoreApplication_AddLibraryPath((*C.struct_miqt_string)(param1_ms))
}

func QCoreApplication_RemoveLibraryPath(param1 string) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QCoreApplication_RemoveLibraryPath((*C.struct_miqt_string)(param1_ms))
}

func QCoreApplication_InstallTranslator(messageFile *QTranslator) bool {
	return (bool)(C.QCoreApplication_InstallTranslator(messageFile.cPointer()))
}

func QCoreApplication_RemoveTranslator(messageFile *QTranslator) bool {
	return (bool)(C.QCoreApplication_RemoveTranslator(messageFile.cPointer()))
}

func QCoreApplication_Translate(context string, key string) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	var _ms *C.struct_miqt_string = C.QCoreApplication_Translate(context_Cstring, key_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_Flush() {
	C.QCoreApplication_Flush()
}

func (this *QCoreApplication) InstallNativeEventFilter(filterObj *QAbstractNativeEventFilter) {
	C.QCoreApplication_InstallNativeEventFilter(this.h, filterObj.cPointer())
}

func (this *QCoreApplication) RemoveNativeEventFilter(filterObj *QAbstractNativeEventFilter) {
	C.QCoreApplication_RemoveNativeEventFilter(this.h, filterObj.cPointer())
}

func QCoreApplication_IsQuitLockEnabled() bool {
	return (bool)(C.QCoreApplication_IsQuitLockEnabled())
}

func QCoreApplication_SetQuitLockEnabled(enabled bool) {
	C.QCoreApplication_SetQuitLockEnabled((C.bool)(enabled))
}

func QCoreApplication_Quit() {
	C.QCoreApplication_Quit()
}

func (this *QCoreApplication) OrganizationNameChanged() {
	C.QCoreApplication_OrganizationNameChanged(this.h)
}
func (this *QCoreApplication) OnOrganizationNameChanged(slot func()) {
	C.QCoreApplication_connect_OrganizationNameChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QCoreApplication_OrganizationNameChanged
func miqt_exec_callback_QCoreApplication_OrganizationNameChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCoreApplication) OrganizationDomainChanged() {
	C.QCoreApplication_OrganizationDomainChanged(this.h)
}
func (this *QCoreApplication) OnOrganizationDomainChanged(slot func()) {
	C.QCoreApplication_connect_OrganizationDomainChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QCoreApplication_OrganizationDomainChanged
func miqt_exec_callback_QCoreApplication_OrganizationDomainChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCoreApplication) ApplicationNameChanged() {
	C.QCoreApplication_ApplicationNameChanged(this.h)
}
func (this *QCoreApplication) OnApplicationNameChanged(slot func()) {
	C.QCoreApplication_connect_ApplicationNameChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QCoreApplication_ApplicationNameChanged
func miqt_exec_callback_QCoreApplication_ApplicationNameChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCoreApplication) ApplicationVersionChanged() {
	C.QCoreApplication_ApplicationVersionChanged(this.h)
}
func (this *QCoreApplication) OnApplicationVersionChanged(slot func()) {
	C.QCoreApplication_connect_ApplicationVersionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QCoreApplication_ApplicationVersionChanged
func miqt_exec_callback_QCoreApplication_ApplicationVersionChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
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
	var _ms *C.struct_miqt_string = C.QCoreApplication_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCoreApplication_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCoreApplication_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCoreApplication_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_SetAttribute2(attribute ApplicationAttribute, on bool) {
	C.QCoreApplication_SetAttribute2((C.int)(attribute), (C.bool)(on))
}

func QCoreApplication_ProcessEvents1(flags QEventLoop__ProcessEventsFlag) {
	C.QCoreApplication_ProcessEvents1((C.int)(flags))
}

func QCoreApplication_Exit1(retcode int) {
	C.QCoreApplication_Exit1((C.int)(retcode))
}

func QCoreApplication_PostEvent3(receiver *QObject, event *QEvent, priority int) {
	C.QCoreApplication_PostEvent3(receiver.cPointer(), event.cPointer(), (C.int)(priority))
}

func QCoreApplication_SendPostedEvents1(receiver *QObject) {
	C.QCoreApplication_SendPostedEvents1(receiver.cPointer())
}

func QCoreApplication_SendPostedEvents2(receiver *QObject, event_type int) {
	C.QCoreApplication_SendPostedEvents2(receiver.cPointer(), (C.int)(event_type))
}

func QCoreApplication_RemovePostedEvents2(receiver *QObject, eventType int) {
	C.QCoreApplication_RemovePostedEvents2(receiver.cPointer(), (C.int)(eventType))
}

func QCoreApplication_Translate3(context string, key string, disambiguation string) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms *C.struct_miqt_string = C.QCoreApplication_Translate3(context_Cstring, key_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCoreApplication_Translate4(context string, key string, disambiguation string, n int) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms *C.struct_miqt_string = C.QCoreApplication_Translate4(context_Cstring, key_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCoreApplication) Delete() {
	C.QCoreApplication_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCoreApplication) GoGC() {
	runtime.SetFinalizer(this, func(this *QCoreApplication) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

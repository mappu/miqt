package qt

/*

#include "gen_qcoreapplication.h"
#include <stdlib.h>

*/
import "C"

import (
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
	ret := C.QCoreApplication_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QCoreApplication_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_Arguments() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QCoreApplication_Arguments(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_SetAttribute(attribute ApplicationAttribute) {
	C.QCoreApplication_SetAttribute((C.uintptr_t)(attribute))
}

func QCoreApplication_TestAttribute(attribute ApplicationAttribute) bool {
	ret := C.QCoreApplication_TestAttribute((C.uintptr_t)(attribute))
	return (bool)(ret)
}

func QCoreApplication_SetOrganizationDomain(orgDomain string) {
	orgDomain_Cstring := C.CString(orgDomain)
	defer C.free(unsafe.Pointer(orgDomain_Cstring))
	C.QCoreApplication_SetOrganizationDomain(orgDomain_Cstring, C.size_t(len(orgDomain)))
}

func QCoreApplication_OrganizationDomain() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_OrganizationDomain(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_SetOrganizationName(orgName string) {
	orgName_Cstring := C.CString(orgName)
	defer C.free(unsafe.Pointer(orgName_Cstring))
	C.QCoreApplication_SetOrganizationName(orgName_Cstring, C.size_t(len(orgName)))
}

func QCoreApplication_OrganizationName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_OrganizationName(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_SetApplicationName(application string) {
	application_Cstring := C.CString(application)
	defer C.free(unsafe.Pointer(application_Cstring))
	C.QCoreApplication_SetApplicationName(application_Cstring, C.size_t(len(application)))
}

func QCoreApplication_ApplicationName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_ApplicationName(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_SetApplicationVersion(version string) {
	version_Cstring := C.CString(version)
	defer C.free(unsafe.Pointer(version_Cstring))
	C.QCoreApplication_SetApplicationVersion(version_Cstring, C.size_t(len(version)))
}

func QCoreApplication_ApplicationVersion() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_ApplicationVersion(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_SetSetuidAllowed(allow bool) {
	C.QCoreApplication_SetSetuidAllowed((C.bool)(allow))
}

func QCoreApplication_IsSetuidAllowed() bool {
	ret := C.QCoreApplication_IsSetuidAllowed()
	return (bool)(ret)
}

func QCoreApplication_Instance() *QCoreApplication {
	ret := C.QCoreApplication_Instance()
	return newQCoreApplication_U(unsafe.Pointer(ret))
}

func QCoreApplication_Exec() int {
	ret := C.QCoreApplication_Exec()
	return (int)(ret)
}

func QCoreApplication_ProcessEvents() {
	C.QCoreApplication_ProcessEvents()
}

func QCoreApplication_ProcessEvents2(flags int, maxtime int) {
	C.QCoreApplication_ProcessEvents2((C.int)(flags), (C.int)(maxtime))
}

func QCoreApplication_Exit() {
	C.QCoreApplication_Exit()
}

func QCoreApplication_SendEvent(receiver *QObject, event *QEvent) bool {
	ret := C.QCoreApplication_SendEvent(receiver.cPointer(), event.cPointer())
	return (bool)(ret)
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
	ret := C.QCoreApplication_HasPendingEvents()
	return (bool)(ret)
}

func QCoreApplication_EventDispatcher() *QAbstractEventDispatcher {
	ret := C.QCoreApplication_EventDispatcher()
	return newQAbstractEventDispatcher_U(unsafe.Pointer(ret))
}

func QCoreApplication_SetEventDispatcher(eventDispatcher *QAbstractEventDispatcher) {
	C.QCoreApplication_SetEventDispatcher(eventDispatcher.cPointer())
}

func (this *QCoreApplication) Notify(param1 *QObject, param2 *QEvent) bool {
	ret := C.QCoreApplication_Notify(this.h, param1.cPointer(), param2.cPointer())
	return (bool)(ret)
}

func QCoreApplication_StartingUp() bool {
	ret := C.QCoreApplication_StartingUp()
	return (bool)(ret)
}

func QCoreApplication_ClosingDown() bool {
	ret := C.QCoreApplication_ClosingDown()
	return (bool)(ret)
}

func QCoreApplication_ApplicationDirPath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_ApplicationDirPath(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_ApplicationFilePath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_ApplicationFilePath(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_ApplicationPid() int64 {
	ret := C.QCoreApplication_ApplicationPid()
	return (int64)(ret)
}

func QCoreApplication_SetLibraryPaths(libraryPaths []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	libraryPaths_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(libraryPaths))))
	libraryPaths_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(libraryPaths))))
	defer C.free(unsafe.Pointer(libraryPaths_CArray))
	defer C.free(unsafe.Pointer(libraryPaths_Lengths))
	for i := range libraryPaths {
		single_cstring := C.CString(libraryPaths[i])
		defer C.free(unsafe.Pointer(single_cstring))
		libraryPaths_CArray[i] = single_cstring
		libraryPaths_Lengths[i] = (C.uint64_t)(len(libraryPaths[i]))
	}
	C.QCoreApplication_SetLibraryPaths(&libraryPaths_CArray[0], &libraryPaths_Lengths[0], C.size_t(len(libraryPaths)))
}

func QCoreApplication_LibraryPaths() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QCoreApplication_LibraryPaths(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_AddLibraryPath(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QCoreApplication_AddLibraryPath(param1_Cstring, C.size_t(len(param1)))
}

func QCoreApplication_RemoveLibraryPath(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QCoreApplication_RemoveLibraryPath(param1_Cstring, C.size_t(len(param1)))
}

func QCoreApplication_InstallTranslator(messageFile *QTranslator) bool {
	ret := C.QCoreApplication_InstallTranslator(messageFile.cPointer())
	return (bool)(ret)
}

func QCoreApplication_RemoveTranslator(messageFile *QTranslator) bool {
	ret := C.QCoreApplication_RemoveTranslator(messageFile.cPointer())
	return (bool)(ret)
}

func QCoreApplication_Translate(context string, key string) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_Translate(context_Cstring, key_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
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
	ret := C.QCoreApplication_IsQuitLockEnabled()
	return (bool)(ret)
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
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCoreApplication_connect_OrganizationNameChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QCoreApplication) OrganizationDomainChanged() {
	C.QCoreApplication_OrganizationDomainChanged(this.h)
}

func (this *QCoreApplication) OnOrganizationDomainChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCoreApplication_connect_OrganizationDomainChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QCoreApplication) ApplicationNameChanged() {
	C.QCoreApplication_ApplicationNameChanged(this.h)
}

func (this *QCoreApplication) OnApplicationNameChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCoreApplication_connect_ApplicationNameChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QCoreApplication) ApplicationVersionChanged() {
	C.QCoreApplication_ApplicationVersionChanged(this.h)
}

func (this *QCoreApplication) OnApplicationVersionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QCoreApplication_connect_ApplicationVersionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QCoreApplication_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_SetAttribute2(attribute ApplicationAttribute, on bool) {
	C.QCoreApplication_SetAttribute2((C.uintptr_t)(attribute), (C.bool)(on))
}

func QCoreApplication_ProcessEvents1(flags int) {
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_Translate3(context_Cstring, key_Cstring, disambiguation_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QCoreApplication_Translate4(context string, key string, disambiguation string, n int) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QCoreApplication_Translate4(context_Cstring, key_Cstring, disambiguation_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QCoreApplication) Delete() {
	C.QCoreApplication_Delete(this.h)
}

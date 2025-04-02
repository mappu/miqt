package qml

/*

#include "gen_qqmlengine.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QQmlImageProviderBase__ImageType int

const (
	QQmlImageProviderBase__Invalid       QQmlImageProviderBase__ImageType = 0
	QQmlImageProviderBase__Image         QQmlImageProviderBase__ImageType = 1
	QQmlImageProviderBase__Pixmap        QQmlImageProviderBase__ImageType = 2
	QQmlImageProviderBase__Texture       QQmlImageProviderBase__ImageType = 3
	QQmlImageProviderBase__ImageResponse QQmlImageProviderBase__ImageType = 4
)

type QQmlImageProviderBase__Flag int

const (
	QQmlImageProviderBase__ForceAsynchronousImageLoading QQmlImageProviderBase__Flag = 1
)

type QQmlImageProviderBase struct {
	h *C.QQmlImageProviderBase
	*qt6.QObject
}

func (this *QQmlImageProviderBase) cPointer() *C.QQmlImageProviderBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlImageProviderBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlImageProviderBase constructs the type using only CGO pointers.
func newQQmlImageProviderBase(h *C.QQmlImageProviderBase) *QQmlImageProviderBase {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QQmlImageProviderBase_virtbase(h, &outptr_QObject)

	return &QQmlImageProviderBase{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQQmlImageProviderBase constructs the type using only unsafe pointers.
func UnsafeNewQQmlImageProviderBase(h unsafe.Pointer) *QQmlImageProviderBase {
	return newQQmlImageProviderBase((*C.QQmlImageProviderBase)(h))
}

func (this *QQmlImageProviderBase) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QQmlImageProviderBase_metaObject(this.h)))
}

func (this *QQmlImageProviderBase) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QQmlImageProviderBase_metacast(this.h, param1_Cstring))
}

func QQmlImageProviderBase_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QQmlImageProviderBase_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlImageProviderBase) ImageType() QQmlImageProviderBase__ImageType {
	return (QQmlImageProviderBase__ImageType)(C.QQmlImageProviderBase_imageType(this.h))
}

func (this *QQmlImageProviderBase) Flags() QQmlImageProviderBase__Flag {
	return (QQmlImageProviderBase__Flag)(C.QQmlImageProviderBase_flags(this.h))
}

func QQmlImageProviderBase_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlImageProviderBase_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QQmlImageProviderBase_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlImageProviderBase_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QQmlImageProviderBase) Delete() {
	C.QQmlImageProviderBase_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlImageProviderBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlImageProviderBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QQmlEngine struct {
	h *C.QQmlEngine
	*QJSEngine
}

func (this *QQmlEngine) cPointer() *C.QQmlEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlEngine constructs the type using only CGO pointers.
func newQQmlEngine(h *C.QQmlEngine) *QQmlEngine {
	if h == nil {
		return nil
	}
	var outptr_QJSEngine *C.QJSEngine = nil
	C.QQmlEngine_virtbase(h, &outptr_QJSEngine)

	return &QQmlEngine{h: h,
		QJSEngine: newQJSEngine(outptr_QJSEngine)}
}

// UnsafeNewQQmlEngine constructs the type using only unsafe pointers.
func UnsafeNewQQmlEngine(h unsafe.Pointer) *QQmlEngine {
	return newQQmlEngine((*C.QQmlEngine)(h))
}

// NewQQmlEngine constructs a new QQmlEngine object.
func NewQQmlEngine() *QQmlEngine {

	return newQQmlEngine(C.QQmlEngine_new())
}

// NewQQmlEngine2 constructs a new QQmlEngine object.
func NewQQmlEngine2(p *qt6.QObject) *QQmlEngine {

	return newQQmlEngine(C.QQmlEngine_new2((*C.QObject)(p.UnsafePointer())))
}

func (this *QQmlEngine) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QQmlEngine_metaObject(this.h)))
}

func (this *QQmlEngine) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QQmlEngine_metacast(this.h, param1_Cstring))
}

func QQmlEngine_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QQmlEngine_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlEngine) RootContext() *QQmlContext {
	return newQQmlContext(C.QQmlEngine_rootContext(this.h))
}

func (this *QQmlEngine) ClearComponentCache() {
	C.QQmlEngine_clearComponentCache(this.h)
}

func (this *QQmlEngine) TrimComponentCache() {
	C.QQmlEngine_trimComponentCache(this.h)
}

func (this *QQmlEngine) ClearSingletons() {
	C.QQmlEngine_clearSingletons(this.h)
}

func (this *QQmlEngine) ImportPathList() []string {
	var _ma C.struct_miqt_array = C.QQmlEngine_importPathList(this.h)
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

func (this *QQmlEngine) SetImportPathList(paths []string) {
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	C.QQmlEngine_setImportPathList(this.h, paths_ma)
}

func (this *QQmlEngine) AddImportPath(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QQmlEngine_addImportPath(this.h, dir_ms)
}

func (this *QQmlEngine) PluginPathList() []string {
	var _ma C.struct_miqt_array = C.QQmlEngine_pluginPathList(this.h)
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

func (this *QQmlEngine) SetPluginPathList(paths []string) {
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	C.QQmlEngine_setPluginPathList(this.h, paths_ma)
}

func (this *QQmlEngine) AddPluginPath(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QQmlEngine_addPluginPath(this.h, dir_ms)
}

func (this *QQmlEngine) AddNamedBundle(param1 string, param2 string) bool {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	return (bool)(C.QQmlEngine_addNamedBundle(this.h, param1_ms, param2_ms))
}

func (this *QQmlEngine) ImportPlugin(filePath string, uri string, errors []QQmlError) bool {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	uri_ms := C.struct_miqt_string{}
	uri_ms.data = C.CString(uri)
	uri_ms.len = C.size_t(len(uri))
	defer C.free(unsafe.Pointer(uri_ms.data))
	errors_CArray := (*[0xffff]*C.QQmlError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	return (bool)(C.QQmlEngine_importPlugin(this.h, filePath_ms, uri_ms, errors_ma))
}

func (this *QQmlEngine) SetNetworkAccessManagerFactory(networkAccessManagerFactory *QQmlNetworkAccessManagerFactory) {
	C.QQmlEngine_setNetworkAccessManagerFactory(this.h, networkAccessManagerFactory.cPointer())
}

func (this *QQmlEngine) NetworkAccessManagerFactory() *QQmlNetworkAccessManagerFactory {
	return newQQmlNetworkAccessManagerFactory(C.QQmlEngine_networkAccessManagerFactory(this.h))
}

func (this *QQmlEngine) SetUrlInterceptor(urlInterceptor *QQmlAbstractUrlInterceptor) {
	C.QQmlEngine_setUrlInterceptor(this.h, urlInterceptor.cPointer())
}

func (this *QQmlEngine) UrlInterceptor() *QQmlAbstractUrlInterceptor {
	return newQQmlAbstractUrlInterceptor(C.QQmlEngine_urlInterceptor(this.h))
}

func (this *QQmlEngine) AddUrlInterceptor(urlInterceptor *QQmlAbstractUrlInterceptor) {
	C.QQmlEngine_addUrlInterceptor(this.h, urlInterceptor.cPointer())
}

func (this *QQmlEngine) RemoveUrlInterceptor(urlInterceptor *QQmlAbstractUrlInterceptor) {
	C.QQmlEngine_removeUrlInterceptor(this.h, urlInterceptor.cPointer())
}

func (this *QQmlEngine) UrlInterceptors() []*QQmlAbstractUrlInterceptor {
	var _ma C.struct_miqt_array = C.QQmlEngine_urlInterceptors(this.h)
	_ret := make([]*QQmlAbstractUrlInterceptor, int(_ma.len))
	_outCast := (*[0xffff]*C.QQmlAbstractUrlInterceptor)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQQmlAbstractUrlInterceptor(_outCast[i])
	}
	return _ret
}

func (this *QQmlEngine) InterceptUrl(url *qt6.QUrl, typeVal QQmlAbstractUrlInterceptor__DataType) *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QQmlEngine_interceptUrl(this.h, (*C.QUrl)(url.UnsafePointer()), (C.int)(typeVal))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlEngine) AddImageProvider(id string, param2 *QQmlImageProviderBase) {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	C.QQmlEngine_addImageProvider(this.h, id_ms, param2.cPointer())
}

func (this *QQmlEngine) ImageProvider(id string) *QQmlImageProviderBase {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	return newQQmlImageProviderBase(C.QQmlEngine_imageProvider(this.h, id_ms))
}

func (this *QQmlEngine) RemoveImageProvider(id string) {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	C.QQmlEngine_removeImageProvider(this.h, id_ms)
}

func (this *QQmlEngine) SetIncubationController(incubationController *QQmlIncubationController) {
	C.QQmlEngine_setIncubationController(this.h, incubationController.cPointer())
}

func (this *QQmlEngine) IncubationController() *QQmlIncubationController {
	return newQQmlIncubationController(C.QQmlEngine_incubationController(this.h))
}

func (this *QQmlEngine) SetOfflineStoragePath(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QQmlEngine_setOfflineStoragePath(this.h, dir_ms)
}

func (this *QQmlEngine) OfflineStoragePath() string {
	var _ms C.struct_miqt_string = C.QQmlEngine_offlineStoragePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlEngine) OfflineStorageDatabaseFilePath(databaseName string) string {
	databaseName_ms := C.struct_miqt_string{}
	databaseName_ms.data = C.CString(databaseName)
	databaseName_ms.len = C.size_t(len(databaseName))
	defer C.free(unsafe.Pointer(databaseName_ms.data))
	var _ms C.struct_miqt_string = C.QQmlEngine_offlineStorageDatabaseFilePath(this.h, databaseName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlEngine) BaseUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QQmlEngine_baseUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlEngine) SetBaseUrl(baseUrl *qt6.QUrl) {
	C.QQmlEngine_setBaseUrl(this.h, (*C.QUrl)(baseUrl.UnsafePointer()))
}

func (this *QQmlEngine) OutputWarningsToStandardError() bool {
	return (bool)(C.QQmlEngine_outputWarningsToStandardError(this.h))
}

func (this *QQmlEngine) SetOutputWarningsToStandardError(outputWarningsToStandardError bool) {
	C.QQmlEngine_setOutputWarningsToStandardError(this.h, (C.bool)(outputWarningsToStandardError))
}

func (this *QQmlEngine) CaptureProperty(object *qt6.QObject, property *qt6.QMetaProperty) {
	C.QQmlEngine_captureProperty(this.h, (*C.QObject)(object.UnsafePointer()), (*C.QMetaProperty)(property.UnsafePointer()))
}

func (this *QQmlEngine) Retranslate() {
	C.QQmlEngine_retranslate(this.h)
}

func QQmlEngine_ContextForObject(param1 *qt6.QObject) *QQmlContext {
	return newQQmlContext(C.QQmlEngine_contextForObject((*C.QObject)(param1.UnsafePointer())))
}

func QQmlEngine_SetContextForObject(param1 *qt6.QObject, param2 *QQmlContext) {
	C.QQmlEngine_setContextForObject((*C.QObject)(param1.UnsafePointer()), param2.cPointer())
}

func (this *QQmlEngine) Quit() {
	C.QQmlEngine_quit(this.h)
}
func (this *QQmlEngine) OnQuit(slot func()) {
	C.QQmlEngine_connect_quit(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QQmlEngine_quit
func miqt_exec_callback_QQmlEngine_quit(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QQmlEngine) Exit(retCode int) {
	C.QQmlEngine_exit(this.h, (C.int)(retCode))
}
func (this *QQmlEngine) OnExit(slot func(retCode int)) {
	C.QQmlEngine_connect_exit(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QQmlEngine_exit
func miqt_exec_callback_QQmlEngine_exit(cb C.intptr_t, retCode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(retCode int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(retCode)

	gofunc(slotval1)
}

func (this *QQmlEngine) Warnings(warnings []QQmlError) {
	warnings_CArray := (*[0xffff]*C.QQmlError)(C.malloc(C.size_t(8 * len(warnings))))
	defer C.free(unsafe.Pointer(warnings_CArray))
	for i := range warnings {
		warnings_CArray[i] = warnings[i].cPointer()
	}
	warnings_ma := C.struct_miqt_array{len: C.size_t(len(warnings)), data: unsafe.Pointer(warnings_CArray)}
	C.QQmlEngine_warnings(this.h, warnings_ma)
}
func (this *QQmlEngine) OnWarnings(slot func(warnings []QQmlError)) {
	C.QQmlEngine_connect_warnings(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QQmlEngine_warnings
func miqt_exec_callback_QQmlEngine_warnings(cb C.intptr_t, warnings C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(warnings []QQmlError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var warnings_ma C.struct_miqt_array = warnings
	warnings_ret := make([]QQmlError, int(warnings_ma.len))
	warnings_outCast := (*[0xffff]*C.QQmlError)(unsafe.Pointer(warnings_ma.data)) // hey ya
	for i := 0; i < int(warnings_ma.len); i++ {
		warnings_lv_goptr := newQQmlError(warnings_outCast[i])
		warnings_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		warnings_ret[i] = *warnings_lv_goptr
	}
	slotval1 := warnings_ret

	gofunc(slotval1)
}

func QQmlEngine_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlEngine_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QQmlEngine_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlEngine_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QQmlEngine that was directly constructed.
func (this *QQmlEngine) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlEngine_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QQmlEngine that was directly constructed.
func (this *QQmlEngine) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlEngine_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QQmlEngine that was directly constructed.
func (this *QQmlEngine) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlEngine_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QQmlEngine that was directly constructed.
func (this *QQmlEngine) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QQmlEngine_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QQmlEngine) callVirtualBase_Event(param1 *qt6.QEvent) bool {

	return (bool)(C.QQmlEngine_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QQmlEngine) OnEvent(slot func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool) {
	ok := C.QQmlEngine_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlEngine_event
func miqt_exec_callback_QQmlEngine_event(self *C.QQmlEngine, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QQmlEngine{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QQmlEngine) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QQmlEngine_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QQmlEngine) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QQmlEngine_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlEngine_eventFilter
func miqt_exec_callback_QQmlEngine_eventFilter(self *C.QQmlEngine, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QQmlEngine{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QQmlEngine) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QQmlEngine_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QQmlEngine) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QQmlEngine_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlEngine_timerEvent
func miqt_exec_callback_QQmlEngine_timerEvent(self *C.QQmlEngine, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QQmlEngine{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QQmlEngine) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QQmlEngine_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QQmlEngine) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QQmlEngine_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlEngine_childEvent
func miqt_exec_callback_QQmlEngine_childEvent(self *C.QQmlEngine, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QQmlEngine{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QQmlEngine) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QQmlEngine_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QQmlEngine) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QQmlEngine_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlEngine_customEvent
func miqt_exec_callback_QQmlEngine_customEvent(self *C.QQmlEngine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QQmlEngine{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QQmlEngine) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlEngine_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlEngine) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlEngine_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlEngine_connectNotify
func miqt_exec_callback_QQmlEngine_connectNotify(self *C.QQmlEngine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlEngine{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QQmlEngine) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlEngine_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlEngine) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlEngine_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlEngine_disconnectNotify
func miqt_exec_callback_QQmlEngine_disconnectNotify(self *C.QQmlEngine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlEngine{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlEngine) Delete() {
	C.QQmlEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

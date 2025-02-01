package network

/*

#include "gen_qnetworkreply.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QNetworkReply__NetworkError int

const (
	QNetworkReply__NoError                           QNetworkReply__NetworkError = 0
	QNetworkReply__ConnectionRefusedError            QNetworkReply__NetworkError = 1
	QNetworkReply__RemoteHostClosedError             QNetworkReply__NetworkError = 2
	QNetworkReply__HostNotFoundError                 QNetworkReply__NetworkError = 3
	QNetworkReply__TimeoutError                      QNetworkReply__NetworkError = 4
	QNetworkReply__OperationCanceledError            QNetworkReply__NetworkError = 5
	QNetworkReply__SslHandshakeFailedError           QNetworkReply__NetworkError = 6
	QNetworkReply__TemporaryNetworkFailureError      QNetworkReply__NetworkError = 7
	QNetworkReply__NetworkSessionFailedError         QNetworkReply__NetworkError = 8
	QNetworkReply__BackgroundRequestNotAllowedError  QNetworkReply__NetworkError = 9
	QNetworkReply__TooManyRedirectsError             QNetworkReply__NetworkError = 10
	QNetworkReply__InsecureRedirectError             QNetworkReply__NetworkError = 11
	QNetworkReply__UnknownNetworkError               QNetworkReply__NetworkError = 99
	QNetworkReply__ProxyConnectionRefusedError       QNetworkReply__NetworkError = 101
	QNetworkReply__ProxyConnectionClosedError        QNetworkReply__NetworkError = 102
	QNetworkReply__ProxyNotFoundError                QNetworkReply__NetworkError = 103
	QNetworkReply__ProxyTimeoutError                 QNetworkReply__NetworkError = 104
	QNetworkReply__ProxyAuthenticationRequiredError  QNetworkReply__NetworkError = 105
	QNetworkReply__UnknownProxyError                 QNetworkReply__NetworkError = 199
	QNetworkReply__ContentAccessDenied               QNetworkReply__NetworkError = 201
	QNetworkReply__ContentOperationNotPermittedError QNetworkReply__NetworkError = 202
	QNetworkReply__ContentNotFoundError              QNetworkReply__NetworkError = 203
	QNetworkReply__AuthenticationRequiredError       QNetworkReply__NetworkError = 204
	QNetworkReply__ContentReSendError                QNetworkReply__NetworkError = 205
	QNetworkReply__ContentConflictError              QNetworkReply__NetworkError = 206
	QNetworkReply__ContentGoneError                  QNetworkReply__NetworkError = 207
	QNetworkReply__UnknownContentError               QNetworkReply__NetworkError = 299
	QNetworkReply__ProtocolUnknownError              QNetworkReply__NetworkError = 301
	QNetworkReply__ProtocolInvalidOperationError     QNetworkReply__NetworkError = 302
	QNetworkReply__ProtocolFailure                   QNetworkReply__NetworkError = 399
	QNetworkReply__InternalServerError               QNetworkReply__NetworkError = 401
	QNetworkReply__OperationNotImplementedError      QNetworkReply__NetworkError = 402
	QNetworkReply__ServiceUnavailableError           QNetworkReply__NetworkError = 403
	QNetworkReply__UnknownServerError                QNetworkReply__NetworkError = 499
)

type QNetworkReply struct {
	h *C.QNetworkReply
	*qt.QIODevice
}

func (this *QNetworkReply) cPointer() *C.QNetworkReply {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkReply) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkReply constructs the type using only CGO pointers.
func newQNetworkReply(h *C.QNetworkReply) *QNetworkReply {
	if h == nil {
		return nil
	}
	var outptr_QIODevice *C.QIODevice = nil
	C.QNetworkReply_virtbase(h, &outptr_QIODevice)

	return &QNetworkReply{h: h,
		QIODevice: qt.UnsafeNewQIODevice(unsafe.Pointer(outptr_QIODevice))}
}

// UnsafeNewQNetworkReply constructs the type using only unsafe pointers.
func UnsafeNewQNetworkReply(h unsafe.Pointer) *QNetworkReply {
	return newQNetworkReply((*C.QNetworkReply)(h))
}

func (this *QNetworkReply) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkReply_metaObject(this.h)))
}

func (this *QNetworkReply) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkReply_metacast(this.h, param1_Cstring))
}

func QNetworkReply_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkReply_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkReply_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkReply_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkReply) Close() {
	C.QNetworkReply_close(this.h)
}

func (this *QNetworkReply) IsSequential() bool {
	return (bool)(C.QNetworkReply_isSequential(this.h))
}

func (this *QNetworkReply) ReadBufferSize() int64 {
	return (int64)(C.QNetworkReply_readBufferSize(this.h))
}

func (this *QNetworkReply) SetReadBufferSize(size int64) {
	C.QNetworkReply_setReadBufferSize(this.h, (C.longlong)(size))
}

func (this *QNetworkReply) Manager() *QNetworkAccessManager {
	return newQNetworkAccessManager(C.QNetworkReply_manager(this.h))
}

func (this *QNetworkReply) Operation() QNetworkAccessManager__Operation {
	return (QNetworkAccessManager__Operation)(C.QNetworkReply_operation(this.h))
}

func (this *QNetworkReply) Request() *QNetworkRequest {
	_goptr := newQNetworkRequest(C.QNetworkReply_request(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkReply) Error() QNetworkReply__NetworkError {
	return (QNetworkReply__NetworkError)(C.QNetworkReply_error(this.h))
}

func (this *QNetworkReply) IsFinished() bool {
	return (bool)(C.QNetworkReply_isFinished(this.h))
}

func (this *QNetworkReply) IsRunning() bool {
	return (bool)(C.QNetworkReply_isRunning(this.h))
}

func (this *QNetworkReply) Url() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QNetworkReply_url(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkReply) Header(header QNetworkRequest__KnownHeaders) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QNetworkReply_header(this.h, (C.int)(header))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkReply) HasRawHeader(headerName []byte) bool {
	headerName_alias := C.struct_miqt_string{}
	if len(headerName) > 0 {
		headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	} else {
		headerName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	headerName_alias.len = C.size_t(len(headerName))
	return (bool)(C.QNetworkReply_hasRawHeader(this.h, headerName_alias))
}

func (this *QNetworkReply) RawHeaderList() [][]byte {
	var _ma C.struct_miqt_array = C.QNetworkReply_rawHeaderList(this.h)
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QNetworkReply) RawHeader(headerName []byte) []byte {
	headerName_alias := C.struct_miqt_string{}
	if len(headerName) > 0 {
		headerName_alias.data = (*C.char)(unsafe.Pointer(&headerName[0]))
	} else {
		headerName_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	headerName_alias.len = C.size_t(len(headerName))
	var _bytearray C.struct_miqt_string = C.QNetworkReply_rawHeader(this.h, headerName_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QNetworkReply) RawHeaderPairs() []struct {
	First  []byte
	Second []byte
} {
	var _ma C.struct_miqt_array = C.QNetworkReply_rawHeaderPairs(this.h)
	_ret := make([]struct {
		First  []byte
		Second []byte
	}, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_map)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_mm C.struct_miqt_map = _outCast[i]
		_lv_First_CArray := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_lv_mm.keys))
		_lv_Second_CArray := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_lv_mm.values))
		var _lv_first_bytearray C.struct_miqt_string = _lv_First_CArray[0]
		_lv_first_ret := C.GoBytes(unsafe.Pointer(_lv_first_bytearray.data), C.int(int64(_lv_first_bytearray.len)))
		C.free(unsafe.Pointer(_lv_first_bytearray.data))
		_lv_entry_First := _lv_first_ret
		var _lv_second_bytearray C.struct_miqt_string = _lv_Second_CArray[0]
		_lv_second_ret := C.GoBytes(unsafe.Pointer(_lv_second_bytearray.data), C.int(int64(_lv_second_bytearray.len)))
		C.free(unsafe.Pointer(_lv_second_bytearray.data))
		_lv_entry_Second := _lv_second_ret
		_ret[i] = struct {
			First  []byte
			Second []byte
		}{First: _lv_entry_First, Second: _lv_entry_Second}
	}
	return _ret
}

func (this *QNetworkReply) Attribute(code QNetworkRequest__Attribute) *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QNetworkReply_attribute(this.h, (C.int)(code))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkReply) SslConfiguration() *QSslConfiguration {
	_goptr := newQSslConfiguration(C.QNetworkReply_sslConfiguration(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkReply) SetSslConfiguration(configuration *QSslConfiguration) {
	C.QNetworkReply_setSslConfiguration(this.h, configuration.cPointer())
}

func (this *QNetworkReply) IgnoreSslErrors(errors []QSslError) {
	errors_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	C.QNetworkReply_ignoreSslErrors(this.h, errors_ma)
}

func (this *QNetworkReply) Abort() {
	C.QNetworkReply_abort(this.h)
}

func (this *QNetworkReply) IgnoreSslErrors2() {
	C.QNetworkReply_ignoreSslErrors2(this.h)
}

func (this *QNetworkReply) MetaDataChanged() {
	C.QNetworkReply_metaDataChanged(this.h)
}
func (this *QNetworkReply) OnMetaDataChanged(slot func()) {
	C.QNetworkReply_connect_metaDataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkReply_metaDataChanged
func miqt_exec_callback_QNetworkReply_metaDataChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QNetworkReply) Finished() {
	C.QNetworkReply_finished(this.h)
}
func (this *QNetworkReply) OnFinished(slot func()) {
	C.QNetworkReply_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkReply_finished
func miqt_exec_callback_QNetworkReply_finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QNetworkReply) ErrorWithQNetworkReplyNetworkError(param1 QNetworkReply__NetworkError) {
	C.QNetworkReply_errorWithQNetworkReplyNetworkError(this.h, (C.int)(param1))
}
func (this *QNetworkReply) OnErrorWithQNetworkReplyNetworkError(slot func(param1 QNetworkReply__NetworkError)) {
	C.QNetworkReply_connect_errorWithQNetworkReplyNetworkError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkReply_errorWithQNetworkReplyNetworkError
func miqt_exec_callback_QNetworkReply_errorWithQNetworkReplyNetworkError(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QNetworkReply__NetworkError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QNetworkReply__NetworkError)(param1)

	gofunc(slotval1)
}

func (this *QNetworkReply) ErrorOccurred(param1 QNetworkReply__NetworkError) {
	C.QNetworkReply_errorOccurred(this.h, (C.int)(param1))
}
func (this *QNetworkReply) OnErrorOccurred(slot func(param1 QNetworkReply__NetworkError)) {
	C.QNetworkReply_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkReply_errorOccurred
func miqt_exec_callback_QNetworkReply_errorOccurred(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QNetworkReply__NetworkError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QNetworkReply__NetworkError)(param1)

	gofunc(slotval1)
}

func (this *QNetworkReply) Encrypted() {
	C.QNetworkReply_encrypted(this.h)
}
func (this *QNetworkReply) OnEncrypted(slot func()) {
	C.QNetworkReply_connect_encrypted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkReply_encrypted
func miqt_exec_callback_QNetworkReply_encrypted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QNetworkReply) SslErrors(errors []QSslError) {
	errors_CArray := (*[0xffff]*C.QSslError)(C.malloc(C.size_t(8 * len(errors))))
	defer C.free(unsafe.Pointer(errors_CArray))
	for i := range errors {
		errors_CArray[i] = errors[i].cPointer()
	}
	errors_ma := C.struct_miqt_array{len: C.size_t(len(errors)), data: unsafe.Pointer(errors_CArray)}
	C.QNetworkReply_sslErrors(this.h, errors_ma)
}
func (this *QNetworkReply) OnSslErrors(slot func(errors []QSslError)) {
	C.QNetworkReply_connect_sslErrors(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkReply_sslErrors
func miqt_exec_callback_QNetworkReply_sslErrors(cb C.intptr_t, errors C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(errors []QSslError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var errors_ma C.struct_miqt_array = errors
	errors_ret := make([]QSslError, int(errors_ma.len))
	errors_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(errors_ma.data)) // hey ya
	for i := 0; i < int(errors_ma.len); i++ {
		errors_lv_goptr := newQSslError(errors_outCast[i])
		errors_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		errors_ret[i] = *errors_lv_goptr
	}
	slotval1 := errors_ret

	gofunc(slotval1)
}

func (this *QNetworkReply) PreSharedKeyAuthenticationRequired(authenticator *QSslPreSharedKeyAuthenticator) {
	C.QNetworkReply_preSharedKeyAuthenticationRequired(this.h, authenticator.cPointer())
}
func (this *QNetworkReply) OnPreSharedKeyAuthenticationRequired(slot func(authenticator *QSslPreSharedKeyAuthenticator)) {
	C.QNetworkReply_connect_preSharedKeyAuthenticationRequired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkReply_preSharedKeyAuthenticationRequired
func miqt_exec_callback_QNetworkReply_preSharedKeyAuthenticationRequired(cb C.intptr_t, authenticator *C.QSslPreSharedKeyAuthenticator) {
	gofunc, ok := cgo.Handle(cb).Value().(func(authenticator *QSslPreSharedKeyAuthenticator))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSslPreSharedKeyAuthenticator(authenticator)

	gofunc(slotval1)
}

func (this *QNetworkReply) Redirected(url *qt.QUrl) {
	C.QNetworkReply_redirected(this.h, (*C.QUrl)(url.UnsafePointer()))
}
func (this *QNetworkReply) OnRedirected(slot func(url *qt.QUrl)) {
	C.QNetworkReply_connect_redirected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkReply_redirected
func miqt_exec_callback_QNetworkReply_redirected(cb C.intptr_t, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(url))

	gofunc(slotval1)
}

func (this *QNetworkReply) RedirectAllowed() {
	C.QNetworkReply_redirectAllowed(this.h)
}
func (this *QNetworkReply) OnRedirectAllowed(slot func()) {
	C.QNetworkReply_connect_redirectAllowed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkReply_redirectAllowed
func miqt_exec_callback_QNetworkReply_redirectAllowed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QNetworkReply) UploadProgress(bytesSent int64, bytesTotal int64) {
	C.QNetworkReply_uploadProgress(this.h, (C.longlong)(bytesSent), (C.longlong)(bytesTotal))
}
func (this *QNetworkReply) OnUploadProgress(slot func(bytesSent int64, bytesTotal int64)) {
	C.QNetworkReply_connect_uploadProgress(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkReply_uploadProgress
func miqt_exec_callback_QNetworkReply_uploadProgress(cb C.intptr_t, bytesSent C.longlong, bytesTotal C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(bytesSent int64, bytesTotal int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(bytesSent)

	slotval2 := (int64)(bytesTotal)

	gofunc(slotval1, slotval2)
}

func (this *QNetworkReply) DownloadProgress(bytesReceived int64, bytesTotal int64) {
	C.QNetworkReply_downloadProgress(this.h, (C.longlong)(bytesReceived), (C.longlong)(bytesTotal))
}
func (this *QNetworkReply) OnDownloadProgress(slot func(bytesReceived int64, bytesTotal int64)) {
	C.QNetworkReply_connect_downloadProgress(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkReply_downloadProgress
func miqt_exec_callback_QNetworkReply_downloadProgress(cb C.intptr_t, bytesReceived C.longlong, bytesTotal C.longlong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(bytesReceived int64, bytesTotal int64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(bytesReceived)

	slotval2 := (int64)(bytesTotal)

	gofunc(slotval1, slotval2)
}

func QNetworkReply_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkReply_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkReply_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkReply_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkReply_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkReply_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkReply_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkReply_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QNetworkReply) Delete() {
	C.QNetworkReply_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkReply) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkReply) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package network

/*

#include "gen_qsslcertificate.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QSslCertificate__SubjectInfo int

const (
	QSslCertificate__Organization               QSslCertificate__SubjectInfo = 0
	QSslCertificate__CommonName                 QSslCertificate__SubjectInfo = 1
	QSslCertificate__LocalityName               QSslCertificate__SubjectInfo = 2
	QSslCertificate__OrganizationalUnitName     QSslCertificate__SubjectInfo = 3
	QSslCertificate__CountryName                QSslCertificate__SubjectInfo = 4
	QSslCertificate__StateOrProvinceName        QSslCertificate__SubjectInfo = 5
	QSslCertificate__DistinguishedNameQualifier QSslCertificate__SubjectInfo = 6
	QSslCertificate__SerialNumber               QSslCertificate__SubjectInfo = 7
	QSslCertificate__EmailAddress               QSslCertificate__SubjectInfo = 8
)

type QSslCertificate__PatternSyntax int

const (
	QSslCertificate__RegularExpression QSslCertificate__PatternSyntax = 0
	QSslCertificate__Wildcard          QSslCertificate__PatternSyntax = 1
	QSslCertificate__FixedString       QSslCertificate__PatternSyntax = 2
)

type QSslCertificate struct {
	h *C.QSslCertificate
}

func (this *QSslCertificate) cPointer() *C.QSslCertificate {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSslCertificate) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSslCertificate constructs the type using only CGO pointers.
func newQSslCertificate(h *C.QSslCertificate) *QSslCertificate {
	if h == nil {
		return nil
	}

	return &QSslCertificate{h: h}
}

// UnsafeNewQSslCertificate constructs the type using only unsafe pointers.
func UnsafeNewQSslCertificate(h unsafe.Pointer) *QSslCertificate {
	return newQSslCertificate((*C.QSslCertificate)(h))
}

// NewQSslCertificate constructs a new QSslCertificate object.
func NewQSslCertificate(device *qt.QIODevice) *QSslCertificate {

	return newQSslCertificate(C.QSslCertificate_new((*C.QIODevice)(device.UnsafePointer())))
}

// NewQSslCertificate2 constructs a new QSslCertificate object.
func NewQSslCertificate2() *QSslCertificate {

	return newQSslCertificate(C.QSslCertificate_new2())
}

// NewQSslCertificate3 constructs a new QSslCertificate object.
func NewQSslCertificate3(other *QSslCertificate) *QSslCertificate {

	return newQSslCertificate(C.QSslCertificate_new3(other.cPointer()))
}

// NewQSslCertificate4 constructs a new QSslCertificate object.
func NewQSslCertificate4(device *qt.QIODevice, format QSsl__EncodingFormat) *QSslCertificate {

	return newQSslCertificate(C.QSslCertificate_new4((*C.QIODevice)(device.UnsafePointer()), (C.int)(format)))
}

// NewQSslCertificate5 constructs a new QSslCertificate object.
func NewQSslCertificate5(data []byte) *QSslCertificate {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))

	return newQSslCertificate(C.QSslCertificate_new5(data_alias))
}

// NewQSslCertificate6 constructs a new QSslCertificate object.
func NewQSslCertificate6(data []byte, format QSsl__EncodingFormat) *QSslCertificate {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))

	return newQSslCertificate(C.QSslCertificate_new6(data_alias, (C.int)(format)))
}

func (this *QSslCertificate) OperatorAssign(other *QSslCertificate) {
	C.QSslCertificate_operatorAssign(this.h, other.cPointer())
}

func (this *QSslCertificate) Swap(other *QSslCertificate) {
	C.QSslCertificate_swap(this.h, other.cPointer())
}

func (this *QSslCertificate) OperatorEqual(other *QSslCertificate) bool {
	return (bool)(C.QSslCertificate_operatorEqual(this.h, other.cPointer()))
}

func (this *QSslCertificate) OperatorNotEqual(other *QSslCertificate) bool {
	return (bool)(C.QSslCertificate_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QSslCertificate) IsNull() bool {
	return (bool)(C.QSslCertificate_isNull(this.h))
}

func (this *QSslCertificate) IsBlacklisted() bool {
	return (bool)(C.QSslCertificate_isBlacklisted(this.h))
}

func (this *QSslCertificate) IsSelfSigned() bool {
	return (bool)(C.QSslCertificate_isSelfSigned(this.h))
}

func (this *QSslCertificate) Clear() {
	C.QSslCertificate_clear(this.h)
}

func (this *QSslCertificate) Version() []byte {
	var _bytearray C.struct_miqt_string = C.QSslCertificate_version(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslCertificate) SerialNumber() []byte {
	var _bytearray C.struct_miqt_string = C.QSslCertificate_serialNumber(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslCertificate) Digest() []byte {
	var _bytearray C.struct_miqt_string = C.QSslCertificate_digest(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslCertificate) IssuerInfo(info QSslCertificate__SubjectInfo) []string {
	var _ma C.struct_miqt_array = C.QSslCertificate_issuerInfo(this.h, (C.int)(info))
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

func (this *QSslCertificate) IssuerInfoWithAttribute(attribute []byte) []string {
	attribute_alias := C.struct_miqt_string{}
	if len(attribute) > 0 {
		attribute_alias.data = (*C.char)(unsafe.Pointer(&attribute[0]))
	} else {
		attribute_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	attribute_alias.len = C.size_t(len(attribute))
	var _ma C.struct_miqt_array = C.QSslCertificate_issuerInfoWithAttribute(this.h, attribute_alias)
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

func (this *QSslCertificate) SubjectInfo(info QSslCertificate__SubjectInfo) []string {
	var _ma C.struct_miqt_array = C.QSslCertificate_subjectInfo(this.h, (C.int)(info))
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

func (this *QSslCertificate) SubjectInfoWithAttribute(attribute []byte) []string {
	attribute_alias := C.struct_miqt_string{}
	if len(attribute) > 0 {
		attribute_alias.data = (*C.char)(unsafe.Pointer(&attribute[0]))
	} else {
		attribute_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	attribute_alias.len = C.size_t(len(attribute))
	var _ma C.struct_miqt_array = C.QSslCertificate_subjectInfoWithAttribute(this.h, attribute_alias)
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

func (this *QSslCertificate) IssuerDisplayName() string {
	var _ms C.struct_miqt_string = C.QSslCertificate_issuerDisplayName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslCertificate) SubjectDisplayName() string {
	var _ms C.struct_miqt_string = C.QSslCertificate_subjectDisplayName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslCertificate) SubjectInfoAttributes() [][]byte {
	var _ma C.struct_miqt_array = C.QSslCertificate_subjectInfoAttributes(this.h)
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

func (this *QSslCertificate) IssuerInfoAttributes() [][]byte {
	var _ma C.struct_miqt_array = C.QSslCertificate_issuerInfoAttributes(this.h)
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

func (this *QSslCertificate) EffectiveDate() *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QSslCertificate_effectiveDate(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslCertificate) ExpiryDate() *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QSslCertificate_expiryDate(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslCertificate) PublicKey() *QSslKey {
	_goptr := newQSslKey(C.QSslCertificate_publicKey(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslCertificate) Extensions() []QSslCertificateExtension {
	var _ma C.struct_miqt_array = C.QSslCertificate_extensions(this.h)
	_ret := make([]QSslCertificateExtension, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificateExtension)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificateExtension(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QSslCertificate) ToPem() []byte {
	var _bytearray C.struct_miqt_string = C.QSslCertificate_toPem(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslCertificate) ToDer() []byte {
	var _bytearray C.struct_miqt_string = C.QSslCertificate_toDer(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslCertificate) ToText() string {
	var _ms C.struct_miqt_string = C.QSslCertificate_toText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSslCertificate_FromPath(path string, format QSsl__EncodingFormat, syntax qt.QRegExp__PatternSyntax) []QSslCertificate {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	var _ma C.struct_miqt_array = C.QSslCertificate_fromPath(path_ms, (C.int)(format), (C.int)(syntax))
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslCertificate_FromPathWithPath(path string) []QSslCertificate {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	var _ma C.struct_miqt_array = C.QSslCertificate_fromPathWithPath(path_ms)
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslCertificate_FromDevice(device *qt.QIODevice) []QSslCertificate {
	var _ma C.struct_miqt_array = C.QSslCertificate_fromDevice((*C.QIODevice)(device.UnsafePointer()))
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslCertificate_FromData(data []byte) []QSslCertificate {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	var _ma C.struct_miqt_array = C.QSslCertificate_fromData(data_alias)
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslCertificate_Verify(certificateChain []QSslCertificate) []QSslError {
	certificateChain_CArray := (*[0xffff]*C.QSslCertificate)(C.malloc(C.size_t(8 * len(certificateChain))))
	defer C.free(unsafe.Pointer(certificateChain_CArray))
	for i := range certificateChain {
		certificateChain_CArray[i] = certificateChain[i].cPointer()
	}
	certificateChain_ma := C.struct_miqt_array{len: C.size_t(len(certificateChain)), data: unsafe.Pointer(certificateChain_CArray)}
	var _ma C.struct_miqt_array = C.QSslCertificate_verify(certificateChain_ma)
	_ret := make([]QSslError, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslError(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslCertificate_ImportPkcs12(device *qt.QIODevice, key *QSslKey, cert *QSslCertificate) bool {
	return (bool)(C.QSslCertificate_importPkcs12((*C.QIODevice)(device.UnsafePointer()), key.cPointer(), cert.cPointer()))
}

func (this *QSslCertificate) Handle() unsafe.Pointer {
	return (unsafe.Pointer)(C.QSslCertificate_handle(this.h))
}

func (this *QSslCertificate) Digest1(algorithm qt.QCryptographicHash__Algorithm) []byte {
	var _bytearray C.struct_miqt_string = C.QSslCertificate_digest1(this.h, (C.int)(algorithm))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QSslCertificate_FromPath2(path string, format QSsl__EncodingFormat) []QSslCertificate {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	var _ma C.struct_miqt_array = C.QSslCertificate_fromPath2(path_ms, (C.int)(format))
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslCertificate_FromPath3(path string, format QSsl__EncodingFormat, syntax QSslCertificate__PatternSyntax) []QSslCertificate {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	var _ma C.struct_miqt_array = C.QSslCertificate_fromPath3(path_ms, (C.int)(format), (C.int)(syntax))
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslCertificate_FromDevice2(device *qt.QIODevice, format QSsl__EncodingFormat) []QSslCertificate {
	var _ma C.struct_miqt_array = C.QSslCertificate_fromDevice2((*C.QIODevice)(device.UnsafePointer()), (C.int)(format))
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslCertificate_FromData2(data []byte, format QSsl__EncodingFormat) []QSslCertificate {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	var _ma C.struct_miqt_array = C.QSslCertificate_fromData2(data_alias, (C.int)(format))
	_ret := make([]QSslCertificate, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslCertificate)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslCertificate(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslCertificate_Verify2(certificateChain []QSslCertificate, hostName string) []QSslError {
	certificateChain_CArray := (*[0xffff]*C.QSslCertificate)(C.malloc(C.size_t(8 * len(certificateChain))))
	defer C.free(unsafe.Pointer(certificateChain_CArray))
	for i := range certificateChain {
		certificateChain_CArray[i] = certificateChain[i].cPointer()
	}
	certificateChain_ma := C.struct_miqt_array{len: C.size_t(len(certificateChain)), data: unsafe.Pointer(certificateChain_CArray)}
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	var _ma C.struct_miqt_array = C.QSslCertificate_verify2(certificateChain_ma, hostName_ms)
	_ret := make([]QSslError, int(_ma.len))
	_outCast := (*[0xffff]*C.QSslError)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQSslError(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QSslCertificate_ImportPkcs124(device *qt.QIODevice, key *QSslKey, cert *QSslCertificate, caCertificates []QSslCertificate) bool {
	caCertificates_CArray := (*[0xffff]*C.QSslCertificate)(C.malloc(C.size_t(8 * len(caCertificates))))
	defer C.free(unsafe.Pointer(caCertificates_CArray))
	for i := range caCertificates {
		caCertificates_CArray[i] = caCertificates[i].cPointer()
	}
	caCertificates_ma := C.struct_miqt_array{len: C.size_t(len(caCertificates)), data: unsafe.Pointer(caCertificates_CArray)}
	return (bool)(C.QSslCertificate_importPkcs124((*C.QIODevice)(device.UnsafePointer()), key.cPointer(), cert.cPointer(), caCertificates_ma))
}

func QSslCertificate_ImportPkcs125(device *qt.QIODevice, key *QSslKey, cert *QSslCertificate, caCertificates []QSslCertificate, passPhrase []byte) bool {
	caCertificates_CArray := (*[0xffff]*C.QSslCertificate)(C.malloc(C.size_t(8 * len(caCertificates))))
	defer C.free(unsafe.Pointer(caCertificates_CArray))
	for i := range caCertificates {
		caCertificates_CArray[i] = caCertificates[i].cPointer()
	}
	caCertificates_ma := C.struct_miqt_array{len: C.size_t(len(caCertificates)), data: unsafe.Pointer(caCertificates_CArray)}
	passPhrase_alias := C.struct_miqt_string{}
	if len(passPhrase) > 0 {
		passPhrase_alias.data = (*C.char)(unsafe.Pointer(&passPhrase[0]))
	} else {
		passPhrase_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	passPhrase_alias.len = C.size_t(len(passPhrase))
	return (bool)(C.QSslCertificate_importPkcs125((*C.QIODevice)(device.UnsafePointer()), key.cPointer(), cert.cPointer(), caCertificates_ma, passPhrase_alias))
}

// Delete this object from C++ memory.
func (this *QSslCertificate) Delete() {
	C.QSslCertificate_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSslCertificate) GoGC() {
	runtime.SetFinalizer(this, func(this *QSslCertificate) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

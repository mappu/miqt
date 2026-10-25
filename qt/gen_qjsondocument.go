package qt

/*

#include "gen_qjsondocument.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QJsonParseError__ParseError int

const (
	QJsonParseError__NoError               QJsonParseError__ParseError = 0
	QJsonParseError__UnterminatedObject    QJsonParseError__ParseError = 1
	QJsonParseError__MissingNameSeparator  QJsonParseError__ParseError = 2
	QJsonParseError__UnterminatedArray     QJsonParseError__ParseError = 3
	QJsonParseError__MissingValueSeparator QJsonParseError__ParseError = 4
	QJsonParseError__IllegalValue          QJsonParseError__ParseError = 5
	QJsonParseError__TerminationByNumber   QJsonParseError__ParseError = 6
	QJsonParseError__IllegalNumber         QJsonParseError__ParseError = 7
	QJsonParseError__IllegalEscapeSequence QJsonParseError__ParseError = 8
	QJsonParseError__IllegalUTF8String     QJsonParseError__ParseError = 9
	QJsonParseError__UnterminatedString    QJsonParseError__ParseError = 10
	QJsonParseError__MissingObject         QJsonParseError__ParseError = 11
	QJsonParseError__DeepNesting           QJsonParseError__ParseError = 12
	QJsonParseError__DocumentTooLarge      QJsonParseError__ParseError = 13
	QJsonParseError__GarbageAtEnd          QJsonParseError__ParseError = 14
)

type QJsonDocument__DataValidation int

const (
	QJsonDocument__Validate         QJsonDocument__DataValidation = 0
	QJsonDocument__BypassValidation QJsonDocument__DataValidation = 1
)

type QJsonDocument__JsonFormat int

const (
	QJsonDocument__Indented QJsonDocument__JsonFormat = 0
	QJsonDocument__Compact  QJsonDocument__JsonFormat = 1
)

type QJsonParseError struct {
	h  *C.QJsonParseError
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QJsonParseError) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QJsonParseError) cPointer() *C.QJsonParseError {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJsonParseError) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJsonParseError constructs the type using only CGO pointers.
func newQJsonParseError(h *C.QJsonParseError) *QJsonParseError {
	if h == nil {
		return nil
	}

	return &QJsonParseError{h: h}
}

// UnsafeNewQJsonParseError constructs the type using only unsafe pointers.
func UnsafeNewQJsonParseError(h unsafe.Pointer) *QJsonParseError {
	return newQJsonParseError((*C.QJsonParseError)(h))
}

func (this *QJsonParseError) ErrorString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QJsonParseError_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJsonParseError) Offset() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QJsonParseError_offset(this.h))
}

func (this *QJsonParseError) SetOffset(offset int) {
	defer runtime.KeepAlive(this)
	C.QJsonParseError_setOffset(this.h, (C.int)(offset))
}

func (this *QJsonParseError) Error() QJsonParseError__ParseError {
	defer runtime.KeepAlive(this)
	return (QJsonParseError__ParseError)(C.QJsonParseError_error(this.h))
}

func (this *QJsonParseError) SetError(error QJsonParseError__ParseError) {
	defer runtime.KeepAlive(this)
	C.QJsonParseError_setError(this.h, (C.int)(error))
}

// Delete this object from C++ memory.
func (this *QJsonParseError) Delete() {
	C.QJsonParseError_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QJsonParseError) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QJsonParseError_delete((*C.QJsonParseError)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QJsonDocument struct {
	h  *C.QJsonDocument
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QJsonDocument) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QJsonDocument) cPointer() *C.QJsonDocument {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJsonDocument) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJsonDocument constructs the type using only CGO pointers.
func newQJsonDocument(h *C.QJsonDocument) *QJsonDocument {
	if h == nil {
		return nil
	}

	return &QJsonDocument{h: h}
}

// UnsafeNewQJsonDocument constructs the type using only unsafe pointers.
func UnsafeNewQJsonDocument(h unsafe.Pointer) *QJsonDocument {
	return newQJsonDocument((*C.QJsonDocument)(h))
}

// NewQJsonDocument constructs a new QJsonDocument object.
func NewQJsonDocument() *QJsonDocument {

	return newQJsonDocument(C.QJsonDocument_new())
}

// NewQJsonDocument2 constructs a new QJsonDocument object.
func NewQJsonDocument2(object *QJsonObject) *QJsonDocument {
	defer runtime.KeepAlive(object)

	return newQJsonDocument(C.QJsonDocument_new2(object.cPointer()))
}

// NewQJsonDocument3 constructs a new QJsonDocument object.
func NewQJsonDocument3(array *QJsonArray) *QJsonDocument {
	defer runtime.KeepAlive(array)

	return newQJsonDocument(C.QJsonDocument_new3(array.cPointer()))
}

// NewQJsonDocument4 constructs a new QJsonDocument object.
func NewQJsonDocument4(other *QJsonDocument) *QJsonDocument {
	defer runtime.KeepAlive(other)

	return newQJsonDocument(C.QJsonDocument_new4(other.cPointer()))
}

func (this *QJsonDocument) OperatorAssign(other *QJsonDocument) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QJsonDocument_operatorAssign(this.h, other.cPointer())
}

func (this *QJsonDocument) Swap(other *QJsonDocument) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QJsonDocument_swap(this.h, other.cPointer())
}

func QJsonDocument_FromRawData(data string, size int) *QJsonDocument {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	_goptr := newQJsonDocument(C.QJsonDocument_fromRawData(data_Cstring, (C.int)(size)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) RawData(size *int) string {
	defer runtime.KeepAlive(this)
	_ret := C.QJsonDocument_rawData(this.h, (*C.int)(unsafe.Pointer(size)))
	return C.GoString(_ret)
}

func QJsonDocument_FromBinaryData(data []byte) *QJsonDocument {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	_goptr := newQJsonDocument(C.QJsonDocument_fromBinaryData(data_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) ToBinaryData() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QJsonDocument_toBinaryData(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QJsonDocument_FromVariant(variant *QVariant) *QJsonDocument {
	defer runtime.KeepAlive(variant)
	_goptr := newQJsonDocument(C.QJsonDocument_fromVariant(variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) ToVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QJsonDocument_toVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QJsonDocument_FromJson(json []byte) *QJsonDocument {
	json_alias := C.struct_miqt_string{}
	if len(json) > 0 {
		json_alias.data = (*C.char)(unsafe.Pointer(&json[0]))
	} else {
		json_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	json_alias.len = C.size_t(len(json))
	_goptr := newQJsonDocument(C.QJsonDocument_fromJson(json_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) ToJson() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QJsonDocument_toJson(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QJsonDocument) ToJsonWithFormat(format QJsonDocument__JsonFormat) []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QJsonDocument_toJsonWithFormat(this.h, (C.int)(format))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QJsonDocument) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJsonDocument_isEmpty(this.h))
}

func (this *QJsonDocument) IsArray() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJsonDocument_isArray(this.h))
}

func (this *QJsonDocument) IsObject() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJsonDocument_isObject(this.h))
}

func (this *QJsonDocument) Object() *QJsonObject {
	defer runtime.KeepAlive(this)
	_goptr := newQJsonObject(C.QJsonDocument_object(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) Array() *QJsonArray {
	defer runtime.KeepAlive(this)
	_goptr := newQJsonArray(C.QJsonDocument_array(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) SetObject(object *QJsonObject) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(object)
	C.QJsonDocument_setObject(this.h, object.cPointer())
}

func (this *QJsonDocument) SetArray(array *QJsonArray) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(array)
	C.QJsonDocument_setArray(this.h, array.cPointer())
}

func (this *QJsonDocument) OperatorSubscript(key string) *QJsonValue {
	defer runtime.KeepAlive(this)
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonValue(C.QJsonDocument_operatorSubscript(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) OperatorSubscriptWithInt(i int) *QJsonValue {
	defer runtime.KeepAlive(this)
	_goptr := newQJsonValue(C.QJsonDocument_operatorSubscriptWithInt(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) OperatorEqual(other *QJsonDocument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QJsonDocument_operatorEqual(this.h, other.cPointer()))
}

func (this *QJsonDocument) OperatorNotEqual(other *QJsonDocument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QJsonDocument_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonDocument) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QJsonDocument_isNull(this.h))
}

func QJsonDocument_FromRawData2(data string, size int, validation QJsonDocument__DataValidation) *QJsonDocument {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	_goptr := newQJsonDocument(C.QJsonDocument_fromRawData2(data_Cstring, (C.int)(size), (C.int)(validation)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QJsonDocument_FromBinaryData2(data []byte, validation QJsonDocument__DataValidation) *QJsonDocument {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	_goptr := newQJsonDocument(C.QJsonDocument_fromBinaryData2(data_alias, (C.int)(validation)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QJsonDocument_FromJson2(json []byte, error *QJsonParseError) *QJsonDocument {
	defer runtime.KeepAlive(error)
	json_alias := C.struct_miqt_string{}
	if len(json) > 0 {
		json_alias.data = (*C.char)(unsafe.Pointer(&json[0]))
	} else {
		json_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	json_alias.len = C.size_t(len(json))
	_goptr := newQJsonDocument(C.QJsonDocument_fromJson2(json_alias, error.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QJsonDocument) Delete() {
	C.QJsonDocument_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QJsonDocument) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QJsonDocument_delete((*C.QJsonDocument)(gc[0]))
	})
	this.miqtSetGC(gc)
}

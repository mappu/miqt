package qt6

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

type QJsonDocument__JsonFormat int

const (
	QJsonDocument__Indented QJsonDocument__JsonFormat = 0
	QJsonDocument__Compact  QJsonDocument__JsonFormat = 1
)

type QJsonParseError struct {
	h *C.QJsonParseError
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
	var _ms C.struct_miqt_string = C.QJsonParseError_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QJsonParseError) Delete() {
	C.QJsonParseError_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonParseError) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonParseError) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QJsonDocument struct {
	h *C.QJsonDocument
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

	return newQJsonDocument(C.QJsonDocument_new2(object.cPointer()))
}

// NewQJsonDocument3 constructs a new QJsonDocument object.
func NewQJsonDocument3(array *QJsonArray) *QJsonDocument {

	return newQJsonDocument(C.QJsonDocument_new3(array.cPointer()))
}

// NewQJsonDocument4 constructs a new QJsonDocument object.
func NewQJsonDocument4(other *QJsonDocument) *QJsonDocument {

	return newQJsonDocument(C.QJsonDocument_new4(other.cPointer()))
}

func (this *QJsonDocument) OperatorAssign(other *QJsonDocument) {
	C.QJsonDocument_OperatorAssign(this.h, other.cPointer())
}

func (this *QJsonDocument) Swap(other *QJsonDocument) {
	C.QJsonDocument_Swap(this.h, other.cPointer())
}

func QJsonDocument_FromVariant(variant *QVariant) *QJsonDocument {
	_goptr := newQJsonDocument(C.QJsonDocument_FromVariant(variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) ToVariant() *QVariant {
	_goptr := newQVariant(C.QJsonDocument_ToVariant(this.h))
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
	_goptr := newQJsonDocument(C.QJsonDocument_FromJson(json_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) ToJson() []byte {
	var _bytearray C.struct_miqt_string = C.QJsonDocument_ToJson(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QJsonDocument) IsEmpty() bool {
	return (bool)(C.QJsonDocument_IsEmpty(this.h))
}

func (this *QJsonDocument) IsArray() bool {
	return (bool)(C.QJsonDocument_IsArray(this.h))
}

func (this *QJsonDocument) IsObject() bool {
	return (bool)(C.QJsonDocument_IsObject(this.h))
}

func (this *QJsonDocument) Object() *QJsonObject {
	_goptr := newQJsonObject(C.QJsonDocument_Object(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) Array() *QJsonArray {
	_goptr := newQJsonArray(C.QJsonDocument_Array(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) SetObject(object *QJsonObject) {
	C.QJsonDocument_SetObject(this.h, object.cPointer())
}

func (this *QJsonDocument) SetArray(array *QJsonArray) {
	C.QJsonDocument_SetArray(this.h, array.cPointer())
}

func (this *QJsonDocument) OperatorSubscript(key string) *QJsonValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQJsonValue(C.QJsonDocument_OperatorSubscript(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) OperatorSubscriptWithQsizetype(i int64) *QJsonValue {
	_goptr := newQJsonValue(C.QJsonDocument_OperatorSubscriptWithQsizetype(this.h, (C.ptrdiff_t)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) OperatorEqual(other *QJsonDocument) bool {
	return (bool)(C.QJsonDocument_OperatorEqual(this.h, other.cPointer()))
}

func (this *QJsonDocument) OperatorNotEqual(other *QJsonDocument) bool {
	return (bool)(C.QJsonDocument_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QJsonDocument) IsNull() bool {
	return (bool)(C.QJsonDocument_IsNull(this.h))
}

func QJsonDocument_FromJson2(json []byte, error *QJsonParseError) *QJsonDocument {
	json_alias := C.struct_miqt_string{}
	if len(json) > 0 {
		json_alias.data = (*C.char)(unsafe.Pointer(&json[0]))
	} else {
		json_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	json_alias.len = C.size_t(len(json))
	_goptr := newQJsonDocument(C.QJsonDocument_FromJson2(json_alias, error.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) ToJson1(format QJsonDocument__JsonFormat) []byte {
	var _bytearray C.struct_miqt_string = C.QJsonDocument_ToJson1(this.h, (C.int)(format))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QJsonDocument) Delete() {
	C.QJsonDocument_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJsonDocument) GoGC() {
	runtime.SetFinalizer(this, func(this *QJsonDocument) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

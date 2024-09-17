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
	QJsonParseError__ParseError__NoError               QJsonParseError__ParseError = 0
	QJsonParseError__ParseError__UnterminatedObject    QJsonParseError__ParseError = 1
	QJsonParseError__ParseError__MissingNameSeparator  QJsonParseError__ParseError = 2
	QJsonParseError__ParseError__UnterminatedArray     QJsonParseError__ParseError = 3
	QJsonParseError__ParseError__MissingValueSeparator QJsonParseError__ParseError = 4
	QJsonParseError__ParseError__IllegalValue          QJsonParseError__ParseError = 5
	QJsonParseError__ParseError__TerminationByNumber   QJsonParseError__ParseError = 6
	QJsonParseError__ParseError__IllegalNumber         QJsonParseError__ParseError = 7
	QJsonParseError__ParseError__IllegalEscapeSequence QJsonParseError__ParseError = 8
	QJsonParseError__ParseError__IllegalUTF8String     QJsonParseError__ParseError = 9
	QJsonParseError__ParseError__UnterminatedString    QJsonParseError__ParseError = 10
	QJsonParseError__ParseError__MissingObject         QJsonParseError__ParseError = 11
	QJsonParseError__ParseError__DeepNesting           QJsonParseError__ParseError = 12
	QJsonParseError__ParseError__DocumentTooLarge      QJsonParseError__ParseError = 13
	QJsonParseError__ParseError__GarbageAtEnd          QJsonParseError__ParseError = 14
)

type QJsonDocument__DataValidation int

const (
	QJsonDocument__DataValidation__Validate         QJsonDocument__DataValidation = 0
	QJsonDocument__DataValidation__BypassValidation QJsonDocument__DataValidation = 1
)

type QJsonDocument__JsonFormat int

const (
	QJsonDocument__JsonFormat__Indented QJsonDocument__JsonFormat = 0
	QJsonDocument__JsonFormat__Compact  QJsonDocument__JsonFormat = 1
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

func newQJsonParseError(h *C.QJsonParseError) *QJsonParseError {
	if h == nil {
		return nil
	}
	return &QJsonParseError{h: h}
}

func newQJsonParseError_U(h unsafe.Pointer) *QJsonParseError {
	return newQJsonParseError((*C.QJsonParseError)(h))
}

func (this *QJsonParseError) ErrorString() string {
	var _ms *C.struct_miqt_string = C.QJsonParseError_ErrorString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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

func newQJsonDocument(h *C.QJsonDocument) *QJsonDocument {
	if h == nil {
		return nil
	}
	return &QJsonDocument{h: h}
}

func newQJsonDocument_U(h unsafe.Pointer) *QJsonDocument {
	return newQJsonDocument((*C.QJsonDocument)(h))
}

// NewQJsonDocument constructs a new QJsonDocument object.
func NewQJsonDocument() *QJsonDocument {
	ret := C.QJsonDocument_new()
	return newQJsonDocument(ret)
}

// NewQJsonDocument2 constructs a new QJsonDocument object.
func NewQJsonDocument2(object *QJsonObject) *QJsonDocument {
	ret := C.QJsonDocument_new2(object.cPointer())
	return newQJsonDocument(ret)
}

// NewQJsonDocument3 constructs a new QJsonDocument object.
func NewQJsonDocument3(array *QJsonArray) *QJsonDocument {
	ret := C.QJsonDocument_new3(array.cPointer())
	return newQJsonDocument(ret)
}

// NewQJsonDocument4 constructs a new QJsonDocument object.
func NewQJsonDocument4(other *QJsonDocument) *QJsonDocument {
	ret := C.QJsonDocument_new4(other.cPointer())
	return newQJsonDocument(ret)
}

func (this *QJsonDocument) OperatorAssign(other *QJsonDocument) {
	C.QJsonDocument_OperatorAssign(this.h, other.cPointer())
}

func (this *QJsonDocument) Swap(other *QJsonDocument) {
	C.QJsonDocument_Swap(this.h, other.cPointer())
}

func QJsonDocument_FromRawData(data string, size int) *QJsonDocument {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	_ret := C.QJsonDocument_FromRawData(data_Cstring, (C.int)(size))
	_goptr := newQJsonDocument(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) RawData(size *int) unsafe.Pointer {
	_ret := C.QJsonDocument_RawData(this.h, (*C.int)(unsafe.Pointer(size)))
	return (unsafe.Pointer)(_ret)
}

func QJsonDocument_FromBinaryData(data *QByteArray) *QJsonDocument {
	_ret := C.QJsonDocument_FromBinaryData(data.cPointer())
	_goptr := newQJsonDocument(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) ToBinaryData() *QByteArray {
	_ret := C.QJsonDocument_ToBinaryData(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QJsonDocument_FromVariant(variant *QVariant) *QJsonDocument {
	_ret := C.QJsonDocument_FromVariant(variant.cPointer())
	_goptr := newQJsonDocument(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) ToVariant() *QVariant {
	_ret := C.QJsonDocument_ToVariant(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QJsonDocument_FromJson(json *QByteArray) *QJsonDocument {
	_ret := C.QJsonDocument_FromJson(json.cPointer())
	_goptr := newQJsonDocument(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) ToJson() *QByteArray {
	_ret := C.QJsonDocument_ToJson(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) ToJsonWithFormat(format QJsonDocument__JsonFormat) *QByteArray {
	_ret := C.QJsonDocument_ToJsonWithFormat(this.h, (C.uintptr_t)(format))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
	_ret := C.QJsonDocument_Object(this.h)
	_goptr := newQJsonObject(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) Array() *QJsonArray {
	_ret := C.QJsonDocument_Array(this.h)
	_goptr := newQJsonArray(_ret)
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
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	_ret := C.QJsonDocument_OperatorSubscript(this.h, (*C.struct_miqt_string)(key_ms))
	_goptr := newQJsonValue(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJsonDocument) OperatorSubscriptWithInt(i int) *QJsonValue {
	_ret := C.QJsonDocument_OperatorSubscriptWithInt(this.h, (C.int)(i))
	_goptr := newQJsonValue(_ret)
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

func QJsonDocument_FromRawData3(data string, size int, validation QJsonDocument__DataValidation) *QJsonDocument {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	_ret := C.QJsonDocument_FromRawData3(data_Cstring, (C.int)(size), (C.uintptr_t)(validation))
	_goptr := newQJsonDocument(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QJsonDocument_FromBinaryData2(data *QByteArray, validation QJsonDocument__DataValidation) *QJsonDocument {
	_ret := C.QJsonDocument_FromBinaryData2(data.cPointer(), (C.uintptr_t)(validation))
	_goptr := newQJsonDocument(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QJsonDocument_FromJson2(json *QByteArray, error *QJsonParseError) *QJsonDocument {
	_ret := C.QJsonDocument_FromJson2(json.cPointer(), error.cPointer())
	_goptr := newQJsonDocument(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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

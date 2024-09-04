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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QJsonParseError_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QJsonParseError) Delete() {
	C.QJsonParseError_Delete(this.h)
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
	ret := C.QJsonDocument_FromRawData(data_Cstring, (C.int)(size))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonDocument(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonDocument) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonDocument) RawData(size *int) unsafe.Pointer {
	ret := C.QJsonDocument_RawData(this.h, (*C.int)(unsafe.Pointer(size)))
	return (unsafe.Pointer)(ret)
}

func QJsonDocument_FromBinaryData(data *QByteArray) *QJsonDocument {
	ret := C.QJsonDocument_FromBinaryData(data.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonDocument(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonDocument) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonDocument) ToBinaryData() *QByteArray {
	ret := C.QJsonDocument_ToBinaryData(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QJsonDocument_FromVariant(variant *QVariant) *QJsonDocument {
	ret := C.QJsonDocument_FromVariant(variant.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonDocument(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonDocument) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonDocument) ToVariant() *QVariant {
	ret := C.QJsonDocument_ToVariant(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QJsonDocument_FromJson(json *QByteArray) *QJsonDocument {
	ret := C.QJsonDocument_FromJson(json.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonDocument(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonDocument) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonDocument) ToJson() *QByteArray {
	ret := C.QJsonDocument_ToJson(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonDocument) ToJsonWithFormat(format QJsonDocument__JsonFormat) *QByteArray {
	ret := C.QJsonDocument_ToJsonWithFormat(this.h, (C.uintptr_t)(format))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonDocument) IsEmpty() bool {
	ret := C.QJsonDocument_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QJsonDocument) IsArray() bool {
	ret := C.QJsonDocument_IsArray(this.h)
	return (bool)(ret)
}

func (this *QJsonDocument) IsObject() bool {
	ret := C.QJsonDocument_IsObject(this.h)
	return (bool)(ret)
}

func (this *QJsonDocument) Object() *QJsonObject {
	ret := C.QJsonDocument_Object(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonObject(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonObject) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonDocument) Array() *QJsonArray {
	ret := C.QJsonDocument_Array(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonDocument) SetObject(object *QJsonObject) {
	C.QJsonDocument_SetObject(this.h, object.cPointer())
}

func (this *QJsonDocument) SetArray(array *QJsonArray) {
	C.QJsonDocument_SetArray(this.h, array.cPointer())
}

func (this *QJsonDocument) OperatorSubscript(key string) *QJsonValue {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QJsonDocument_OperatorSubscript(this.h, key_Cstring, C.size_t(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonDocument) OperatorSubscriptWithInt(i int) *QJsonValue {
	ret := C.QJsonDocument_OperatorSubscriptWithInt(this.h, (C.int)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonValue(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonValue) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonDocument) OperatorEqual(other *QJsonDocument) bool {
	ret := C.QJsonDocument_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonDocument) OperatorNotEqual(other *QJsonDocument) bool {
	ret := C.QJsonDocument_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QJsonDocument) IsNull() bool {
	ret := C.QJsonDocument_IsNull(this.h)
	return (bool)(ret)
}

func QJsonDocument_FromRawData3(data string, size int, validation QJsonDocument__DataValidation) *QJsonDocument {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QJsonDocument_FromRawData3(data_Cstring, (C.int)(size), (C.uintptr_t)(validation))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonDocument(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonDocument) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QJsonDocument_FromBinaryData2(data *QByteArray, validation QJsonDocument__DataValidation) *QJsonDocument {
	ret := C.QJsonDocument_FromBinaryData2(data.cPointer(), (C.uintptr_t)(validation))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonDocument(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonDocument) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QJsonDocument_FromJson2(json *QByteArray, error *QJsonParseError) *QJsonDocument {
	ret := C.QJsonDocument_FromJson2(json.cPointer(), error.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQJsonDocument(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QJsonDocument) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QJsonDocument) Delete() {
	C.QJsonDocument_Delete(this.h)
}

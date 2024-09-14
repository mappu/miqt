package qt

/*

#include "gen_qxmlstream.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QXmlStreamReader__TokenType int

const (
	QXmlStreamReader__TokenType__NoToken               QXmlStreamReader__TokenType = 0
	QXmlStreamReader__TokenType__Invalid               QXmlStreamReader__TokenType = 1
	QXmlStreamReader__TokenType__StartDocument         QXmlStreamReader__TokenType = 2
	QXmlStreamReader__TokenType__EndDocument           QXmlStreamReader__TokenType = 3
	QXmlStreamReader__TokenType__StartElement          QXmlStreamReader__TokenType = 4
	QXmlStreamReader__TokenType__EndElement            QXmlStreamReader__TokenType = 5
	QXmlStreamReader__TokenType__Characters            QXmlStreamReader__TokenType = 6
	QXmlStreamReader__TokenType__Comment               QXmlStreamReader__TokenType = 7
	QXmlStreamReader__TokenType__DTD                   QXmlStreamReader__TokenType = 8
	QXmlStreamReader__TokenType__EntityReference       QXmlStreamReader__TokenType = 9
	QXmlStreamReader__TokenType__ProcessingInstruction QXmlStreamReader__TokenType = 10
)

type QXmlStreamReader__ReadElementTextBehaviour int

const (
	QXmlStreamReader__ReadElementTextBehaviour__ErrorOnUnexpectedElement QXmlStreamReader__ReadElementTextBehaviour = 0
	QXmlStreamReader__ReadElementTextBehaviour__IncludeChildElements     QXmlStreamReader__ReadElementTextBehaviour = 1
	QXmlStreamReader__ReadElementTextBehaviour__SkipChildElements        QXmlStreamReader__ReadElementTextBehaviour = 2
)

type QXmlStreamReader__Error int

const (
	QXmlStreamReader__Error__NoError                     QXmlStreamReader__Error = 0
	QXmlStreamReader__Error__UnexpectedElementError      QXmlStreamReader__Error = 1
	QXmlStreamReader__Error__CustomError                 QXmlStreamReader__Error = 2
	QXmlStreamReader__Error__NotWellFormedError          QXmlStreamReader__Error = 3
	QXmlStreamReader__Error__PrematureEndOfDocumentError QXmlStreamReader__Error = 4
)

type QXmlStreamStringRef struct {
	h *C.QXmlStreamStringRef
}

func (this *QXmlStreamStringRef) cPointer() *C.QXmlStreamStringRef {
	if this == nil {
		return nil
	}
	return this.h
}

func newQXmlStreamStringRef(h *C.QXmlStreamStringRef) *QXmlStreamStringRef {
	if h == nil {
		return nil
	}
	return &QXmlStreamStringRef{h: h}
}

func newQXmlStreamStringRef_U(h unsafe.Pointer) *QXmlStreamStringRef {
	return newQXmlStreamStringRef((*C.QXmlStreamStringRef)(h))
}

// NewQXmlStreamStringRef constructs a new QXmlStreamStringRef object.
func NewQXmlStreamStringRef() *QXmlStreamStringRef {
	ret := C.QXmlStreamStringRef_new()
	return newQXmlStreamStringRef(ret)
}

// NewQXmlStreamStringRef2 constructs a new QXmlStreamStringRef object.
func NewQXmlStreamStringRef2(aString string) *QXmlStreamStringRef {
	aString_ms := miqt_strdupg(aString)
	defer C.free(aString_ms)
	ret := C.QXmlStreamStringRef_new2((*C.struct_miqt_string)(aString_ms))
	return newQXmlStreamStringRef(ret)
}

// NewQXmlStreamStringRef3 constructs a new QXmlStreamStringRef object.
func NewQXmlStreamStringRef3(other *QXmlStreamStringRef) *QXmlStreamStringRef {
	ret := C.QXmlStreamStringRef_new3(other.cPointer())
	return newQXmlStreamStringRef(ret)
}

func (this *QXmlStreamStringRef) OperatorAssign(other *QXmlStreamStringRef) {
	C.QXmlStreamStringRef_OperatorAssign(this.h, other.cPointer())
}

func (this *QXmlStreamStringRef) Swap(other *QXmlStreamStringRef) {
	C.QXmlStreamStringRef_Swap(this.h, other.cPointer())
}

func (this *QXmlStreamStringRef) Clear() {
	C.QXmlStreamStringRef_Clear(this.h)
}

func (this *QXmlStreamStringRef) String() string {
	var _ms *C.struct_miqt_string = C.QXmlStreamStringRef_String(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QXmlStreamStringRef) Position() int {
	_ret := C.QXmlStreamStringRef_Position(this.h)
	return (int)(_ret)
}

func (this *QXmlStreamStringRef) Size() int {
	_ret := C.QXmlStreamStringRef_Size(this.h)
	return (int)(_ret)
}

// Delete this object from C++ memory.
func (this *QXmlStreamStringRef) Delete() {
	C.QXmlStreamStringRef_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QXmlStreamStringRef) GoGC() {
	runtime.SetFinalizer(this, func(this *QXmlStreamStringRef) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QXmlStreamAttribute struct {
	h *C.QXmlStreamAttribute
}

func (this *QXmlStreamAttribute) cPointer() *C.QXmlStreamAttribute {
	if this == nil {
		return nil
	}
	return this.h
}

func newQXmlStreamAttribute(h *C.QXmlStreamAttribute) *QXmlStreamAttribute {
	if h == nil {
		return nil
	}
	return &QXmlStreamAttribute{h: h}
}

func newQXmlStreamAttribute_U(h unsafe.Pointer) *QXmlStreamAttribute {
	return newQXmlStreamAttribute((*C.QXmlStreamAttribute)(h))
}

// NewQXmlStreamAttribute constructs a new QXmlStreamAttribute object.
func NewQXmlStreamAttribute() *QXmlStreamAttribute {
	ret := C.QXmlStreamAttribute_new()
	return newQXmlStreamAttribute(ret)
}

// NewQXmlStreamAttribute2 constructs a new QXmlStreamAttribute object.
func NewQXmlStreamAttribute2(qualifiedName string, value string) *QXmlStreamAttribute {
	qualifiedName_ms := miqt_strdupg(qualifiedName)
	defer C.free(qualifiedName_ms)
	value_ms := miqt_strdupg(value)
	defer C.free(value_ms)
	ret := C.QXmlStreamAttribute_new2((*C.struct_miqt_string)(qualifiedName_ms), (*C.struct_miqt_string)(value_ms))
	return newQXmlStreamAttribute(ret)
}

// NewQXmlStreamAttribute3 constructs a new QXmlStreamAttribute object.
func NewQXmlStreamAttribute3(namespaceUri string, name string, value string) *QXmlStreamAttribute {
	namespaceUri_ms := miqt_strdupg(namespaceUri)
	defer C.free(namespaceUri_ms)
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	value_ms := miqt_strdupg(value)
	defer C.free(value_ms)
	ret := C.QXmlStreamAttribute_new3((*C.struct_miqt_string)(namespaceUri_ms), (*C.struct_miqt_string)(name_ms), (*C.struct_miqt_string)(value_ms))
	return newQXmlStreamAttribute(ret)
}

// NewQXmlStreamAttribute4 constructs a new QXmlStreamAttribute object.
func NewQXmlStreamAttribute4(param1 *QXmlStreamAttribute) *QXmlStreamAttribute {
	ret := C.QXmlStreamAttribute_new4(param1.cPointer())
	return newQXmlStreamAttribute(ret)
}

func (this *QXmlStreamAttribute) OperatorAssign(param1 *QXmlStreamAttribute) {
	C.QXmlStreamAttribute_OperatorAssign(this.h, param1.cPointer())
}

func (this *QXmlStreamAttribute) IsDefault() bool {
	_ret := C.QXmlStreamAttribute_IsDefault(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamAttribute) OperatorEqual(other *QXmlStreamAttribute) bool {
	_ret := C.QXmlStreamAttribute_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QXmlStreamAttribute) OperatorNotEqual(other *QXmlStreamAttribute) bool {
	_ret := C.QXmlStreamAttribute_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

// Delete this object from C++ memory.
func (this *QXmlStreamAttribute) Delete() {
	C.QXmlStreamAttribute_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QXmlStreamAttribute) GoGC() {
	runtime.SetFinalizer(this, func(this *QXmlStreamAttribute) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QXmlStreamNamespaceDeclaration struct {
	h *C.QXmlStreamNamespaceDeclaration
}

func (this *QXmlStreamNamespaceDeclaration) cPointer() *C.QXmlStreamNamespaceDeclaration {
	if this == nil {
		return nil
	}
	return this.h
}

func newQXmlStreamNamespaceDeclaration(h *C.QXmlStreamNamespaceDeclaration) *QXmlStreamNamespaceDeclaration {
	if h == nil {
		return nil
	}
	return &QXmlStreamNamespaceDeclaration{h: h}
}

func newQXmlStreamNamespaceDeclaration_U(h unsafe.Pointer) *QXmlStreamNamespaceDeclaration {
	return newQXmlStreamNamespaceDeclaration((*C.QXmlStreamNamespaceDeclaration)(h))
}

// NewQXmlStreamNamespaceDeclaration constructs a new QXmlStreamNamespaceDeclaration object.
func NewQXmlStreamNamespaceDeclaration() *QXmlStreamNamespaceDeclaration {
	ret := C.QXmlStreamNamespaceDeclaration_new()
	return newQXmlStreamNamespaceDeclaration(ret)
}

// NewQXmlStreamNamespaceDeclaration2 constructs a new QXmlStreamNamespaceDeclaration object.
func NewQXmlStreamNamespaceDeclaration2(prefix string, namespaceUri string) *QXmlStreamNamespaceDeclaration {
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	namespaceUri_ms := miqt_strdupg(namespaceUri)
	defer C.free(namespaceUri_ms)
	ret := C.QXmlStreamNamespaceDeclaration_new2((*C.struct_miqt_string)(prefix_ms), (*C.struct_miqt_string)(namespaceUri_ms))
	return newQXmlStreamNamespaceDeclaration(ret)
}

// NewQXmlStreamNamespaceDeclaration3 constructs a new QXmlStreamNamespaceDeclaration object.
func NewQXmlStreamNamespaceDeclaration3(param1 *QXmlStreamNamespaceDeclaration) *QXmlStreamNamespaceDeclaration {
	ret := C.QXmlStreamNamespaceDeclaration_new3(param1.cPointer())
	return newQXmlStreamNamespaceDeclaration(ret)
}

func (this *QXmlStreamNamespaceDeclaration) OperatorAssign(param1 *QXmlStreamNamespaceDeclaration) {
	C.QXmlStreamNamespaceDeclaration_OperatorAssign(this.h, param1.cPointer())
}

func (this *QXmlStreamNamespaceDeclaration) OperatorEqual(other *QXmlStreamNamespaceDeclaration) bool {
	_ret := C.QXmlStreamNamespaceDeclaration_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QXmlStreamNamespaceDeclaration) OperatorNotEqual(other *QXmlStreamNamespaceDeclaration) bool {
	_ret := C.QXmlStreamNamespaceDeclaration_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

// Delete this object from C++ memory.
func (this *QXmlStreamNamespaceDeclaration) Delete() {
	C.QXmlStreamNamespaceDeclaration_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QXmlStreamNamespaceDeclaration) GoGC() {
	runtime.SetFinalizer(this, func(this *QXmlStreamNamespaceDeclaration) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QXmlStreamNotationDeclaration struct {
	h *C.QXmlStreamNotationDeclaration
}

func (this *QXmlStreamNotationDeclaration) cPointer() *C.QXmlStreamNotationDeclaration {
	if this == nil {
		return nil
	}
	return this.h
}

func newQXmlStreamNotationDeclaration(h *C.QXmlStreamNotationDeclaration) *QXmlStreamNotationDeclaration {
	if h == nil {
		return nil
	}
	return &QXmlStreamNotationDeclaration{h: h}
}

func newQXmlStreamNotationDeclaration_U(h unsafe.Pointer) *QXmlStreamNotationDeclaration {
	return newQXmlStreamNotationDeclaration((*C.QXmlStreamNotationDeclaration)(h))
}

// NewQXmlStreamNotationDeclaration constructs a new QXmlStreamNotationDeclaration object.
func NewQXmlStreamNotationDeclaration() *QXmlStreamNotationDeclaration {
	ret := C.QXmlStreamNotationDeclaration_new()
	return newQXmlStreamNotationDeclaration(ret)
}

// NewQXmlStreamNotationDeclaration2 constructs a new QXmlStreamNotationDeclaration object.
func NewQXmlStreamNotationDeclaration2(param1 *QXmlStreamNotationDeclaration) *QXmlStreamNotationDeclaration {
	ret := C.QXmlStreamNotationDeclaration_new2(param1.cPointer())
	return newQXmlStreamNotationDeclaration(ret)
}

func (this *QXmlStreamNotationDeclaration) OperatorAssign(param1 *QXmlStreamNotationDeclaration) {
	C.QXmlStreamNotationDeclaration_OperatorAssign(this.h, param1.cPointer())
}

func (this *QXmlStreamNotationDeclaration) OperatorEqual(other *QXmlStreamNotationDeclaration) bool {
	_ret := C.QXmlStreamNotationDeclaration_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QXmlStreamNotationDeclaration) OperatorNotEqual(other *QXmlStreamNotationDeclaration) bool {
	_ret := C.QXmlStreamNotationDeclaration_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

// Delete this object from C++ memory.
func (this *QXmlStreamNotationDeclaration) Delete() {
	C.QXmlStreamNotationDeclaration_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QXmlStreamNotationDeclaration) GoGC() {
	runtime.SetFinalizer(this, func(this *QXmlStreamNotationDeclaration) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QXmlStreamEntityDeclaration struct {
	h *C.QXmlStreamEntityDeclaration
}

func (this *QXmlStreamEntityDeclaration) cPointer() *C.QXmlStreamEntityDeclaration {
	if this == nil {
		return nil
	}
	return this.h
}

func newQXmlStreamEntityDeclaration(h *C.QXmlStreamEntityDeclaration) *QXmlStreamEntityDeclaration {
	if h == nil {
		return nil
	}
	return &QXmlStreamEntityDeclaration{h: h}
}

func newQXmlStreamEntityDeclaration_U(h unsafe.Pointer) *QXmlStreamEntityDeclaration {
	return newQXmlStreamEntityDeclaration((*C.QXmlStreamEntityDeclaration)(h))
}

// NewQXmlStreamEntityDeclaration constructs a new QXmlStreamEntityDeclaration object.
func NewQXmlStreamEntityDeclaration() *QXmlStreamEntityDeclaration {
	ret := C.QXmlStreamEntityDeclaration_new()
	return newQXmlStreamEntityDeclaration(ret)
}

// NewQXmlStreamEntityDeclaration2 constructs a new QXmlStreamEntityDeclaration object.
func NewQXmlStreamEntityDeclaration2(param1 *QXmlStreamEntityDeclaration) *QXmlStreamEntityDeclaration {
	ret := C.QXmlStreamEntityDeclaration_new2(param1.cPointer())
	return newQXmlStreamEntityDeclaration(ret)
}

func (this *QXmlStreamEntityDeclaration) OperatorAssign(param1 *QXmlStreamEntityDeclaration) {
	C.QXmlStreamEntityDeclaration_OperatorAssign(this.h, param1.cPointer())
}

func (this *QXmlStreamEntityDeclaration) OperatorEqual(other *QXmlStreamEntityDeclaration) bool {
	_ret := C.QXmlStreamEntityDeclaration_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QXmlStreamEntityDeclaration) OperatorNotEqual(other *QXmlStreamEntityDeclaration) bool {
	_ret := C.QXmlStreamEntityDeclaration_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

// Delete this object from C++ memory.
func (this *QXmlStreamEntityDeclaration) Delete() {
	C.QXmlStreamEntityDeclaration_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QXmlStreamEntityDeclaration) GoGC() {
	runtime.SetFinalizer(this, func(this *QXmlStreamEntityDeclaration) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QXmlStreamEntityResolver struct {
	h *C.QXmlStreamEntityResolver
}

func (this *QXmlStreamEntityResolver) cPointer() *C.QXmlStreamEntityResolver {
	if this == nil {
		return nil
	}
	return this.h
}

func newQXmlStreamEntityResolver(h *C.QXmlStreamEntityResolver) *QXmlStreamEntityResolver {
	if h == nil {
		return nil
	}
	return &QXmlStreamEntityResolver{h: h}
}

func newQXmlStreamEntityResolver_U(h unsafe.Pointer) *QXmlStreamEntityResolver {
	return newQXmlStreamEntityResolver((*C.QXmlStreamEntityResolver)(h))
}

func (this *QXmlStreamEntityResolver) ResolveEntity(publicId string, systemId string) string {
	publicId_ms := miqt_strdupg(publicId)
	defer C.free(publicId_ms)
	systemId_ms := miqt_strdupg(systemId)
	defer C.free(systemId_ms)
	var _ms *C.struct_miqt_string = C.QXmlStreamEntityResolver_ResolveEntity(this.h, (*C.struct_miqt_string)(publicId_ms), (*C.struct_miqt_string)(systemId_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QXmlStreamEntityResolver) ResolveUndeclaredEntity(name string) string {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	var _ms *C.struct_miqt_string = C.QXmlStreamEntityResolver_ResolveUndeclaredEntity(this.h, (*C.struct_miqt_string)(name_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QXmlStreamEntityResolver) OperatorAssign(param1 *QXmlStreamEntityResolver) {
	C.QXmlStreamEntityResolver_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QXmlStreamEntityResolver) Delete() {
	C.QXmlStreamEntityResolver_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QXmlStreamEntityResolver) GoGC() {
	runtime.SetFinalizer(this, func(this *QXmlStreamEntityResolver) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QXmlStreamReader struct {
	h *C.QXmlStreamReader
}

func (this *QXmlStreamReader) cPointer() *C.QXmlStreamReader {
	if this == nil {
		return nil
	}
	return this.h
}

func newQXmlStreamReader(h *C.QXmlStreamReader) *QXmlStreamReader {
	if h == nil {
		return nil
	}
	return &QXmlStreamReader{h: h}
}

func newQXmlStreamReader_U(h unsafe.Pointer) *QXmlStreamReader {
	return newQXmlStreamReader((*C.QXmlStreamReader)(h))
}

// NewQXmlStreamReader constructs a new QXmlStreamReader object.
func NewQXmlStreamReader() *QXmlStreamReader {
	ret := C.QXmlStreamReader_new()
	return newQXmlStreamReader(ret)
}

// NewQXmlStreamReader2 constructs a new QXmlStreamReader object.
func NewQXmlStreamReader2(device *QIODevice) *QXmlStreamReader {
	ret := C.QXmlStreamReader_new2(device.cPointer())
	return newQXmlStreamReader(ret)
}

// NewQXmlStreamReader3 constructs a new QXmlStreamReader object.
func NewQXmlStreamReader3(data *QByteArray) *QXmlStreamReader {
	ret := C.QXmlStreamReader_new3(data.cPointer())
	return newQXmlStreamReader(ret)
}

// NewQXmlStreamReader4 constructs a new QXmlStreamReader object.
func NewQXmlStreamReader4(data string) *QXmlStreamReader {
	data_ms := miqt_strdupg(data)
	defer C.free(data_ms)
	ret := C.QXmlStreamReader_new4((*C.struct_miqt_string)(data_ms))
	return newQXmlStreamReader(ret)
}

// NewQXmlStreamReader5 constructs a new QXmlStreamReader object.
func NewQXmlStreamReader5(data string) *QXmlStreamReader {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QXmlStreamReader_new5(data_Cstring)
	return newQXmlStreamReader(ret)
}

func (this *QXmlStreamReader) SetDevice(device *QIODevice) {
	C.QXmlStreamReader_SetDevice(this.h, device.cPointer())
}

func (this *QXmlStreamReader) Device() *QIODevice {
	_ret := C.QXmlStreamReader_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(_ret))
}

func (this *QXmlStreamReader) AddData(data *QByteArray) {
	C.QXmlStreamReader_AddData(this.h, data.cPointer())
}

func (this *QXmlStreamReader) AddDataWithData(data string) {
	data_ms := miqt_strdupg(data)
	defer C.free(data_ms)
	C.QXmlStreamReader_AddDataWithData(this.h, (*C.struct_miqt_string)(data_ms))
}

func (this *QXmlStreamReader) AddData2(data string) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QXmlStreamReader_AddData2(this.h, data_Cstring)
}

func (this *QXmlStreamReader) Clear() {
	C.QXmlStreamReader_Clear(this.h)
}

func (this *QXmlStreamReader) AtEnd() bool {
	_ret := C.QXmlStreamReader_AtEnd(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) ReadNext() QXmlStreamReader__TokenType {
	_ret := C.QXmlStreamReader_ReadNext(this.h)
	return (QXmlStreamReader__TokenType)(_ret)
}

func (this *QXmlStreamReader) ReadNextStartElement() bool {
	_ret := C.QXmlStreamReader_ReadNextStartElement(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) SkipCurrentElement() {
	C.QXmlStreamReader_SkipCurrentElement(this.h)
}

func (this *QXmlStreamReader) TokenType() QXmlStreamReader__TokenType {
	_ret := C.QXmlStreamReader_TokenType(this.h)
	return (QXmlStreamReader__TokenType)(_ret)
}

func (this *QXmlStreamReader) TokenString() string {
	var _ms *C.struct_miqt_string = C.QXmlStreamReader_TokenString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QXmlStreamReader) SetNamespaceProcessing(namespaceProcessing bool) {
	C.QXmlStreamReader_SetNamespaceProcessing(this.h, (C.bool)(namespaceProcessing))
}

func (this *QXmlStreamReader) NamespaceProcessing() bool {
	_ret := C.QXmlStreamReader_NamespaceProcessing(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) IsStartDocument() bool {
	_ret := C.QXmlStreamReader_IsStartDocument(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) IsEndDocument() bool {
	_ret := C.QXmlStreamReader_IsEndDocument(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) IsStartElement() bool {
	_ret := C.QXmlStreamReader_IsStartElement(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) IsEndElement() bool {
	_ret := C.QXmlStreamReader_IsEndElement(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) IsCharacters() bool {
	_ret := C.QXmlStreamReader_IsCharacters(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) IsWhitespace() bool {
	_ret := C.QXmlStreamReader_IsWhitespace(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) IsCDATA() bool {
	_ret := C.QXmlStreamReader_IsCDATA(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) IsComment() bool {
	_ret := C.QXmlStreamReader_IsComment(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) IsDTD() bool {
	_ret := C.QXmlStreamReader_IsDTD(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) IsEntityReference() bool {
	_ret := C.QXmlStreamReader_IsEntityReference(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) IsProcessingInstruction() bool {
	_ret := C.QXmlStreamReader_IsProcessingInstruction(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) IsStandaloneDocument() bool {
	_ret := C.QXmlStreamReader_IsStandaloneDocument(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) LineNumber() int64 {
	_ret := C.QXmlStreamReader_LineNumber(this.h)
	return (int64)(_ret)
}

func (this *QXmlStreamReader) ColumnNumber() int64 {
	_ret := C.QXmlStreamReader_ColumnNumber(this.h)
	return (int64)(_ret)
}

func (this *QXmlStreamReader) CharacterOffset() int64 {
	_ret := C.QXmlStreamReader_CharacterOffset(this.h)
	return (int64)(_ret)
}

func (this *QXmlStreamReader) ReadElementText() string {
	var _ms *C.struct_miqt_string = C.QXmlStreamReader_ReadElementText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QXmlStreamReader) NamespaceDeclarations() []QXmlStreamNamespaceDeclaration {
	var _ma *C.struct_miqt_array = C.QXmlStreamReader_NamespaceDeclarations(this.h)
	_ret := make([]QXmlStreamNamespaceDeclaration, int(_ma.len))
	_outCast := (*[0xffff]*C.QXmlStreamNamespaceDeclaration)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQXmlStreamNamespaceDeclaration(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QXmlStreamReader) AddExtraNamespaceDeclaration(extraNamespaceDeclaraction *QXmlStreamNamespaceDeclaration) {
	C.QXmlStreamReader_AddExtraNamespaceDeclaration(this.h, extraNamespaceDeclaraction.cPointer())
}

func (this *QXmlStreamReader) AddExtraNamespaceDeclarations(extraNamespaceDeclaractions []QXmlStreamNamespaceDeclaration) {
	// For the C ABI, malloc a C array of raw pointers
	extraNamespaceDeclaractions_CArray := (*[0xffff]*C.QXmlStreamNamespaceDeclaration)(C.malloc(C.size_t(8 * len(extraNamespaceDeclaractions))))
	defer C.free(unsafe.Pointer(extraNamespaceDeclaractions_CArray))
	for i := range extraNamespaceDeclaractions {
		extraNamespaceDeclaractions_CArray[i] = extraNamespaceDeclaractions[i].cPointer()
	}
	extraNamespaceDeclaractions_ma := &C.struct_miqt_array{len: C.size_t(len(extraNamespaceDeclaractions)), data: unsafe.Pointer(extraNamespaceDeclaractions_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(extraNamespaceDeclaractions_ma))
	C.QXmlStreamReader_AddExtraNamespaceDeclarations(this.h, extraNamespaceDeclaractions_ma)
}

func (this *QXmlStreamReader) NotationDeclarations() []QXmlStreamNotationDeclaration {
	var _ma *C.struct_miqt_array = C.QXmlStreamReader_NotationDeclarations(this.h)
	_ret := make([]QXmlStreamNotationDeclaration, int(_ma.len))
	_outCast := (*[0xffff]*C.QXmlStreamNotationDeclaration)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQXmlStreamNotationDeclaration(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QXmlStreamReader) EntityDeclarations() []QXmlStreamEntityDeclaration {
	var _ma *C.struct_miqt_array = C.QXmlStreamReader_EntityDeclarations(this.h)
	_ret := make([]QXmlStreamEntityDeclaration, int(_ma.len))
	_outCast := (*[0xffff]*C.QXmlStreamEntityDeclaration)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQXmlStreamEntityDeclaration(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QXmlStreamReader) EntityExpansionLimit() int {
	_ret := C.QXmlStreamReader_EntityExpansionLimit(this.h)
	return (int)(_ret)
}

func (this *QXmlStreamReader) SetEntityExpansionLimit(limit int) {
	C.QXmlStreamReader_SetEntityExpansionLimit(this.h, (C.int)(limit))
}

func (this *QXmlStreamReader) RaiseError() {
	C.QXmlStreamReader_RaiseError(this.h)
}

func (this *QXmlStreamReader) ErrorString() string {
	var _ms *C.struct_miqt_string = C.QXmlStreamReader_ErrorString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QXmlStreamReader) Error() QXmlStreamReader__Error {
	_ret := C.QXmlStreamReader_Error(this.h)
	return (QXmlStreamReader__Error)(_ret)
}

func (this *QXmlStreamReader) HasError() bool {
	_ret := C.QXmlStreamReader_HasError(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamReader) SetEntityResolver(resolver *QXmlStreamEntityResolver) {
	C.QXmlStreamReader_SetEntityResolver(this.h, resolver.cPointer())
}

func (this *QXmlStreamReader) EntityResolver() *QXmlStreamEntityResolver {
	_ret := C.QXmlStreamReader_EntityResolver(this.h)
	return newQXmlStreamEntityResolver_U(unsafe.Pointer(_ret))
}

func (this *QXmlStreamReader) ReadElementText1(behaviour QXmlStreamReader__ReadElementTextBehaviour) string {
	var _ms *C.struct_miqt_string = C.QXmlStreamReader_ReadElementText1(this.h, (C.uintptr_t)(behaviour))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QXmlStreamReader) RaiseError1(message string) {
	message_ms := miqt_strdupg(message)
	defer C.free(message_ms)
	C.QXmlStreamReader_RaiseError1(this.h, (*C.struct_miqt_string)(message_ms))
}

// Delete this object from C++ memory.
func (this *QXmlStreamReader) Delete() {
	C.QXmlStreamReader_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QXmlStreamReader) GoGC() {
	runtime.SetFinalizer(this, func(this *QXmlStreamReader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QXmlStreamWriter struct {
	h *C.QXmlStreamWriter
}

func (this *QXmlStreamWriter) cPointer() *C.QXmlStreamWriter {
	if this == nil {
		return nil
	}
	return this.h
}

func newQXmlStreamWriter(h *C.QXmlStreamWriter) *QXmlStreamWriter {
	if h == nil {
		return nil
	}
	return &QXmlStreamWriter{h: h}
}

func newQXmlStreamWriter_U(h unsafe.Pointer) *QXmlStreamWriter {
	return newQXmlStreamWriter((*C.QXmlStreamWriter)(h))
}

// NewQXmlStreamWriter constructs a new QXmlStreamWriter object.
func NewQXmlStreamWriter() *QXmlStreamWriter {
	ret := C.QXmlStreamWriter_new()
	return newQXmlStreamWriter(ret)
}

// NewQXmlStreamWriter2 constructs a new QXmlStreamWriter object.
func NewQXmlStreamWriter2(device *QIODevice) *QXmlStreamWriter {
	ret := C.QXmlStreamWriter_new2(device.cPointer())
	return newQXmlStreamWriter(ret)
}

// NewQXmlStreamWriter3 constructs a new QXmlStreamWriter object.
func NewQXmlStreamWriter3(array *QByteArray) *QXmlStreamWriter {
	ret := C.QXmlStreamWriter_new3(array.cPointer())
	return newQXmlStreamWriter(ret)
}

func (this *QXmlStreamWriter) SetDevice(device *QIODevice) {
	C.QXmlStreamWriter_SetDevice(this.h, device.cPointer())
}

func (this *QXmlStreamWriter) Device() *QIODevice {
	_ret := C.QXmlStreamWriter_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(_ret))
}

func (this *QXmlStreamWriter) SetCodec(codec *QTextCodec) {
	C.QXmlStreamWriter_SetCodec(this.h, codec.cPointer())
}

func (this *QXmlStreamWriter) SetCodecWithCodecName(codecName string) {
	codecName_Cstring := C.CString(codecName)
	defer C.free(unsafe.Pointer(codecName_Cstring))
	C.QXmlStreamWriter_SetCodecWithCodecName(this.h, codecName_Cstring)
}

func (this *QXmlStreamWriter) Codec() *QTextCodec {
	_ret := C.QXmlStreamWriter_Codec(this.h)
	return newQTextCodec_U(unsafe.Pointer(_ret))
}

func (this *QXmlStreamWriter) SetAutoFormatting(autoFormatting bool) {
	C.QXmlStreamWriter_SetAutoFormatting(this.h, (C.bool)(autoFormatting))
}

func (this *QXmlStreamWriter) AutoFormatting() bool {
	_ret := C.QXmlStreamWriter_AutoFormatting(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamWriter) SetAutoFormattingIndent(spacesOrTabs int) {
	C.QXmlStreamWriter_SetAutoFormattingIndent(this.h, (C.int)(spacesOrTabs))
}

func (this *QXmlStreamWriter) AutoFormattingIndent() int {
	_ret := C.QXmlStreamWriter_AutoFormattingIndent(this.h)
	return (int)(_ret)
}

func (this *QXmlStreamWriter) WriteAttribute(qualifiedName string, value string) {
	qualifiedName_ms := miqt_strdupg(qualifiedName)
	defer C.free(qualifiedName_ms)
	value_ms := miqt_strdupg(value)
	defer C.free(value_ms)
	C.QXmlStreamWriter_WriteAttribute(this.h, (*C.struct_miqt_string)(qualifiedName_ms), (*C.struct_miqt_string)(value_ms))
}

func (this *QXmlStreamWriter) WriteAttribute2(namespaceUri string, name string, value string) {
	namespaceUri_ms := miqt_strdupg(namespaceUri)
	defer C.free(namespaceUri_ms)
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	value_ms := miqt_strdupg(value)
	defer C.free(value_ms)
	C.QXmlStreamWriter_WriteAttribute2(this.h, (*C.struct_miqt_string)(namespaceUri_ms), (*C.struct_miqt_string)(name_ms), (*C.struct_miqt_string)(value_ms))
}

func (this *QXmlStreamWriter) WriteAttributeWithAttribute(attribute *QXmlStreamAttribute) {
	C.QXmlStreamWriter_WriteAttributeWithAttribute(this.h, attribute.cPointer())
}

func (this *QXmlStreamWriter) WriteCDATA(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QXmlStreamWriter_WriteCDATA(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QXmlStreamWriter) WriteCharacters(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QXmlStreamWriter_WriteCharacters(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QXmlStreamWriter) WriteComment(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QXmlStreamWriter_WriteComment(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QXmlStreamWriter) WriteDTD(dtd string) {
	dtd_ms := miqt_strdupg(dtd)
	defer C.free(dtd_ms)
	C.QXmlStreamWriter_WriteDTD(this.h, (*C.struct_miqt_string)(dtd_ms))
}

func (this *QXmlStreamWriter) WriteEmptyElement(qualifiedName string) {
	qualifiedName_ms := miqt_strdupg(qualifiedName)
	defer C.free(qualifiedName_ms)
	C.QXmlStreamWriter_WriteEmptyElement(this.h, (*C.struct_miqt_string)(qualifiedName_ms))
}

func (this *QXmlStreamWriter) WriteEmptyElement2(namespaceUri string, name string) {
	namespaceUri_ms := miqt_strdupg(namespaceUri)
	defer C.free(namespaceUri_ms)
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	C.QXmlStreamWriter_WriteEmptyElement2(this.h, (*C.struct_miqt_string)(namespaceUri_ms), (*C.struct_miqt_string)(name_ms))
}

func (this *QXmlStreamWriter) WriteTextElement(qualifiedName string, text string) {
	qualifiedName_ms := miqt_strdupg(qualifiedName)
	defer C.free(qualifiedName_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QXmlStreamWriter_WriteTextElement(this.h, (*C.struct_miqt_string)(qualifiedName_ms), (*C.struct_miqt_string)(text_ms))
}

func (this *QXmlStreamWriter) WriteTextElement2(namespaceUri string, name string, text string) {
	namespaceUri_ms := miqt_strdupg(namespaceUri)
	defer C.free(namespaceUri_ms)
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QXmlStreamWriter_WriteTextElement2(this.h, (*C.struct_miqt_string)(namespaceUri_ms), (*C.struct_miqt_string)(name_ms), (*C.struct_miqt_string)(text_ms))
}

func (this *QXmlStreamWriter) WriteEndDocument() {
	C.QXmlStreamWriter_WriteEndDocument(this.h)
}

func (this *QXmlStreamWriter) WriteEndElement() {
	C.QXmlStreamWriter_WriteEndElement(this.h)
}

func (this *QXmlStreamWriter) WriteEntityReference(name string) {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	C.QXmlStreamWriter_WriteEntityReference(this.h, (*C.struct_miqt_string)(name_ms))
}

func (this *QXmlStreamWriter) WriteNamespace(namespaceUri string) {
	namespaceUri_ms := miqt_strdupg(namespaceUri)
	defer C.free(namespaceUri_ms)
	C.QXmlStreamWriter_WriteNamespace(this.h, (*C.struct_miqt_string)(namespaceUri_ms))
}

func (this *QXmlStreamWriter) WriteDefaultNamespace(namespaceUri string) {
	namespaceUri_ms := miqt_strdupg(namespaceUri)
	defer C.free(namespaceUri_ms)
	C.QXmlStreamWriter_WriteDefaultNamespace(this.h, (*C.struct_miqt_string)(namespaceUri_ms))
}

func (this *QXmlStreamWriter) WriteProcessingInstruction(target string) {
	target_ms := miqt_strdupg(target)
	defer C.free(target_ms)
	C.QXmlStreamWriter_WriteProcessingInstruction(this.h, (*C.struct_miqt_string)(target_ms))
}

func (this *QXmlStreamWriter) WriteStartDocument() {
	C.QXmlStreamWriter_WriteStartDocument(this.h)
}

func (this *QXmlStreamWriter) WriteStartDocumentWithVersion(version string) {
	version_ms := miqt_strdupg(version)
	defer C.free(version_ms)
	C.QXmlStreamWriter_WriteStartDocumentWithVersion(this.h, (*C.struct_miqt_string)(version_ms))
}

func (this *QXmlStreamWriter) WriteStartDocument2(version string, standalone bool) {
	version_ms := miqt_strdupg(version)
	defer C.free(version_ms)
	C.QXmlStreamWriter_WriteStartDocument2(this.h, (*C.struct_miqt_string)(version_ms), (C.bool)(standalone))
}

func (this *QXmlStreamWriter) WriteStartElement(qualifiedName string) {
	qualifiedName_ms := miqt_strdupg(qualifiedName)
	defer C.free(qualifiedName_ms)
	C.QXmlStreamWriter_WriteStartElement(this.h, (*C.struct_miqt_string)(qualifiedName_ms))
}

func (this *QXmlStreamWriter) WriteStartElement2(namespaceUri string, name string) {
	namespaceUri_ms := miqt_strdupg(namespaceUri)
	defer C.free(namespaceUri_ms)
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	C.QXmlStreamWriter_WriteStartElement2(this.h, (*C.struct_miqt_string)(namespaceUri_ms), (*C.struct_miqt_string)(name_ms))
}

func (this *QXmlStreamWriter) WriteCurrentToken(reader *QXmlStreamReader) {
	C.QXmlStreamWriter_WriteCurrentToken(this.h, reader.cPointer())
}

func (this *QXmlStreamWriter) HasError() bool {
	_ret := C.QXmlStreamWriter_HasError(this.h)
	return (bool)(_ret)
}

func (this *QXmlStreamWriter) WriteNamespace2(namespaceUri string, prefix string) {
	namespaceUri_ms := miqt_strdupg(namespaceUri)
	defer C.free(namespaceUri_ms)
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	C.QXmlStreamWriter_WriteNamespace2(this.h, (*C.struct_miqt_string)(namespaceUri_ms), (*C.struct_miqt_string)(prefix_ms))
}

func (this *QXmlStreamWriter) WriteProcessingInstruction2(target string, data string) {
	target_ms := miqt_strdupg(target)
	defer C.free(target_ms)
	data_ms := miqt_strdupg(data)
	defer C.free(data_ms)
	C.QXmlStreamWriter_WriteProcessingInstruction2(this.h, (*C.struct_miqt_string)(target_ms), (*C.struct_miqt_string)(data_ms))
}

// Delete this object from C++ memory.
func (this *QXmlStreamWriter) Delete() {
	C.QXmlStreamWriter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QXmlStreamWriter) GoGC() {
	runtime.SetFinalizer(this, func(this *QXmlStreamWriter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

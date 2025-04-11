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
	QXmlStreamReader__NoToken               QXmlStreamReader__TokenType = 0
	QXmlStreamReader__Invalid               QXmlStreamReader__TokenType = 1
	QXmlStreamReader__StartDocument         QXmlStreamReader__TokenType = 2
	QXmlStreamReader__EndDocument           QXmlStreamReader__TokenType = 3
	QXmlStreamReader__StartElement          QXmlStreamReader__TokenType = 4
	QXmlStreamReader__EndElement            QXmlStreamReader__TokenType = 5
	QXmlStreamReader__Characters            QXmlStreamReader__TokenType = 6
	QXmlStreamReader__Comment               QXmlStreamReader__TokenType = 7
	QXmlStreamReader__DTD                   QXmlStreamReader__TokenType = 8
	QXmlStreamReader__EntityReference       QXmlStreamReader__TokenType = 9
	QXmlStreamReader__ProcessingInstruction QXmlStreamReader__TokenType = 10
)

type QXmlStreamReader__ReadElementTextBehaviour int

const (
	QXmlStreamReader__ErrorOnUnexpectedElement QXmlStreamReader__ReadElementTextBehaviour = 0
	QXmlStreamReader__IncludeChildElements     QXmlStreamReader__ReadElementTextBehaviour = 1
	QXmlStreamReader__SkipChildElements        QXmlStreamReader__ReadElementTextBehaviour = 2
)

type QXmlStreamReader__Error int

const (
	QXmlStreamReader__NoError                     QXmlStreamReader__Error = 0
	QXmlStreamReader__UnexpectedElementError      QXmlStreamReader__Error = 1
	QXmlStreamReader__CustomError                 QXmlStreamReader__Error = 2
	QXmlStreamReader__NotWellFormedError          QXmlStreamReader__Error = 3
	QXmlStreamReader__PrematureEndOfDocumentError QXmlStreamReader__Error = 4
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

func (this *QXmlStreamStringRef) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQXmlStreamStringRef constructs the type using only CGO pointers.
func newQXmlStreamStringRef(h *C.QXmlStreamStringRef) *QXmlStreamStringRef {
	if h == nil {
		return nil
	}

	return &QXmlStreamStringRef{h: h}
}

// UnsafeNewQXmlStreamStringRef constructs the type using only unsafe pointers.
func UnsafeNewQXmlStreamStringRef(h unsafe.Pointer) *QXmlStreamStringRef {
	return newQXmlStreamStringRef((*C.QXmlStreamStringRef)(h))
}

// NewQXmlStreamStringRef constructs a new QXmlStreamStringRef object.
func NewQXmlStreamStringRef() *QXmlStreamStringRef {

	return newQXmlStreamStringRef(C.QXmlStreamStringRef_new())
}

// NewQXmlStreamStringRef2 constructs a new QXmlStreamStringRef object.
func NewQXmlStreamStringRef2(aString string) *QXmlStreamStringRef {
	aString_ms := C.struct_miqt_string{}
	aString_ms.data = C.CString(aString)
	aString_ms.len = C.size_t(len(aString))
	defer C.free(unsafe.Pointer(aString_ms.data))

	return newQXmlStreamStringRef(C.QXmlStreamStringRef_new2(aString_ms))
}

// NewQXmlStreamStringRef3 constructs a new QXmlStreamStringRef object.
func NewQXmlStreamStringRef3(other *QXmlStreamStringRef) *QXmlStreamStringRef {

	return newQXmlStreamStringRef(C.QXmlStreamStringRef_new3(other.cPointer()))
}

func (this *QXmlStreamStringRef) OperatorAssign(other *QXmlStreamStringRef) {
	C.QXmlStreamStringRef_operatorAssign(this.h, other.cPointer())
}

func (this *QXmlStreamStringRef) Swap(other *QXmlStreamStringRef) {
	C.QXmlStreamStringRef_swap(this.h, other.cPointer())
}

func (this *QXmlStreamStringRef) Clear() {
	C.QXmlStreamStringRef_clear(this.h)
}

func (this *QXmlStreamStringRef) String() string {
	var _ms C.struct_miqt_string = C.QXmlStreamStringRef_string(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QXmlStreamStringRef) Position() int {
	return (int)(C.QXmlStreamStringRef_position(this.h))
}

func (this *QXmlStreamStringRef) Size() int {
	return (int)(C.QXmlStreamStringRef_size(this.h))
}

// Delete this object from C++ memory.
func (this *QXmlStreamStringRef) Delete() {
	C.QXmlStreamStringRef_delete(this.h)
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

func (this *QXmlStreamAttribute) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQXmlStreamAttribute constructs the type using only CGO pointers.
func newQXmlStreamAttribute(h *C.QXmlStreamAttribute) *QXmlStreamAttribute {
	if h == nil {
		return nil
	}

	return &QXmlStreamAttribute{h: h}
}

// UnsafeNewQXmlStreamAttribute constructs the type using only unsafe pointers.
func UnsafeNewQXmlStreamAttribute(h unsafe.Pointer) *QXmlStreamAttribute {
	return newQXmlStreamAttribute((*C.QXmlStreamAttribute)(h))
}

// NewQXmlStreamAttribute constructs a new QXmlStreamAttribute object.
func NewQXmlStreamAttribute() *QXmlStreamAttribute {

	return newQXmlStreamAttribute(C.QXmlStreamAttribute_new())
}

// NewQXmlStreamAttribute2 constructs a new QXmlStreamAttribute object.
func NewQXmlStreamAttribute2(qualifiedName string, value string) *QXmlStreamAttribute {
	qualifiedName_ms := C.struct_miqt_string{}
	qualifiedName_ms.data = C.CString(qualifiedName)
	qualifiedName_ms.len = C.size_t(len(qualifiedName))
	defer C.free(unsafe.Pointer(qualifiedName_ms.data))
	value_ms := C.struct_miqt_string{}
	value_ms.data = C.CString(value)
	value_ms.len = C.size_t(len(value))
	defer C.free(unsafe.Pointer(value_ms.data))

	return newQXmlStreamAttribute(C.QXmlStreamAttribute_new2(qualifiedName_ms, value_ms))
}

// NewQXmlStreamAttribute3 constructs a new QXmlStreamAttribute object.
func NewQXmlStreamAttribute3(namespaceUri string, name string, value string) *QXmlStreamAttribute {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	value_ms := C.struct_miqt_string{}
	value_ms.data = C.CString(value)
	value_ms.len = C.size_t(len(value))
	defer C.free(unsafe.Pointer(value_ms.data))

	return newQXmlStreamAttribute(C.QXmlStreamAttribute_new3(namespaceUri_ms, name_ms, value_ms))
}

// NewQXmlStreamAttribute4 constructs a new QXmlStreamAttribute object.
func NewQXmlStreamAttribute4(param1 *QXmlStreamAttribute) *QXmlStreamAttribute {

	return newQXmlStreamAttribute(C.QXmlStreamAttribute_new4(param1.cPointer()))
}

func (this *QXmlStreamAttribute) OperatorAssign(param1 *QXmlStreamAttribute) {
	C.QXmlStreamAttribute_operatorAssign(this.h, param1.cPointer())
}

func (this *QXmlStreamAttribute) IsDefault() bool {
	return (bool)(C.QXmlStreamAttribute_isDefault(this.h))
}

func (this *QXmlStreamAttribute) OperatorEqual(other *QXmlStreamAttribute) bool {
	return (bool)(C.QXmlStreamAttribute_operatorEqual(this.h, other.cPointer()))
}

func (this *QXmlStreamAttribute) OperatorNotEqual(other *QXmlStreamAttribute) bool {
	return (bool)(C.QXmlStreamAttribute_operatorNotEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QXmlStreamAttribute) Delete() {
	C.QXmlStreamAttribute_delete(this.h)
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

func (this *QXmlStreamNamespaceDeclaration) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQXmlStreamNamespaceDeclaration constructs the type using only CGO pointers.
func newQXmlStreamNamespaceDeclaration(h *C.QXmlStreamNamespaceDeclaration) *QXmlStreamNamespaceDeclaration {
	if h == nil {
		return nil
	}

	return &QXmlStreamNamespaceDeclaration{h: h}
}

// UnsafeNewQXmlStreamNamespaceDeclaration constructs the type using only unsafe pointers.
func UnsafeNewQXmlStreamNamespaceDeclaration(h unsafe.Pointer) *QXmlStreamNamespaceDeclaration {
	return newQXmlStreamNamespaceDeclaration((*C.QXmlStreamNamespaceDeclaration)(h))
}

// NewQXmlStreamNamespaceDeclaration constructs a new QXmlStreamNamespaceDeclaration object.
func NewQXmlStreamNamespaceDeclaration() *QXmlStreamNamespaceDeclaration {

	return newQXmlStreamNamespaceDeclaration(C.QXmlStreamNamespaceDeclaration_new())
}

// NewQXmlStreamNamespaceDeclaration2 constructs a new QXmlStreamNamespaceDeclaration object.
func NewQXmlStreamNamespaceDeclaration2(prefix string, namespaceUri string) *QXmlStreamNamespaceDeclaration {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))

	return newQXmlStreamNamespaceDeclaration(C.QXmlStreamNamespaceDeclaration_new2(prefix_ms, namespaceUri_ms))
}

// NewQXmlStreamNamespaceDeclaration3 constructs a new QXmlStreamNamespaceDeclaration object.
func NewQXmlStreamNamespaceDeclaration3(param1 *QXmlStreamNamespaceDeclaration) *QXmlStreamNamespaceDeclaration {

	return newQXmlStreamNamespaceDeclaration(C.QXmlStreamNamespaceDeclaration_new3(param1.cPointer()))
}

func (this *QXmlStreamNamespaceDeclaration) OperatorAssign(param1 *QXmlStreamNamespaceDeclaration) {
	C.QXmlStreamNamespaceDeclaration_operatorAssign(this.h, param1.cPointer())
}

func (this *QXmlStreamNamespaceDeclaration) OperatorEqual(other *QXmlStreamNamespaceDeclaration) bool {
	return (bool)(C.QXmlStreamNamespaceDeclaration_operatorEqual(this.h, other.cPointer()))
}

func (this *QXmlStreamNamespaceDeclaration) OperatorNotEqual(other *QXmlStreamNamespaceDeclaration) bool {
	return (bool)(C.QXmlStreamNamespaceDeclaration_operatorNotEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QXmlStreamNamespaceDeclaration) Delete() {
	C.QXmlStreamNamespaceDeclaration_delete(this.h)
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

func (this *QXmlStreamNotationDeclaration) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQXmlStreamNotationDeclaration constructs the type using only CGO pointers.
func newQXmlStreamNotationDeclaration(h *C.QXmlStreamNotationDeclaration) *QXmlStreamNotationDeclaration {
	if h == nil {
		return nil
	}

	return &QXmlStreamNotationDeclaration{h: h}
}

// UnsafeNewQXmlStreamNotationDeclaration constructs the type using only unsafe pointers.
func UnsafeNewQXmlStreamNotationDeclaration(h unsafe.Pointer) *QXmlStreamNotationDeclaration {
	return newQXmlStreamNotationDeclaration((*C.QXmlStreamNotationDeclaration)(h))
}

// NewQXmlStreamNotationDeclaration constructs a new QXmlStreamNotationDeclaration object.
func NewQXmlStreamNotationDeclaration() *QXmlStreamNotationDeclaration {

	return newQXmlStreamNotationDeclaration(C.QXmlStreamNotationDeclaration_new())
}

// NewQXmlStreamNotationDeclaration2 constructs a new QXmlStreamNotationDeclaration object.
func NewQXmlStreamNotationDeclaration2(param1 *QXmlStreamNotationDeclaration) *QXmlStreamNotationDeclaration {

	return newQXmlStreamNotationDeclaration(C.QXmlStreamNotationDeclaration_new2(param1.cPointer()))
}

func (this *QXmlStreamNotationDeclaration) OperatorAssign(param1 *QXmlStreamNotationDeclaration) {
	C.QXmlStreamNotationDeclaration_operatorAssign(this.h, param1.cPointer())
}

func (this *QXmlStreamNotationDeclaration) OperatorEqual(other *QXmlStreamNotationDeclaration) bool {
	return (bool)(C.QXmlStreamNotationDeclaration_operatorEqual(this.h, other.cPointer()))
}

func (this *QXmlStreamNotationDeclaration) OperatorNotEqual(other *QXmlStreamNotationDeclaration) bool {
	return (bool)(C.QXmlStreamNotationDeclaration_operatorNotEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QXmlStreamNotationDeclaration) Delete() {
	C.QXmlStreamNotationDeclaration_delete(this.h)
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

func (this *QXmlStreamEntityDeclaration) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQXmlStreamEntityDeclaration constructs the type using only CGO pointers.
func newQXmlStreamEntityDeclaration(h *C.QXmlStreamEntityDeclaration) *QXmlStreamEntityDeclaration {
	if h == nil {
		return nil
	}

	return &QXmlStreamEntityDeclaration{h: h}
}

// UnsafeNewQXmlStreamEntityDeclaration constructs the type using only unsafe pointers.
func UnsafeNewQXmlStreamEntityDeclaration(h unsafe.Pointer) *QXmlStreamEntityDeclaration {
	return newQXmlStreamEntityDeclaration((*C.QXmlStreamEntityDeclaration)(h))
}

// NewQXmlStreamEntityDeclaration constructs a new QXmlStreamEntityDeclaration object.
func NewQXmlStreamEntityDeclaration() *QXmlStreamEntityDeclaration {

	return newQXmlStreamEntityDeclaration(C.QXmlStreamEntityDeclaration_new())
}

// NewQXmlStreamEntityDeclaration2 constructs a new QXmlStreamEntityDeclaration object.
func NewQXmlStreamEntityDeclaration2(param1 *QXmlStreamEntityDeclaration) *QXmlStreamEntityDeclaration {

	return newQXmlStreamEntityDeclaration(C.QXmlStreamEntityDeclaration_new2(param1.cPointer()))
}

func (this *QXmlStreamEntityDeclaration) OperatorAssign(param1 *QXmlStreamEntityDeclaration) {
	C.QXmlStreamEntityDeclaration_operatorAssign(this.h, param1.cPointer())
}

func (this *QXmlStreamEntityDeclaration) OperatorEqual(other *QXmlStreamEntityDeclaration) bool {
	return (bool)(C.QXmlStreamEntityDeclaration_operatorEqual(this.h, other.cPointer()))
}

func (this *QXmlStreamEntityDeclaration) OperatorNotEqual(other *QXmlStreamEntityDeclaration) bool {
	return (bool)(C.QXmlStreamEntityDeclaration_operatorNotEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QXmlStreamEntityDeclaration) Delete() {
	C.QXmlStreamEntityDeclaration_delete(this.h)
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

func (this *QXmlStreamEntityResolver) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQXmlStreamEntityResolver constructs the type using only CGO pointers.
func newQXmlStreamEntityResolver(h *C.QXmlStreamEntityResolver) *QXmlStreamEntityResolver {
	if h == nil {
		return nil
	}

	return &QXmlStreamEntityResolver{h: h}
}

// UnsafeNewQXmlStreamEntityResolver constructs the type using only unsafe pointers.
func UnsafeNewQXmlStreamEntityResolver(h unsafe.Pointer) *QXmlStreamEntityResolver {
	return newQXmlStreamEntityResolver((*C.QXmlStreamEntityResolver)(h))
}

func (this *QXmlStreamEntityResolver) ResolveEntity(publicId string, systemId string) string {
	publicId_ms := C.struct_miqt_string{}
	publicId_ms.data = C.CString(publicId)
	publicId_ms.len = C.size_t(len(publicId))
	defer C.free(unsafe.Pointer(publicId_ms.data))
	systemId_ms := C.struct_miqt_string{}
	systemId_ms.data = C.CString(systemId)
	systemId_ms.len = C.size_t(len(systemId))
	defer C.free(unsafe.Pointer(systemId_ms.data))
	var _ms C.struct_miqt_string = C.QXmlStreamEntityResolver_resolveEntity(this.h, publicId_ms, systemId_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QXmlStreamEntityResolver) ResolveUndeclaredEntity(name string) string {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ms C.struct_miqt_string = C.QXmlStreamEntityResolver_resolveUndeclaredEntity(this.h, name_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QXmlStreamEntityResolver) Delete() {
	C.QXmlStreamEntityResolver_delete(this.h)
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

func (this *QXmlStreamReader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQXmlStreamReader constructs the type using only CGO pointers.
func newQXmlStreamReader(h *C.QXmlStreamReader) *QXmlStreamReader {
	if h == nil {
		return nil
	}

	return &QXmlStreamReader{h: h}
}

// UnsafeNewQXmlStreamReader constructs the type using only unsafe pointers.
func UnsafeNewQXmlStreamReader(h unsafe.Pointer) *QXmlStreamReader {
	return newQXmlStreamReader((*C.QXmlStreamReader)(h))
}

// NewQXmlStreamReader constructs a new QXmlStreamReader object.
func NewQXmlStreamReader() *QXmlStreamReader {

	return newQXmlStreamReader(C.QXmlStreamReader_new())
}

// NewQXmlStreamReader2 constructs a new QXmlStreamReader object.
func NewQXmlStreamReader2(device *QIODevice) *QXmlStreamReader {

	return newQXmlStreamReader(C.QXmlStreamReader_new2(device.cPointer()))
}

// NewQXmlStreamReader3 constructs a new QXmlStreamReader object.
func NewQXmlStreamReader3(data []byte) *QXmlStreamReader {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))

	return newQXmlStreamReader(C.QXmlStreamReader_new3(data_alias))
}

// NewQXmlStreamReader4 constructs a new QXmlStreamReader object.
func NewQXmlStreamReader4(data string) *QXmlStreamReader {
	data_ms := C.struct_miqt_string{}
	data_ms.data = C.CString(data)
	data_ms.len = C.size_t(len(data))
	defer C.free(unsafe.Pointer(data_ms.data))

	return newQXmlStreamReader(C.QXmlStreamReader_new4(data_ms))
}

// NewQXmlStreamReader5 constructs a new QXmlStreamReader object.
func NewQXmlStreamReader5(data string) *QXmlStreamReader {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return newQXmlStreamReader(C.QXmlStreamReader_new5(data_Cstring))
}

func (this *QXmlStreamReader) SetDevice(device *QIODevice) {
	C.QXmlStreamReader_setDevice(this.h, device.cPointer())
}

func (this *QXmlStreamReader) Device() *QIODevice {
	return newQIODevice(C.QXmlStreamReader_device(this.h))
}

func (this *QXmlStreamReader) AddData(data []byte) {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	C.QXmlStreamReader_addData(this.h, data_alias)
}

func (this *QXmlStreamReader) AddDataWithData(data string) {
	data_ms := C.struct_miqt_string{}
	data_ms.data = C.CString(data)
	data_ms.len = C.size_t(len(data))
	defer C.free(unsafe.Pointer(data_ms.data))
	C.QXmlStreamReader_addDataWithData(this.h, data_ms)
}

func (this *QXmlStreamReader) AddData2(data string) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QXmlStreamReader_addData2(this.h, data_Cstring)
}

func (this *QXmlStreamReader) Clear() {
	C.QXmlStreamReader_clear(this.h)
}

func (this *QXmlStreamReader) AtEnd() bool {
	return (bool)(C.QXmlStreamReader_atEnd(this.h))
}

func (this *QXmlStreamReader) ReadNext() QXmlStreamReader__TokenType {
	return (QXmlStreamReader__TokenType)(C.QXmlStreamReader_readNext(this.h))
}

func (this *QXmlStreamReader) ReadNextStartElement() bool {
	return (bool)(C.QXmlStreamReader_readNextStartElement(this.h))
}

func (this *QXmlStreamReader) SkipCurrentElement() {
	C.QXmlStreamReader_skipCurrentElement(this.h)
}

func (this *QXmlStreamReader) TokenType() QXmlStreamReader__TokenType {
	return (QXmlStreamReader__TokenType)(C.QXmlStreamReader_tokenType(this.h))
}

func (this *QXmlStreamReader) TokenString() string {
	var _ms C.struct_miqt_string = C.QXmlStreamReader_tokenString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QXmlStreamReader) SetNamespaceProcessing(namespaceProcessing bool) {
	C.QXmlStreamReader_setNamespaceProcessing(this.h, (C.bool)(namespaceProcessing))
}

func (this *QXmlStreamReader) NamespaceProcessing() bool {
	return (bool)(C.QXmlStreamReader_namespaceProcessing(this.h))
}

func (this *QXmlStreamReader) IsStartDocument() bool {
	return (bool)(C.QXmlStreamReader_isStartDocument(this.h))
}

func (this *QXmlStreamReader) IsEndDocument() bool {
	return (bool)(C.QXmlStreamReader_isEndDocument(this.h))
}

func (this *QXmlStreamReader) IsStartElement() bool {
	return (bool)(C.QXmlStreamReader_isStartElement(this.h))
}

func (this *QXmlStreamReader) IsEndElement() bool {
	return (bool)(C.QXmlStreamReader_isEndElement(this.h))
}

func (this *QXmlStreamReader) IsCharacters() bool {
	return (bool)(C.QXmlStreamReader_isCharacters(this.h))
}

func (this *QXmlStreamReader) IsWhitespace() bool {
	return (bool)(C.QXmlStreamReader_isWhitespace(this.h))
}

func (this *QXmlStreamReader) IsCDATA() bool {
	return (bool)(C.QXmlStreamReader_isCDATA(this.h))
}

func (this *QXmlStreamReader) IsComment() bool {
	return (bool)(C.QXmlStreamReader_isComment(this.h))
}

func (this *QXmlStreamReader) IsDTD() bool {
	return (bool)(C.QXmlStreamReader_isDTD(this.h))
}

func (this *QXmlStreamReader) IsEntityReference() bool {
	return (bool)(C.QXmlStreamReader_isEntityReference(this.h))
}

func (this *QXmlStreamReader) IsProcessingInstruction() bool {
	return (bool)(C.QXmlStreamReader_isProcessingInstruction(this.h))
}

func (this *QXmlStreamReader) IsStandaloneDocument() bool {
	return (bool)(C.QXmlStreamReader_isStandaloneDocument(this.h))
}

func (this *QXmlStreamReader) LineNumber() int64 {
	return (int64)(C.QXmlStreamReader_lineNumber(this.h))
}

func (this *QXmlStreamReader) ColumnNumber() int64 {
	return (int64)(C.QXmlStreamReader_columnNumber(this.h))
}

func (this *QXmlStreamReader) CharacterOffset() int64 {
	return (int64)(C.QXmlStreamReader_characterOffset(this.h))
}

func (this *QXmlStreamReader) ReadElementText() string {
	var _ms C.struct_miqt_string = C.QXmlStreamReader_readElementText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QXmlStreamReader) NamespaceDeclarations() []QXmlStreamNamespaceDeclaration {
	var _ma C.struct_miqt_array = C.QXmlStreamReader_namespaceDeclarations(this.h)
	_ret := make([]QXmlStreamNamespaceDeclaration, int(_ma.len))
	_outCast := (*[0xffff]*C.QXmlStreamNamespaceDeclaration)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQXmlStreamNamespaceDeclaration(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QXmlStreamReader) AddExtraNamespaceDeclaration(extraNamespaceDeclaraction *QXmlStreamNamespaceDeclaration) {
	C.QXmlStreamReader_addExtraNamespaceDeclaration(this.h, extraNamespaceDeclaraction.cPointer())
}

func (this *QXmlStreamReader) AddExtraNamespaceDeclarations(extraNamespaceDeclaractions []QXmlStreamNamespaceDeclaration) {
	extraNamespaceDeclaractions_CArray := (*[0xffff]*C.QXmlStreamNamespaceDeclaration)(C.malloc(C.size_t(8 * len(extraNamespaceDeclaractions))))
	defer C.free(unsafe.Pointer(extraNamespaceDeclaractions_CArray))
	for i := range extraNamespaceDeclaractions {
		extraNamespaceDeclaractions_CArray[i] = extraNamespaceDeclaractions[i].cPointer()
	}
	extraNamespaceDeclaractions_ma := C.struct_miqt_array{len: C.size_t(len(extraNamespaceDeclaractions)), data: unsafe.Pointer(extraNamespaceDeclaractions_CArray)}
	C.QXmlStreamReader_addExtraNamespaceDeclarations(this.h, extraNamespaceDeclaractions_ma)
}

func (this *QXmlStreamReader) NotationDeclarations() []QXmlStreamNotationDeclaration {
	var _ma C.struct_miqt_array = C.QXmlStreamReader_notationDeclarations(this.h)
	_ret := make([]QXmlStreamNotationDeclaration, int(_ma.len))
	_outCast := (*[0xffff]*C.QXmlStreamNotationDeclaration)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQXmlStreamNotationDeclaration(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QXmlStreamReader) EntityDeclarations() []QXmlStreamEntityDeclaration {
	var _ma C.struct_miqt_array = C.QXmlStreamReader_entityDeclarations(this.h)
	_ret := make([]QXmlStreamEntityDeclaration, int(_ma.len))
	_outCast := (*[0xffff]*C.QXmlStreamEntityDeclaration)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQXmlStreamEntityDeclaration(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QXmlStreamReader) EntityExpansionLimit() int {
	return (int)(C.QXmlStreamReader_entityExpansionLimit(this.h))
}

func (this *QXmlStreamReader) SetEntityExpansionLimit(limit int) {
	C.QXmlStreamReader_setEntityExpansionLimit(this.h, (C.int)(limit))
}

func (this *QXmlStreamReader) RaiseError() {
	C.QXmlStreamReader_raiseError(this.h)
}

func (this *QXmlStreamReader) ErrorString() string {
	var _ms C.struct_miqt_string = C.QXmlStreamReader_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QXmlStreamReader) Error() QXmlStreamReader__Error {
	return (QXmlStreamReader__Error)(C.QXmlStreamReader_error(this.h))
}

func (this *QXmlStreamReader) HasError() bool {
	return (bool)(C.QXmlStreamReader_hasError(this.h))
}

func (this *QXmlStreamReader) SetEntityResolver(resolver *QXmlStreamEntityResolver) {
	C.QXmlStreamReader_setEntityResolver(this.h, resolver.cPointer())
}

func (this *QXmlStreamReader) EntityResolver() *QXmlStreamEntityResolver {
	return newQXmlStreamEntityResolver(C.QXmlStreamReader_entityResolver(this.h))
}

func (this *QXmlStreamReader) ReadElementTextWithBehaviour(behaviour QXmlStreamReader__ReadElementTextBehaviour) string {
	var _ms C.struct_miqt_string = C.QXmlStreamReader_readElementTextWithBehaviour(this.h, (C.int)(behaviour))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QXmlStreamReader) RaiseErrorWithMessage(message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QXmlStreamReader_raiseErrorWithMessage(this.h, message_ms)
}

// Delete this object from C++ memory.
func (this *QXmlStreamReader) Delete() {
	C.QXmlStreamReader_delete(this.h)
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

func (this *QXmlStreamWriter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQXmlStreamWriter constructs the type using only CGO pointers.
func newQXmlStreamWriter(h *C.QXmlStreamWriter) *QXmlStreamWriter {
	if h == nil {
		return nil
	}

	return &QXmlStreamWriter{h: h}
}

// UnsafeNewQXmlStreamWriter constructs the type using only unsafe pointers.
func UnsafeNewQXmlStreamWriter(h unsafe.Pointer) *QXmlStreamWriter {
	return newQXmlStreamWriter((*C.QXmlStreamWriter)(h))
}

// NewQXmlStreamWriter constructs a new QXmlStreamWriter object.
func NewQXmlStreamWriter() *QXmlStreamWriter {

	return newQXmlStreamWriter(C.QXmlStreamWriter_new())
}

// NewQXmlStreamWriter2 constructs a new QXmlStreamWriter object.
func NewQXmlStreamWriter2(device *QIODevice) *QXmlStreamWriter {

	return newQXmlStreamWriter(C.QXmlStreamWriter_new2(device.cPointer()))
}

func (this *QXmlStreamWriter) SetDevice(device *QIODevice) {
	C.QXmlStreamWriter_setDevice(this.h, device.cPointer())
}

func (this *QXmlStreamWriter) Device() *QIODevice {
	return newQIODevice(C.QXmlStreamWriter_device(this.h))
}

func (this *QXmlStreamWriter) SetCodec(codec *QTextCodec) {
	C.QXmlStreamWriter_setCodec(this.h, codec.cPointer())
}

func (this *QXmlStreamWriter) SetCodecWithCodecName(codecName string) {
	codecName_Cstring := C.CString(codecName)
	defer C.free(unsafe.Pointer(codecName_Cstring))
	C.QXmlStreamWriter_setCodecWithCodecName(this.h, codecName_Cstring)
}

func (this *QXmlStreamWriter) Codec() *QTextCodec {
	return newQTextCodec(C.QXmlStreamWriter_codec(this.h))
}

func (this *QXmlStreamWriter) SetAutoFormatting(autoFormatting bool) {
	C.QXmlStreamWriter_setAutoFormatting(this.h, (C.bool)(autoFormatting))
}

func (this *QXmlStreamWriter) AutoFormatting() bool {
	return (bool)(C.QXmlStreamWriter_autoFormatting(this.h))
}

func (this *QXmlStreamWriter) SetAutoFormattingIndent(spacesOrTabs int) {
	C.QXmlStreamWriter_setAutoFormattingIndent(this.h, (C.int)(spacesOrTabs))
}

func (this *QXmlStreamWriter) AutoFormattingIndent() int {
	return (int)(C.QXmlStreamWriter_autoFormattingIndent(this.h))
}

func (this *QXmlStreamWriter) WriteAttribute(qualifiedName string, value string) {
	qualifiedName_ms := C.struct_miqt_string{}
	qualifiedName_ms.data = C.CString(qualifiedName)
	qualifiedName_ms.len = C.size_t(len(qualifiedName))
	defer C.free(unsafe.Pointer(qualifiedName_ms.data))
	value_ms := C.struct_miqt_string{}
	value_ms.data = C.CString(value)
	value_ms.len = C.size_t(len(value))
	defer C.free(unsafe.Pointer(value_ms.data))
	C.QXmlStreamWriter_writeAttribute(this.h, qualifiedName_ms, value_ms)
}

func (this *QXmlStreamWriter) WriteAttribute2(namespaceUri string, name string, value string) {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	value_ms := C.struct_miqt_string{}
	value_ms.data = C.CString(value)
	value_ms.len = C.size_t(len(value))
	defer C.free(unsafe.Pointer(value_ms.data))
	C.QXmlStreamWriter_writeAttribute2(this.h, namespaceUri_ms, name_ms, value_ms)
}

func (this *QXmlStreamWriter) WriteAttributeWithAttribute(attribute *QXmlStreamAttribute) {
	C.QXmlStreamWriter_writeAttributeWithAttribute(this.h, attribute.cPointer())
}

func (this *QXmlStreamWriter) WriteCDATA(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QXmlStreamWriter_writeCDATA(this.h, text_ms)
}

func (this *QXmlStreamWriter) WriteCharacters(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QXmlStreamWriter_writeCharacters(this.h, text_ms)
}

func (this *QXmlStreamWriter) WriteComment(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QXmlStreamWriter_writeComment(this.h, text_ms)
}

func (this *QXmlStreamWriter) WriteDTD(dtd string) {
	dtd_ms := C.struct_miqt_string{}
	dtd_ms.data = C.CString(dtd)
	dtd_ms.len = C.size_t(len(dtd))
	defer C.free(unsafe.Pointer(dtd_ms.data))
	C.QXmlStreamWriter_writeDTD(this.h, dtd_ms)
}

func (this *QXmlStreamWriter) WriteEmptyElement(qualifiedName string) {
	qualifiedName_ms := C.struct_miqt_string{}
	qualifiedName_ms.data = C.CString(qualifiedName)
	qualifiedName_ms.len = C.size_t(len(qualifiedName))
	defer C.free(unsafe.Pointer(qualifiedName_ms.data))
	C.QXmlStreamWriter_writeEmptyElement(this.h, qualifiedName_ms)
}

func (this *QXmlStreamWriter) WriteEmptyElement2(namespaceUri string, name string) {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QXmlStreamWriter_writeEmptyElement2(this.h, namespaceUri_ms, name_ms)
}

func (this *QXmlStreamWriter) WriteTextElement(qualifiedName string, text string) {
	qualifiedName_ms := C.struct_miqt_string{}
	qualifiedName_ms.data = C.CString(qualifiedName)
	qualifiedName_ms.len = C.size_t(len(qualifiedName))
	defer C.free(unsafe.Pointer(qualifiedName_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QXmlStreamWriter_writeTextElement(this.h, qualifiedName_ms, text_ms)
}

func (this *QXmlStreamWriter) WriteTextElement2(namespaceUri string, name string, text string) {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QXmlStreamWriter_writeTextElement2(this.h, namespaceUri_ms, name_ms, text_ms)
}

func (this *QXmlStreamWriter) WriteEndDocument() {
	C.QXmlStreamWriter_writeEndDocument(this.h)
}

func (this *QXmlStreamWriter) WriteEndElement() {
	C.QXmlStreamWriter_writeEndElement(this.h)
}

func (this *QXmlStreamWriter) WriteEntityReference(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QXmlStreamWriter_writeEntityReference(this.h, name_ms)
}

func (this *QXmlStreamWriter) WriteNamespace(namespaceUri string) {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	C.QXmlStreamWriter_writeNamespace(this.h, namespaceUri_ms)
}

func (this *QXmlStreamWriter) WriteDefaultNamespace(namespaceUri string) {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	C.QXmlStreamWriter_writeDefaultNamespace(this.h, namespaceUri_ms)
}

func (this *QXmlStreamWriter) WriteProcessingInstruction(target string) {
	target_ms := C.struct_miqt_string{}
	target_ms.data = C.CString(target)
	target_ms.len = C.size_t(len(target))
	defer C.free(unsafe.Pointer(target_ms.data))
	C.QXmlStreamWriter_writeProcessingInstruction(this.h, target_ms)
}

func (this *QXmlStreamWriter) WriteStartDocument() {
	C.QXmlStreamWriter_writeStartDocument(this.h)
}

func (this *QXmlStreamWriter) WriteStartDocumentWithVersion(version string) {
	version_ms := C.struct_miqt_string{}
	version_ms.data = C.CString(version)
	version_ms.len = C.size_t(len(version))
	defer C.free(unsafe.Pointer(version_ms.data))
	C.QXmlStreamWriter_writeStartDocumentWithVersion(this.h, version_ms)
}

func (this *QXmlStreamWriter) WriteStartDocument2(version string, standalone bool) {
	version_ms := C.struct_miqt_string{}
	version_ms.data = C.CString(version)
	version_ms.len = C.size_t(len(version))
	defer C.free(unsafe.Pointer(version_ms.data))
	C.QXmlStreamWriter_writeStartDocument2(this.h, version_ms, (C.bool)(standalone))
}

func (this *QXmlStreamWriter) WriteStartElement(qualifiedName string) {
	qualifiedName_ms := C.struct_miqt_string{}
	qualifiedName_ms.data = C.CString(qualifiedName)
	qualifiedName_ms.len = C.size_t(len(qualifiedName))
	defer C.free(unsafe.Pointer(qualifiedName_ms.data))
	C.QXmlStreamWriter_writeStartElement(this.h, qualifiedName_ms)
}

func (this *QXmlStreamWriter) WriteStartElement2(namespaceUri string, name string) {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QXmlStreamWriter_writeStartElement2(this.h, namespaceUri_ms, name_ms)
}

func (this *QXmlStreamWriter) WriteCurrentToken(reader *QXmlStreamReader) {
	C.QXmlStreamWriter_writeCurrentToken(this.h, reader.cPointer())
}

func (this *QXmlStreamWriter) HasError() bool {
	return (bool)(C.QXmlStreamWriter_hasError(this.h))
}

func (this *QXmlStreamWriter) WriteNamespace2(namespaceUri string, prefix string) {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QXmlStreamWriter_writeNamespace2(this.h, namespaceUri_ms, prefix_ms)
}

func (this *QXmlStreamWriter) WriteProcessingInstruction2(target string, data string) {
	target_ms := C.struct_miqt_string{}
	target_ms.data = C.CString(target)
	target_ms.len = C.size_t(len(target))
	defer C.free(unsafe.Pointer(target_ms.data))
	data_ms := C.struct_miqt_string{}
	data_ms.data = C.CString(data)
	data_ms.len = C.size_t(len(data))
	defer C.free(unsafe.Pointer(data_ms.data))
	C.QXmlStreamWriter_writeProcessingInstruction2(this.h, target_ms, data_ms)
}

// Delete this object from C++ memory.
func (this *QXmlStreamWriter) Delete() {
	C.QXmlStreamWriter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QXmlStreamWriter) GoGC() {
	runtime.SetFinalizer(this, func(this *QXmlStreamWriter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

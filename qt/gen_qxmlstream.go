package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qxmlstream.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
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
	aString_Cstring := C.CString(aString)
	defer C.free(unsafe.Pointer(aString_Cstring))
	ret := C.QXmlStreamStringRef_new2(aString_Cstring, C.ulong(len(aString)))
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QXmlStreamStringRef_String(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QXmlStreamStringRef) Position() int {
	ret := C.QXmlStreamStringRef_Position(this.h)
	return (int)(ret)
}

func (this *QXmlStreamStringRef) Size() int {
	ret := C.QXmlStreamStringRef_Size(this.h)
	return (int)(ret)
}

func (this *QXmlStreamStringRef) Delete() {
	C.QXmlStreamStringRef_Delete(this.h)
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
	qualifiedName_Cstring := C.CString(qualifiedName)
	defer C.free(unsafe.Pointer(qualifiedName_Cstring))
	value_Cstring := C.CString(value)
	defer C.free(unsafe.Pointer(value_Cstring))
	ret := C.QXmlStreamAttribute_new2(qualifiedName_Cstring, C.ulong(len(qualifiedName)), value_Cstring, C.ulong(len(value)))
	return newQXmlStreamAttribute(ret)
}

// NewQXmlStreamAttribute3 constructs a new QXmlStreamAttribute object.
func NewQXmlStreamAttribute3(namespaceUri string, name string, value string) *QXmlStreamAttribute {
	namespaceUri_Cstring := C.CString(namespaceUri)
	defer C.free(unsafe.Pointer(namespaceUri_Cstring))
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	value_Cstring := C.CString(value)
	defer C.free(unsafe.Pointer(value_Cstring))
	ret := C.QXmlStreamAttribute_new3(namespaceUri_Cstring, C.ulong(len(namespaceUri)), name_Cstring, C.ulong(len(name)), value_Cstring, C.ulong(len(value)))
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
	ret := C.QXmlStreamAttribute_IsDefault(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamAttribute) OperatorEqual(other *QXmlStreamAttribute) bool {
	ret := C.QXmlStreamAttribute_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QXmlStreamAttribute) OperatorNotEqual(other *QXmlStreamAttribute) bool {
	ret := C.QXmlStreamAttribute_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QXmlStreamAttribute) Delete() {
	C.QXmlStreamAttribute_Delete(this.h)
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
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	namespaceUri_Cstring := C.CString(namespaceUri)
	defer C.free(unsafe.Pointer(namespaceUri_Cstring))
	ret := C.QXmlStreamNamespaceDeclaration_new2(prefix_Cstring, C.ulong(len(prefix)), namespaceUri_Cstring, C.ulong(len(namespaceUri)))
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
	ret := C.QXmlStreamNamespaceDeclaration_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QXmlStreamNamespaceDeclaration) OperatorNotEqual(other *QXmlStreamNamespaceDeclaration) bool {
	ret := C.QXmlStreamNamespaceDeclaration_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QXmlStreamNamespaceDeclaration) Delete() {
	C.QXmlStreamNamespaceDeclaration_Delete(this.h)
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
	ret := C.QXmlStreamNotationDeclaration_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QXmlStreamNotationDeclaration) OperatorNotEqual(other *QXmlStreamNotationDeclaration) bool {
	ret := C.QXmlStreamNotationDeclaration_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QXmlStreamNotationDeclaration) Delete() {
	C.QXmlStreamNotationDeclaration_Delete(this.h)
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
	ret := C.QXmlStreamEntityDeclaration_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QXmlStreamEntityDeclaration) OperatorNotEqual(other *QXmlStreamEntityDeclaration) bool {
	ret := C.QXmlStreamEntityDeclaration_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QXmlStreamEntityDeclaration) Delete() {
	C.QXmlStreamEntityDeclaration_Delete(this.h)
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
	publicId_Cstring := C.CString(publicId)
	defer C.free(unsafe.Pointer(publicId_Cstring))
	systemId_Cstring := C.CString(systemId)
	defer C.free(unsafe.Pointer(systemId_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QXmlStreamEntityResolver_ResolveEntity(this.h, publicId_Cstring, C.ulong(len(publicId)), systemId_Cstring, C.ulong(len(systemId)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QXmlStreamEntityResolver) ResolveUndeclaredEntity(name string) string {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QXmlStreamEntityResolver_ResolveUndeclaredEntity(this.h, name_Cstring, C.ulong(len(name)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QXmlStreamEntityResolver) OperatorAssign(param1 *QXmlStreamEntityResolver) {
	C.QXmlStreamEntityResolver_OperatorAssign(this.h, param1.cPointer())
}

func (this *QXmlStreamEntityResolver) Delete() {
	C.QXmlStreamEntityResolver_Delete(this.h)
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
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	ret := C.QXmlStreamReader_new4(data_Cstring, C.ulong(len(data)))
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
	ret := C.QXmlStreamReader_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(ret))
}

func (this *QXmlStreamReader) AddData(data *QByteArray) {
	C.QXmlStreamReader_AddData(this.h, data.cPointer())
}

func (this *QXmlStreamReader) AddDataWithData(data string) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QXmlStreamReader_AddDataWithData(this.h, data_Cstring, C.ulong(len(data)))
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
	ret := C.QXmlStreamReader_AtEnd(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) ReadNext() uintptr {
	ret := C.QXmlStreamReader_ReadNext(this.h)
	return (uintptr)(ret)
}

func (this *QXmlStreamReader) ReadNextStartElement() bool {
	ret := C.QXmlStreamReader_ReadNextStartElement(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) SkipCurrentElement() {
	C.QXmlStreamReader_SkipCurrentElement(this.h)
}

func (this *QXmlStreamReader) TokenType() uintptr {
	ret := C.QXmlStreamReader_TokenType(this.h)
	return (uintptr)(ret)
}

func (this *QXmlStreamReader) TokenString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QXmlStreamReader_TokenString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QXmlStreamReader) SetNamespaceProcessing(namespaceProcessing bool) {
	C.QXmlStreamReader_SetNamespaceProcessing(this.h, (C.bool)(namespaceProcessing))
}

func (this *QXmlStreamReader) NamespaceProcessing() bool {
	ret := C.QXmlStreamReader_NamespaceProcessing(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) IsStartDocument() bool {
	ret := C.QXmlStreamReader_IsStartDocument(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) IsEndDocument() bool {
	ret := C.QXmlStreamReader_IsEndDocument(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) IsStartElement() bool {
	ret := C.QXmlStreamReader_IsStartElement(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) IsEndElement() bool {
	ret := C.QXmlStreamReader_IsEndElement(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) IsCharacters() bool {
	ret := C.QXmlStreamReader_IsCharacters(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) IsWhitespace() bool {
	ret := C.QXmlStreamReader_IsWhitespace(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) IsCDATA() bool {
	ret := C.QXmlStreamReader_IsCDATA(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) IsComment() bool {
	ret := C.QXmlStreamReader_IsComment(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) IsDTD() bool {
	ret := C.QXmlStreamReader_IsDTD(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) IsEntityReference() bool {
	ret := C.QXmlStreamReader_IsEntityReference(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) IsProcessingInstruction() bool {
	ret := C.QXmlStreamReader_IsProcessingInstruction(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) IsStandaloneDocument() bool {
	ret := C.QXmlStreamReader_IsStandaloneDocument(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) LineNumber() int64 {
	ret := C.QXmlStreamReader_LineNumber(this.h)
	return (int64)(ret)
}

func (this *QXmlStreamReader) ColumnNumber() int64 {
	ret := C.QXmlStreamReader_ColumnNumber(this.h)
	return (int64)(ret)
}

func (this *QXmlStreamReader) CharacterOffset() int64 {
	ret := C.QXmlStreamReader_CharacterOffset(this.h)
	return (int64)(ret)
}

func (this *QXmlStreamReader) ReadElementText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QXmlStreamReader_ReadElementText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QXmlStreamReader) NamespaceDeclarations() []QXmlStreamNamespaceDeclaration {
	var _out **C.QXmlStreamNamespaceDeclaration = nil
	var _out_len C.size_t = 0
	C.QXmlStreamReader_NamespaceDeclarations(this.h, &_out, &_out_len)
	ret := make([]QXmlStreamNamespaceDeclaration, int(_out_len))
	_outCast := (*[0xffff]*C.QXmlStreamNamespaceDeclaration)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQXmlStreamNamespaceDeclaration(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QXmlStreamReader) AddExtraNamespaceDeclaration(extraNamespaceDeclaraction *QXmlStreamNamespaceDeclaration) {
	C.QXmlStreamReader_AddExtraNamespaceDeclaration(this.h, extraNamespaceDeclaraction.cPointer())
}

func (this *QXmlStreamReader) AddExtraNamespaceDeclarations(extraNamespaceDeclaractions []QXmlStreamNamespaceDeclaration) {
	// For the C ABI, malloc a C array of raw pointers
	extraNamespaceDeclaractions_CArray := (*[0xffff]*C.QXmlStreamNamespaceDeclaration)(C.malloc(C.ulong(8 * len(extraNamespaceDeclaractions))))
	defer C.free(unsafe.Pointer(extraNamespaceDeclaractions_CArray))
	for i := range extraNamespaceDeclaractions {
		extraNamespaceDeclaractions_CArray[i] = extraNamespaceDeclaractions[i].cPointer()
	}
	C.QXmlStreamReader_AddExtraNamespaceDeclarations(this.h, &extraNamespaceDeclaractions_CArray[0], C.ulong(len(extraNamespaceDeclaractions)))
}

func (this *QXmlStreamReader) NotationDeclarations() []QXmlStreamNotationDeclaration {
	var _out **C.QXmlStreamNotationDeclaration = nil
	var _out_len C.size_t = 0
	C.QXmlStreamReader_NotationDeclarations(this.h, &_out, &_out_len)
	ret := make([]QXmlStreamNotationDeclaration, int(_out_len))
	_outCast := (*[0xffff]*C.QXmlStreamNotationDeclaration)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQXmlStreamNotationDeclaration(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QXmlStreamReader) EntityDeclarations() []QXmlStreamEntityDeclaration {
	var _out **C.QXmlStreamEntityDeclaration = nil
	var _out_len C.size_t = 0
	C.QXmlStreamReader_EntityDeclarations(this.h, &_out, &_out_len)
	ret := make([]QXmlStreamEntityDeclaration, int(_out_len))
	_outCast := (*[0xffff]*C.QXmlStreamEntityDeclaration)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQXmlStreamEntityDeclaration(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QXmlStreamReader) EntityExpansionLimit() int {
	ret := C.QXmlStreamReader_EntityExpansionLimit(this.h)
	return (int)(ret)
}

func (this *QXmlStreamReader) SetEntityExpansionLimit(limit int) {
	C.QXmlStreamReader_SetEntityExpansionLimit(this.h, (C.int)(limit))
}

func (this *QXmlStreamReader) RaiseError() {
	C.QXmlStreamReader_RaiseError(this.h)
}

func (this *QXmlStreamReader) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QXmlStreamReader_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QXmlStreamReader) Error() uintptr {
	ret := C.QXmlStreamReader_Error(this.h)
	return (uintptr)(ret)
}

func (this *QXmlStreamReader) HasError() bool {
	ret := C.QXmlStreamReader_HasError(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamReader) SetEntityResolver(resolver *QXmlStreamEntityResolver) {
	C.QXmlStreamReader_SetEntityResolver(this.h, resolver.cPointer())
}

func (this *QXmlStreamReader) EntityResolver() *QXmlStreamEntityResolver {
	ret := C.QXmlStreamReader_EntityResolver(this.h)
	return newQXmlStreamEntityResolver_U(unsafe.Pointer(ret))
}

func (this *QXmlStreamReader) ReadElementText1(behaviour uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QXmlStreamReader_ReadElementText1(this.h, (C.uintptr_t)(behaviour), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QXmlStreamReader) RaiseError1(message string) {
	message_Cstring := C.CString(message)
	defer C.free(unsafe.Pointer(message_Cstring))
	C.QXmlStreamReader_RaiseError1(this.h, message_Cstring, C.ulong(len(message)))
}

func (this *QXmlStreamReader) Delete() {
	C.QXmlStreamReader_Delete(this.h)
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
	ret := C.QXmlStreamWriter_Device(this.h)
	return newQIODevice_U(unsafe.Pointer(ret))
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
	ret := C.QXmlStreamWriter_Codec(this.h)
	return newQTextCodec_U(unsafe.Pointer(ret))
}

func (this *QXmlStreamWriter) SetAutoFormatting(autoFormatting bool) {
	C.QXmlStreamWriter_SetAutoFormatting(this.h, (C.bool)(autoFormatting))
}

func (this *QXmlStreamWriter) AutoFormatting() bool {
	ret := C.QXmlStreamWriter_AutoFormatting(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamWriter) SetAutoFormattingIndent(spacesOrTabs int) {
	C.QXmlStreamWriter_SetAutoFormattingIndent(this.h, (C.int)(spacesOrTabs))
}

func (this *QXmlStreamWriter) AutoFormattingIndent() int {
	ret := C.QXmlStreamWriter_AutoFormattingIndent(this.h)
	return (int)(ret)
}

func (this *QXmlStreamWriter) WriteAttribute(qualifiedName string, value string) {
	qualifiedName_Cstring := C.CString(qualifiedName)
	defer C.free(unsafe.Pointer(qualifiedName_Cstring))
	value_Cstring := C.CString(value)
	defer C.free(unsafe.Pointer(value_Cstring))
	C.QXmlStreamWriter_WriteAttribute(this.h, qualifiedName_Cstring, C.ulong(len(qualifiedName)), value_Cstring, C.ulong(len(value)))
}

func (this *QXmlStreamWriter) WriteAttribute2(namespaceUri string, name string, value string) {
	namespaceUri_Cstring := C.CString(namespaceUri)
	defer C.free(unsafe.Pointer(namespaceUri_Cstring))
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	value_Cstring := C.CString(value)
	defer C.free(unsafe.Pointer(value_Cstring))
	C.QXmlStreamWriter_WriteAttribute2(this.h, namespaceUri_Cstring, C.ulong(len(namespaceUri)), name_Cstring, C.ulong(len(name)), value_Cstring, C.ulong(len(value)))
}

func (this *QXmlStreamWriter) WriteAttributeWithAttribute(attribute *QXmlStreamAttribute) {
	C.QXmlStreamWriter_WriteAttributeWithAttribute(this.h, attribute.cPointer())
}

func (this *QXmlStreamWriter) WriteCDATA(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QXmlStreamWriter_WriteCDATA(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QXmlStreamWriter) WriteCharacters(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QXmlStreamWriter_WriteCharacters(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QXmlStreamWriter) WriteComment(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QXmlStreamWriter_WriteComment(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QXmlStreamWriter) WriteDTD(dtd string) {
	dtd_Cstring := C.CString(dtd)
	defer C.free(unsafe.Pointer(dtd_Cstring))
	C.QXmlStreamWriter_WriteDTD(this.h, dtd_Cstring, C.ulong(len(dtd)))
}

func (this *QXmlStreamWriter) WriteEmptyElement(qualifiedName string) {
	qualifiedName_Cstring := C.CString(qualifiedName)
	defer C.free(unsafe.Pointer(qualifiedName_Cstring))
	C.QXmlStreamWriter_WriteEmptyElement(this.h, qualifiedName_Cstring, C.ulong(len(qualifiedName)))
}

func (this *QXmlStreamWriter) WriteEmptyElement2(namespaceUri string, name string) {
	namespaceUri_Cstring := C.CString(namespaceUri)
	defer C.free(unsafe.Pointer(namespaceUri_Cstring))
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QXmlStreamWriter_WriteEmptyElement2(this.h, namespaceUri_Cstring, C.ulong(len(namespaceUri)), name_Cstring, C.ulong(len(name)))
}

func (this *QXmlStreamWriter) WriteTextElement(qualifiedName string, text string) {
	qualifiedName_Cstring := C.CString(qualifiedName)
	defer C.free(unsafe.Pointer(qualifiedName_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QXmlStreamWriter_WriteTextElement(this.h, qualifiedName_Cstring, C.ulong(len(qualifiedName)), text_Cstring, C.ulong(len(text)))
}

func (this *QXmlStreamWriter) WriteTextElement2(namespaceUri string, name string, text string) {
	namespaceUri_Cstring := C.CString(namespaceUri)
	defer C.free(unsafe.Pointer(namespaceUri_Cstring))
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QXmlStreamWriter_WriteTextElement2(this.h, namespaceUri_Cstring, C.ulong(len(namespaceUri)), name_Cstring, C.ulong(len(name)), text_Cstring, C.ulong(len(text)))
}

func (this *QXmlStreamWriter) WriteEndDocument() {
	C.QXmlStreamWriter_WriteEndDocument(this.h)
}

func (this *QXmlStreamWriter) WriteEndElement() {
	C.QXmlStreamWriter_WriteEndElement(this.h)
}

func (this *QXmlStreamWriter) WriteEntityReference(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QXmlStreamWriter_WriteEntityReference(this.h, name_Cstring, C.ulong(len(name)))
}

func (this *QXmlStreamWriter) WriteNamespace(namespaceUri string) {
	namespaceUri_Cstring := C.CString(namespaceUri)
	defer C.free(unsafe.Pointer(namespaceUri_Cstring))
	C.QXmlStreamWriter_WriteNamespace(this.h, namespaceUri_Cstring, C.ulong(len(namespaceUri)))
}

func (this *QXmlStreamWriter) WriteDefaultNamespace(namespaceUri string) {
	namespaceUri_Cstring := C.CString(namespaceUri)
	defer C.free(unsafe.Pointer(namespaceUri_Cstring))
	C.QXmlStreamWriter_WriteDefaultNamespace(this.h, namespaceUri_Cstring, C.ulong(len(namespaceUri)))
}

func (this *QXmlStreamWriter) WriteProcessingInstruction(target string) {
	target_Cstring := C.CString(target)
	defer C.free(unsafe.Pointer(target_Cstring))
	C.QXmlStreamWriter_WriteProcessingInstruction(this.h, target_Cstring, C.ulong(len(target)))
}

func (this *QXmlStreamWriter) WriteStartDocument() {
	C.QXmlStreamWriter_WriteStartDocument(this.h)
}

func (this *QXmlStreamWriter) WriteStartDocumentWithVersion(version string) {
	version_Cstring := C.CString(version)
	defer C.free(unsafe.Pointer(version_Cstring))
	C.QXmlStreamWriter_WriteStartDocumentWithVersion(this.h, version_Cstring, C.ulong(len(version)))
}

func (this *QXmlStreamWriter) WriteStartDocument2(version string, standalone bool) {
	version_Cstring := C.CString(version)
	defer C.free(unsafe.Pointer(version_Cstring))
	C.QXmlStreamWriter_WriteStartDocument2(this.h, version_Cstring, C.ulong(len(version)), (C.bool)(standalone))
}

func (this *QXmlStreamWriter) WriteStartElement(qualifiedName string) {
	qualifiedName_Cstring := C.CString(qualifiedName)
	defer C.free(unsafe.Pointer(qualifiedName_Cstring))
	C.QXmlStreamWriter_WriteStartElement(this.h, qualifiedName_Cstring, C.ulong(len(qualifiedName)))
}

func (this *QXmlStreamWriter) WriteStartElement2(namespaceUri string, name string) {
	namespaceUri_Cstring := C.CString(namespaceUri)
	defer C.free(unsafe.Pointer(namespaceUri_Cstring))
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QXmlStreamWriter_WriteStartElement2(this.h, namespaceUri_Cstring, C.ulong(len(namespaceUri)), name_Cstring, C.ulong(len(name)))
}

func (this *QXmlStreamWriter) WriteCurrentToken(reader *QXmlStreamReader) {
	C.QXmlStreamWriter_WriteCurrentToken(this.h, reader.cPointer())
}

func (this *QXmlStreamWriter) HasError() bool {
	ret := C.QXmlStreamWriter_HasError(this.h)
	return (bool)(ret)
}

func (this *QXmlStreamWriter) WriteNamespace2(namespaceUri string, prefix string) {
	namespaceUri_Cstring := C.CString(namespaceUri)
	defer C.free(unsafe.Pointer(namespaceUri_Cstring))
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	C.QXmlStreamWriter_WriteNamespace2(this.h, namespaceUri_Cstring, C.ulong(len(namespaceUri)), prefix_Cstring, C.ulong(len(prefix)))
}

func (this *QXmlStreamWriter) WriteProcessingInstruction2(target string, data string) {
	target_Cstring := C.CString(target)
	defer C.free(unsafe.Pointer(target_Cstring))
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QXmlStreamWriter_WriteProcessingInstruction2(this.h, target_Cstring, C.ulong(len(target)), data_Cstring, C.ulong(len(data)))
}

func (this *QXmlStreamWriter) Delete() {
	C.QXmlStreamWriter_Delete(this.h)
}

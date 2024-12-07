package webkit

/*

#include "gen_qwebelement.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QWebElement__StyleResolveStrategy int

const (
	QWebElement__InlineStyle   QWebElement__StyleResolveStrategy = 0
	QWebElement__CascadedStyle QWebElement__StyleResolveStrategy = 1
	QWebElement__ComputedStyle QWebElement__StyleResolveStrategy = 2
)

type QWebElement struct {
	h          *C.QWebElement
	isSubclass bool
}

func (this *QWebElement) cPointer() *C.QWebElement {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebElement) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebElement constructs the type using only CGO pointers.
func newQWebElement(h *C.QWebElement) *QWebElement {
	if h == nil {
		return nil
	}

	return &QWebElement{h: h}
}

// UnsafeNewQWebElement constructs the type using only unsafe pointers.
func UnsafeNewQWebElement(h unsafe.Pointer) *QWebElement {
	return newQWebElement((*C.QWebElement)(h))
}

// NewQWebElement constructs a new QWebElement object.
func NewQWebElement() *QWebElement {

	ret := newQWebElement(C.QWebElement_new())
	ret.isSubclass = true
	return ret
}

// NewQWebElement2 constructs a new QWebElement object.
func NewQWebElement2(param1 *QWebElement) *QWebElement {

	ret := newQWebElement(C.QWebElement_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QWebElement) OperatorAssign(param1 *QWebElement) {
	C.QWebElement_OperatorAssign(this.h, param1.cPointer())
}

func (this *QWebElement) OperatorEqual(o *QWebElement) bool {
	return (bool)(C.QWebElement_OperatorEqual(this.h, o.cPointer()))
}

func (this *QWebElement) OperatorNotEqual(o *QWebElement) bool {
	return (bool)(C.QWebElement_OperatorNotEqual(this.h, o.cPointer()))
}

func (this *QWebElement) IsNull() bool {
	return (bool)(C.QWebElement_IsNull(this.h))
}

func (this *QWebElement) FindAll(selectorQuery string) *QWebElementCollection {
	selectorQuery_ms := C.struct_miqt_string{}
	selectorQuery_ms.data = C.CString(selectorQuery)
	selectorQuery_ms.len = C.size_t(len(selectorQuery))
	defer C.free(unsafe.Pointer(selectorQuery_ms.data))
	_goptr := newQWebElementCollection(C.QWebElement_FindAll(this.h, selectorQuery_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElement) FindFirst(selectorQuery string) *QWebElement {
	selectorQuery_ms := C.struct_miqt_string{}
	selectorQuery_ms.data = C.CString(selectorQuery)
	selectorQuery_ms.len = C.size_t(len(selectorQuery))
	defer C.free(unsafe.Pointer(selectorQuery_ms.data))
	_goptr := newQWebElement(C.QWebElement_FindFirst(this.h, selectorQuery_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElement) SetPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QWebElement_SetPlainText(this.h, text_ms)
}

func (this *QWebElement) ToPlainText() string {
	var _ms C.struct_miqt_string = C.QWebElement_ToPlainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebElement) SetOuterXml(markup string) {
	markup_ms := C.struct_miqt_string{}
	markup_ms.data = C.CString(markup)
	markup_ms.len = C.size_t(len(markup))
	defer C.free(unsafe.Pointer(markup_ms.data))
	C.QWebElement_SetOuterXml(this.h, markup_ms)
}

func (this *QWebElement) ToOuterXml() string {
	var _ms C.struct_miqt_string = C.QWebElement_ToOuterXml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebElement) SetInnerXml(markup string) {
	markup_ms := C.struct_miqt_string{}
	markup_ms.data = C.CString(markup)
	markup_ms.len = C.size_t(len(markup))
	defer C.free(unsafe.Pointer(markup_ms.data))
	C.QWebElement_SetInnerXml(this.h, markup_ms)
}

func (this *QWebElement) ToInnerXml() string {
	var _ms C.struct_miqt_string = C.QWebElement_ToInnerXml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebElement) SetAttribute(name string, value string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	value_ms := C.struct_miqt_string{}
	value_ms.data = C.CString(value)
	value_ms.len = C.size_t(len(value))
	defer C.free(unsafe.Pointer(value_ms.data))
	C.QWebElement_SetAttribute(this.h, name_ms, value_ms)
}

func (this *QWebElement) SetAttributeNS(namespaceUri string, name string, value string) {
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
	C.QWebElement_SetAttributeNS(this.h, namespaceUri_ms, name_ms, value_ms)
}

func (this *QWebElement) Attribute(name string) string {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ms C.struct_miqt_string = C.QWebElement_Attribute(this.h, name_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebElement) AttributeNS(namespaceUri string, name string) string {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ms C.struct_miqt_string = C.QWebElement_AttributeNS(this.h, namespaceUri_ms, name_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebElement) HasAttribute(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QWebElement_HasAttribute(this.h, name_ms))
}

func (this *QWebElement) HasAttributeNS(namespaceUri string, name string) bool {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QWebElement_HasAttributeNS(this.h, namespaceUri_ms, name_ms))
}

func (this *QWebElement) RemoveAttribute(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWebElement_RemoveAttribute(this.h, name_ms)
}

func (this *QWebElement) RemoveAttributeNS(namespaceUri string, name string) {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWebElement_RemoveAttributeNS(this.h, namespaceUri_ms, name_ms)
}

func (this *QWebElement) HasAttributes() bool {
	return (bool)(C.QWebElement_HasAttributes(this.h))
}

func (this *QWebElement) AttributeNames() []string {
	var _ma C.struct_miqt_array = C.QWebElement_AttributeNames(this.h)
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

func (this *QWebElement) Classes() []string {
	var _ma C.struct_miqt_array = C.QWebElement_Classes(this.h)
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

func (this *QWebElement) HasClass(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QWebElement_HasClass(this.h, name_ms))
}

func (this *QWebElement) AddClass(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWebElement_AddClass(this.h, name_ms)
}

func (this *QWebElement) RemoveClass(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWebElement_RemoveClass(this.h, name_ms)
}

func (this *QWebElement) ToggleClass(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWebElement_ToggleClass(this.h, name_ms)
}

func (this *QWebElement) HasFocus() bool {
	return (bool)(C.QWebElement_HasFocus(this.h))
}

func (this *QWebElement) SetFocus() {
	C.QWebElement_SetFocus(this.h)
}

func (this *QWebElement) Geometry() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QWebElement_Geometry(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElement) TagName() string {
	var _ms C.struct_miqt_string = C.QWebElement_TagName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebElement) Prefix() string {
	var _ms C.struct_miqt_string = C.QWebElement_Prefix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebElement) LocalName() string {
	var _ms C.struct_miqt_string = C.QWebElement_LocalName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebElement) NamespaceUri() string {
	var _ms C.struct_miqt_string = C.QWebElement_NamespaceUri(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebElement) Parent() *QWebElement {
	_goptr := newQWebElement(C.QWebElement_Parent(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElement) FirstChild() *QWebElement {
	_goptr := newQWebElement(C.QWebElement_FirstChild(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElement) LastChild() *QWebElement {
	_goptr := newQWebElement(C.QWebElement_LastChild(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElement) NextSibling() *QWebElement {
	_goptr := newQWebElement(C.QWebElement_NextSibling(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElement) PreviousSibling() *QWebElement {
	_goptr := newQWebElement(C.QWebElement_PreviousSibling(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElement) Document() *QWebElement {
	_goptr := newQWebElement(C.QWebElement_Document(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElement) WebFrame() *QWebFrame {
	return newQWebFrame(C.QWebElement_WebFrame(this.h))
}

func (this *QWebElement) AppendInside(markup string) {
	markup_ms := C.struct_miqt_string{}
	markup_ms.data = C.CString(markup)
	markup_ms.len = C.size_t(len(markup))
	defer C.free(unsafe.Pointer(markup_ms.data))
	C.QWebElement_AppendInside(this.h, markup_ms)
}

func (this *QWebElement) AppendInsideWithElement(element *QWebElement) {
	C.QWebElement_AppendInsideWithElement(this.h, element.cPointer())
}

func (this *QWebElement) PrependInside(markup string) {
	markup_ms := C.struct_miqt_string{}
	markup_ms.data = C.CString(markup)
	markup_ms.len = C.size_t(len(markup))
	defer C.free(unsafe.Pointer(markup_ms.data))
	C.QWebElement_PrependInside(this.h, markup_ms)
}

func (this *QWebElement) PrependInsideWithElement(element *QWebElement) {
	C.QWebElement_PrependInsideWithElement(this.h, element.cPointer())
}

func (this *QWebElement) AppendOutside(markup string) {
	markup_ms := C.struct_miqt_string{}
	markup_ms.data = C.CString(markup)
	markup_ms.len = C.size_t(len(markup))
	defer C.free(unsafe.Pointer(markup_ms.data))
	C.QWebElement_AppendOutside(this.h, markup_ms)
}

func (this *QWebElement) AppendOutsideWithElement(element *QWebElement) {
	C.QWebElement_AppendOutsideWithElement(this.h, element.cPointer())
}

func (this *QWebElement) PrependOutside(markup string) {
	markup_ms := C.struct_miqt_string{}
	markup_ms.data = C.CString(markup)
	markup_ms.len = C.size_t(len(markup))
	defer C.free(unsafe.Pointer(markup_ms.data))
	C.QWebElement_PrependOutside(this.h, markup_ms)
}

func (this *QWebElement) PrependOutsideWithElement(element *QWebElement) {
	C.QWebElement_PrependOutsideWithElement(this.h, element.cPointer())
}

func (this *QWebElement) EncloseContentsWith(element *QWebElement) {
	C.QWebElement_EncloseContentsWith(this.h, element.cPointer())
}

func (this *QWebElement) EncloseContentsWithWithMarkup(markup string) {
	markup_ms := C.struct_miqt_string{}
	markup_ms.data = C.CString(markup)
	markup_ms.len = C.size_t(len(markup))
	defer C.free(unsafe.Pointer(markup_ms.data))
	C.QWebElement_EncloseContentsWithWithMarkup(this.h, markup_ms)
}

func (this *QWebElement) EncloseWith(markup string) {
	markup_ms := C.struct_miqt_string{}
	markup_ms.data = C.CString(markup)
	markup_ms.len = C.size_t(len(markup))
	defer C.free(unsafe.Pointer(markup_ms.data))
	C.QWebElement_EncloseWith(this.h, markup_ms)
}

func (this *QWebElement) EncloseWithWithElement(element *QWebElement) {
	C.QWebElement_EncloseWithWithElement(this.h, element.cPointer())
}

func (this *QWebElement) Replace(markup string) {
	markup_ms := C.struct_miqt_string{}
	markup_ms.data = C.CString(markup)
	markup_ms.len = C.size_t(len(markup))
	defer C.free(unsafe.Pointer(markup_ms.data))
	C.QWebElement_Replace(this.h, markup_ms)
}

func (this *QWebElement) ReplaceWithElement(element *QWebElement) {
	C.QWebElement_ReplaceWithElement(this.h, element.cPointer())
}

func (this *QWebElement) Clone() *QWebElement {
	_goptr := newQWebElement(C.QWebElement_Clone(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElement) TakeFromDocument() *QWebElement {
	return newQWebElement(C.QWebElement_TakeFromDocument(this.h))
}

func (this *QWebElement) RemoveFromDocument() {
	C.QWebElement_RemoveFromDocument(this.h)
}

func (this *QWebElement) RemoveAllChildren() {
	C.QWebElement_RemoveAllChildren(this.h)
}

func (this *QWebElement) EvaluateJavaScript(scriptSource string) *qt.QVariant {
	scriptSource_ms := C.struct_miqt_string{}
	scriptSource_ms.data = C.CString(scriptSource)
	scriptSource_ms.len = C.size_t(len(scriptSource))
	defer C.free(unsafe.Pointer(scriptSource_ms.data))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QWebElement_EvaluateJavaScript(this.h, scriptSource_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElement) StyleProperty(name string, strategy QWebElement__StyleResolveStrategy) string {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ms C.struct_miqt_string = C.QWebElement_StyleProperty(this.h, name_ms, (C.int)(strategy))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebElement) SetStyleProperty(name string, value string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	value_ms := C.struct_miqt_string{}
	value_ms.data = C.CString(value)
	value_ms.len = C.size_t(len(value))
	defer C.free(unsafe.Pointer(value_ms.data))
	C.QWebElement_SetStyleProperty(this.h, name_ms, value_ms)
}

func (this *QWebElement) Render(painter *qt.QPainter) {
	C.QWebElement_Render(this.h, (*C.QPainter)(painter.UnsafePointer()))
}

func (this *QWebElement) Render2(painter *qt.QPainter, clipRect *qt.QRect) {
	C.QWebElement_Render2(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QRect)(clipRect.UnsafePointer()))
}

func (this *QWebElement) Attribute2(name string, defaultValue string) string {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QWebElement_Attribute2(this.h, name_ms, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebElement) AttributeNS3(namespaceUri string, name string, defaultValue string) string {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QWebElement_AttributeNS3(this.h, namespaceUri_ms, name_ms, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebElement) AttributeNames1(namespaceUri string) []string {
	namespaceUri_ms := C.struct_miqt_string{}
	namespaceUri_ms.data = C.CString(namespaceUri)
	namespaceUri_ms.len = C.size_t(len(namespaceUri))
	defer C.free(unsafe.Pointer(namespaceUri_ms.data))
	var _ma C.struct_miqt_array = C.QWebElement_AttributeNames1(this.h, namespaceUri_ms)
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

// Delete this object from C++ memory.
func (this *QWebElement) Delete() {
	C.QWebElement_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebElement) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebElement) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebElementCollection struct {
	h          *C.QWebElementCollection
	isSubclass bool
}

func (this *QWebElementCollection) cPointer() *C.QWebElementCollection {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebElementCollection) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebElementCollection constructs the type using only CGO pointers.
func newQWebElementCollection(h *C.QWebElementCollection) *QWebElementCollection {
	if h == nil {
		return nil
	}

	return &QWebElementCollection{h: h}
}

// UnsafeNewQWebElementCollection constructs the type using only unsafe pointers.
func UnsafeNewQWebElementCollection(h unsafe.Pointer) *QWebElementCollection {
	return newQWebElementCollection((*C.QWebElementCollection)(h))
}

// NewQWebElementCollection constructs a new QWebElementCollection object.
func NewQWebElementCollection() *QWebElementCollection {

	ret := newQWebElementCollection(C.QWebElementCollection_new())
	ret.isSubclass = true
	return ret
}

// NewQWebElementCollection2 constructs a new QWebElementCollection object.
func NewQWebElementCollection2(contextElement *QWebElement, query string) *QWebElementCollection {
	query_ms := C.struct_miqt_string{}
	query_ms.data = C.CString(query)
	query_ms.len = C.size_t(len(query))
	defer C.free(unsafe.Pointer(query_ms.data))

	ret := newQWebElementCollection(C.QWebElementCollection_new2(contextElement.cPointer(), query_ms))
	ret.isSubclass = true
	return ret
}

// NewQWebElementCollection3 constructs a new QWebElementCollection object.
func NewQWebElementCollection3(param1 *QWebElementCollection) *QWebElementCollection {

	ret := newQWebElementCollection(C.QWebElementCollection_new3(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QWebElementCollection) OperatorAssign(param1 *QWebElementCollection) {
	C.QWebElementCollection_OperatorAssign(this.h, param1.cPointer())
}

func (this *QWebElementCollection) OperatorPlus(other *QWebElementCollection) *QWebElementCollection {
	_goptr := newQWebElementCollection(C.QWebElementCollection_OperatorPlus(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection) OperatorPlusAssign(other *QWebElementCollection) *QWebElementCollection {
	return newQWebElementCollection(C.QWebElementCollection_OperatorPlusAssign(this.h, other.cPointer()))
}

func (this *QWebElementCollection) Append(collection *QWebElementCollection) {
	C.QWebElementCollection_Append(this.h, collection.cPointer())
}

func (this *QWebElementCollection) Count() int {
	return (int)(C.QWebElementCollection_Count(this.h))
}

func (this *QWebElementCollection) At(i int) *QWebElement {
	_goptr := newQWebElement(C.QWebElementCollection_At(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection) OperatorSubscript(i int) *QWebElement {
	_goptr := newQWebElement(C.QWebElementCollection_OperatorSubscript(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection) First() *QWebElement {
	_goptr := newQWebElement(C.QWebElementCollection_First(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection) Last() *QWebElement {
	_goptr := newQWebElement(C.QWebElementCollection_Last(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection) ToList() []QWebElement {
	var _ma C.struct_miqt_array = C.QWebElementCollection_ToList(this.h)
	_ret := make([]QWebElement, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebElement)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebElement(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebElementCollection) Begin() *QWebElementCollection__const_iterator {
	_goptr := newQWebElementCollection__const_iterator(C.QWebElementCollection_Begin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection) End() *QWebElementCollection__const_iterator {
	_goptr := newQWebElementCollection__const_iterator(C.QWebElementCollection_End(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection) ConstBegin() *QWebElementCollection__const_iterator {
	_goptr := newQWebElementCollection__const_iterator(C.QWebElementCollection_ConstBegin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection) ConstEnd() *QWebElementCollection__const_iterator {
	_goptr := newQWebElementCollection__const_iterator(C.QWebElementCollection_ConstEnd(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection) Begin2() *QWebElementCollection__iterator {
	_goptr := newQWebElementCollection__iterator(C.QWebElementCollection_Begin2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection) End2() *QWebElementCollection__iterator {
	_goptr := newQWebElementCollection__iterator(C.QWebElementCollection_End2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QWebElementCollection) Delete() {
	C.QWebElementCollection_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebElementCollection) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebElementCollection) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebElementCollection__const_iterator struct {
	h          *C.QWebElementCollection__const_iterator
	isSubclass bool
}

func (this *QWebElementCollection__const_iterator) cPointer() *C.QWebElementCollection__const_iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebElementCollection__const_iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebElementCollection__const_iterator constructs the type using only CGO pointers.
func newQWebElementCollection__const_iterator(h *C.QWebElementCollection__const_iterator) *QWebElementCollection__const_iterator {
	if h == nil {
		return nil
	}

	return &QWebElementCollection__const_iterator{h: h}
}

// UnsafeNewQWebElementCollection__const_iterator constructs the type using only unsafe pointers.
func UnsafeNewQWebElementCollection__const_iterator(h unsafe.Pointer) *QWebElementCollection__const_iterator {
	return newQWebElementCollection__const_iterator((*C.QWebElementCollection__const_iterator)(h))
}

// NewQWebElementCollection__const_iterator constructs a new QWebElementCollection::const_iterator object.
func NewQWebElementCollection__const_iterator(collection_ *QWebElementCollection, index int) *QWebElementCollection__const_iterator {

	ret := newQWebElementCollection__const_iterator(C.QWebElementCollection__const_iterator_new(collection_.cPointer(), (C.int)(index)))
	ret.isSubclass = true
	return ret
}

// NewQWebElementCollection__const_iterator2 constructs a new QWebElementCollection::const_iterator object.
func NewQWebElementCollection__const_iterator2(o *QWebElementCollection__const_iterator) *QWebElementCollection__const_iterator {

	ret := newQWebElementCollection__const_iterator(C.QWebElementCollection__const_iterator_new2(o.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QWebElementCollection__const_iterator) OperatorMultiply() *QWebElement {
	_goptr := newQWebElement(C.QWebElementCollection__const_iterator_OperatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection__const_iterator) OperatorEqual(o *QWebElementCollection__const_iterator) bool {
	return (bool)(C.QWebElementCollection__const_iterator_OperatorEqual(this.h, o.cPointer()))
}

func (this *QWebElementCollection__const_iterator) OperatorNotEqual(o *QWebElementCollection__const_iterator) bool {
	return (bool)(C.QWebElementCollection__const_iterator_OperatorNotEqual(this.h, o.cPointer()))
}

func (this *QWebElementCollection__const_iterator) OperatorLesser(o *QWebElementCollection__const_iterator) bool {
	return (bool)(C.QWebElementCollection__const_iterator_OperatorLesser(this.h, o.cPointer()))
}

func (this *QWebElementCollection__const_iterator) OperatorLesserOrEqual(o *QWebElementCollection__const_iterator) bool {
	return (bool)(C.QWebElementCollection__const_iterator_OperatorLesserOrEqual(this.h, o.cPointer()))
}

func (this *QWebElementCollection__const_iterator) OperatorGreater(o *QWebElementCollection__const_iterator) bool {
	return (bool)(C.QWebElementCollection__const_iterator_OperatorGreater(this.h, o.cPointer()))
}

func (this *QWebElementCollection__const_iterator) OperatorGreaterOrEqual(o *QWebElementCollection__const_iterator) bool {
	return (bool)(C.QWebElementCollection__const_iterator_OperatorGreaterOrEqual(this.h, o.cPointer()))
}

func (this *QWebElementCollection__const_iterator) OperatorPlusPlus() *QWebElementCollection__const_iterator {
	return newQWebElementCollection__const_iterator(C.QWebElementCollection__const_iterator_OperatorPlusPlus(this.h))
}

func (this *QWebElementCollection__const_iterator) OperatorPlusPlusWithInt(param1 int) *QWebElementCollection__const_iterator {
	_goptr := newQWebElementCollection__const_iterator(C.QWebElementCollection__const_iterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection__const_iterator) OperatorMinusMinus() *QWebElementCollection__const_iterator {
	return newQWebElementCollection__const_iterator(C.QWebElementCollection__const_iterator_OperatorMinusMinus(this.h))
}

func (this *QWebElementCollection__const_iterator) OperatorMinusMinusWithInt(param1 int) *QWebElementCollection__const_iterator {
	_goptr := newQWebElementCollection__const_iterator(C.QWebElementCollection__const_iterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection__const_iterator) OperatorPlusAssign(j int) *QWebElementCollection__const_iterator {
	return newQWebElementCollection__const_iterator(C.QWebElementCollection__const_iterator_OperatorPlusAssign(this.h, (C.int)(j)))
}

func (this *QWebElementCollection__const_iterator) OperatorMinusAssign(j int) *QWebElementCollection__const_iterator {
	return newQWebElementCollection__const_iterator(C.QWebElementCollection__const_iterator_OperatorMinusAssign(this.h, (C.int)(j)))
}

func (this *QWebElementCollection__const_iterator) OperatorPlus(j int) *QWebElementCollection__const_iterator {
	_goptr := newQWebElementCollection__const_iterator(C.QWebElementCollection__const_iterator_OperatorPlus(this.h, (C.int)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection__const_iterator) OperatorMinus(j int) *QWebElementCollection__const_iterator {
	_goptr := newQWebElementCollection__const_iterator(C.QWebElementCollection__const_iterator_OperatorMinus(this.h, (C.int)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection__const_iterator) OperatorMinusWithQWebElementCollectionconstIterator(j QWebElementCollection__const_iterator) int {
	return (int)(C.QWebElementCollection__const_iterator_OperatorMinusWithQWebElementCollectionconstIterator(this.h, j.cPointer()))
}

// Delete this object from C++ memory.
func (this *QWebElementCollection__const_iterator) Delete() {
	C.QWebElementCollection__const_iterator_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebElementCollection__const_iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebElementCollection__const_iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebElementCollection__iterator struct {
	h          *C.QWebElementCollection__iterator
	isSubclass bool
}

func (this *QWebElementCollection__iterator) cPointer() *C.QWebElementCollection__iterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebElementCollection__iterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebElementCollection__iterator constructs the type using only CGO pointers.
func newQWebElementCollection__iterator(h *C.QWebElementCollection__iterator) *QWebElementCollection__iterator {
	if h == nil {
		return nil
	}

	return &QWebElementCollection__iterator{h: h}
}

// UnsafeNewQWebElementCollection__iterator constructs the type using only unsafe pointers.
func UnsafeNewQWebElementCollection__iterator(h unsafe.Pointer) *QWebElementCollection__iterator {
	return newQWebElementCollection__iterator((*C.QWebElementCollection__iterator)(h))
}

// NewQWebElementCollection__iterator constructs a new QWebElementCollection::iterator object.
func NewQWebElementCollection__iterator(collection_ *QWebElementCollection, index int) *QWebElementCollection__iterator {

	ret := newQWebElementCollection__iterator(C.QWebElementCollection__iterator_new(collection_.cPointer(), (C.int)(index)))
	ret.isSubclass = true
	return ret
}

// NewQWebElementCollection__iterator2 constructs a new QWebElementCollection::iterator object.
func NewQWebElementCollection__iterator2(o *QWebElementCollection__iterator) *QWebElementCollection__iterator {

	ret := newQWebElementCollection__iterator(C.QWebElementCollection__iterator_new2(o.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QWebElementCollection__iterator) OperatorMultiply() *QWebElement {
	_goptr := newQWebElement(C.QWebElementCollection__iterator_OperatorMultiply(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection__iterator) OperatorEqual(o *QWebElementCollection__iterator) bool {
	return (bool)(C.QWebElementCollection__iterator_OperatorEqual(this.h, o.cPointer()))
}

func (this *QWebElementCollection__iterator) OperatorNotEqual(o *QWebElementCollection__iterator) bool {
	return (bool)(C.QWebElementCollection__iterator_OperatorNotEqual(this.h, o.cPointer()))
}

func (this *QWebElementCollection__iterator) OperatorLesser(o *QWebElementCollection__iterator) bool {
	return (bool)(C.QWebElementCollection__iterator_OperatorLesser(this.h, o.cPointer()))
}

func (this *QWebElementCollection__iterator) OperatorLesserOrEqual(o *QWebElementCollection__iterator) bool {
	return (bool)(C.QWebElementCollection__iterator_OperatorLesserOrEqual(this.h, o.cPointer()))
}

func (this *QWebElementCollection__iterator) OperatorGreater(o *QWebElementCollection__iterator) bool {
	return (bool)(C.QWebElementCollection__iterator_OperatorGreater(this.h, o.cPointer()))
}

func (this *QWebElementCollection__iterator) OperatorGreaterOrEqual(o *QWebElementCollection__iterator) bool {
	return (bool)(C.QWebElementCollection__iterator_OperatorGreaterOrEqual(this.h, o.cPointer()))
}

func (this *QWebElementCollection__iterator) OperatorPlusPlus() *QWebElementCollection__iterator {
	return newQWebElementCollection__iterator(C.QWebElementCollection__iterator_OperatorPlusPlus(this.h))
}

func (this *QWebElementCollection__iterator) OperatorPlusPlusWithInt(param1 int) *QWebElementCollection__iterator {
	_goptr := newQWebElementCollection__iterator(C.QWebElementCollection__iterator_OperatorPlusPlusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection__iterator) OperatorMinusMinus() *QWebElementCollection__iterator {
	return newQWebElementCollection__iterator(C.QWebElementCollection__iterator_OperatorMinusMinus(this.h))
}

func (this *QWebElementCollection__iterator) OperatorMinusMinusWithInt(param1 int) *QWebElementCollection__iterator {
	_goptr := newQWebElementCollection__iterator(C.QWebElementCollection__iterator_OperatorMinusMinusWithInt(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection__iterator) OperatorPlusAssign(j int) *QWebElementCollection__iterator {
	return newQWebElementCollection__iterator(C.QWebElementCollection__iterator_OperatorPlusAssign(this.h, (C.int)(j)))
}

func (this *QWebElementCollection__iterator) OperatorMinusAssign(j int) *QWebElementCollection__iterator {
	return newQWebElementCollection__iterator(C.QWebElementCollection__iterator_OperatorMinusAssign(this.h, (C.int)(j)))
}

func (this *QWebElementCollection__iterator) OperatorPlus(j int) *QWebElementCollection__iterator {
	_goptr := newQWebElementCollection__iterator(C.QWebElementCollection__iterator_OperatorPlus(this.h, (C.int)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection__iterator) OperatorMinus(j int) *QWebElementCollection__iterator {
	_goptr := newQWebElementCollection__iterator(C.QWebElementCollection__iterator_OperatorMinus(this.h, (C.int)(j)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebElementCollection__iterator) OperatorMinusWithQWebElementCollectioniterator(j QWebElementCollection__iterator) int {
	return (int)(C.QWebElementCollection__iterator_OperatorMinusWithQWebElementCollectioniterator(this.h, j.cPointer()))
}

// Delete this object from C++ memory.
func (this *QWebElementCollection__iterator) Delete() {
	C.QWebElementCollection__iterator_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebElementCollection__iterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebElementCollection__iterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

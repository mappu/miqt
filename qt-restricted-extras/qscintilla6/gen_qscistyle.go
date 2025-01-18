package qscintilla6

/*

#include "gen_qscistyle.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciStyle__TextCase int

const (
	QsciStyle__OriginalCase QsciStyle__TextCase = 0
	QsciStyle__UpperCase    QsciStyle__TextCase = 1
	QsciStyle__LowerCase    QsciStyle__TextCase = 2
)

type QsciStyle struct {
	h          *C.QsciStyle
	isSubclass bool
}

func (this *QsciStyle) cPointer() *C.QsciStyle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciStyle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciStyle constructs the type using only CGO pointers.
func newQsciStyle(h *C.QsciStyle) *QsciStyle {
	if h == nil {
		return nil
	}

	return &QsciStyle{h: h}
}

// UnsafeNewQsciStyle constructs the type using only unsafe pointers.
func UnsafeNewQsciStyle(h unsafe.Pointer) *QsciStyle {
	return newQsciStyle((*C.QsciStyle)(h))
}

// NewQsciStyle constructs a new QsciStyle object.
func NewQsciStyle() *QsciStyle {

	ret := newQsciStyle(C.QsciStyle_new())
	ret.isSubclass = true
	return ret
}

// NewQsciStyle2 constructs a new QsciStyle object.
func NewQsciStyle2(style int, description string, color *qt6.QColor, paper *qt6.QColor, font *qt6.QFont) *QsciStyle {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))

	ret := newQsciStyle(C.QsciStyle_new2((C.int)(style), description_ms, (*C.QColor)(color.UnsafePointer()), (*C.QColor)(paper.UnsafePointer()), (*C.QFont)(font.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

// NewQsciStyle3 constructs a new QsciStyle object.
func NewQsciStyle3(param1 *QsciStyle) *QsciStyle {

	ret := newQsciStyle(C.QsciStyle_new3(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQsciStyle4 constructs a new QsciStyle object.
func NewQsciStyle4(style int) *QsciStyle {

	ret := newQsciStyle(C.QsciStyle_new4((C.int)(style)))
	ret.isSubclass = true
	return ret
}

// NewQsciStyle5 constructs a new QsciStyle object.
func NewQsciStyle5(style int, description string, color *qt6.QColor, paper *qt6.QColor, font *qt6.QFont, eolFill bool) *QsciStyle {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))

	ret := newQsciStyle(C.QsciStyle_new5((C.int)(style), description_ms, (*C.QColor)(color.UnsafePointer()), (*C.QColor)(paper.UnsafePointer()), (*C.QFont)(font.UnsafePointer()), (C.bool)(eolFill)))
	ret.isSubclass = true
	return ret
}

func (this *QsciStyle) Apply(sci *QsciScintillaBase) {
	C.QsciStyle_Apply(this.h, sci.cPointer())
}

func (this *QsciStyle) SetStyle(style int) {
	C.QsciStyle_SetStyle(this.h, (C.int)(style))
}

func (this *QsciStyle) Style() int {
	return (int)(C.QsciStyle_Style(this.h))
}

func (this *QsciStyle) SetDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QsciStyle_SetDescription(this.h, description_ms)
}

func (this *QsciStyle) Description() string {
	var _ms C.struct_miqt_string = C.QsciStyle_Description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciStyle) SetColor(color *qt6.QColor) {
	C.QsciStyle_SetColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QsciStyle) Color() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciStyle_Color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciStyle) SetPaper(paper *qt6.QColor) {
	C.QsciStyle_SetPaper(this.h, (*C.QColor)(paper.UnsafePointer()))
}

func (this *QsciStyle) Paper() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciStyle_Paper(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciStyle) SetFont(font *qt6.QFont) {
	C.QsciStyle_SetFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QsciStyle) Font() *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciStyle_Font(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciStyle) SetEolFill(fill bool) {
	C.QsciStyle_SetEolFill(this.h, (C.bool)(fill))
}

func (this *QsciStyle) EolFill() bool {
	return (bool)(C.QsciStyle_EolFill(this.h))
}

func (this *QsciStyle) SetTextCase(text_case QsciStyle__TextCase) {
	C.QsciStyle_SetTextCase(this.h, (C.int)(text_case))
}

func (this *QsciStyle) TextCase() QsciStyle__TextCase {
	return (QsciStyle__TextCase)(C.QsciStyle_TextCase(this.h))
}

func (this *QsciStyle) SetVisible(visible bool) {
	C.QsciStyle_SetVisible(this.h, (C.bool)(visible))
}

func (this *QsciStyle) Visible() bool {
	return (bool)(C.QsciStyle_Visible(this.h))
}

func (this *QsciStyle) SetChangeable(changeable bool) {
	C.QsciStyle_SetChangeable(this.h, (C.bool)(changeable))
}

func (this *QsciStyle) Changeable() bool {
	return (bool)(C.QsciStyle_Changeable(this.h))
}

func (this *QsciStyle) SetHotspot(hotspot bool) {
	C.QsciStyle_SetHotspot(this.h, (C.bool)(hotspot))
}

func (this *QsciStyle) Hotspot() bool {
	return (bool)(C.QsciStyle_Hotspot(this.h))
}

func (this *QsciStyle) Refresh() {
	C.QsciStyle_Refresh(this.h)
}

// Delete this object from C++ memory.
func (this *QsciStyle) Delete() {
	C.QsciStyle_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciStyle) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciStyle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

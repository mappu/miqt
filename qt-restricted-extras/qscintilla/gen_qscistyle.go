package qscintilla

/*

#include "gen_qscistyle.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
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
	h  *C.QsciStyle
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QsciStyle) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQsciStyle(C.QsciStyle_new())
}

// NewQsciStyle2 constructs a new QsciStyle object.
func NewQsciStyle2(style int, description string, color *qt.QColor, paper *qt.QColor, font *qt.QFont) *QsciStyle {
	defer runtime.KeepAlive(color)
	defer runtime.KeepAlive(paper)
	defer runtime.KeepAlive(font)
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))

	return newQsciStyle(C.QsciStyle_new2((C.int)(style), description_ms, (*C.QColor)(color.UnsafePointer()), (*C.QColor)(paper.UnsafePointer()), (*C.QFont)(font.UnsafePointer())))
}

// NewQsciStyle3 constructs a new QsciStyle object.
func NewQsciStyle3(param1 *QsciStyle) *QsciStyle {
	defer runtime.KeepAlive(param1)

	return newQsciStyle(C.QsciStyle_new3(param1.cPointer()))
}

// NewQsciStyle4 constructs a new QsciStyle object.
func NewQsciStyle4(style int) *QsciStyle {

	return newQsciStyle(C.QsciStyle_new4((C.int)(style)))
}

// NewQsciStyle5 constructs a new QsciStyle object.
func NewQsciStyle5(style int, description string, color *qt.QColor, paper *qt.QColor, font *qt.QFont, eolFill bool) *QsciStyle {
	defer runtime.KeepAlive(color)
	defer runtime.KeepAlive(paper)
	defer runtime.KeepAlive(font)
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))

	return newQsciStyle(C.QsciStyle_new5((C.int)(style), description_ms, (*C.QColor)(color.UnsafePointer()), (*C.QColor)(paper.UnsafePointer()), (*C.QFont)(font.UnsafePointer()), (C.bool)(eolFill)))
}

func (this *QsciStyle) Apply(sci *QsciScintillaBase) {
	defer runtime.KeepAlive(this)
	C.QsciStyle_apply(this.h, sci.cPointer())
}

func (this *QsciStyle) SetStyle(style int) {
	defer runtime.KeepAlive(this)
	C.QsciStyle_setStyle(this.h, (C.int)(style))
}

func (this *QsciStyle) Style() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QsciStyle_style(this.h))
}

func (this *QsciStyle) SetDescription(description string) {
	defer runtime.KeepAlive(this)
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QsciStyle_setDescription(this.h, description_ms)
}

func (this *QsciStyle) Description() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QsciStyle_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciStyle) SetColor(color *qt.QColor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(color)
	C.QsciStyle_setColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QsciStyle) Color() *qt.QColor {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciStyle_color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciStyle) SetPaper(paper *qt.QColor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(paper)
	C.QsciStyle_setPaper(this.h, (*C.QColor)(paper.UnsafePointer()))
}

func (this *QsciStyle) Paper() *qt.QColor {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciStyle_paper(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciStyle) SetFont(font *qt.QFont) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(font)
	C.QsciStyle_setFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QsciStyle) Font() *qt.QFont {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciStyle_font(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciStyle) SetEolFill(fill bool) {
	defer runtime.KeepAlive(this)
	C.QsciStyle_setEolFill(this.h, (C.bool)(fill))
}

func (this *QsciStyle) EolFill() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QsciStyle_eolFill(this.h))
}

func (this *QsciStyle) SetTextCase(text_case QsciStyle__TextCase) {
	defer runtime.KeepAlive(this)
	C.QsciStyle_setTextCase(this.h, (C.int)(text_case))
}

func (this *QsciStyle) TextCase() QsciStyle__TextCase {
	defer runtime.KeepAlive(this)
	return (QsciStyle__TextCase)(C.QsciStyle_textCase(this.h))
}

func (this *QsciStyle) SetVisible(visible bool) {
	defer runtime.KeepAlive(this)
	C.QsciStyle_setVisible(this.h, (C.bool)(visible))
}

func (this *QsciStyle) Visible() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QsciStyle_visible(this.h))
}

func (this *QsciStyle) SetChangeable(changeable bool) {
	defer runtime.KeepAlive(this)
	C.QsciStyle_setChangeable(this.h, (C.bool)(changeable))
}

func (this *QsciStyle) Changeable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QsciStyle_changeable(this.h))
}

func (this *QsciStyle) SetHotspot(hotspot bool) {
	defer runtime.KeepAlive(this)
	C.QsciStyle_setHotspot(this.h, (C.bool)(hotspot))
}

func (this *QsciStyle) Hotspot() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QsciStyle_hotspot(this.h))
}

func (this *QsciStyle) Refresh() {
	defer runtime.KeepAlive(this)
	C.QsciStyle_refresh(this.h)
}

func (this *QsciStyle) OperatorAssign(param1 *QsciStyle) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QsciStyle_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QsciStyle) Delete() {
	C.QsciStyle_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QsciStyle) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QsciStyle_delete((*C.QsciStyle)(gc[0]))
	})
	this.miqtSetGC(gc)
}

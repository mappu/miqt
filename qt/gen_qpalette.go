package qt

/*

#include "gen_qpalette.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"unsafe"
)

type QPalette__ColorGroup int

const (
	QPalette__Active       QPalette__ColorGroup = 0
	QPalette__Disabled     QPalette__ColorGroup = 1
	QPalette__Inactive     QPalette__ColorGroup = 2
	QPalette__NColorGroups QPalette__ColorGroup = 3
	QPalette__Current      QPalette__ColorGroup = 4
	QPalette__All          QPalette__ColorGroup = 5
	QPalette__Normal       QPalette__ColorGroup = 0
)

type QPalette__ColorRole int

const (
	QPalette__WindowText      QPalette__ColorRole = 0
	QPalette__Button          QPalette__ColorRole = 1
	QPalette__Light           QPalette__ColorRole = 2
	QPalette__Midlight        QPalette__ColorRole = 3
	QPalette__Dark            QPalette__ColorRole = 4
	QPalette__Mid             QPalette__ColorRole = 5
	QPalette__Text            QPalette__ColorRole = 6
	QPalette__BrightText      QPalette__ColorRole = 7
	QPalette__ButtonText      QPalette__ColorRole = 8
	QPalette__Base            QPalette__ColorRole = 9
	QPalette__Window          QPalette__ColorRole = 10
	QPalette__Shadow          QPalette__ColorRole = 11
	QPalette__Highlight       QPalette__ColorRole = 12
	QPalette__HighlightedText QPalette__ColorRole = 13
	QPalette__Link            QPalette__ColorRole = 14
	QPalette__LinkVisited     QPalette__ColorRole = 15
	QPalette__AlternateBase   QPalette__ColorRole = 16
	QPalette__NoRole          QPalette__ColorRole = 17
	QPalette__ToolTipBase     QPalette__ColorRole = 18
	QPalette__ToolTipText     QPalette__ColorRole = 19
	QPalette__PlaceholderText QPalette__ColorRole = 20
	QPalette__NColorRoles     QPalette__ColorRole = 21
	QPalette__Foreground      QPalette__ColorRole = 0
	QPalette__Background      QPalette__ColorRole = 10
)

type QPalette struct {
	h  *C.QPalette
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPalette) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QPalette) cPointer() *C.QPalette {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPalette) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPalette constructs the type using only CGO pointers.
func newQPalette(h *C.QPalette) *QPalette {
	if h == nil {
		return nil
	}

	return &QPalette{h: h}
}

// UnsafeNewQPalette constructs the type using only unsafe pointers.
func UnsafeNewQPalette(h unsafe.Pointer) *QPalette {
	return newQPalette((*C.QPalette)(h))
}

// NewQPalette constructs a new QPalette object.
func NewQPalette() *QPalette {

	return newQPalette(C.QPalette_new())
}

// NewQPalette2 constructs a new QPalette object.
func NewQPalette2(button QColor) *QPalette {

	return newQPalette(C.QPalette_new2(libmiqt.ValueCast[C.struct_miqt_qcolor](button)))
}

// NewQPalette3 constructs a new QPalette object.
func NewQPalette3(button GlobalColor) *QPalette {

	return newQPalette(C.QPalette_new3((C.int)(button)))
}

// NewQPalette4 constructs a new QPalette object.
func NewQPalette4(button QColor, window QColor) *QPalette {

	return newQPalette(C.QPalette_new4(libmiqt.ValueCast[C.struct_miqt_qcolor](button), libmiqt.ValueCast[C.struct_miqt_qcolor](window)))
}

// NewQPalette5 constructs a new QPalette object.
func NewQPalette5(windowText *QBrush, button *QBrush, light *QBrush, dark *QBrush, mid *QBrush, text *QBrush, bright_text *QBrush, base *QBrush, window *QBrush) *QPalette {
	defer runtime.KeepAlive(windowText)
	defer runtime.KeepAlive(button)
	defer runtime.KeepAlive(light)
	defer runtime.KeepAlive(dark)
	defer runtime.KeepAlive(mid)
	defer runtime.KeepAlive(text)
	defer runtime.KeepAlive(bright_text)
	defer runtime.KeepAlive(base)
	defer runtime.KeepAlive(window)

	return newQPalette(C.QPalette_new5(windowText.cPointer(), button.cPointer(), light.cPointer(), dark.cPointer(), mid.cPointer(), text.cPointer(), bright_text.cPointer(), base.cPointer(), window.cPointer()))
}

// NewQPalette6 constructs a new QPalette object.
func NewQPalette6(windowText QColor, window QColor, light QColor, dark QColor, mid QColor, text QColor, base QColor) *QPalette {

	return newQPalette(C.QPalette_new6(libmiqt.ValueCast[C.struct_miqt_qcolor](windowText), libmiqt.ValueCast[C.struct_miqt_qcolor](window), libmiqt.ValueCast[C.struct_miqt_qcolor](light), libmiqt.ValueCast[C.struct_miqt_qcolor](dark), libmiqt.ValueCast[C.struct_miqt_qcolor](mid), libmiqt.ValueCast[C.struct_miqt_qcolor](text), libmiqt.ValueCast[C.struct_miqt_qcolor](base)))
}

// NewQPalette7 constructs a new QPalette object.
func NewQPalette7(palette *QPalette) *QPalette {
	defer runtime.KeepAlive(palette)

	return newQPalette(C.QPalette_new7(palette.cPointer()))
}

func (this *QPalette) OperatorAssign(palette *QPalette) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(palette)
	C.QPalette_operatorAssign(this.h, palette.cPointer())
}

func (this *QPalette) Swap(other *QPalette) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QPalette_swap(this.h, other.cPointer())
}

func (this *QPalette) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QPalette_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPalette) CurrentColorGroup() QPalette__ColorGroup {
	defer runtime.KeepAlive(this)
	return (QPalette__ColorGroup)(C.QPalette_currentColorGroup(this.h))
}

func (this *QPalette) SetCurrentColorGroup(cg QPalette__ColorGroup) {
	defer runtime.KeepAlive(this)
	C.QPalette_setCurrentColorGroup(this.h, (C.int)(cg))
}

func (this *QPalette) Color(cg QPalette__ColorGroup, cr QPalette__ColorRole) QColor {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QColor](C.QPalette_color(this.h, (C.int)(cg), (C.int)(cr)))
}

func (this *QPalette) Brush(cg QPalette__ColorGroup, cr QPalette__ColorRole) *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_brush(this.h, (C.int)(cg), (C.int)(cr)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) SetColor(cg QPalette__ColorGroup, cr QPalette__ColorRole, color QColor) {
	defer runtime.KeepAlive(this)
	C.QPalette_setColor(this.h, (C.int)(cg), (C.int)(cr), libmiqt.ValueCast[C.struct_miqt_qcolor](color))
}

func (this *QPalette) SetColor2(cr QPalette__ColorRole, color QColor) {
	defer runtime.KeepAlive(this)
	C.QPalette_setColor2(this.h, (C.int)(cr), libmiqt.ValueCast[C.struct_miqt_qcolor](color))
}

func (this *QPalette) SetBrush(cr QPalette__ColorRole, brush *QBrush) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(brush)
	C.QPalette_setBrush(this.h, (C.int)(cr), brush.cPointer())
}

func (this *QPalette) IsBrushSet(cg QPalette__ColorGroup, cr QPalette__ColorRole) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPalette_isBrushSet(this.h, (C.int)(cg), (C.int)(cr)))
}

func (this *QPalette) SetBrush2(cg QPalette__ColorGroup, cr QPalette__ColorRole, brush *QBrush) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(brush)
	C.QPalette_setBrush2(this.h, (C.int)(cg), (C.int)(cr), brush.cPointer())
}

func (this *QPalette) SetColorGroup(cr QPalette__ColorGroup, windowText *QBrush, button *QBrush, light *QBrush, dark *QBrush, mid *QBrush, text *QBrush, bright_text *QBrush, base *QBrush, window *QBrush) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(windowText)
	defer runtime.KeepAlive(button)
	defer runtime.KeepAlive(light)
	defer runtime.KeepAlive(dark)
	defer runtime.KeepAlive(mid)
	defer runtime.KeepAlive(text)
	defer runtime.KeepAlive(bright_text)
	defer runtime.KeepAlive(base)
	defer runtime.KeepAlive(window)
	C.QPalette_setColorGroup(this.h, (C.int)(cr), windowText.cPointer(), button.cPointer(), light.cPointer(), dark.cPointer(), mid.cPointer(), text.cPointer(), bright_text.cPointer(), base.cPointer(), window.cPointer())
}

func (this *QPalette) IsEqual(cr1 QPalette__ColorGroup, cr2 QPalette__ColorGroup) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPalette_isEqual(this.h, (C.int)(cr1), (C.int)(cr2)))
}

func (this *QPalette) ColorWithCr(cr QPalette__ColorRole) QColor {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QColor](C.QPalette_colorWithCr(this.h, (C.int)(cr)))
}

func (this *QPalette) BrushWithCr(cr QPalette__ColorRole) *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_brushWithCr(this.h, (C.int)(cr)))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) WindowText() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_windowText(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Button() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_button(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Light() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_light(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Dark() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_dark(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Mid() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_mid(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Text() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_text(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Base() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_base(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) AlternateBase() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_alternateBase(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) ToolTipBase() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_toolTipBase(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) ToolTipText() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_toolTipText(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Window() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_window(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Midlight() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_midlight(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) BrightText() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_brightText(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) ButtonText() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_buttonText(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Shadow() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_shadow(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Highlight() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_highlight(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) HighlightedText() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_highlightedText(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Link() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_link(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) LinkVisited() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_linkVisited(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) PlaceholderText() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_placeholderText(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Foreground() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_foreground(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) Background() *QBrush {
	defer runtime.KeepAlive(this)
	_ret := newQBrush(C.QPalette_background(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPalette) OperatorEqual(p *QPalette) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	return (bool)(C.QPalette_operatorEqual(this.h, p.cPointer()))
}

func (this *QPalette) OperatorNotEqual(p *QPalette) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	return (bool)(C.QPalette_operatorNotEqual(this.h, p.cPointer()))
}

func (this *QPalette) IsCopyOf(p *QPalette) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(p)
	return (bool)(C.QPalette_isCopyOf(this.h, p.cPointer()))
}

func (this *QPalette) CacheKey() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QPalette_cacheKey(this.h))
}

func (this *QPalette) Resolve(param1 *QPalette) *QPalette {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	_goptr := newQPalette(C.QPalette_resolve(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPalette) Resolve2() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QPalette_resolve2(this.h))
}

func (this *QPalette) ResolveWithMask(mask uint) {
	defer runtime.KeepAlive(this)
	C.QPalette_resolveWithMask(this.h, (C.uint)(mask))
}

// Delete this object from C++ memory.
func (this *QPalette) Delete() {
	C.QPalette_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPalette) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPalette_delete((*C.QPalette)(gc[0]))
	})
	this.miqtSetGC(gc)
}

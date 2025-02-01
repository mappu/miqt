package qt

/*

#include "gen_qpalette.h"
#include <stdlib.h>

*/
import "C"

import (
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
	h *C.QPalette
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
func NewQPalette2(button *QColor) *QPalette {

	return newQPalette(C.QPalette_new2(button.cPointer()))
}

// NewQPalette3 constructs a new QPalette object.
func NewQPalette3(button GlobalColor) *QPalette {

	return newQPalette(C.QPalette_new3((C.int)(button)))
}

// NewQPalette4 constructs a new QPalette object.
func NewQPalette4(button *QColor, window *QColor) *QPalette {

	return newQPalette(C.QPalette_new4(button.cPointer(), window.cPointer()))
}

// NewQPalette5 constructs a new QPalette object.
func NewQPalette5(windowText *QBrush, button *QBrush, light *QBrush, dark *QBrush, mid *QBrush, text *QBrush, bright_text *QBrush, base *QBrush, window *QBrush) *QPalette {

	return newQPalette(C.QPalette_new5(windowText.cPointer(), button.cPointer(), light.cPointer(), dark.cPointer(), mid.cPointer(), text.cPointer(), bright_text.cPointer(), base.cPointer(), window.cPointer()))
}

// NewQPalette6 constructs a new QPalette object.
func NewQPalette6(windowText *QColor, window *QColor, light *QColor, dark *QColor, mid *QColor, text *QColor, base *QColor) *QPalette {

	return newQPalette(C.QPalette_new6(windowText.cPointer(), window.cPointer(), light.cPointer(), dark.cPointer(), mid.cPointer(), text.cPointer(), base.cPointer()))
}

// NewQPalette7 constructs a new QPalette object.
func NewQPalette7(palette *QPalette) *QPalette {

	return newQPalette(C.QPalette_new7(palette.cPointer()))
}

func (this *QPalette) OperatorAssign(palette *QPalette) {
	C.QPalette_operatorAssign(this.h, palette.cPointer())
}

func (this *QPalette) Swap(other *QPalette) {
	C.QPalette_swap(this.h, other.cPointer())
}

func (this *QPalette) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QPalette_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPalette) CurrentColorGroup() QPalette__ColorGroup {
	return (QPalette__ColorGroup)(C.QPalette_currentColorGroup(this.h))
}

func (this *QPalette) SetCurrentColorGroup(cg QPalette__ColorGroup) {
	C.QPalette_setCurrentColorGroup(this.h, (C.int)(cg))
}

func (this *QPalette) Color(cg QPalette__ColorGroup, cr QPalette__ColorRole) *QColor {
	return newQColor(C.QPalette_color(this.h, (C.int)(cg), (C.int)(cr)))
}

func (this *QPalette) Brush(cg QPalette__ColorGroup, cr QPalette__ColorRole) *QBrush {
	return newQBrush(C.QPalette_brush(this.h, (C.int)(cg), (C.int)(cr)))
}

func (this *QPalette) SetColor(cg QPalette__ColorGroup, cr QPalette__ColorRole, color *QColor) {
	C.QPalette_setColor(this.h, (C.int)(cg), (C.int)(cr), color.cPointer())
}

func (this *QPalette) SetColor2(cr QPalette__ColorRole, color *QColor) {
	C.QPalette_setColor2(this.h, (C.int)(cr), color.cPointer())
}

func (this *QPalette) SetBrush(cr QPalette__ColorRole, brush *QBrush) {
	C.QPalette_setBrush(this.h, (C.int)(cr), brush.cPointer())
}

func (this *QPalette) IsBrushSet(cg QPalette__ColorGroup, cr QPalette__ColorRole) bool {
	return (bool)(C.QPalette_isBrushSet(this.h, (C.int)(cg), (C.int)(cr)))
}

func (this *QPalette) SetBrush2(cg QPalette__ColorGroup, cr QPalette__ColorRole, brush *QBrush) {
	C.QPalette_setBrush2(this.h, (C.int)(cg), (C.int)(cr), brush.cPointer())
}

func (this *QPalette) SetColorGroup(cr QPalette__ColorGroup, windowText *QBrush, button *QBrush, light *QBrush, dark *QBrush, mid *QBrush, text *QBrush, bright_text *QBrush, base *QBrush, window *QBrush) {
	C.QPalette_setColorGroup(this.h, (C.int)(cr), windowText.cPointer(), button.cPointer(), light.cPointer(), dark.cPointer(), mid.cPointer(), text.cPointer(), bright_text.cPointer(), base.cPointer(), window.cPointer())
}

func (this *QPalette) IsEqual(cr1 QPalette__ColorGroup, cr2 QPalette__ColorGroup) bool {
	return (bool)(C.QPalette_isEqual(this.h, (C.int)(cr1), (C.int)(cr2)))
}

func (this *QPalette) ColorWithCr(cr QPalette__ColorRole) *QColor {
	return newQColor(C.QPalette_colorWithCr(this.h, (C.int)(cr)))
}

func (this *QPalette) BrushWithCr(cr QPalette__ColorRole) *QBrush {
	return newQBrush(C.QPalette_brushWithCr(this.h, (C.int)(cr)))
}

func (this *QPalette) WindowText() *QBrush {
	return newQBrush(C.QPalette_windowText(this.h))
}

func (this *QPalette) Button() *QBrush {
	return newQBrush(C.QPalette_button(this.h))
}

func (this *QPalette) Light() *QBrush {
	return newQBrush(C.QPalette_light(this.h))
}

func (this *QPalette) Dark() *QBrush {
	return newQBrush(C.QPalette_dark(this.h))
}

func (this *QPalette) Mid() *QBrush {
	return newQBrush(C.QPalette_mid(this.h))
}

func (this *QPalette) Text() *QBrush {
	return newQBrush(C.QPalette_text(this.h))
}

func (this *QPalette) Base() *QBrush {
	return newQBrush(C.QPalette_base(this.h))
}

func (this *QPalette) AlternateBase() *QBrush {
	return newQBrush(C.QPalette_alternateBase(this.h))
}

func (this *QPalette) ToolTipBase() *QBrush {
	return newQBrush(C.QPalette_toolTipBase(this.h))
}

func (this *QPalette) ToolTipText() *QBrush {
	return newQBrush(C.QPalette_toolTipText(this.h))
}

func (this *QPalette) Window() *QBrush {
	return newQBrush(C.QPalette_window(this.h))
}

func (this *QPalette) Midlight() *QBrush {
	return newQBrush(C.QPalette_midlight(this.h))
}

func (this *QPalette) BrightText() *QBrush {
	return newQBrush(C.QPalette_brightText(this.h))
}

func (this *QPalette) ButtonText() *QBrush {
	return newQBrush(C.QPalette_buttonText(this.h))
}

func (this *QPalette) Shadow() *QBrush {
	return newQBrush(C.QPalette_shadow(this.h))
}

func (this *QPalette) Highlight() *QBrush {
	return newQBrush(C.QPalette_highlight(this.h))
}

func (this *QPalette) HighlightedText() *QBrush {
	return newQBrush(C.QPalette_highlightedText(this.h))
}

func (this *QPalette) Link() *QBrush {
	return newQBrush(C.QPalette_link(this.h))
}

func (this *QPalette) LinkVisited() *QBrush {
	return newQBrush(C.QPalette_linkVisited(this.h))
}

func (this *QPalette) PlaceholderText() *QBrush {
	return newQBrush(C.QPalette_placeholderText(this.h))
}

func (this *QPalette) Foreground() *QBrush {
	return newQBrush(C.QPalette_foreground(this.h))
}

func (this *QPalette) Background() *QBrush {
	return newQBrush(C.QPalette_background(this.h))
}

func (this *QPalette) OperatorEqual(p *QPalette) bool {
	return (bool)(C.QPalette_operatorEqual(this.h, p.cPointer()))
}

func (this *QPalette) OperatorNotEqual(p *QPalette) bool {
	return (bool)(C.QPalette_operatorNotEqual(this.h, p.cPointer()))
}

func (this *QPalette) IsCopyOf(p *QPalette) bool {
	return (bool)(C.QPalette_isCopyOf(this.h, p.cPointer()))
}

func (this *QPalette) CacheKey() int64 {
	return (int64)(C.QPalette_cacheKey(this.h))
}

func (this *QPalette) Resolve(param1 *QPalette) *QPalette {
	_goptr := newQPalette(C.QPalette_resolve(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPalette) Resolve2() uint {
	return (uint)(C.QPalette_resolve2(this.h))
}

func (this *QPalette) ResolveWithMask(mask uint) {
	C.QPalette_resolveWithMask(this.h, (C.uint)(mask))
}

// Delete this object from C++ memory.
func (this *QPalette) Delete() {
	C.QPalette_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPalette) GoGC() {
	runtime.SetFinalizer(this, func(this *QPalette) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt

/*

#include "gen_qtextformat.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextLength struct {
	h *C.QTextLength
}

func (this *QTextLength) cPointer() *C.QTextLength {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextLength(h *C.QTextLength) *QTextLength {
	if h == nil {
		return nil
	}
	return &QTextLength{h: h}
}

func newQTextLength_U(h unsafe.Pointer) *QTextLength {
	return newQTextLength((*C.QTextLength)(h))
}

// NewQTextLength constructs a new QTextLength object.
func NewQTextLength() *QTextLength {
	ret := C.QTextLength_new()
	return newQTextLength(ret)
}

// NewQTextLength2 constructs a new QTextLength object.
func NewQTextLength2(typeVal uintptr, value float64) *QTextLength {
	ret := C.QTextLength_new2((C.uintptr_t)(typeVal), (C.double)(value))
	return newQTextLength(ret)
}

// NewQTextLength3 constructs a new QTextLength object.
func NewQTextLength3(param1 *QTextLength) *QTextLength {
	ret := C.QTextLength_new3(param1.cPointer())
	return newQTextLength(ret)
}

func (this *QTextLength) Type() uintptr {
	ret := C.QTextLength_Type(this.h)
	return (uintptr)(ret)
}

func (this *QTextLength) Value(maximumLength float64) float64 {
	ret := C.QTextLength_Value(this.h, (C.double)(maximumLength))
	return (float64)(ret)
}

func (this *QTextLength) RawValue() float64 {
	ret := C.QTextLength_RawValue(this.h)
	return (float64)(ret)
}

func (this *QTextLength) OperatorEqual(other *QTextLength) bool {
	ret := C.QTextLength_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTextLength) OperatorNotEqual(other *QTextLength) bool {
	ret := C.QTextLength_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTextLength) Delete() {
	C.QTextLength_Delete(this.h)
}

type QTextFormat struct {
	h *C.QTextFormat
}

func (this *QTextFormat) cPointer() *C.QTextFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextFormat(h *C.QTextFormat) *QTextFormat {
	if h == nil {
		return nil
	}
	return &QTextFormat{h: h}
}

func newQTextFormat_U(h unsafe.Pointer) *QTextFormat {
	return newQTextFormat((*C.QTextFormat)(h))
}

// NewQTextFormat constructs a new QTextFormat object.
func NewQTextFormat() *QTextFormat {
	ret := C.QTextFormat_new()
	return newQTextFormat(ret)
}

// NewQTextFormat2 constructs a new QTextFormat object.
func NewQTextFormat2(typeVal int) *QTextFormat {
	ret := C.QTextFormat_new2((C.int)(typeVal))
	return newQTextFormat(ret)
}

// NewQTextFormat3 constructs a new QTextFormat object.
func NewQTextFormat3(rhs *QTextFormat) *QTextFormat {
	ret := C.QTextFormat_new3(rhs.cPointer())
	return newQTextFormat(ret)
}

func (this *QTextFormat) OperatorAssign(rhs *QTextFormat) {
	C.QTextFormat_OperatorAssign(this.h, rhs.cPointer())
}

func (this *QTextFormat) Swap(other *QTextFormat) {
	C.QTextFormat_Swap(this.h, other.cPointer())
}

func (this *QTextFormat) Merge(other *QTextFormat) {
	C.QTextFormat_Merge(this.h, other.cPointer())
}

func (this *QTextFormat) IsValid() bool {
	ret := C.QTextFormat_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextFormat) IsEmpty() bool {
	ret := C.QTextFormat_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QTextFormat) Type() int {
	ret := C.QTextFormat_Type(this.h)
	return (int)(ret)
}

func (this *QTextFormat) ObjectIndex() int {
	ret := C.QTextFormat_ObjectIndex(this.h)
	return (int)(ret)
}

func (this *QTextFormat) SetObjectIndex(object int) {
	C.QTextFormat_SetObjectIndex(this.h, (C.int)(object))
}

func (this *QTextFormat) Property(propertyId int) *QVariant {
	ret := C.QTextFormat_Property(this.h, (C.int)(propertyId))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) SetProperty(propertyId int, value *QVariant) {
	C.QTextFormat_SetProperty(this.h, (C.int)(propertyId), value.cPointer())
}

func (this *QTextFormat) ClearProperty(propertyId int) {
	C.QTextFormat_ClearProperty(this.h, (C.int)(propertyId))
}

func (this *QTextFormat) HasProperty(propertyId int) bool {
	ret := C.QTextFormat_HasProperty(this.h, (C.int)(propertyId))
	return (bool)(ret)
}

func (this *QTextFormat) BoolProperty(propertyId int) bool {
	ret := C.QTextFormat_BoolProperty(this.h, (C.int)(propertyId))
	return (bool)(ret)
}

func (this *QTextFormat) IntProperty(propertyId int) int {
	ret := C.QTextFormat_IntProperty(this.h, (C.int)(propertyId))
	return (int)(ret)
}

func (this *QTextFormat) DoubleProperty(propertyId int) float64 {
	ret := C.QTextFormat_DoubleProperty(this.h, (C.int)(propertyId))
	return (float64)(ret)
}

func (this *QTextFormat) StringProperty(propertyId int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextFormat_StringProperty(this.h, (C.int)(propertyId), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextFormat) ColorProperty(propertyId int) *QColor {
	ret := C.QTextFormat_ColorProperty(this.h, (C.int)(propertyId))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) PenProperty(propertyId int) *QPen {
	ret := C.QTextFormat_PenProperty(this.h, (C.int)(propertyId))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPen(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPen) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) BrushProperty(propertyId int) *QBrush {
	ret := C.QTextFormat_BrushProperty(this.h, (C.int)(propertyId))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) LengthProperty(propertyId int) *QTextLength {
	ret := C.QTextFormat_LengthProperty(this.h, (C.int)(propertyId))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextLength(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextLength) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) LengthVectorProperty(propertyId int) []QTextLength {
	var _out **C.QTextLength = nil
	var _out_len C.size_t = 0
	C.QTextFormat_LengthVectorProperty(this.h, (C.int)(propertyId), &_out, &_out_len)
	ret := make([]QTextLength, int(_out_len))
	_outCast := (*[0xffff]*C.QTextLength)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQTextLength(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextFormat) SetProperty2(propertyId int, lengths []QTextLength) {
	// For the C ABI, malloc a C array of raw pointers
	lengths_CArray := (*[0xffff]*C.QTextLength)(C.malloc(C.size_t(8 * len(lengths))))
	defer C.free(unsafe.Pointer(lengths_CArray))
	for i := range lengths {
		lengths_CArray[i] = lengths[i].cPointer()
	}
	C.QTextFormat_SetProperty2(this.h, (C.int)(propertyId), &lengths_CArray[0], C.size_t(len(lengths)))
}

func (this *QTextFormat) PropertyCount() int {
	ret := C.QTextFormat_PropertyCount(this.h)
	return (int)(ret)
}

func (this *QTextFormat) SetObjectType(typeVal int) {
	C.QTextFormat_SetObjectType(this.h, (C.int)(typeVal))
}

func (this *QTextFormat) ObjectType() int {
	ret := C.QTextFormat_ObjectType(this.h)
	return (int)(ret)
}

func (this *QTextFormat) IsCharFormat() bool {
	ret := C.QTextFormat_IsCharFormat(this.h)
	return (bool)(ret)
}

func (this *QTextFormat) IsBlockFormat() bool {
	ret := C.QTextFormat_IsBlockFormat(this.h)
	return (bool)(ret)
}

func (this *QTextFormat) IsListFormat() bool {
	ret := C.QTextFormat_IsListFormat(this.h)
	return (bool)(ret)
}

func (this *QTextFormat) IsFrameFormat() bool {
	ret := C.QTextFormat_IsFrameFormat(this.h)
	return (bool)(ret)
}

func (this *QTextFormat) IsImageFormat() bool {
	ret := C.QTextFormat_IsImageFormat(this.h)
	return (bool)(ret)
}

func (this *QTextFormat) IsTableFormat() bool {
	ret := C.QTextFormat_IsTableFormat(this.h)
	return (bool)(ret)
}

func (this *QTextFormat) IsTableCellFormat() bool {
	ret := C.QTextFormat_IsTableCellFormat(this.h)
	return (bool)(ret)
}

func (this *QTextFormat) ToBlockFormat() *QTextBlockFormat {
	ret := C.QTextFormat_ToBlockFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlockFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlockFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) ToCharFormat() *QTextCharFormat {
	ret := C.QTextFormat_ToCharFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCharFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCharFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) ToListFormat() *QTextListFormat {
	ret := C.QTextFormat_ToListFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextListFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextListFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) ToTableFormat() *QTextTableFormat {
	ret := C.QTextFormat_ToTableFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextTableFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextTableFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) ToFrameFormat() *QTextFrameFormat {
	ret := C.QTextFormat_ToFrameFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextFrameFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextFrameFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) ToImageFormat() *QTextImageFormat {
	ret := C.QTextFormat_ToImageFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextImageFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextImageFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) ToTableCellFormat() *QTextTableCellFormat {
	ret := C.QTextFormat_ToTableCellFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextTableCellFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextTableCellFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) OperatorEqual(rhs *QTextFormat) bool {
	ret := C.QTextFormat_OperatorEqual(this.h, rhs.cPointer())
	return (bool)(ret)
}

func (this *QTextFormat) OperatorNotEqual(rhs *QTextFormat) bool {
	ret := C.QTextFormat_OperatorNotEqual(this.h, rhs.cPointer())
	return (bool)(ret)
}

func (this *QTextFormat) SetLayoutDirection(direction uintptr) {
	C.QTextFormat_SetLayoutDirection(this.h, (C.uintptr_t)(direction))
}

func (this *QTextFormat) LayoutDirection() uintptr {
	ret := C.QTextFormat_LayoutDirection(this.h)
	return (uintptr)(ret)
}

func (this *QTextFormat) SetBackground(brush *QBrush) {
	C.QTextFormat_SetBackground(this.h, brush.cPointer())
}

func (this *QTextFormat) Background() *QBrush {
	ret := C.QTextFormat_Background(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) ClearBackground() {
	C.QTextFormat_ClearBackground(this.h)
}

func (this *QTextFormat) SetForeground(brush *QBrush) {
	C.QTextFormat_SetForeground(this.h, brush.cPointer())
}

func (this *QTextFormat) Foreground() *QBrush {
	ret := C.QTextFormat_Foreground(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFormat) ClearForeground() {
	C.QTextFormat_ClearForeground(this.h)
}

func (this *QTextFormat) Delete() {
	C.QTextFormat_Delete(this.h)
}

type QTextCharFormat struct {
	h *C.QTextCharFormat
	*QTextFormat
}

func (this *QTextCharFormat) cPointer() *C.QTextCharFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextCharFormat(h *C.QTextCharFormat) *QTextCharFormat {
	if h == nil {
		return nil
	}
	return &QTextCharFormat{h: h, QTextFormat: newQTextFormat_U(unsafe.Pointer(h))}
}

func newQTextCharFormat_U(h unsafe.Pointer) *QTextCharFormat {
	return newQTextCharFormat((*C.QTextCharFormat)(h))
}

// NewQTextCharFormat constructs a new QTextCharFormat object.
func NewQTextCharFormat() *QTextCharFormat {
	ret := C.QTextCharFormat_new()
	return newQTextCharFormat(ret)
}

// NewQTextCharFormat2 constructs a new QTextCharFormat object.
func NewQTextCharFormat2(param1 *QTextCharFormat) *QTextCharFormat {
	ret := C.QTextCharFormat_new2(param1.cPointer())
	return newQTextCharFormat(ret)
}

func (this *QTextCharFormat) IsValid() bool {
	ret := C.QTextCharFormat_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextCharFormat) SetFont(font *QFont, behavior uintptr) {
	C.QTextCharFormat_SetFont(this.h, font.cPointer(), (C.uintptr_t)(behavior))
}

func (this *QTextCharFormat) SetFontWithFont(font *QFont) {
	C.QTextCharFormat_SetFontWithFont(this.h, font.cPointer())
}

func (this *QTextCharFormat) Font() *QFont {
	ret := C.QTextCharFormat_Font(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextCharFormat) SetFontFamily(family string) {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	C.QTextCharFormat_SetFontFamily(this.h, family_Cstring, C.size_t(len(family)))
}

func (this *QTextCharFormat) FontFamily() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextCharFormat_FontFamily(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextCharFormat) SetFontFamilies(families []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	families_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(families))))
	families_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(families))))
	defer C.free(unsafe.Pointer(families_CArray))
	defer C.free(unsafe.Pointer(families_Lengths))
	for i := range families {
		single_cstring := C.CString(families[i])
		defer C.free(unsafe.Pointer(single_cstring))
		families_CArray[i] = single_cstring
		families_Lengths[i] = (C.uint64_t)(len(families[i]))
	}
	C.QTextCharFormat_SetFontFamilies(this.h, &families_CArray[0], &families_Lengths[0], C.size_t(len(families)))
}

func (this *QTextCharFormat) FontFamilies() *QVariant {
	ret := C.QTextCharFormat_FontFamilies(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextCharFormat) SetFontStyleName(styleName string) {
	styleName_Cstring := C.CString(styleName)
	defer C.free(unsafe.Pointer(styleName_Cstring))
	C.QTextCharFormat_SetFontStyleName(this.h, styleName_Cstring, C.size_t(len(styleName)))
}

func (this *QTextCharFormat) FontStyleName() *QVariant {
	ret := C.QTextCharFormat_FontStyleName(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextCharFormat) SetFontPointSize(size float64) {
	C.QTextCharFormat_SetFontPointSize(this.h, (C.double)(size))
}

func (this *QTextCharFormat) FontPointSize() float64 {
	ret := C.QTextCharFormat_FontPointSize(this.h)
	return (float64)(ret)
}

func (this *QTextCharFormat) SetFontWeight(weight int) {
	C.QTextCharFormat_SetFontWeight(this.h, (C.int)(weight))
}

func (this *QTextCharFormat) FontWeight() int {
	ret := C.QTextCharFormat_FontWeight(this.h)
	return (int)(ret)
}

func (this *QTextCharFormat) SetFontItalic(italic bool) {
	C.QTextCharFormat_SetFontItalic(this.h, (C.bool)(italic))
}

func (this *QTextCharFormat) FontItalic() bool {
	ret := C.QTextCharFormat_FontItalic(this.h)
	return (bool)(ret)
}

func (this *QTextCharFormat) SetFontCapitalization(capitalization uintptr) {
	C.QTextCharFormat_SetFontCapitalization(this.h, (C.uintptr_t)(capitalization))
}

func (this *QTextCharFormat) FontCapitalization() uintptr {
	ret := C.QTextCharFormat_FontCapitalization(this.h)
	return (uintptr)(ret)
}

func (this *QTextCharFormat) SetFontLetterSpacingType(letterSpacingType uintptr) {
	C.QTextCharFormat_SetFontLetterSpacingType(this.h, (C.uintptr_t)(letterSpacingType))
}

func (this *QTextCharFormat) FontLetterSpacingType() uintptr {
	ret := C.QTextCharFormat_FontLetterSpacingType(this.h)
	return (uintptr)(ret)
}

func (this *QTextCharFormat) SetFontLetterSpacing(spacing float64) {
	C.QTextCharFormat_SetFontLetterSpacing(this.h, (C.double)(spacing))
}

func (this *QTextCharFormat) FontLetterSpacing() float64 {
	ret := C.QTextCharFormat_FontLetterSpacing(this.h)
	return (float64)(ret)
}

func (this *QTextCharFormat) SetFontWordSpacing(spacing float64) {
	C.QTextCharFormat_SetFontWordSpacing(this.h, (C.double)(spacing))
}

func (this *QTextCharFormat) FontWordSpacing() float64 {
	ret := C.QTextCharFormat_FontWordSpacing(this.h)
	return (float64)(ret)
}

func (this *QTextCharFormat) SetFontUnderline(underline bool) {
	C.QTextCharFormat_SetFontUnderline(this.h, (C.bool)(underline))
}

func (this *QTextCharFormat) FontUnderline() bool {
	ret := C.QTextCharFormat_FontUnderline(this.h)
	return (bool)(ret)
}

func (this *QTextCharFormat) SetFontOverline(overline bool) {
	C.QTextCharFormat_SetFontOverline(this.h, (C.bool)(overline))
}

func (this *QTextCharFormat) FontOverline() bool {
	ret := C.QTextCharFormat_FontOverline(this.h)
	return (bool)(ret)
}

func (this *QTextCharFormat) SetFontStrikeOut(strikeOut bool) {
	C.QTextCharFormat_SetFontStrikeOut(this.h, (C.bool)(strikeOut))
}

func (this *QTextCharFormat) FontStrikeOut() bool {
	ret := C.QTextCharFormat_FontStrikeOut(this.h)
	return (bool)(ret)
}

func (this *QTextCharFormat) SetUnderlineColor(color *QColor) {
	C.QTextCharFormat_SetUnderlineColor(this.h, color.cPointer())
}

func (this *QTextCharFormat) UnderlineColor() *QColor {
	ret := C.QTextCharFormat_UnderlineColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextCharFormat) SetFontFixedPitch(fixedPitch bool) {
	C.QTextCharFormat_SetFontFixedPitch(this.h, (C.bool)(fixedPitch))
}

func (this *QTextCharFormat) FontFixedPitch() bool {
	ret := C.QTextCharFormat_FontFixedPitch(this.h)
	return (bool)(ret)
}

func (this *QTextCharFormat) SetFontStretch(factor int) {
	C.QTextCharFormat_SetFontStretch(this.h, (C.int)(factor))
}

func (this *QTextCharFormat) FontStretch() int {
	ret := C.QTextCharFormat_FontStretch(this.h)
	return (int)(ret)
}

func (this *QTextCharFormat) SetFontStyleHint(hint uintptr) {
	C.QTextCharFormat_SetFontStyleHint(this.h, (C.uintptr_t)(hint))
}

func (this *QTextCharFormat) SetFontStyleStrategy(strategy uintptr) {
	C.QTextCharFormat_SetFontStyleStrategy(this.h, (C.uintptr_t)(strategy))
}

func (this *QTextCharFormat) FontStyleHint() uintptr {
	ret := C.QTextCharFormat_FontStyleHint(this.h)
	return (uintptr)(ret)
}

func (this *QTextCharFormat) FontStyleStrategy() uintptr {
	ret := C.QTextCharFormat_FontStyleStrategy(this.h)
	return (uintptr)(ret)
}

func (this *QTextCharFormat) SetFontHintingPreference(hintingPreference uintptr) {
	C.QTextCharFormat_SetFontHintingPreference(this.h, (C.uintptr_t)(hintingPreference))
}

func (this *QTextCharFormat) FontHintingPreference() uintptr {
	ret := C.QTextCharFormat_FontHintingPreference(this.h)
	return (uintptr)(ret)
}

func (this *QTextCharFormat) SetFontKerning(enable bool) {
	C.QTextCharFormat_SetFontKerning(this.h, (C.bool)(enable))
}

func (this *QTextCharFormat) FontKerning() bool {
	ret := C.QTextCharFormat_FontKerning(this.h)
	return (bool)(ret)
}

func (this *QTextCharFormat) SetUnderlineStyle(style uintptr) {
	C.QTextCharFormat_SetUnderlineStyle(this.h, (C.uintptr_t)(style))
}

func (this *QTextCharFormat) UnderlineStyle() uintptr {
	ret := C.QTextCharFormat_UnderlineStyle(this.h)
	return (uintptr)(ret)
}

func (this *QTextCharFormat) SetVerticalAlignment(alignment uintptr) {
	C.QTextCharFormat_SetVerticalAlignment(this.h, (C.uintptr_t)(alignment))
}

func (this *QTextCharFormat) VerticalAlignment() uintptr {
	ret := C.QTextCharFormat_VerticalAlignment(this.h)
	return (uintptr)(ret)
}

func (this *QTextCharFormat) SetTextOutline(pen *QPen) {
	C.QTextCharFormat_SetTextOutline(this.h, pen.cPointer())
}

func (this *QTextCharFormat) TextOutline() *QPen {
	ret := C.QTextCharFormat_TextOutline(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPen(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPen) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextCharFormat) SetToolTip(tip string) {
	tip_Cstring := C.CString(tip)
	defer C.free(unsafe.Pointer(tip_Cstring))
	C.QTextCharFormat_SetToolTip(this.h, tip_Cstring, C.size_t(len(tip)))
}

func (this *QTextCharFormat) ToolTip() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextCharFormat_ToolTip(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextCharFormat) SetAnchor(anchor bool) {
	C.QTextCharFormat_SetAnchor(this.h, (C.bool)(anchor))
}

func (this *QTextCharFormat) IsAnchor() bool {
	ret := C.QTextCharFormat_IsAnchor(this.h)
	return (bool)(ret)
}

func (this *QTextCharFormat) SetAnchorHref(value string) {
	value_Cstring := C.CString(value)
	defer C.free(unsafe.Pointer(value_Cstring))
	C.QTextCharFormat_SetAnchorHref(this.h, value_Cstring, C.size_t(len(value)))
}

func (this *QTextCharFormat) AnchorHref() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextCharFormat_AnchorHref(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextCharFormat) SetAnchorName(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QTextCharFormat_SetAnchorName(this.h, name_Cstring, C.size_t(len(name)))
}

func (this *QTextCharFormat) AnchorName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextCharFormat_AnchorName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextCharFormat) SetAnchorNames(names []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	names_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(names))))
	names_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(names))))
	defer C.free(unsafe.Pointer(names_CArray))
	defer C.free(unsafe.Pointer(names_Lengths))
	for i := range names {
		single_cstring := C.CString(names[i])
		defer C.free(unsafe.Pointer(single_cstring))
		names_CArray[i] = single_cstring
		names_Lengths[i] = (C.uint64_t)(len(names[i]))
	}
	C.QTextCharFormat_SetAnchorNames(this.h, &names_CArray[0], &names_Lengths[0], C.size_t(len(names)))
}

func (this *QTextCharFormat) AnchorNames() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QTextCharFormat_AnchorNames(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextCharFormat) SetTableCellRowSpan(tableCellRowSpan int) {
	C.QTextCharFormat_SetTableCellRowSpan(this.h, (C.int)(tableCellRowSpan))
}

func (this *QTextCharFormat) TableCellRowSpan() int {
	ret := C.QTextCharFormat_TableCellRowSpan(this.h)
	return (int)(ret)
}

func (this *QTextCharFormat) SetTableCellColumnSpan(tableCellColumnSpan int) {
	C.QTextCharFormat_SetTableCellColumnSpan(this.h, (C.int)(tableCellColumnSpan))
}

func (this *QTextCharFormat) TableCellColumnSpan() int {
	ret := C.QTextCharFormat_TableCellColumnSpan(this.h)
	return (int)(ret)
}

func (this *QTextCharFormat) SetFontStyleHint2(hint uintptr, strategy uintptr) {
	C.QTextCharFormat_SetFontStyleHint2(this.h, (C.uintptr_t)(hint), (C.uintptr_t)(strategy))
}

func (this *QTextCharFormat) Delete() {
	C.QTextCharFormat_Delete(this.h)
}

type QTextBlockFormat struct {
	h *C.QTextBlockFormat
	*QTextFormat
}

func (this *QTextBlockFormat) cPointer() *C.QTextBlockFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextBlockFormat(h *C.QTextBlockFormat) *QTextBlockFormat {
	if h == nil {
		return nil
	}
	return &QTextBlockFormat{h: h, QTextFormat: newQTextFormat_U(unsafe.Pointer(h))}
}

func newQTextBlockFormat_U(h unsafe.Pointer) *QTextBlockFormat {
	return newQTextBlockFormat((*C.QTextBlockFormat)(h))
}

// NewQTextBlockFormat constructs a new QTextBlockFormat object.
func NewQTextBlockFormat() *QTextBlockFormat {
	ret := C.QTextBlockFormat_new()
	return newQTextBlockFormat(ret)
}

// NewQTextBlockFormat2 constructs a new QTextBlockFormat object.
func NewQTextBlockFormat2(param1 *QTextBlockFormat) *QTextBlockFormat {
	ret := C.QTextBlockFormat_new2(param1.cPointer())
	return newQTextBlockFormat(ret)
}

func (this *QTextBlockFormat) IsValid() bool {
	ret := C.QTextBlockFormat_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextBlockFormat) SetAlignment(alignment int) {
	C.QTextBlockFormat_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QTextBlockFormat) Alignment() int {
	ret := C.QTextBlockFormat_Alignment(this.h)
	return (int)(ret)
}

func (this *QTextBlockFormat) SetTopMargin(margin float64) {
	C.QTextBlockFormat_SetTopMargin(this.h, (C.double)(margin))
}

func (this *QTextBlockFormat) TopMargin() float64 {
	ret := C.QTextBlockFormat_TopMargin(this.h)
	return (float64)(ret)
}

func (this *QTextBlockFormat) SetBottomMargin(margin float64) {
	C.QTextBlockFormat_SetBottomMargin(this.h, (C.double)(margin))
}

func (this *QTextBlockFormat) BottomMargin() float64 {
	ret := C.QTextBlockFormat_BottomMargin(this.h)
	return (float64)(ret)
}

func (this *QTextBlockFormat) SetLeftMargin(margin float64) {
	C.QTextBlockFormat_SetLeftMargin(this.h, (C.double)(margin))
}

func (this *QTextBlockFormat) LeftMargin() float64 {
	ret := C.QTextBlockFormat_LeftMargin(this.h)
	return (float64)(ret)
}

func (this *QTextBlockFormat) SetRightMargin(margin float64) {
	C.QTextBlockFormat_SetRightMargin(this.h, (C.double)(margin))
}

func (this *QTextBlockFormat) RightMargin() float64 {
	ret := C.QTextBlockFormat_RightMargin(this.h)
	return (float64)(ret)
}

func (this *QTextBlockFormat) SetTextIndent(aindent float64) {
	C.QTextBlockFormat_SetTextIndent(this.h, (C.double)(aindent))
}

func (this *QTextBlockFormat) TextIndent() float64 {
	ret := C.QTextBlockFormat_TextIndent(this.h)
	return (float64)(ret)
}

func (this *QTextBlockFormat) SetIndent(indent int) {
	C.QTextBlockFormat_SetIndent(this.h, (C.int)(indent))
}

func (this *QTextBlockFormat) Indent() int {
	ret := C.QTextBlockFormat_Indent(this.h)
	return (int)(ret)
}

func (this *QTextBlockFormat) SetHeadingLevel(alevel int) {
	C.QTextBlockFormat_SetHeadingLevel(this.h, (C.int)(alevel))
}

func (this *QTextBlockFormat) HeadingLevel() int {
	ret := C.QTextBlockFormat_HeadingLevel(this.h)
	return (int)(ret)
}

func (this *QTextBlockFormat) SetLineHeight(height float64, heightType int) {
	C.QTextBlockFormat_SetLineHeight(this.h, (C.double)(height), (C.int)(heightType))
}

func (this *QTextBlockFormat) LineHeight(scriptLineHeight float64, scaling float64) float64 {
	ret := C.QTextBlockFormat_LineHeight(this.h, (C.double)(scriptLineHeight), (C.double)(scaling))
	return (float64)(ret)
}

func (this *QTextBlockFormat) LineHeight2() float64 {
	ret := C.QTextBlockFormat_LineHeight2(this.h)
	return (float64)(ret)
}

func (this *QTextBlockFormat) LineHeightType() int {
	ret := C.QTextBlockFormat_LineHeightType(this.h)
	return (int)(ret)
}

func (this *QTextBlockFormat) SetNonBreakableLines(b bool) {
	C.QTextBlockFormat_SetNonBreakableLines(this.h, (C.bool)(b))
}

func (this *QTextBlockFormat) NonBreakableLines() bool {
	ret := C.QTextBlockFormat_NonBreakableLines(this.h)
	return (bool)(ret)
}

func (this *QTextBlockFormat) SetPageBreakPolicy(flags int) {
	C.QTextBlockFormat_SetPageBreakPolicy(this.h, (C.int)(flags))
}

func (this *QTextBlockFormat) PageBreakPolicy() int {
	ret := C.QTextBlockFormat_PageBreakPolicy(this.h)
	return (int)(ret)
}

func (this *QTextBlockFormat) SetTabPositions(tabs []QTextOption__Tab) {
	// For the C ABI, malloc a C array of raw pointers
	tabs_CArray := (*[0xffff]*C.QTextOption__Tab)(C.malloc(C.size_t(8 * len(tabs))))
	defer C.free(unsafe.Pointer(tabs_CArray))
	for i := range tabs {
		tabs_CArray[i] = tabs[i].cPointer()
	}
	C.QTextBlockFormat_SetTabPositions(this.h, &tabs_CArray[0], C.size_t(len(tabs)))
}

func (this *QTextBlockFormat) TabPositions() []QTextOption__Tab {
	var _out **C.QTextOption__Tab = nil
	var _out_len C.size_t = 0
	C.QTextBlockFormat_TabPositions(this.h, &_out, &_out_len)
	ret := make([]QTextOption__Tab, int(_out_len))
	_outCast := (*[0xffff]*C.QTextOption__Tab)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQTextOption__Tab(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextBlockFormat) SetMarker(marker uintptr) {
	C.QTextBlockFormat_SetMarker(this.h, (C.uintptr_t)(marker))
}

func (this *QTextBlockFormat) Marker() uintptr {
	ret := C.QTextBlockFormat_Marker(this.h)
	return (uintptr)(ret)
}

func (this *QTextBlockFormat) Delete() {
	C.QTextBlockFormat_Delete(this.h)
}

type QTextListFormat struct {
	h *C.QTextListFormat
	*QTextFormat
}

func (this *QTextListFormat) cPointer() *C.QTextListFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextListFormat(h *C.QTextListFormat) *QTextListFormat {
	if h == nil {
		return nil
	}
	return &QTextListFormat{h: h, QTextFormat: newQTextFormat_U(unsafe.Pointer(h))}
}

func newQTextListFormat_U(h unsafe.Pointer) *QTextListFormat {
	return newQTextListFormat((*C.QTextListFormat)(h))
}

// NewQTextListFormat constructs a new QTextListFormat object.
func NewQTextListFormat() *QTextListFormat {
	ret := C.QTextListFormat_new()
	return newQTextListFormat(ret)
}

// NewQTextListFormat2 constructs a new QTextListFormat object.
func NewQTextListFormat2(param1 *QTextListFormat) *QTextListFormat {
	ret := C.QTextListFormat_new2(param1.cPointer())
	return newQTextListFormat(ret)
}

func (this *QTextListFormat) IsValid() bool {
	ret := C.QTextListFormat_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextListFormat) SetStyle(style uintptr) {
	C.QTextListFormat_SetStyle(this.h, (C.uintptr_t)(style))
}

func (this *QTextListFormat) Style() uintptr {
	ret := C.QTextListFormat_Style(this.h)
	return (uintptr)(ret)
}

func (this *QTextListFormat) SetIndent(indent int) {
	C.QTextListFormat_SetIndent(this.h, (C.int)(indent))
}

func (this *QTextListFormat) Indent() int {
	ret := C.QTextListFormat_Indent(this.h)
	return (int)(ret)
}

func (this *QTextListFormat) SetNumberPrefix(numberPrefix string) {
	numberPrefix_Cstring := C.CString(numberPrefix)
	defer C.free(unsafe.Pointer(numberPrefix_Cstring))
	C.QTextListFormat_SetNumberPrefix(this.h, numberPrefix_Cstring, C.size_t(len(numberPrefix)))
}

func (this *QTextListFormat) NumberPrefix() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextListFormat_NumberPrefix(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextListFormat) SetNumberSuffix(numberSuffix string) {
	numberSuffix_Cstring := C.CString(numberSuffix)
	defer C.free(unsafe.Pointer(numberSuffix_Cstring))
	C.QTextListFormat_SetNumberSuffix(this.h, numberSuffix_Cstring, C.size_t(len(numberSuffix)))
}

func (this *QTextListFormat) NumberSuffix() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextListFormat_NumberSuffix(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextListFormat) Delete() {
	C.QTextListFormat_Delete(this.h)
}

type QTextImageFormat struct {
	h *C.QTextImageFormat
	*QTextCharFormat
}

func (this *QTextImageFormat) cPointer() *C.QTextImageFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextImageFormat(h *C.QTextImageFormat) *QTextImageFormat {
	if h == nil {
		return nil
	}
	return &QTextImageFormat{h: h, QTextCharFormat: newQTextCharFormat_U(unsafe.Pointer(h))}
}

func newQTextImageFormat_U(h unsafe.Pointer) *QTextImageFormat {
	return newQTextImageFormat((*C.QTextImageFormat)(h))
}

// NewQTextImageFormat constructs a new QTextImageFormat object.
func NewQTextImageFormat() *QTextImageFormat {
	ret := C.QTextImageFormat_new()
	return newQTextImageFormat(ret)
}

func (this *QTextImageFormat) IsValid() bool {
	ret := C.QTextImageFormat_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextImageFormat) SetName(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QTextImageFormat_SetName(this.h, name_Cstring, C.size_t(len(name)))
}

func (this *QTextImageFormat) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextImageFormat_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextImageFormat) SetWidth(width float64) {
	C.QTextImageFormat_SetWidth(this.h, (C.double)(width))
}

func (this *QTextImageFormat) Width() float64 {
	ret := C.QTextImageFormat_Width(this.h)
	return (float64)(ret)
}

func (this *QTextImageFormat) SetHeight(height float64) {
	C.QTextImageFormat_SetHeight(this.h, (C.double)(height))
}

func (this *QTextImageFormat) Height() float64 {
	ret := C.QTextImageFormat_Height(this.h)
	return (float64)(ret)
}

func (this *QTextImageFormat) SetQuality() {
	C.QTextImageFormat_SetQuality(this.h)
}

func (this *QTextImageFormat) Quality() int {
	ret := C.QTextImageFormat_Quality(this.h)
	return (int)(ret)
}

func (this *QTextImageFormat) SetQuality1(quality int) {
	C.QTextImageFormat_SetQuality1(this.h, (C.int)(quality))
}

func (this *QTextImageFormat) Delete() {
	C.QTextImageFormat_Delete(this.h)
}

type QTextFrameFormat struct {
	h *C.QTextFrameFormat
	*QTextFormat
}

func (this *QTextFrameFormat) cPointer() *C.QTextFrameFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextFrameFormat(h *C.QTextFrameFormat) *QTextFrameFormat {
	if h == nil {
		return nil
	}
	return &QTextFrameFormat{h: h, QTextFormat: newQTextFormat_U(unsafe.Pointer(h))}
}

func newQTextFrameFormat_U(h unsafe.Pointer) *QTextFrameFormat {
	return newQTextFrameFormat((*C.QTextFrameFormat)(h))
}

// NewQTextFrameFormat constructs a new QTextFrameFormat object.
func NewQTextFrameFormat() *QTextFrameFormat {
	ret := C.QTextFrameFormat_new()
	return newQTextFrameFormat(ret)
}

// NewQTextFrameFormat2 constructs a new QTextFrameFormat object.
func NewQTextFrameFormat2(param1 *QTextFrameFormat) *QTextFrameFormat {
	ret := C.QTextFrameFormat_new2(param1.cPointer())
	return newQTextFrameFormat(ret)
}

func (this *QTextFrameFormat) IsValid() bool {
	ret := C.QTextFrameFormat_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextFrameFormat) SetPosition(f uintptr) {
	C.QTextFrameFormat_SetPosition(this.h, (C.uintptr_t)(f))
}

func (this *QTextFrameFormat) Position() uintptr {
	ret := C.QTextFrameFormat_Position(this.h)
	return (uintptr)(ret)
}

func (this *QTextFrameFormat) SetBorder(border float64) {
	C.QTextFrameFormat_SetBorder(this.h, (C.double)(border))
}

func (this *QTextFrameFormat) Border() float64 {
	ret := C.QTextFrameFormat_Border(this.h)
	return (float64)(ret)
}

func (this *QTextFrameFormat) SetBorderBrush(brush *QBrush) {
	C.QTextFrameFormat_SetBorderBrush(this.h, brush.cPointer())
}

func (this *QTextFrameFormat) BorderBrush() *QBrush {
	ret := C.QTextFrameFormat_BorderBrush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFrameFormat) SetBorderStyle(style uintptr) {
	C.QTextFrameFormat_SetBorderStyle(this.h, (C.uintptr_t)(style))
}

func (this *QTextFrameFormat) BorderStyle() uintptr {
	ret := C.QTextFrameFormat_BorderStyle(this.h)
	return (uintptr)(ret)
}

func (this *QTextFrameFormat) SetMargin(margin float64) {
	C.QTextFrameFormat_SetMargin(this.h, (C.double)(margin))
}

func (this *QTextFrameFormat) Margin() float64 {
	ret := C.QTextFrameFormat_Margin(this.h)
	return (float64)(ret)
}

func (this *QTextFrameFormat) SetTopMargin(margin float64) {
	C.QTextFrameFormat_SetTopMargin(this.h, (C.double)(margin))
}

func (this *QTextFrameFormat) TopMargin() float64 {
	ret := C.QTextFrameFormat_TopMargin(this.h)
	return (float64)(ret)
}

func (this *QTextFrameFormat) SetBottomMargin(margin float64) {
	C.QTextFrameFormat_SetBottomMargin(this.h, (C.double)(margin))
}

func (this *QTextFrameFormat) BottomMargin() float64 {
	ret := C.QTextFrameFormat_BottomMargin(this.h)
	return (float64)(ret)
}

func (this *QTextFrameFormat) SetLeftMargin(margin float64) {
	C.QTextFrameFormat_SetLeftMargin(this.h, (C.double)(margin))
}

func (this *QTextFrameFormat) LeftMargin() float64 {
	ret := C.QTextFrameFormat_LeftMargin(this.h)
	return (float64)(ret)
}

func (this *QTextFrameFormat) SetRightMargin(margin float64) {
	C.QTextFrameFormat_SetRightMargin(this.h, (C.double)(margin))
}

func (this *QTextFrameFormat) RightMargin() float64 {
	ret := C.QTextFrameFormat_RightMargin(this.h)
	return (float64)(ret)
}

func (this *QTextFrameFormat) SetPadding(padding float64) {
	C.QTextFrameFormat_SetPadding(this.h, (C.double)(padding))
}

func (this *QTextFrameFormat) Padding() float64 {
	ret := C.QTextFrameFormat_Padding(this.h)
	return (float64)(ret)
}

func (this *QTextFrameFormat) SetWidth(width float64) {
	C.QTextFrameFormat_SetWidth(this.h, (C.double)(width))
}

func (this *QTextFrameFormat) SetWidthWithLength(length *QTextLength) {
	C.QTextFrameFormat_SetWidthWithLength(this.h, length.cPointer())
}

func (this *QTextFrameFormat) Width() *QTextLength {
	ret := C.QTextFrameFormat_Width(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextLength(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextLength) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFrameFormat) SetHeight(height float64) {
	C.QTextFrameFormat_SetHeight(this.h, (C.double)(height))
}

func (this *QTextFrameFormat) SetHeightWithHeight(height *QTextLength) {
	C.QTextFrameFormat_SetHeightWithHeight(this.h, height.cPointer())
}

func (this *QTextFrameFormat) Height() *QTextLength {
	ret := C.QTextFrameFormat_Height(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextLength(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextLength) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextFrameFormat) SetPageBreakPolicy(flags int) {
	C.QTextFrameFormat_SetPageBreakPolicy(this.h, (C.int)(flags))
}

func (this *QTextFrameFormat) PageBreakPolicy() int {
	ret := C.QTextFrameFormat_PageBreakPolicy(this.h)
	return (int)(ret)
}

func (this *QTextFrameFormat) Delete() {
	C.QTextFrameFormat_Delete(this.h)
}

type QTextTableFormat struct {
	h *C.QTextTableFormat
	*QTextFrameFormat
}

func (this *QTextTableFormat) cPointer() *C.QTextTableFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextTableFormat(h *C.QTextTableFormat) *QTextTableFormat {
	if h == nil {
		return nil
	}
	return &QTextTableFormat{h: h, QTextFrameFormat: newQTextFrameFormat_U(unsafe.Pointer(h))}
}

func newQTextTableFormat_U(h unsafe.Pointer) *QTextTableFormat {
	return newQTextTableFormat((*C.QTextTableFormat)(h))
}

// NewQTextTableFormat constructs a new QTextTableFormat object.
func NewQTextTableFormat() *QTextTableFormat {
	ret := C.QTextTableFormat_new()
	return newQTextTableFormat(ret)
}

func (this *QTextTableFormat) IsValid() bool {
	ret := C.QTextTableFormat_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextTableFormat) Columns() int {
	ret := C.QTextTableFormat_Columns(this.h)
	return (int)(ret)
}

func (this *QTextTableFormat) SetColumns(columns int) {
	C.QTextTableFormat_SetColumns(this.h, (C.int)(columns))
}

func (this *QTextTableFormat) SetColumnWidthConstraints(constraints []QTextLength) {
	// For the C ABI, malloc a C array of raw pointers
	constraints_CArray := (*[0xffff]*C.QTextLength)(C.malloc(C.size_t(8 * len(constraints))))
	defer C.free(unsafe.Pointer(constraints_CArray))
	for i := range constraints {
		constraints_CArray[i] = constraints[i].cPointer()
	}
	C.QTextTableFormat_SetColumnWidthConstraints(this.h, &constraints_CArray[0], C.size_t(len(constraints)))
}

func (this *QTextTableFormat) ColumnWidthConstraints() []QTextLength {
	var _out **C.QTextLength = nil
	var _out_len C.size_t = 0
	C.QTextTableFormat_ColumnWidthConstraints(this.h, &_out, &_out_len)
	ret := make([]QTextLength, int(_out_len))
	_outCast := (*[0xffff]*C.QTextLength)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQTextLength(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextTableFormat) ClearColumnWidthConstraints() {
	C.QTextTableFormat_ClearColumnWidthConstraints(this.h)
}

func (this *QTextTableFormat) CellSpacing() float64 {
	ret := C.QTextTableFormat_CellSpacing(this.h)
	return (float64)(ret)
}

func (this *QTextTableFormat) SetCellSpacing(spacing float64) {
	C.QTextTableFormat_SetCellSpacing(this.h, (C.double)(spacing))
}

func (this *QTextTableFormat) CellPadding() float64 {
	ret := C.QTextTableFormat_CellPadding(this.h)
	return (float64)(ret)
}

func (this *QTextTableFormat) SetCellPadding(padding float64) {
	C.QTextTableFormat_SetCellPadding(this.h, (C.double)(padding))
}

func (this *QTextTableFormat) SetAlignment(alignment int) {
	C.QTextTableFormat_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QTextTableFormat) Alignment() int {
	ret := C.QTextTableFormat_Alignment(this.h)
	return (int)(ret)
}

func (this *QTextTableFormat) SetHeaderRowCount(count int) {
	C.QTextTableFormat_SetHeaderRowCount(this.h, (C.int)(count))
}

func (this *QTextTableFormat) HeaderRowCount() int {
	ret := C.QTextTableFormat_HeaderRowCount(this.h)
	return (int)(ret)
}

func (this *QTextTableFormat) SetBorderCollapse(borderCollapse bool) {
	C.QTextTableFormat_SetBorderCollapse(this.h, (C.bool)(borderCollapse))
}

func (this *QTextTableFormat) BorderCollapse() bool {
	ret := C.QTextTableFormat_BorderCollapse(this.h)
	return (bool)(ret)
}

func (this *QTextTableFormat) Delete() {
	C.QTextTableFormat_Delete(this.h)
}

type QTextTableCellFormat struct {
	h *C.QTextTableCellFormat
	*QTextCharFormat
}

func (this *QTextTableCellFormat) cPointer() *C.QTextTableCellFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextTableCellFormat(h *C.QTextTableCellFormat) *QTextTableCellFormat {
	if h == nil {
		return nil
	}
	return &QTextTableCellFormat{h: h, QTextCharFormat: newQTextCharFormat_U(unsafe.Pointer(h))}
}

func newQTextTableCellFormat_U(h unsafe.Pointer) *QTextTableCellFormat {
	return newQTextTableCellFormat((*C.QTextTableCellFormat)(h))
}

// NewQTextTableCellFormat constructs a new QTextTableCellFormat object.
func NewQTextTableCellFormat() *QTextTableCellFormat {
	ret := C.QTextTableCellFormat_new()
	return newQTextTableCellFormat(ret)
}

func (this *QTextTableCellFormat) IsValid() bool {
	ret := C.QTextTableCellFormat_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextTableCellFormat) SetTopPadding(padding float64) {
	C.QTextTableCellFormat_SetTopPadding(this.h, (C.double)(padding))
}

func (this *QTextTableCellFormat) TopPadding() float64 {
	ret := C.QTextTableCellFormat_TopPadding(this.h)
	return (float64)(ret)
}

func (this *QTextTableCellFormat) SetBottomPadding(padding float64) {
	C.QTextTableCellFormat_SetBottomPadding(this.h, (C.double)(padding))
}

func (this *QTextTableCellFormat) BottomPadding() float64 {
	ret := C.QTextTableCellFormat_BottomPadding(this.h)
	return (float64)(ret)
}

func (this *QTextTableCellFormat) SetLeftPadding(padding float64) {
	C.QTextTableCellFormat_SetLeftPadding(this.h, (C.double)(padding))
}

func (this *QTextTableCellFormat) LeftPadding() float64 {
	ret := C.QTextTableCellFormat_LeftPadding(this.h)
	return (float64)(ret)
}

func (this *QTextTableCellFormat) SetRightPadding(padding float64) {
	C.QTextTableCellFormat_SetRightPadding(this.h, (C.double)(padding))
}

func (this *QTextTableCellFormat) RightPadding() float64 {
	ret := C.QTextTableCellFormat_RightPadding(this.h)
	return (float64)(ret)
}

func (this *QTextTableCellFormat) SetPadding(padding float64) {
	C.QTextTableCellFormat_SetPadding(this.h, (C.double)(padding))
}

func (this *QTextTableCellFormat) SetTopBorder(width float64) {
	C.QTextTableCellFormat_SetTopBorder(this.h, (C.double)(width))
}

func (this *QTextTableCellFormat) TopBorder() float64 {
	ret := C.QTextTableCellFormat_TopBorder(this.h)
	return (float64)(ret)
}

func (this *QTextTableCellFormat) SetBottomBorder(width float64) {
	C.QTextTableCellFormat_SetBottomBorder(this.h, (C.double)(width))
}

func (this *QTextTableCellFormat) BottomBorder() float64 {
	ret := C.QTextTableCellFormat_BottomBorder(this.h)
	return (float64)(ret)
}

func (this *QTextTableCellFormat) SetLeftBorder(width float64) {
	C.QTextTableCellFormat_SetLeftBorder(this.h, (C.double)(width))
}

func (this *QTextTableCellFormat) LeftBorder() float64 {
	ret := C.QTextTableCellFormat_LeftBorder(this.h)
	return (float64)(ret)
}

func (this *QTextTableCellFormat) SetRightBorder(width float64) {
	C.QTextTableCellFormat_SetRightBorder(this.h, (C.double)(width))
}

func (this *QTextTableCellFormat) RightBorder() float64 {
	ret := C.QTextTableCellFormat_RightBorder(this.h)
	return (float64)(ret)
}

func (this *QTextTableCellFormat) SetBorder(width float64) {
	C.QTextTableCellFormat_SetBorder(this.h, (C.double)(width))
}

func (this *QTextTableCellFormat) SetTopBorderStyle(style uintptr) {
	C.QTextTableCellFormat_SetTopBorderStyle(this.h, (C.uintptr_t)(style))
}

func (this *QTextTableCellFormat) TopBorderStyle() uintptr {
	ret := C.QTextTableCellFormat_TopBorderStyle(this.h)
	return (uintptr)(ret)
}

func (this *QTextTableCellFormat) SetBottomBorderStyle(style uintptr) {
	C.QTextTableCellFormat_SetBottomBorderStyle(this.h, (C.uintptr_t)(style))
}

func (this *QTextTableCellFormat) BottomBorderStyle() uintptr {
	ret := C.QTextTableCellFormat_BottomBorderStyle(this.h)
	return (uintptr)(ret)
}

func (this *QTextTableCellFormat) SetLeftBorderStyle(style uintptr) {
	C.QTextTableCellFormat_SetLeftBorderStyle(this.h, (C.uintptr_t)(style))
}

func (this *QTextTableCellFormat) LeftBorderStyle() uintptr {
	ret := C.QTextTableCellFormat_LeftBorderStyle(this.h)
	return (uintptr)(ret)
}

func (this *QTextTableCellFormat) SetRightBorderStyle(style uintptr) {
	C.QTextTableCellFormat_SetRightBorderStyle(this.h, (C.uintptr_t)(style))
}

func (this *QTextTableCellFormat) RightBorderStyle() uintptr {
	ret := C.QTextTableCellFormat_RightBorderStyle(this.h)
	return (uintptr)(ret)
}

func (this *QTextTableCellFormat) SetBorderStyle(style uintptr) {
	C.QTextTableCellFormat_SetBorderStyle(this.h, (C.uintptr_t)(style))
}

func (this *QTextTableCellFormat) SetTopBorderBrush(brush *QBrush) {
	C.QTextTableCellFormat_SetTopBorderBrush(this.h, brush.cPointer())
}

func (this *QTextTableCellFormat) TopBorderBrush() *QBrush {
	ret := C.QTextTableCellFormat_TopBorderBrush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextTableCellFormat) SetBottomBorderBrush(brush *QBrush) {
	C.QTextTableCellFormat_SetBottomBorderBrush(this.h, brush.cPointer())
}

func (this *QTextTableCellFormat) BottomBorderBrush() *QBrush {
	ret := C.QTextTableCellFormat_BottomBorderBrush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextTableCellFormat) SetLeftBorderBrush(brush *QBrush) {
	C.QTextTableCellFormat_SetLeftBorderBrush(this.h, brush.cPointer())
}

func (this *QTextTableCellFormat) LeftBorderBrush() *QBrush {
	ret := C.QTextTableCellFormat_LeftBorderBrush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextTableCellFormat) SetRightBorderBrush(brush *QBrush) {
	C.QTextTableCellFormat_SetRightBorderBrush(this.h, brush.cPointer())
}

func (this *QTextTableCellFormat) RightBorderBrush() *QBrush {
	ret := C.QTextTableCellFormat_RightBorderBrush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextTableCellFormat) SetBorderBrush(brush *QBrush) {
	C.QTextTableCellFormat_SetBorderBrush(this.h, brush.cPointer())
}

func (this *QTextTableCellFormat) Delete() {
	C.QTextTableCellFormat_Delete(this.h)
}

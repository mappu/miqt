package qt

/*

#include "gen_qrawfont.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRawFont struct {
	h *C.QRawFont
}

func (this *QRawFont) cPointer() *C.QRawFont {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRawFont(h *C.QRawFont) *QRawFont {
	if h == nil {
		return nil
	}
	return &QRawFont{h: h}
}

func newQRawFont_U(h unsafe.Pointer) *QRawFont {
	return newQRawFont((*C.QRawFont)(h))
}

// NewQRawFont constructs a new QRawFont object.
func NewQRawFont() *QRawFont {
	ret := C.QRawFont_new()
	return newQRawFont(ret)
}

// NewQRawFont2 constructs a new QRawFont object.
func NewQRawFont2(fileName string, pixelSize float64) *QRawFont {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QRawFont_new2(fileName_Cstring, C.size_t(len(fileName)), (C.double)(pixelSize))
	return newQRawFont(ret)
}

// NewQRawFont3 constructs a new QRawFont object.
func NewQRawFont3(fontData *QByteArray, pixelSize float64) *QRawFont {
	ret := C.QRawFont_new3(fontData.cPointer(), (C.double)(pixelSize))
	return newQRawFont(ret)
}

// NewQRawFont4 constructs a new QRawFont object.
func NewQRawFont4(other *QRawFont) *QRawFont {
	ret := C.QRawFont_new4(other.cPointer())
	return newQRawFont(ret)
}

// NewQRawFont5 constructs a new QRawFont object.
func NewQRawFont5(fileName string, pixelSize float64, hintingPreference uintptr) *QRawFont {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QRawFont_new5(fileName_Cstring, C.size_t(len(fileName)), (C.double)(pixelSize), (C.uintptr_t)(hintingPreference))
	return newQRawFont(ret)
}

// NewQRawFont6 constructs a new QRawFont object.
func NewQRawFont6(fontData *QByteArray, pixelSize float64, hintingPreference uintptr) *QRawFont {
	ret := C.QRawFont_new6(fontData.cPointer(), (C.double)(pixelSize), (C.uintptr_t)(hintingPreference))
	return newQRawFont(ret)
}

func (this *QRawFont) OperatorAssign(other *QRawFont) {
	C.QRawFont_OperatorAssign(this.h, other.cPointer())
}

func (this *QRawFont) Swap(other *QRawFont) {
	C.QRawFont_Swap(this.h, other.cPointer())
}

func (this *QRawFont) IsValid() bool {
	ret := C.QRawFont_IsValid(this.h)
	return (bool)(ret)
}

func (this *QRawFont) OperatorEqual(other *QRawFont) bool {
	ret := C.QRawFont_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QRawFont) OperatorNotEqual(other *QRawFont) bool {
	ret := C.QRawFont_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QRawFont) FamilyName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRawFont_FamilyName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRawFont) StyleName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QRawFont_StyleName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRawFont) Style() uintptr {
	ret := C.QRawFont_Style(this.h)
	return (uintptr)(ret)
}

func (this *QRawFont) Weight() int {
	ret := C.QRawFont_Weight(this.h)
	return (int)(ret)
}

func (this *QRawFont) GlyphIndexesForString(text string) []uint {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.uint = nil
	var _out_len C.size_t = 0
	C.QRawFont_GlyphIndexesForString(this.h, text_Cstring, C.size_t(len(text)), &_out, &_out_len)
	ret := make([]uint, int(_out_len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (uint)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRawFont) AdvancesForGlyphIndexes(glyphIndexes []uint) []QPointF {
	// For the C ABI, malloc a C array of raw pointers
	glyphIndexes_CArray := (*[0xffff]C.uint)(C.malloc(C.size_t(8 * len(glyphIndexes))))
	defer C.free(unsafe.Pointer(glyphIndexes_CArray))
	for i := range glyphIndexes {
		glyphIndexes_CArray[i] = (C.uint)(glyphIndexes[i])
	}
	var _out **C.QPointF = nil
	var _out_len C.size_t = 0
	C.QRawFont_AdvancesForGlyphIndexes(this.h, &glyphIndexes_CArray[0], C.size_t(len(glyphIndexes)), &_out, &_out_len)
	ret := make([]QPointF, int(_out_len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQPointF(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRawFont) AdvancesForGlyphIndexes2(glyphIndexes []uint, layoutFlags int) []QPointF {
	// For the C ABI, malloc a C array of raw pointers
	glyphIndexes_CArray := (*[0xffff]C.uint)(C.malloc(C.size_t(8 * len(glyphIndexes))))
	defer C.free(unsafe.Pointer(glyphIndexes_CArray))
	for i := range glyphIndexes {
		glyphIndexes_CArray[i] = (C.uint)(glyphIndexes[i])
	}
	var _out **C.QPointF = nil
	var _out_len C.size_t = 0
	C.QRawFont_AdvancesForGlyphIndexes2(this.h, &glyphIndexes_CArray[0], C.size_t(len(glyphIndexes)), (C.int)(layoutFlags), &_out, &_out_len)
	ret := make([]QPointF, int(_out_len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQPointF(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRawFont) GlyphIndexesForChars(chars *QChar, numChars int, glyphIndexes *uint, numGlyphs *int) bool {
	ret := C.QRawFont_GlyphIndexesForChars(this.h, chars.cPointer(), (C.int)(numChars), (*C.uint)(unsafe.Pointer(glyphIndexes)), (*C.int)(unsafe.Pointer(numGlyphs)))
	return (bool)(ret)
}

func (this *QRawFont) AdvancesForGlyphIndexes3(glyphIndexes *uint, advances *QPointF, numGlyphs int) bool {
	ret := C.QRawFont_AdvancesForGlyphIndexes3(this.h, (*C.uint)(unsafe.Pointer(glyphIndexes)), advances.cPointer(), (C.int)(numGlyphs))
	return (bool)(ret)
}

func (this *QRawFont) AdvancesForGlyphIndexes4(glyphIndexes *uint, advances *QPointF, numGlyphs int, layoutFlags int) bool {
	ret := C.QRawFont_AdvancesForGlyphIndexes4(this.h, (*C.uint)(unsafe.Pointer(glyphIndexes)), advances.cPointer(), (C.int)(numGlyphs), (C.int)(layoutFlags))
	return (bool)(ret)
}

func (this *QRawFont) AlphaMapForGlyph(glyphIndex uint) *QImage {
	ret := C.QRawFont_AlphaMapForGlyph(this.h, (C.uint)(glyphIndex))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRawFont) PathForGlyph(glyphIndex uint) *QPainterPath {
	ret := C.QRawFont_PathForGlyph(this.h, (C.uint)(glyphIndex))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRawFont) BoundingRect(glyphIndex uint) *QRectF {
	ret := C.QRawFont_BoundingRect(this.h, (C.uint)(glyphIndex))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRawFont) SetPixelSize(pixelSize float64) {
	C.QRawFont_SetPixelSize(this.h, (C.double)(pixelSize))
}

func (this *QRawFont) PixelSize() float64 {
	ret := C.QRawFont_PixelSize(this.h)
	return (float64)(ret)
}

func (this *QRawFont) HintingPreference() uintptr {
	ret := C.QRawFont_HintingPreference(this.h)
	return (uintptr)(ret)
}

func (this *QRawFont) Ascent() float64 {
	ret := C.QRawFont_Ascent(this.h)
	return (float64)(ret)
}

func (this *QRawFont) CapHeight() float64 {
	ret := C.QRawFont_CapHeight(this.h)
	return (float64)(ret)
}

func (this *QRawFont) Descent() float64 {
	ret := C.QRawFont_Descent(this.h)
	return (float64)(ret)
}

func (this *QRawFont) Leading() float64 {
	ret := C.QRawFont_Leading(this.h)
	return (float64)(ret)
}

func (this *QRawFont) XHeight() float64 {
	ret := C.QRawFont_XHeight(this.h)
	return (float64)(ret)
}

func (this *QRawFont) AverageCharWidth() float64 {
	ret := C.QRawFont_AverageCharWidth(this.h)
	return (float64)(ret)
}

func (this *QRawFont) MaxCharWidth() float64 {
	ret := C.QRawFont_MaxCharWidth(this.h)
	return (float64)(ret)
}

func (this *QRawFont) LineThickness() float64 {
	ret := C.QRawFont_LineThickness(this.h)
	return (float64)(ret)
}

func (this *QRawFont) UnderlinePosition() float64 {
	ret := C.QRawFont_UnderlinePosition(this.h)
	return (float64)(ret)
}

func (this *QRawFont) UnitsPerEm() float64 {
	ret := C.QRawFont_UnitsPerEm(this.h)
	return (float64)(ret)
}

func (this *QRawFont) LoadFromFile(fileName string, pixelSize float64, hintingPreference uintptr) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QRawFont_LoadFromFile(this.h, fileName_Cstring, C.size_t(len(fileName)), (C.double)(pixelSize), (C.uintptr_t)(hintingPreference))
}

func (this *QRawFont) LoadFromData(fontData *QByteArray, pixelSize float64, hintingPreference uintptr) {
	C.QRawFont_LoadFromData(this.h, fontData.cPointer(), (C.double)(pixelSize), (C.uintptr_t)(hintingPreference))
}

func (this *QRawFont) SupportsCharacter(ucs4 uint) bool {
	ret := C.QRawFont_SupportsCharacter(this.h, (C.uint)(ucs4))
	return (bool)(ret)
}

func (this *QRawFont) SupportsCharacterWithCharacter(character QChar) bool {
	ret := C.QRawFont_SupportsCharacterWithCharacter(this.h, character.cPointer())
	return (bool)(ret)
}

func (this *QRawFont) SupportedWritingSystems() []uintptr {
	var _out *C.uintptr_t = nil
	var _out_len C.size_t = 0
	C.QRawFont_SupportedWritingSystems(this.h, &_out, &_out_len)
	ret := make([]uintptr, int(_out_len))
	_outCast := (*[0xffff]C.uintptr_t)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (uintptr)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRawFont) FontTable(tagName string) *QByteArray {
	tagName_Cstring := C.CString(tagName)
	defer C.free(unsafe.Pointer(tagName_Cstring))
	ret := C.QRawFont_FontTable(this.h, tagName_Cstring)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QRawFont_FromFont(font *QFont) *QRawFont {
	ret := C.QRawFont_FromFont(font.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRawFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRawFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRawFont) AlphaMapForGlyph2(glyphIndex uint, antialiasingType uintptr) *QImage {
	ret := C.QRawFont_AlphaMapForGlyph2(this.h, (C.uint)(glyphIndex), (C.uintptr_t)(antialiasingType))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRawFont) AlphaMapForGlyph3(glyphIndex uint, antialiasingType uintptr, transform *QTransform) *QImage {
	ret := C.QRawFont_AlphaMapForGlyph3(this.h, (C.uint)(glyphIndex), (C.uintptr_t)(antialiasingType), transform.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QRawFont_FromFont2(font *QFont, writingSystem uintptr) *QRawFont {
	ret := C.QRawFont_FromFont2(font.cPointer(), (C.uintptr_t)(writingSystem))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRawFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRawFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRawFont) Delete() {
	C.QRawFont_Delete(this.h)
}

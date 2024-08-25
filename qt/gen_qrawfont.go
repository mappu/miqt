package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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
func NewQRawFont2(other *QRawFont) *QRawFont {
	ret := C.QRawFont_new2(other.cPointer())
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

func (this *QRawFont) Weight() int {
	ret := C.QRawFont_Weight(this.h)
	return (int)(ret)
}

func (this *QRawFont) GlyphIndexesForString(text string) []uint32 {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.uint32_t = nil
	var _out_len C.size_t = 0
	C.QRawFont_GlyphIndexesForString(this.h, text_Cstring, C.ulong(len(text)), &_out, &_out_len)
	ret := make([]uint32, int(_out_len))
	_outCast := (*[0xffff]C.uint32_t)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (uint32)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRawFont) AdvancesForGlyphIndexes(glyphIndexes []uint32) []QPointF {
	// For the C ABI, malloc a C array of raw pointers
	glyphIndexes_CArray := (*[0xffff]C.uint32_t)(C.malloc(C.ulong(8 * len(glyphIndexes))))
	defer C.free(unsafe.Pointer(glyphIndexes_CArray))
	for i := range glyphIndexes {
		glyphIndexes_CArray[i] = (C.uint32_t)(glyphIndexes[i])
	}
	var _out **C.QPointF = nil
	var _out_len C.size_t = 0
	C.QRawFont_AdvancesForGlyphIndexes(this.h, &glyphIndexes_CArray[0], C.ulong(len(glyphIndexes)), &_out, &_out_len)
	ret := make([]QPointF, int(_out_len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQPointF(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QRawFont) GlyphIndexesForChars(chars *QChar, numChars int, glyphIndexes *uint32, numGlyphs *int) bool {
	ret := C.QRawFont_GlyphIndexesForChars(this.h, chars.cPointer(), (C.int)(numChars), (*C.uint32_t)(unsafe.Pointer(glyphIndexes)), (*C.int)(unsafe.Pointer(numGlyphs)))
	return (bool)(ret)
}

func (this *QRawFont) AdvancesForGlyphIndexes2(glyphIndexes *uint32, advances *QPointF, numGlyphs int) bool {
	ret := C.QRawFont_AdvancesForGlyphIndexes2(this.h, (*C.uint32_t)(unsafe.Pointer(glyphIndexes)), advances.cPointer(), (C.int)(numGlyphs))
	return (bool)(ret)
}

func (this *QRawFont) PathForGlyph(glyphIndex uint32) *QPainterPath {
	ret := C.QRawFont_PathForGlyph(this.h, (C.uint32_t)(glyphIndex))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRawFont) BoundingRect(glyphIndex uint32) *QRectF {
	ret := C.QRawFont_BoundingRect(this.h, (C.uint32_t)(glyphIndex))
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

func (this *QRawFont) SupportsCharacter(ucs4 uint) bool {
	ret := C.QRawFont_SupportsCharacter(this.h, (C.uint)(ucs4))
	return (bool)(ret)
}

func (this *QRawFont) SupportsCharacterWithCharacter(character QChar) bool {
	ret := C.QRawFont_SupportsCharacterWithCharacter(this.h, character.cPointer())
	return (bool)(ret)
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

func (this *QRawFont) Delete() {
	C.QRawFont_Delete(this.h)
}

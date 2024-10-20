package qt6

/*

#include "gen_qrawfont.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRawFont__AntialiasingType int

const (
	QRawFont__PixelAntialiasing    QRawFont__AntialiasingType = 0
	QRawFont__SubPixelAntialiasing QRawFont__AntialiasingType = 1
)

type QRawFont__LayoutFlag int

const (
	QRawFont__SeparateAdvances QRawFont__LayoutFlag = 0
	QRawFont__KernedAdvances   QRawFont__LayoutFlag = 1
	QRawFont__UseDesignMetrics QRawFont__LayoutFlag = 2
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

func (this *QRawFont) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQRawFont(h *C.QRawFont) *QRawFont {
	if h == nil {
		return nil
	}
	return &QRawFont{h: h}
}

func UnsafeNewQRawFont(h unsafe.Pointer) *QRawFont {
	return newQRawFont((*C.QRawFont)(h))
}

// NewQRawFont constructs a new QRawFont object.
func NewQRawFont() *QRawFont {
	ret := C.QRawFont_new()
	return newQRawFont(ret)
}

// NewQRawFont2 constructs a new QRawFont object.
func NewQRawFont2(fileName string, pixelSize float64) *QRawFont {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	ret := C.QRawFont_new2(fileName_ms, (C.double)(pixelSize))
	return newQRawFont(ret)
}

// NewQRawFont3 constructs a new QRawFont object.
func NewQRawFont3(fontData []byte, pixelSize float64) *QRawFont {
	fontData_alias := C.struct_miqt_string{}
	fontData_alias.data = (*C.char)(unsafe.Pointer(&fontData[0]))
	fontData_alias.len = C.size_t(len(fontData))
	ret := C.QRawFont_new3(fontData_alias, (C.double)(pixelSize))
	return newQRawFont(ret)
}

// NewQRawFont4 constructs a new QRawFont object.
func NewQRawFont4(other *QRawFont) *QRawFont {
	ret := C.QRawFont_new4(other.cPointer())
	return newQRawFont(ret)
}

// NewQRawFont5 constructs a new QRawFont object.
func NewQRawFont5(fileName string, pixelSize float64, hintingPreference QFont__HintingPreference) *QRawFont {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	ret := C.QRawFont_new5(fileName_ms, (C.double)(pixelSize), (C.int)(hintingPreference))
	return newQRawFont(ret)
}

// NewQRawFont6 constructs a new QRawFont object.
func NewQRawFont6(fontData []byte, pixelSize float64, hintingPreference QFont__HintingPreference) *QRawFont {
	fontData_alias := C.struct_miqt_string{}
	fontData_alias.data = (*C.char)(unsafe.Pointer(&fontData[0]))
	fontData_alias.len = C.size_t(len(fontData))
	ret := C.QRawFont_new6(fontData_alias, (C.double)(pixelSize), (C.int)(hintingPreference))
	return newQRawFont(ret)
}

func (this *QRawFont) OperatorAssign(other *QRawFont) {
	C.QRawFont_OperatorAssign(this.h, other.cPointer())
}

func (this *QRawFont) Swap(other *QRawFont) {
	C.QRawFont_Swap(this.h, other.cPointer())
}

func (this *QRawFont) IsValid() bool {
	return (bool)(C.QRawFont_IsValid(this.h))
}

func (this *QRawFont) OperatorEqual(other *QRawFont) bool {
	return (bool)(C.QRawFont_OperatorEqual(this.h, other.cPointer()))
}

func (this *QRawFont) OperatorNotEqual(other *QRawFont) bool {
	return (bool)(C.QRawFont_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QRawFont) FamilyName() string {
	var _ms C.struct_miqt_string = C.QRawFont_FamilyName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRawFont) StyleName() string {
	var _ms C.struct_miqt_string = C.QRawFont_StyleName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRawFont) Style() QFont__Style {
	return (QFont__Style)(C.QRawFont_Style(this.h))
}

func (this *QRawFont) Weight() int {
	return (int)(C.QRawFont_Weight(this.h))
}

func (this *QRawFont) GlyphIndexesForString(text string) []uint {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ma *C.struct_miqt_array = C.QRawFont_GlyphIndexesForString(this.h, text_ms)
	_ret := make([]uint, int(_ma.len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (uint)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QRawFont) AdvancesForGlyphIndexes(glyphIndexes []uint) []QPointF {
	// For the C ABI, malloc a C array of raw pointers
	glyphIndexes_CArray := (*[0xffff]C.uint)(C.malloc(C.size_t(8 * len(glyphIndexes))))
	defer C.free(unsafe.Pointer(glyphIndexes_CArray))
	for i := range glyphIndexes {
		glyphIndexes_CArray[i] = (C.uint)(glyphIndexes[i])
	}
	glyphIndexes_ma := &C.struct_miqt_array{len: C.size_t(len(glyphIndexes)), data: unsafe.Pointer(glyphIndexes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(glyphIndexes_ma))
	var _ma *C.struct_miqt_array = C.QRawFont_AdvancesForGlyphIndexes(this.h, glyphIndexes_ma)
	_ret := make([]QPointF, int(_ma.len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQPointF(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QRawFont) AdvancesForGlyphIndexes2(glyphIndexes []uint, layoutFlags QRawFont__LayoutFlag) []QPointF {
	// For the C ABI, malloc a C array of raw pointers
	glyphIndexes_CArray := (*[0xffff]C.uint)(C.malloc(C.size_t(8 * len(glyphIndexes))))
	defer C.free(unsafe.Pointer(glyphIndexes_CArray))
	for i := range glyphIndexes {
		glyphIndexes_CArray[i] = (C.uint)(glyphIndexes[i])
	}
	glyphIndexes_ma := &C.struct_miqt_array{len: C.size_t(len(glyphIndexes)), data: unsafe.Pointer(glyphIndexes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(glyphIndexes_ma))
	var _ma *C.struct_miqt_array = C.QRawFont_AdvancesForGlyphIndexes2(this.h, glyphIndexes_ma, (C.int)(layoutFlags))
	_ret := make([]QPointF, int(_ma.len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQPointF(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QRawFont) GlyphIndexesForChars(chars *QChar, numChars int, glyphIndexes *uint, numGlyphs *int) bool {
	return (bool)(C.QRawFont_GlyphIndexesForChars(this.h, chars.cPointer(), (C.int)(numChars), (*C.uint)(unsafe.Pointer(glyphIndexes)), (*C.int)(unsafe.Pointer(numGlyphs))))
}

func (this *QRawFont) AdvancesForGlyphIndexes3(glyphIndexes *uint, advances *QPointF, numGlyphs int) bool {
	return (bool)(C.QRawFont_AdvancesForGlyphIndexes3(this.h, (*C.uint)(unsafe.Pointer(glyphIndexes)), advances.cPointer(), (C.int)(numGlyphs)))
}

func (this *QRawFont) AdvancesForGlyphIndexes4(glyphIndexes *uint, advances *QPointF, numGlyphs int, layoutFlags QRawFont__LayoutFlag) bool {
	return (bool)(C.QRawFont_AdvancesForGlyphIndexes4(this.h, (*C.uint)(unsafe.Pointer(glyphIndexes)), advances.cPointer(), (C.int)(numGlyphs), (C.int)(layoutFlags)))
}

func (this *QRawFont) AlphaMapForGlyph(glyphIndex uint) *QImage {
	_ret := C.QRawFont_AlphaMapForGlyph(this.h, (C.uint)(glyphIndex))
	_goptr := newQImage(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRawFont) PathForGlyph(glyphIndex uint) *QPainterPath {
	_ret := C.QRawFont_PathForGlyph(this.h, (C.uint)(glyphIndex))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRawFont) BoundingRect(glyphIndex uint) *QRectF {
	_ret := C.QRawFont_BoundingRect(this.h, (C.uint)(glyphIndex))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRawFont) SetPixelSize(pixelSize float64) {
	C.QRawFont_SetPixelSize(this.h, (C.double)(pixelSize))
}

func (this *QRawFont) PixelSize() float64 {
	return (float64)(C.QRawFont_PixelSize(this.h))
}

func (this *QRawFont) HintingPreference() QFont__HintingPreference {
	return (QFont__HintingPreference)(C.QRawFont_HintingPreference(this.h))
}

func (this *QRawFont) Ascent() float64 {
	return (float64)(C.QRawFont_Ascent(this.h))
}

func (this *QRawFont) CapHeight() float64 {
	return (float64)(C.QRawFont_CapHeight(this.h))
}

func (this *QRawFont) Descent() float64 {
	return (float64)(C.QRawFont_Descent(this.h))
}

func (this *QRawFont) Leading() float64 {
	return (float64)(C.QRawFont_Leading(this.h))
}

func (this *QRawFont) XHeight() float64 {
	return (float64)(C.QRawFont_XHeight(this.h))
}

func (this *QRawFont) AverageCharWidth() float64 {
	return (float64)(C.QRawFont_AverageCharWidth(this.h))
}

func (this *QRawFont) MaxCharWidth() float64 {
	return (float64)(C.QRawFont_MaxCharWidth(this.h))
}

func (this *QRawFont) LineThickness() float64 {
	return (float64)(C.QRawFont_LineThickness(this.h))
}

func (this *QRawFont) UnderlinePosition() float64 {
	return (float64)(C.QRawFont_UnderlinePosition(this.h))
}

func (this *QRawFont) UnitsPerEm() float64 {
	return (float64)(C.QRawFont_UnitsPerEm(this.h))
}

func (this *QRawFont) LoadFromFile(fileName string, pixelSize float64, hintingPreference QFont__HintingPreference) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QRawFont_LoadFromFile(this.h, fileName_ms, (C.double)(pixelSize), (C.int)(hintingPreference))
}

func (this *QRawFont) LoadFromData(fontData []byte, pixelSize float64, hintingPreference QFont__HintingPreference) {
	fontData_alias := C.struct_miqt_string{}
	fontData_alias.data = (*C.char)(unsafe.Pointer(&fontData[0]))
	fontData_alias.len = C.size_t(len(fontData))
	C.QRawFont_LoadFromData(this.h, fontData_alias, (C.double)(pixelSize), (C.int)(hintingPreference))
}

func (this *QRawFont) SupportsCharacter(ucs4 uint) bool {
	return (bool)(C.QRawFont_SupportsCharacter(this.h, (C.uint)(ucs4)))
}

func (this *QRawFont) SupportsCharacterWithCharacter(character QChar) bool {
	return (bool)(C.QRawFont_SupportsCharacterWithCharacter(this.h, character.cPointer()))
}

func (this *QRawFont) SupportedWritingSystems() []QFontDatabase__WritingSystem {
	var _ma *C.struct_miqt_array = C.QRawFont_SupportedWritingSystems(this.h)
	_ret := make([]QFontDatabase__WritingSystem, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QFontDatabase__WritingSystem)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QRawFont) FontTable(tagName string) []byte {
	tagName_Cstring := C.CString(tagName)
	defer C.free(unsafe.Pointer(tagName_Cstring))
	var _bytearray C.struct_miqt_string = C.QRawFont_FontTable(this.h, tagName_Cstring)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QRawFont_FromFont(font *QFont) *QRawFont {
	_ret := C.QRawFont_FromFont(font.cPointer())
	_goptr := newQRawFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRawFont) AlphaMapForGlyph2(glyphIndex uint, antialiasingType QRawFont__AntialiasingType) *QImage {
	_ret := C.QRawFont_AlphaMapForGlyph2(this.h, (C.uint)(glyphIndex), (C.int)(antialiasingType))
	_goptr := newQImage(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRawFont) AlphaMapForGlyph3(glyphIndex uint, antialiasingType QRawFont__AntialiasingType, transform *QTransform) *QImage {
	_ret := C.QRawFont_AlphaMapForGlyph3(this.h, (C.uint)(glyphIndex), (C.int)(antialiasingType), transform.cPointer())
	_goptr := newQImage(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QRawFont_FromFont2(font *QFont, writingSystem QFontDatabase__WritingSystem) *QRawFont {
	_ret := C.QRawFont_FromFont2(font.cPointer(), (C.int)(writingSystem))
	_goptr := newQRawFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QRawFont) Delete() {
	C.QRawFont_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRawFont) GoGC() {
	runtime.SetFinalizer(this, func(this *QRawFont) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
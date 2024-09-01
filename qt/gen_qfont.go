package qt

/*

#include "gen_qfont.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFont struct {
	h *C.QFont
}

func (this *QFont) cPointer() *C.QFont {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFont(h *C.QFont) *QFont {
	if h == nil {
		return nil
	}
	return &QFont{h: h}
}

func newQFont_U(h unsafe.Pointer) *QFont {
	return newQFont((*C.QFont)(h))
}

// NewQFont constructs a new QFont object.
func NewQFont() *QFont {
	ret := C.QFont_new()
	return newQFont(ret)
}

// NewQFont2 constructs a new QFont object.
func NewQFont2(family string) *QFont {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	ret := C.QFont_new2(family_Cstring, C.ulong(len(family)))
	return newQFont(ret)
}

// NewQFont3 constructs a new QFont object.
func NewQFont3(font *QFont, pd *QPaintDevice) *QFont {
	ret := C.QFont_new3(font.cPointer(), pd.cPointer())
	return newQFont(ret)
}

// NewQFont4 constructs a new QFont object.
func NewQFont4(font *QFont, pd *QPaintDevice) *QFont {
	ret := C.QFont_new4(font.cPointer(), pd.cPointer())
	return newQFont(ret)
}

// NewQFont5 constructs a new QFont object.
func NewQFont5(font *QFont) *QFont {
	ret := C.QFont_new5(font.cPointer())
	return newQFont(ret)
}

// NewQFont6 constructs a new QFont object.
func NewQFont6(family string, pointSize int) *QFont {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	ret := C.QFont_new6(family_Cstring, C.ulong(len(family)), (C.int)(pointSize))
	return newQFont(ret)
}

// NewQFont7 constructs a new QFont object.
func NewQFont7(family string, pointSize int, weight int) *QFont {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	ret := C.QFont_new7(family_Cstring, C.ulong(len(family)), (C.int)(pointSize), (C.int)(weight))
	return newQFont(ret)
}

// NewQFont8 constructs a new QFont object.
func NewQFont8(family string, pointSize int, weight int, italic bool) *QFont {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	ret := C.QFont_new8(family_Cstring, C.ulong(len(family)), (C.int)(pointSize), (C.int)(weight), (C.bool)(italic))
	return newQFont(ret)
}

func (this *QFont) Swap(other *QFont) {
	C.QFont_Swap(this.h, other.cPointer())
}

func (this *QFont) Family() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFont_Family(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFont) SetFamily(family string) {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	C.QFont_SetFamily(this.h, family_Cstring, C.ulong(len(family)))
}

func (this *QFont) Families() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFont_Families(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFont) SetFamilies(families []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	families_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(families))))
	families_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(families))))
	defer C.free(unsafe.Pointer(families_CArray))
	defer C.free(unsafe.Pointer(families_Lengths))
	for i := range families {
		single_cstring := C.CString(families[i])
		defer C.free(unsafe.Pointer(single_cstring))
		families_CArray[i] = single_cstring
		families_Lengths[i] = (C.size_t)(len(families[i]))
	}
	C.QFont_SetFamilies(this.h, &families_CArray[0], &families_Lengths[0], C.ulong(len(families)))
}

func (this *QFont) StyleName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFont_StyleName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFont) SetStyleName(styleName string) {
	styleName_Cstring := C.CString(styleName)
	defer C.free(unsafe.Pointer(styleName_Cstring))
	C.QFont_SetStyleName(this.h, styleName_Cstring, C.ulong(len(styleName)))
}

func (this *QFont) PointSize() int {
	ret := C.QFont_PointSize(this.h)
	return (int)(ret)
}

func (this *QFont) SetPointSize(pointSize int) {
	C.QFont_SetPointSize(this.h, (C.int)(pointSize))
}

func (this *QFont) PointSizeF() float64 {
	ret := C.QFont_PointSizeF(this.h)
	return (float64)(ret)
}

func (this *QFont) SetPointSizeF(pointSizeF float64) {
	C.QFont_SetPointSizeF(this.h, (C.double)(pointSizeF))
}

func (this *QFont) PixelSize() int {
	ret := C.QFont_PixelSize(this.h)
	return (int)(ret)
}

func (this *QFont) SetPixelSize(pixelSize int) {
	C.QFont_SetPixelSize(this.h, (C.int)(pixelSize))
}

func (this *QFont) Weight() int {
	ret := C.QFont_Weight(this.h)
	return (int)(ret)
}

func (this *QFont) SetWeight(weight int) {
	C.QFont_SetWeight(this.h, (C.int)(weight))
}

func (this *QFont) Bold() bool {
	ret := C.QFont_Bold(this.h)
	return (bool)(ret)
}

func (this *QFont) SetBold(bold bool) {
	C.QFont_SetBold(this.h, (C.bool)(bold))
}

func (this *QFont) SetStyle(style uintptr) {
	C.QFont_SetStyle(this.h, (C.uintptr_t)(style))
}

func (this *QFont) Style() uintptr {
	ret := C.QFont_Style(this.h)
	return (uintptr)(ret)
}

func (this *QFont) Italic() bool {
	ret := C.QFont_Italic(this.h)
	return (bool)(ret)
}

func (this *QFont) SetItalic(b bool) {
	C.QFont_SetItalic(this.h, (C.bool)(b))
}

func (this *QFont) Underline() bool {
	ret := C.QFont_Underline(this.h)
	return (bool)(ret)
}

func (this *QFont) SetUnderline(underline bool) {
	C.QFont_SetUnderline(this.h, (C.bool)(underline))
}

func (this *QFont) Overline() bool {
	ret := C.QFont_Overline(this.h)
	return (bool)(ret)
}

func (this *QFont) SetOverline(overline bool) {
	C.QFont_SetOverline(this.h, (C.bool)(overline))
}

func (this *QFont) StrikeOut() bool {
	ret := C.QFont_StrikeOut(this.h)
	return (bool)(ret)
}

func (this *QFont) SetStrikeOut(strikeOut bool) {
	C.QFont_SetStrikeOut(this.h, (C.bool)(strikeOut))
}

func (this *QFont) FixedPitch() bool {
	ret := C.QFont_FixedPitch(this.h)
	return (bool)(ret)
}

func (this *QFont) SetFixedPitch(fixedPitch bool) {
	C.QFont_SetFixedPitch(this.h, (C.bool)(fixedPitch))
}

func (this *QFont) Kerning() bool {
	ret := C.QFont_Kerning(this.h)
	return (bool)(ret)
}

func (this *QFont) SetKerning(kerning bool) {
	C.QFont_SetKerning(this.h, (C.bool)(kerning))
}

func (this *QFont) StyleHint() uintptr {
	ret := C.QFont_StyleHint(this.h)
	return (uintptr)(ret)
}

func (this *QFont) StyleStrategy() uintptr {
	ret := C.QFont_StyleStrategy(this.h)
	return (uintptr)(ret)
}

func (this *QFont) SetStyleHint(param1 uintptr) {
	C.QFont_SetStyleHint(this.h, (C.uintptr_t)(param1))
}

func (this *QFont) SetStyleStrategy(s uintptr) {
	C.QFont_SetStyleStrategy(this.h, (C.uintptr_t)(s))
}

func (this *QFont) Stretch() int {
	ret := C.QFont_Stretch(this.h)
	return (int)(ret)
}

func (this *QFont) SetStretch(stretch int) {
	C.QFont_SetStretch(this.h, (C.int)(stretch))
}

func (this *QFont) LetterSpacing() float64 {
	ret := C.QFont_LetterSpacing(this.h)
	return (float64)(ret)
}

func (this *QFont) LetterSpacingType() uintptr {
	ret := C.QFont_LetterSpacingType(this.h)
	return (uintptr)(ret)
}

func (this *QFont) SetLetterSpacing(typeVal uintptr, spacing float64) {
	C.QFont_SetLetterSpacing(this.h, (C.uintptr_t)(typeVal), (C.double)(spacing))
}

func (this *QFont) WordSpacing() float64 {
	ret := C.QFont_WordSpacing(this.h)
	return (float64)(ret)
}

func (this *QFont) SetWordSpacing(spacing float64) {
	C.QFont_SetWordSpacing(this.h, (C.double)(spacing))
}

func (this *QFont) SetCapitalization(capitalization uintptr) {
	C.QFont_SetCapitalization(this.h, (C.uintptr_t)(capitalization))
}

func (this *QFont) Capitalization() uintptr {
	ret := C.QFont_Capitalization(this.h)
	return (uintptr)(ret)
}

func (this *QFont) SetHintingPreference(hintingPreference uintptr) {
	C.QFont_SetHintingPreference(this.h, (C.uintptr_t)(hintingPreference))
}

func (this *QFont) HintingPreference() uintptr {
	ret := C.QFont_HintingPreference(this.h)
	return (uintptr)(ret)
}

func (this *QFont) RawMode() bool {
	ret := C.QFont_RawMode(this.h)
	return (bool)(ret)
}

func (this *QFont) SetRawMode(rawMode bool) {
	C.QFont_SetRawMode(this.h, (C.bool)(rawMode))
}

func (this *QFont) ExactMatch() bool {
	ret := C.QFont_ExactMatch(this.h)
	return (bool)(ret)
}

func (this *QFont) OperatorAssign(param1 *QFont) {
	C.QFont_OperatorAssign(this.h, param1.cPointer())
}

func (this *QFont) OperatorEqual(param1 *QFont) bool {
	ret := C.QFont_OperatorEqual(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QFont) OperatorNotEqual(param1 *QFont) bool {
	ret := C.QFont_OperatorNotEqual(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QFont) OperatorLesser(param1 *QFont) bool {
	ret := C.QFont_OperatorLesser(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QFont) IsCopyOf(param1 *QFont) bool {
	ret := C.QFont_IsCopyOf(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QFont) SetRawName(rawName string) {
	rawName_Cstring := C.CString(rawName)
	defer C.free(unsafe.Pointer(rawName_Cstring))
	C.QFont_SetRawName(this.h, rawName_Cstring, C.ulong(len(rawName)))
}

func (this *QFont) RawName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFont_RawName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFont) Key() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFont_Key(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFont) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFont_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFont) FromString(param1 string) bool {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QFont_FromString(this.h, param1_Cstring, C.ulong(len(param1)))
	return (bool)(ret)
}

func QFont_Substitute(param1 string) string {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFont_Substitute(param1_Cstring, C.ulong(len(param1)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFont_Substitutes(param1 string) []string {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFont_Substitutes(param1_Cstring, C.ulong(len(param1)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFont_Substitutions() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFont_Substitutions(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFont_InsertSubstitution(param1 string, param2 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	param2_Cstring := C.CString(param2)
	defer C.free(unsafe.Pointer(param2_Cstring))
	C.QFont_InsertSubstitution(param1_Cstring, C.ulong(len(param1)), param2_Cstring, C.ulong(len(param2)))
}

func QFont_InsertSubstitutions(param1 string, param2 []string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	param2_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(param2))))
	param2_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray))
	defer C.free(unsafe.Pointer(param2_Lengths))
	for i := range param2 {
		single_cstring := C.CString(param2[i])
		defer C.free(unsafe.Pointer(single_cstring))
		param2_CArray[i] = single_cstring
		param2_Lengths[i] = (C.size_t)(len(param2[i]))
	}
	C.QFont_InsertSubstitutions(param1_Cstring, C.ulong(len(param1)), &param2_CArray[0], &param2_Lengths[0], C.ulong(len(param2)))
}

func QFont_RemoveSubstitutions(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QFont_RemoveSubstitutions(param1_Cstring, C.ulong(len(param1)))
}

func QFont_Initialize() {
	C.QFont_Initialize()
}

func QFont_Cleanup() {
	C.QFont_Cleanup()
}

func QFont_CacheStatistics() {
	C.QFont_CacheStatistics()
}

func (this *QFont) DefaultFamily() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFont_DefaultFamily(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFont) LastResortFamily() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFont_LastResortFamily(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFont) LastResortFont() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFont_LastResortFont(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFont) Resolve(param1 *QFont) *QFont {
	ret := C.QFont_Resolve(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFont) Resolve2() uint {
	ret := C.QFont_Resolve2(this.h)
	return (uint)(ret)
}

func (this *QFont) ResolveWithMask(mask uint) {
	C.QFont_ResolveWithMask(this.h, (C.uint)(mask))
}

func (this *QFont) SetStyleHint2(param1 uintptr, param2 uintptr) {
	C.QFont_SetStyleHint2(this.h, (C.uintptr_t)(param1), (C.uintptr_t)(param2))
}

func (this *QFont) Delete() {
	C.QFont_Delete(this.h)
}

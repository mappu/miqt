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

type QFont__StyleHint int

const (
	QFont__StyleHint__Helvetica  QFont__StyleHint = 0
	QFont__StyleHint__SansSerif  QFont__StyleHint = 0
	QFont__StyleHint__Times      QFont__StyleHint = 1
	QFont__StyleHint__Serif      QFont__StyleHint = 1
	QFont__StyleHint__Courier    QFont__StyleHint = 2
	QFont__StyleHint__TypeWriter QFont__StyleHint = 2
	QFont__StyleHint__OldEnglish QFont__StyleHint = 3
	QFont__StyleHint__Decorative QFont__StyleHint = 3
	QFont__StyleHint__System     QFont__StyleHint = 4
	QFont__StyleHint__AnyStyle   QFont__StyleHint = 5
	QFont__StyleHint__Cursive    QFont__StyleHint = 6
	QFont__StyleHint__Monospace  QFont__StyleHint = 7
	QFont__StyleHint__Fantasy    QFont__StyleHint = 8
)

type QFont__StyleStrategy int

const (
	QFont__StyleStrategy__PreferDefault       QFont__StyleStrategy = 1
	QFont__StyleStrategy__PreferBitmap        QFont__StyleStrategy = 2
	QFont__StyleStrategy__PreferDevice        QFont__StyleStrategy = 4
	QFont__StyleStrategy__PreferOutline       QFont__StyleStrategy = 8
	QFont__StyleStrategy__ForceOutline        QFont__StyleStrategy = 16
	QFont__StyleStrategy__PreferMatch         QFont__StyleStrategy = 32
	QFont__StyleStrategy__PreferQuality       QFont__StyleStrategy = 64
	QFont__StyleStrategy__PreferAntialias     QFont__StyleStrategy = 128
	QFont__StyleStrategy__NoAntialias         QFont__StyleStrategy = 256
	QFont__StyleStrategy__OpenGLCompatible    QFont__StyleStrategy = 512
	QFont__StyleStrategy__ForceIntegerMetrics QFont__StyleStrategy = 1024
	QFont__StyleStrategy__NoSubpixelAntialias QFont__StyleStrategy = 2048
	QFont__StyleStrategy__PreferNoShaping     QFont__StyleStrategy = 4096
	QFont__StyleStrategy__NoFontMerging       QFont__StyleStrategy = 32768
)

type QFont__HintingPreference int

const (
	QFont__HintingPreference__PreferDefaultHinting  QFont__HintingPreference = 0
	QFont__HintingPreference__PreferNoHinting       QFont__HintingPreference = 1
	QFont__HintingPreference__PreferVerticalHinting QFont__HintingPreference = 2
	QFont__HintingPreference__PreferFullHinting     QFont__HintingPreference = 3
)

type QFont__Weight int

const (
	QFont__Weight__Thin       QFont__Weight = 0
	QFont__Weight__ExtraLight QFont__Weight = 12
	QFont__Weight__Light      QFont__Weight = 25
	QFont__Weight__Normal     QFont__Weight = 50
	QFont__Weight__Medium     QFont__Weight = 57
	QFont__Weight__DemiBold   QFont__Weight = 63
	QFont__Weight__Bold       QFont__Weight = 75
	QFont__Weight__ExtraBold  QFont__Weight = 81
	QFont__Weight__Black      QFont__Weight = 87
)

type QFont__Style int

const (
	QFont__Style__StyleNormal  QFont__Style = 0
	QFont__Style__StyleItalic  QFont__Style = 1
	QFont__Style__StyleOblique QFont__Style = 2
)

type QFont__Stretch int

const (
	QFont__Stretch__AnyStretch     QFont__Stretch = 0
	QFont__Stretch__UltraCondensed QFont__Stretch = 50
	QFont__Stretch__ExtraCondensed QFont__Stretch = 62
	QFont__Stretch__Condensed      QFont__Stretch = 75
	QFont__Stretch__SemiCondensed  QFont__Stretch = 87
	QFont__Stretch__Unstretched    QFont__Stretch = 100
	QFont__Stretch__SemiExpanded   QFont__Stretch = 112
	QFont__Stretch__Expanded       QFont__Stretch = 125
	QFont__Stretch__ExtraExpanded  QFont__Stretch = 150
	QFont__Stretch__UltraExpanded  QFont__Stretch = 200
)

type QFont__Capitalization int

const (
	QFont__Capitalization__MixedCase    QFont__Capitalization = 0
	QFont__Capitalization__AllUppercase QFont__Capitalization = 1
	QFont__Capitalization__AllLowercase QFont__Capitalization = 2
	QFont__Capitalization__SmallCaps    QFont__Capitalization = 3
	QFont__Capitalization__Capitalize   QFont__Capitalization = 4
)

type QFont__SpacingType int

const (
	QFont__SpacingType__PercentageSpacing QFont__SpacingType = 0
	QFont__SpacingType__AbsoluteSpacing   QFont__SpacingType = 1
)

type QFont__ResolveProperties int

const (
	QFont__ResolveProperties__NoPropertiesResolved      QFont__ResolveProperties = 0
	QFont__ResolveProperties__FamilyResolved            QFont__ResolveProperties = 1
	QFont__ResolveProperties__SizeResolved              QFont__ResolveProperties = 2
	QFont__ResolveProperties__StyleHintResolved         QFont__ResolveProperties = 4
	QFont__ResolveProperties__StyleStrategyResolved     QFont__ResolveProperties = 8
	QFont__ResolveProperties__WeightResolved            QFont__ResolveProperties = 16
	QFont__ResolveProperties__StyleResolved             QFont__ResolveProperties = 32
	QFont__ResolveProperties__UnderlineResolved         QFont__ResolveProperties = 64
	QFont__ResolveProperties__OverlineResolved          QFont__ResolveProperties = 128
	QFont__ResolveProperties__StrikeOutResolved         QFont__ResolveProperties = 256
	QFont__ResolveProperties__FixedPitchResolved        QFont__ResolveProperties = 512
	QFont__ResolveProperties__StretchResolved           QFont__ResolveProperties = 1024
	QFont__ResolveProperties__KerningResolved           QFont__ResolveProperties = 2048
	QFont__ResolveProperties__CapitalizationResolved    QFont__ResolveProperties = 4096
	QFont__ResolveProperties__LetterSpacingResolved     QFont__ResolveProperties = 8192
	QFont__ResolveProperties__WordSpacingResolved       QFont__ResolveProperties = 16384
	QFont__ResolveProperties__HintingPreferenceResolved QFont__ResolveProperties = 32768
	QFont__ResolveProperties__StyleNameResolved         QFont__ResolveProperties = 65536
	QFont__ResolveProperties__FamiliesResolved          QFont__ResolveProperties = 131072
	QFont__ResolveProperties__AllPropertiesResolved     QFont__ResolveProperties = 262143
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
	ret := C.QFont_new2(family_Cstring, C.size_t(len(family)))
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
	ret := C.QFont_new6(family_Cstring, C.size_t(len(family)), (C.int)(pointSize))
	return newQFont(ret)
}

// NewQFont7 constructs a new QFont object.
func NewQFont7(family string, pointSize int, weight int) *QFont {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	ret := C.QFont_new7(family_Cstring, C.size_t(len(family)), (C.int)(pointSize), (C.int)(weight))
	return newQFont(ret)
}

// NewQFont8 constructs a new QFont object.
func NewQFont8(family string, pointSize int, weight int, italic bool) *QFont {
	family_Cstring := C.CString(family)
	defer C.free(unsafe.Pointer(family_Cstring))
	ret := C.QFont_new8(family_Cstring, C.size_t(len(family)), (C.int)(pointSize), (C.int)(weight), (C.bool)(italic))
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
	C.QFont_SetFamily(this.h, family_Cstring, C.size_t(len(family)))
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
	families_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(families))))
	defer C.free(unsafe.Pointer(families_CArray))
	defer C.free(unsafe.Pointer(families_Lengths))
	for i := range families {
		single_cstring := C.CString(families[i])
		defer C.free(unsafe.Pointer(single_cstring))
		families_CArray[i] = single_cstring
		families_Lengths[i] = (C.uint64_t)(len(families[i]))
	}
	C.QFont_SetFamilies(this.h, &families_CArray[0], &families_Lengths[0], C.size_t(len(families)))
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
	C.QFont_SetStyleName(this.h, styleName_Cstring, C.size_t(len(styleName)))
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

func (this *QFont) SetStyle(style QFont__Style) {
	C.QFont_SetStyle(this.h, (C.uintptr_t)(style))
}

func (this *QFont) Style() QFont__Style {
	ret := C.QFont_Style(this.h)
	return (QFont__Style)(ret)
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

func (this *QFont) StyleHint() QFont__StyleHint {
	ret := C.QFont_StyleHint(this.h)
	return (QFont__StyleHint)(ret)
}

func (this *QFont) StyleStrategy() QFont__StyleStrategy {
	ret := C.QFont_StyleStrategy(this.h)
	return (QFont__StyleStrategy)(ret)
}

func (this *QFont) SetStyleHint(param1 QFont__StyleHint) {
	C.QFont_SetStyleHint(this.h, (C.uintptr_t)(param1))
}

func (this *QFont) SetStyleStrategy(s QFont__StyleStrategy) {
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

func (this *QFont) LetterSpacingType() QFont__SpacingType {
	ret := C.QFont_LetterSpacingType(this.h)
	return (QFont__SpacingType)(ret)
}

func (this *QFont) SetLetterSpacing(typeVal QFont__SpacingType, spacing float64) {
	C.QFont_SetLetterSpacing(this.h, (C.uintptr_t)(typeVal), (C.double)(spacing))
}

func (this *QFont) WordSpacing() float64 {
	ret := C.QFont_WordSpacing(this.h)
	return (float64)(ret)
}

func (this *QFont) SetWordSpacing(spacing float64) {
	C.QFont_SetWordSpacing(this.h, (C.double)(spacing))
}

func (this *QFont) SetCapitalization(capitalization QFont__Capitalization) {
	C.QFont_SetCapitalization(this.h, (C.uintptr_t)(capitalization))
}

func (this *QFont) Capitalization() QFont__Capitalization {
	ret := C.QFont_Capitalization(this.h)
	return (QFont__Capitalization)(ret)
}

func (this *QFont) SetHintingPreference(hintingPreference QFont__HintingPreference) {
	C.QFont_SetHintingPreference(this.h, (C.uintptr_t)(hintingPreference))
}

func (this *QFont) HintingPreference() QFont__HintingPreference {
	ret := C.QFont_HintingPreference(this.h)
	return (QFont__HintingPreference)(ret)
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
	C.QFont_SetRawName(this.h, rawName_Cstring, C.size_t(len(rawName)))
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
	ret := C.QFont_FromString(this.h, param1_Cstring, C.size_t(len(param1)))
	return (bool)(ret)
}

func QFont_Substitute(param1 string) string {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFont_Substitute(param1_Cstring, C.size_t(len(param1)), &_out, &_out_Strlen)
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
	C.QFont_Substitutes(param1_Cstring, C.size_t(len(param1)), &_out, &_out_Lengths, &_out_len)
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
	C.QFont_InsertSubstitution(param1_Cstring, C.size_t(len(param1)), param2_Cstring, C.size_t(len(param2)))
}

func QFont_InsertSubstitutions(param1 string, param2 []string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	param2_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(param2))))
	param2_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray))
	defer C.free(unsafe.Pointer(param2_Lengths))
	for i := range param2 {
		single_cstring := C.CString(param2[i])
		defer C.free(unsafe.Pointer(single_cstring))
		param2_CArray[i] = single_cstring
		param2_Lengths[i] = (C.uint64_t)(len(param2[i]))
	}
	C.QFont_InsertSubstitutions(param1_Cstring, C.size_t(len(param1)), &param2_CArray[0], &param2_Lengths[0], C.size_t(len(param2)))
}

func QFont_RemoveSubstitutions(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QFont_RemoveSubstitutions(param1_Cstring, C.size_t(len(param1)))
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

func (this *QFont) SetStyleHint2(param1 QFont__StyleHint, param2 QFont__StyleStrategy) {
	C.QFont_SetStyleHint2(this.h, (C.uintptr_t)(param1), (C.uintptr_t)(param2))
}

func (this *QFont) Delete() {
	C.QFont_Delete(this.h)
}

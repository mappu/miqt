package qt6

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
	QFont__Helvetica  QFont__StyleHint = 0
	QFont__SansSerif  QFont__StyleHint = 0
	QFont__Times      QFont__StyleHint = 1
	QFont__Serif      QFont__StyleHint = 1
	QFont__Courier    QFont__StyleHint = 2
	QFont__TypeWriter QFont__StyleHint = 2
	QFont__OldEnglish QFont__StyleHint = 3
	QFont__Decorative QFont__StyleHint = 3
	QFont__System     QFont__StyleHint = 4
	QFont__AnyStyle   QFont__StyleHint = 5
	QFont__Cursive    QFont__StyleHint = 6
	QFont__Monospace  QFont__StyleHint = 7
	QFont__Fantasy    QFont__StyleHint = 8
)

type QFont__StyleStrategy int

const (
	QFont__PreferDefault       QFont__StyleStrategy = 1
	QFont__PreferBitmap        QFont__StyleStrategy = 2
	QFont__PreferDevice        QFont__StyleStrategy = 4
	QFont__PreferOutline       QFont__StyleStrategy = 8
	QFont__ForceOutline        QFont__StyleStrategy = 16
	QFont__PreferMatch         QFont__StyleStrategy = 32
	QFont__PreferQuality       QFont__StyleStrategy = 64
	QFont__PreferAntialias     QFont__StyleStrategy = 128
	QFont__NoAntialias         QFont__StyleStrategy = 256
	QFont__NoSubpixelAntialias QFont__StyleStrategy = 2048
	QFont__PreferNoShaping     QFont__StyleStrategy = 4096
	QFont__NoFontMerging       QFont__StyleStrategy = 32768
)

type QFont__HintingPreference int

const (
	QFont__PreferDefaultHinting  QFont__HintingPreference = 0
	QFont__PreferNoHinting       QFont__HintingPreference = 1
	QFont__PreferVerticalHinting QFont__HintingPreference = 2
	QFont__PreferFullHinting     QFont__HintingPreference = 3
)

type QFont__Weight int

const (
	QFont__Thin       QFont__Weight = 100
	QFont__ExtraLight QFont__Weight = 200
	QFont__Light      QFont__Weight = 300
	QFont__Normal     QFont__Weight = 400
	QFont__Medium     QFont__Weight = 500
	QFont__DemiBold   QFont__Weight = 600
	QFont__Bold       QFont__Weight = 700
	QFont__ExtraBold  QFont__Weight = 800
	QFont__Black      QFont__Weight = 900
)

type QFont__Style int

const (
	QFont__StyleNormal  QFont__Style = 0
	QFont__StyleItalic  QFont__Style = 1
	QFont__StyleOblique QFont__Style = 2
)

type QFont__Stretch int

const (
	QFont__AnyStretch     QFont__Stretch = 0
	QFont__UltraCondensed QFont__Stretch = 50
	QFont__ExtraCondensed QFont__Stretch = 62
	QFont__Condensed      QFont__Stretch = 75
	QFont__SemiCondensed  QFont__Stretch = 87
	QFont__Unstretched    QFont__Stretch = 100
	QFont__SemiExpanded   QFont__Stretch = 112
	QFont__Expanded       QFont__Stretch = 125
	QFont__ExtraExpanded  QFont__Stretch = 150
	QFont__UltraExpanded  QFont__Stretch = 200
)

type QFont__Capitalization int

const (
	QFont__MixedCase    QFont__Capitalization = 0
	QFont__AllUppercase QFont__Capitalization = 1
	QFont__AllLowercase QFont__Capitalization = 2
	QFont__SmallCaps    QFont__Capitalization = 3
	QFont__Capitalize   QFont__Capitalization = 4
)

type QFont__SpacingType int

const (
	QFont__PercentageSpacing QFont__SpacingType = 0
	QFont__AbsoluteSpacing   QFont__SpacingType = 1
)

type QFont__ResolveProperties int

const (
	QFont__NoPropertiesResolved      QFont__ResolveProperties = 0
	QFont__FamilyResolved            QFont__ResolveProperties = 1
	QFont__SizeResolved              QFont__ResolveProperties = 2
	QFont__StyleHintResolved         QFont__ResolveProperties = 4
	QFont__StyleStrategyResolved     QFont__ResolveProperties = 8
	QFont__WeightResolved            QFont__ResolveProperties = 16
	QFont__StyleResolved             QFont__ResolveProperties = 32
	QFont__UnderlineResolved         QFont__ResolveProperties = 64
	QFont__OverlineResolved          QFont__ResolveProperties = 128
	QFont__StrikeOutResolved         QFont__ResolveProperties = 256
	QFont__FixedPitchResolved        QFont__ResolveProperties = 512
	QFont__StretchResolved           QFont__ResolveProperties = 1024
	QFont__KerningResolved           QFont__ResolveProperties = 2048
	QFont__CapitalizationResolved    QFont__ResolveProperties = 4096
	QFont__LetterSpacingResolved     QFont__ResolveProperties = 8192
	QFont__WordSpacingResolved       QFont__ResolveProperties = 16384
	QFont__HintingPreferenceResolved QFont__ResolveProperties = 32768
	QFont__StyleNameResolved         QFont__ResolveProperties = 65536
	QFont__FamiliesResolved          QFont__ResolveProperties = 131072
	QFont__AllPropertiesResolved     QFont__ResolveProperties = 262143
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

func (this *QFont) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFont constructs the type using only CGO pointers.
func newQFont(h *C.QFont) *QFont {
	if h == nil {
		return nil
	}

	return &QFont{h: h}
}

// UnsafeNewQFont constructs the type using only unsafe pointers.
func UnsafeNewQFont(h unsafe.Pointer) *QFont {
	return newQFont((*C.QFont)(h))
}

// NewQFont constructs a new QFont object.
func NewQFont() *QFont {

	return newQFont(C.QFont_new())
}

// NewQFont2 constructs a new QFont object.
func NewQFont2(family string) *QFont {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))

	return newQFont(C.QFont_new2(family_ms))
}

// NewQFont3 constructs a new QFont object.
func NewQFont3(families []string) *QFont {
	families_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(families))))
	defer C.free(unsafe.Pointer(families_CArray))
	for i := range families {
		families_i_ms := C.struct_miqt_string{}
		families_i_ms.data = C.CString(families[i])
		families_i_ms.len = C.size_t(len(families[i]))
		defer C.free(unsafe.Pointer(families_i_ms.data))
		families_CArray[i] = families_i_ms
	}
	families_ma := C.struct_miqt_array{len: C.size_t(len(families)), data: unsafe.Pointer(families_CArray)}

	return newQFont(C.QFont_new3(families_ma))
}

// NewQFont4 constructs a new QFont object.
func NewQFont4(font *QFont, pd *QPaintDevice) *QFont {

	return newQFont(C.QFont_new4(font.cPointer(), pd.cPointer()))
}

// NewQFont5 constructs a new QFont object.
func NewQFont5(font *QFont) *QFont {

	return newQFont(C.QFont_new5(font.cPointer()))
}

// NewQFont6 constructs a new QFont object.
func NewQFont6(family string, pointSize int) *QFont {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))

	return newQFont(C.QFont_new6(family_ms, (C.int)(pointSize)))
}

// NewQFont7 constructs a new QFont object.
func NewQFont7(family string, pointSize int, weight int) *QFont {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))

	return newQFont(C.QFont_new7(family_ms, (C.int)(pointSize), (C.int)(weight)))
}

// NewQFont8 constructs a new QFont object.
func NewQFont8(family string, pointSize int, weight int, italic bool) *QFont {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))

	return newQFont(C.QFont_new8(family_ms, (C.int)(pointSize), (C.int)(weight), (C.bool)(italic)))
}

// NewQFont9 constructs a new QFont object.
func NewQFont9(families []string, pointSize int) *QFont {
	families_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(families))))
	defer C.free(unsafe.Pointer(families_CArray))
	for i := range families {
		families_i_ms := C.struct_miqt_string{}
		families_i_ms.data = C.CString(families[i])
		families_i_ms.len = C.size_t(len(families[i]))
		defer C.free(unsafe.Pointer(families_i_ms.data))
		families_CArray[i] = families_i_ms
	}
	families_ma := C.struct_miqt_array{len: C.size_t(len(families)), data: unsafe.Pointer(families_CArray)}

	return newQFont(C.QFont_new9(families_ma, (C.int)(pointSize)))
}

// NewQFont10 constructs a new QFont object.
func NewQFont10(families []string, pointSize int, weight int) *QFont {
	families_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(families))))
	defer C.free(unsafe.Pointer(families_CArray))
	for i := range families {
		families_i_ms := C.struct_miqt_string{}
		families_i_ms.data = C.CString(families[i])
		families_i_ms.len = C.size_t(len(families[i]))
		defer C.free(unsafe.Pointer(families_i_ms.data))
		families_CArray[i] = families_i_ms
	}
	families_ma := C.struct_miqt_array{len: C.size_t(len(families)), data: unsafe.Pointer(families_CArray)}

	return newQFont(C.QFont_new10(families_ma, (C.int)(pointSize), (C.int)(weight)))
}

// NewQFont11 constructs a new QFont object.
func NewQFont11(families []string, pointSize int, weight int, italic bool) *QFont {
	families_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(families))))
	defer C.free(unsafe.Pointer(families_CArray))
	for i := range families {
		families_i_ms := C.struct_miqt_string{}
		families_i_ms.data = C.CString(families[i])
		families_i_ms.len = C.size_t(len(families[i]))
		defer C.free(unsafe.Pointer(families_i_ms.data))
		families_CArray[i] = families_i_ms
	}
	families_ma := C.struct_miqt_array{len: C.size_t(len(families)), data: unsafe.Pointer(families_CArray)}

	return newQFont(C.QFont_new11(families_ma, (C.int)(pointSize), (C.int)(weight), (C.bool)(italic)))
}

func (this *QFont) Swap(other *QFont) {
	C.QFont_Swap(this.h, other.cPointer())
}

func (this *QFont) Family() string {
	var _ms C.struct_miqt_string = C.QFont_Family(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFont) SetFamily(family string) {
	family_ms := C.struct_miqt_string{}
	family_ms.data = C.CString(family)
	family_ms.len = C.size_t(len(family))
	defer C.free(unsafe.Pointer(family_ms.data))
	C.QFont_SetFamily(this.h, family_ms)
}

func (this *QFont) Families() []string {
	var _ma C.struct_miqt_array = C.QFont_Families(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QFont) SetFamilies(families []string) {
	families_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(families))))
	defer C.free(unsafe.Pointer(families_CArray))
	for i := range families {
		families_i_ms := C.struct_miqt_string{}
		families_i_ms.data = C.CString(families[i])
		families_i_ms.len = C.size_t(len(families[i]))
		defer C.free(unsafe.Pointer(families_i_ms.data))
		families_CArray[i] = families_i_ms
	}
	families_ma := C.struct_miqt_array{len: C.size_t(len(families)), data: unsafe.Pointer(families_CArray)}
	C.QFont_SetFamilies(this.h, families_ma)
}

func (this *QFont) StyleName() string {
	var _ms C.struct_miqt_string = C.QFont_StyleName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFont) SetStyleName(styleName string) {
	styleName_ms := C.struct_miqt_string{}
	styleName_ms.data = C.CString(styleName)
	styleName_ms.len = C.size_t(len(styleName))
	defer C.free(unsafe.Pointer(styleName_ms.data))
	C.QFont_SetStyleName(this.h, styleName_ms)
}

func (this *QFont) PointSize() int {
	return (int)(C.QFont_PointSize(this.h))
}

func (this *QFont) SetPointSize(pointSize int) {
	C.QFont_SetPointSize(this.h, (C.int)(pointSize))
}

func (this *QFont) PointSizeF() float64 {
	return (float64)(C.QFont_PointSizeF(this.h))
}

func (this *QFont) SetPointSizeF(pointSizeF float64) {
	C.QFont_SetPointSizeF(this.h, (C.double)(pointSizeF))
}

func (this *QFont) PixelSize() int {
	return (int)(C.QFont_PixelSize(this.h))
}

func (this *QFont) SetPixelSize(pixelSize int) {
	C.QFont_SetPixelSize(this.h, (C.int)(pixelSize))
}

func (this *QFont) Weight() QFont__Weight {
	return (QFont__Weight)(C.QFont_Weight(this.h))
}

func (this *QFont) SetWeight(weight QFont__Weight) {
	C.QFont_SetWeight(this.h, (C.int)(weight))
}

func (this *QFont) Bold() bool {
	return (bool)(C.QFont_Bold(this.h))
}

func (this *QFont) SetBold(bold bool) {
	C.QFont_SetBold(this.h, (C.bool)(bold))
}

func (this *QFont) SetStyle(style QFont__Style) {
	C.QFont_SetStyle(this.h, (C.int)(style))
}

func (this *QFont) Style() QFont__Style {
	return (QFont__Style)(C.QFont_Style(this.h))
}

func (this *QFont) Italic() bool {
	return (bool)(C.QFont_Italic(this.h))
}

func (this *QFont) SetItalic(b bool) {
	C.QFont_SetItalic(this.h, (C.bool)(b))
}

func (this *QFont) Underline() bool {
	return (bool)(C.QFont_Underline(this.h))
}

func (this *QFont) SetUnderline(underline bool) {
	C.QFont_SetUnderline(this.h, (C.bool)(underline))
}

func (this *QFont) Overline() bool {
	return (bool)(C.QFont_Overline(this.h))
}

func (this *QFont) SetOverline(overline bool) {
	C.QFont_SetOverline(this.h, (C.bool)(overline))
}

func (this *QFont) StrikeOut() bool {
	return (bool)(C.QFont_StrikeOut(this.h))
}

func (this *QFont) SetStrikeOut(strikeOut bool) {
	C.QFont_SetStrikeOut(this.h, (C.bool)(strikeOut))
}

func (this *QFont) FixedPitch() bool {
	return (bool)(C.QFont_FixedPitch(this.h))
}

func (this *QFont) SetFixedPitch(fixedPitch bool) {
	C.QFont_SetFixedPitch(this.h, (C.bool)(fixedPitch))
}

func (this *QFont) Kerning() bool {
	return (bool)(C.QFont_Kerning(this.h))
}

func (this *QFont) SetKerning(kerning bool) {
	C.QFont_SetKerning(this.h, (C.bool)(kerning))
}

func (this *QFont) StyleHint() QFont__StyleHint {
	return (QFont__StyleHint)(C.QFont_StyleHint(this.h))
}

func (this *QFont) StyleStrategy() QFont__StyleStrategy {
	return (QFont__StyleStrategy)(C.QFont_StyleStrategy(this.h))
}

func (this *QFont) SetStyleHint(param1 QFont__StyleHint) {
	C.QFont_SetStyleHint(this.h, (C.int)(param1))
}

func (this *QFont) SetStyleStrategy(s QFont__StyleStrategy) {
	C.QFont_SetStyleStrategy(this.h, (C.int)(s))
}

func (this *QFont) Stretch() int {
	return (int)(C.QFont_Stretch(this.h))
}

func (this *QFont) SetStretch(stretch int) {
	C.QFont_SetStretch(this.h, (C.int)(stretch))
}

func (this *QFont) LetterSpacing() float64 {
	return (float64)(C.QFont_LetterSpacing(this.h))
}

func (this *QFont) LetterSpacingType() QFont__SpacingType {
	return (QFont__SpacingType)(C.QFont_LetterSpacingType(this.h))
}

func (this *QFont) SetLetterSpacing(typeVal QFont__SpacingType, spacing float64) {
	C.QFont_SetLetterSpacing(this.h, (C.int)(typeVal), (C.double)(spacing))
}

func (this *QFont) WordSpacing() float64 {
	return (float64)(C.QFont_WordSpacing(this.h))
}

func (this *QFont) SetWordSpacing(spacing float64) {
	C.QFont_SetWordSpacing(this.h, (C.double)(spacing))
}

func (this *QFont) SetCapitalization(capitalization QFont__Capitalization) {
	C.QFont_SetCapitalization(this.h, (C.int)(capitalization))
}

func (this *QFont) Capitalization() QFont__Capitalization {
	return (QFont__Capitalization)(C.QFont_Capitalization(this.h))
}

func (this *QFont) SetHintingPreference(hintingPreference QFont__HintingPreference) {
	C.QFont_SetHintingPreference(this.h, (C.int)(hintingPreference))
}

func (this *QFont) HintingPreference() QFont__HintingPreference {
	return (QFont__HintingPreference)(C.QFont_HintingPreference(this.h))
}

func (this *QFont) ExactMatch() bool {
	return (bool)(C.QFont_ExactMatch(this.h))
}

func (this *QFont) OperatorAssign(param1 *QFont) {
	C.QFont_OperatorAssign(this.h, param1.cPointer())
}

func (this *QFont) OperatorEqual(param1 *QFont) bool {
	return (bool)(C.QFont_OperatorEqual(this.h, param1.cPointer()))
}

func (this *QFont) OperatorNotEqual(param1 *QFont) bool {
	return (bool)(C.QFont_OperatorNotEqual(this.h, param1.cPointer()))
}

func (this *QFont) OperatorLesser(param1 *QFont) bool {
	return (bool)(C.QFont_OperatorLesser(this.h, param1.cPointer()))
}

func (this *QFont) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QFont_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFont) IsCopyOf(param1 *QFont) bool {
	return (bool)(C.QFont_IsCopyOf(this.h, param1.cPointer()))
}

func (this *QFont) Key() string {
	var _ms C.struct_miqt_string = C.QFont_Key(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFont) ToString() string {
	var _ms C.struct_miqt_string = C.QFont_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFont) FromString(param1 string) bool {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (bool)(C.QFont_FromString(this.h, param1_ms))
}

func QFont_Substitute(param1 string) string {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	var _ms C.struct_miqt_string = C.QFont_Substitute(param1_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFont_Substitutes(param1 string) []string {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	var _ma C.struct_miqt_array = C.QFont_Substitutes(param1_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QFont_Substitutions() []string {
	var _ma C.struct_miqt_array = C.QFont_Substitutions()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QFont_InsertSubstitution(param1 string, param2 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	C.QFont_InsertSubstitution(param1_ms, param2_ms)
}

func QFont_InsertSubstitutions(param1 string, param2 []string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	param2_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray))
	for i := range param2 {
		param2_i_ms := C.struct_miqt_string{}
		param2_i_ms.data = C.CString(param2[i])
		param2_i_ms.len = C.size_t(len(param2[i]))
		defer C.free(unsafe.Pointer(param2_i_ms.data))
		param2_CArray[i] = param2_i_ms
	}
	param2_ma := C.struct_miqt_array{len: C.size_t(len(param2)), data: unsafe.Pointer(param2_CArray)}
	C.QFont_InsertSubstitutions(param1_ms, param2_ma)
}

func QFont_RemoveSubstitutions(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QFont_RemoveSubstitutions(param1_ms)
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
	var _ms C.struct_miqt_string = C.QFont_DefaultFamily(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFont) Resolve(param1 *QFont) *QFont {
	_goptr := newQFont(C.QFont_Resolve(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFont) ResolveMask() uint {
	return (uint)(C.QFont_ResolveMask(this.h))
}

func (this *QFont) SetResolveMask(mask uint) {
	C.QFont_SetResolveMask(this.h, (C.uint)(mask))
}

func (this *QFont) SetLegacyWeight(legacyWeight int) {
	C.QFont_SetLegacyWeight(this.h, (C.int)(legacyWeight))
}

func (this *QFont) LegacyWeight() int {
	return (int)(C.QFont_LegacyWeight(this.h))
}

func (this *QFont) SetStyleHint2(param1 QFont__StyleHint, param2 QFont__StyleStrategy) {
	C.QFont_SetStyleHint2(this.h, (C.int)(param1), (C.int)(param2))
}

// Delete this object from C++ memory.
func (this *QFont) Delete() {
	C.QFont_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFont) GoGC() {
	runtime.SetFinalizer(this, func(this *QFont) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

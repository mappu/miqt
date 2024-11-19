package qt

/*

#include "gen_qcolor.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QColor__Spec int

const (
	QColor__Invalid     QColor__Spec = 0
	QColor__Rgb         QColor__Spec = 1
	QColor__Hsv         QColor__Spec = 2
	QColor__Cmyk        QColor__Spec = 3
	QColor__Hsl         QColor__Spec = 4
	QColor__ExtendedRgb QColor__Spec = 5
)

type QColor__NameFormat int

const (
	QColor__HexRgb  QColor__NameFormat = 0
	QColor__HexArgb QColor__NameFormat = 1
)

type QColor struct {
	h          *C.QColor
	isSubclass bool
}

func (this *QColor) cPointer() *C.QColor {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QColor) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQColor constructs the type using only CGO pointers.
func newQColor(h *C.QColor) *QColor {
	if h == nil {
		return nil
	}
	return &QColor{h: h}
}

// UnsafeNewQColor constructs the type using only unsafe pointers.
func UnsafeNewQColor(h unsafe.Pointer) *QColor {
	if h == nil {
		return nil
	}

	return &QColor{h: (*C.QColor)(h)}
}

// NewQColor constructs a new QColor object.
func NewQColor() *QColor {
	var outptr_QColor *C.QColor = nil

	C.QColor_new(&outptr_QColor)
	ret := newQColor(outptr_QColor)
	ret.isSubclass = true
	return ret
}

// NewQColor2 constructs a new QColor object.
func NewQColor2(color GlobalColor) *QColor {
	var outptr_QColor *C.QColor = nil

	C.QColor_new2((C.int)(color), &outptr_QColor)
	ret := newQColor(outptr_QColor)
	ret.isSubclass = true
	return ret
}

// NewQColor3 constructs a new QColor object.
func NewQColor3(r int, g int, b int) *QColor {
	var outptr_QColor *C.QColor = nil

	C.QColor_new3((C.int)(r), (C.int)(g), (C.int)(b), &outptr_QColor)
	ret := newQColor(outptr_QColor)
	ret.isSubclass = true
	return ret
}

// NewQColor4 constructs a new QColor object.
func NewQColor4(rgb uint) *QColor {
	var outptr_QColor *C.QColor = nil

	C.QColor_new4((C.uint)(rgb), &outptr_QColor)
	ret := newQColor(outptr_QColor)
	ret.isSubclass = true
	return ret
}

// NewQColor5 constructs a new QColor object.
func NewQColor5(rgba64 QRgba64) *QColor {
	var outptr_QColor *C.QColor = nil

	C.QColor_new5(rgba64.cPointer(), &outptr_QColor)
	ret := newQColor(outptr_QColor)
	ret.isSubclass = true
	return ret
}

// NewQColor6 constructs a new QColor object.
func NewQColor6(name string) *QColor {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var outptr_QColor *C.QColor = nil

	C.QColor_new6(name_ms, &outptr_QColor)
	ret := newQColor(outptr_QColor)
	ret.isSubclass = true
	return ret
}

// NewQColor7 constructs a new QColor object.
func NewQColor7(aname string) *QColor {
	aname_Cstring := C.CString(aname)
	defer C.free(unsafe.Pointer(aname_Cstring))
	var outptr_QColor *C.QColor = nil

	C.QColor_new7(aname_Cstring, &outptr_QColor)
	ret := newQColor(outptr_QColor)
	ret.isSubclass = true
	return ret
}

// NewQColor8 constructs a new QColor object.
func NewQColor8(spec QColor__Spec) *QColor {
	var outptr_QColor *C.QColor = nil

	C.QColor_new8((C.int)(spec), &outptr_QColor)
	ret := newQColor(outptr_QColor)
	ret.isSubclass = true
	return ret
}

// NewQColor9 constructs a new QColor object.
func NewQColor9(color *QColor) *QColor {
	var outptr_QColor *C.QColor = nil

	C.QColor_new9(color.cPointer(), &outptr_QColor)
	ret := newQColor(outptr_QColor)
	ret.isSubclass = true
	return ret
}

// NewQColor10 constructs a new QColor object.
func NewQColor10(spec QColor__Spec, a1 uint16, a2 uint16, a3 uint16, a4 uint16) *QColor {
	var outptr_QColor *C.QColor = nil

	C.QColor_new10((C.int)(spec), (C.uint16_t)(a1), (C.uint16_t)(a2), (C.uint16_t)(a3), (C.uint16_t)(a4), &outptr_QColor)
	ret := newQColor(outptr_QColor)
	ret.isSubclass = true
	return ret
}

// NewQColor11 constructs a new QColor object.
func NewQColor11(r int, g int, b int, a int) *QColor {
	var outptr_QColor *C.QColor = nil

	C.QColor_new11((C.int)(r), (C.int)(g), (C.int)(b), (C.int)(a), &outptr_QColor)
	ret := newQColor(outptr_QColor)
	ret.isSubclass = true
	return ret
}

// NewQColor12 constructs a new QColor object.
func NewQColor12(spec QColor__Spec, a1 uint16, a2 uint16, a3 uint16, a4 uint16, a5 uint16) *QColor {
	var outptr_QColor *C.QColor = nil

	C.QColor_new12((C.int)(spec), (C.uint16_t)(a1), (C.uint16_t)(a2), (C.uint16_t)(a3), (C.uint16_t)(a4), (C.uint16_t)(a5), &outptr_QColor)
	ret := newQColor(outptr_QColor)
	ret.isSubclass = true
	return ret
}

func (this *QColor) OperatorAssign(param1 *QColor) {
	C.QColor_OperatorAssign(this.h, param1.cPointer())
}

func (this *QColor) OperatorAssignWithColor(color GlobalColor) {
	C.QColor_OperatorAssignWithColor(this.h, (C.int)(color))
}

func (this *QColor) IsValid() bool {
	return (bool)(C.QColor_IsValid(this.h))
}

func (this *QColor) Name() string {
	var _ms C.struct_miqt_string = C.QColor_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColor) NameWithFormat(format QColor__NameFormat) string {
	var _ms C.struct_miqt_string = C.QColor_NameWithFormat(this.h, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColor) SetNamedColor(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QColor_SetNamedColor(this.h, name_ms)
}

func QColor_ColorNames() []string {
	var _ma C.struct_miqt_array = C.QColor_ColorNames()
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

func (this *QColor) Spec() QColor__Spec {
	return (QColor__Spec)(C.QColor_Spec(this.h))
}

func (this *QColor) Alpha() int {
	return (int)(C.QColor_Alpha(this.h))
}

func (this *QColor) SetAlpha(alpha int) {
	C.QColor_SetAlpha(this.h, (C.int)(alpha))
}

func (this *QColor) AlphaF() float64 {
	return (float64)(C.QColor_AlphaF(this.h))
}

func (this *QColor) SetAlphaF(alpha float64) {
	C.QColor_SetAlphaF(this.h, (C.double)(alpha))
}

func (this *QColor) Red() int {
	return (int)(C.QColor_Red(this.h))
}

func (this *QColor) Green() int {
	return (int)(C.QColor_Green(this.h))
}

func (this *QColor) Blue() int {
	return (int)(C.QColor_Blue(this.h))
}

func (this *QColor) SetRed(red int) {
	C.QColor_SetRed(this.h, (C.int)(red))
}

func (this *QColor) SetGreen(green int) {
	C.QColor_SetGreen(this.h, (C.int)(green))
}

func (this *QColor) SetBlue(blue int) {
	C.QColor_SetBlue(this.h, (C.int)(blue))
}

func (this *QColor) RedF() float64 {
	return (float64)(C.QColor_RedF(this.h))
}

func (this *QColor) GreenF() float64 {
	return (float64)(C.QColor_GreenF(this.h))
}

func (this *QColor) BlueF() float64 {
	return (float64)(C.QColor_BlueF(this.h))
}

func (this *QColor) SetRedF(red float64) {
	C.QColor_SetRedF(this.h, (C.double)(red))
}

func (this *QColor) SetGreenF(green float64) {
	C.QColor_SetGreenF(this.h, (C.double)(green))
}

func (this *QColor) SetBlueF(blue float64) {
	C.QColor_SetBlueF(this.h, (C.double)(blue))
}

func (this *QColor) GetRgb(r *int, g *int, b *int) {
	C.QColor_GetRgb(this.h, (*C.int)(unsafe.Pointer(r)), (*C.int)(unsafe.Pointer(g)), (*C.int)(unsafe.Pointer(b)))
}

func (this *QColor) SetRgb(r int, g int, b int) {
	C.QColor_SetRgb(this.h, (C.int)(r), (C.int)(g), (C.int)(b))
}

func (this *QColor) GetRgbF(r *float64, g *float64, b *float64) {
	C.QColor_GetRgbF(this.h, (*C.double)(unsafe.Pointer(r)), (*C.double)(unsafe.Pointer(g)), (*C.double)(unsafe.Pointer(b)))
}

func (this *QColor) SetRgbF(r float64, g float64, b float64) {
	C.QColor_SetRgbF(this.h, (C.double)(r), (C.double)(g), (C.double)(b))
}

func (this *QColor) Rgba64() *QRgba64 {
	_ret := C.QColor_Rgba64(this.h)
	_goptr := newQRgba64(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) SetRgba64(rgba QRgba64) {
	C.QColor_SetRgba64(this.h, rgba.cPointer())
}

func (this *QColor) Rgba() uint {
	return (uint)(C.QColor_Rgba(this.h))
}

func (this *QColor) SetRgba(rgba uint) {
	C.QColor_SetRgba(this.h, (C.uint)(rgba))
}

func (this *QColor) Rgb() uint {
	return (uint)(C.QColor_Rgb(this.h))
}

func (this *QColor) SetRgbWithRgb(rgb uint) {
	C.QColor_SetRgbWithRgb(this.h, (C.uint)(rgb))
}

func (this *QColor) Hue() int {
	return (int)(C.QColor_Hue(this.h))
}

func (this *QColor) Saturation() int {
	return (int)(C.QColor_Saturation(this.h))
}

func (this *QColor) HsvHue() int {
	return (int)(C.QColor_HsvHue(this.h))
}

func (this *QColor) HsvSaturation() int {
	return (int)(C.QColor_HsvSaturation(this.h))
}

func (this *QColor) Value() int {
	return (int)(C.QColor_Value(this.h))
}

func (this *QColor) HueF() float64 {
	return (float64)(C.QColor_HueF(this.h))
}

func (this *QColor) SaturationF() float64 {
	return (float64)(C.QColor_SaturationF(this.h))
}

func (this *QColor) HsvHueF() float64 {
	return (float64)(C.QColor_HsvHueF(this.h))
}

func (this *QColor) HsvSaturationF() float64 {
	return (float64)(C.QColor_HsvSaturationF(this.h))
}

func (this *QColor) ValueF() float64 {
	return (float64)(C.QColor_ValueF(this.h))
}

func (this *QColor) GetHsv(h *int, s *int, v *int) {
	C.QColor_GetHsv(this.h, (*C.int)(unsafe.Pointer(h)), (*C.int)(unsafe.Pointer(s)), (*C.int)(unsafe.Pointer(v)))
}

func (this *QColor) SetHsv(h int, s int, v int) {
	C.QColor_SetHsv(this.h, (C.int)(h), (C.int)(s), (C.int)(v))
}

func (this *QColor) GetHsvF(h *float64, s *float64, v *float64) {
	C.QColor_GetHsvF(this.h, (*C.double)(unsafe.Pointer(h)), (*C.double)(unsafe.Pointer(s)), (*C.double)(unsafe.Pointer(v)))
}

func (this *QColor) SetHsvF(h float64, s float64, v float64) {
	C.QColor_SetHsvF(this.h, (C.double)(h), (C.double)(s), (C.double)(v))
}

func (this *QColor) Cyan() int {
	return (int)(C.QColor_Cyan(this.h))
}

func (this *QColor) Magenta() int {
	return (int)(C.QColor_Magenta(this.h))
}

func (this *QColor) Yellow() int {
	return (int)(C.QColor_Yellow(this.h))
}

func (this *QColor) Black() int {
	return (int)(C.QColor_Black(this.h))
}

func (this *QColor) CyanF() float64 {
	return (float64)(C.QColor_CyanF(this.h))
}

func (this *QColor) MagentaF() float64 {
	return (float64)(C.QColor_MagentaF(this.h))
}

func (this *QColor) YellowF() float64 {
	return (float64)(C.QColor_YellowF(this.h))
}

func (this *QColor) BlackF() float64 {
	return (float64)(C.QColor_BlackF(this.h))
}

func (this *QColor) GetCmyk(c *int, m *int, y *int, k *int) {
	C.QColor_GetCmyk(this.h, (*C.int)(unsafe.Pointer(c)), (*C.int)(unsafe.Pointer(m)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(k)))
}

func (this *QColor) GetCmyk2(c *int, m *int, y *int, k *int) {
	C.QColor_GetCmyk2(this.h, (*C.int)(unsafe.Pointer(c)), (*C.int)(unsafe.Pointer(m)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(k)))
}

func (this *QColor) SetCmyk(c int, m int, y int, k int) {
	C.QColor_SetCmyk(this.h, (C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k))
}

func (this *QColor) GetCmykF(c *float64, m *float64, y *float64, k *float64) {
	C.QColor_GetCmykF(this.h, (*C.double)(unsafe.Pointer(c)), (*C.double)(unsafe.Pointer(m)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(k)))
}

func (this *QColor) GetCmykF2(c *float64, m *float64, y *float64, k *float64) {
	C.QColor_GetCmykF2(this.h, (*C.double)(unsafe.Pointer(c)), (*C.double)(unsafe.Pointer(m)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(k)))
}

func (this *QColor) SetCmykF(c float64, m float64, y float64, k float64) {
	C.QColor_SetCmykF(this.h, (C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k))
}

func (this *QColor) HslHue() int {
	return (int)(C.QColor_HslHue(this.h))
}

func (this *QColor) HslSaturation() int {
	return (int)(C.QColor_HslSaturation(this.h))
}

func (this *QColor) Lightness() int {
	return (int)(C.QColor_Lightness(this.h))
}

func (this *QColor) HslHueF() float64 {
	return (float64)(C.QColor_HslHueF(this.h))
}

func (this *QColor) HslSaturationF() float64 {
	return (float64)(C.QColor_HslSaturationF(this.h))
}

func (this *QColor) LightnessF() float64 {
	return (float64)(C.QColor_LightnessF(this.h))
}

func (this *QColor) GetHsl(h *int, s *int, l *int) {
	C.QColor_GetHsl(this.h, (*C.int)(unsafe.Pointer(h)), (*C.int)(unsafe.Pointer(s)), (*C.int)(unsafe.Pointer(l)))
}

func (this *QColor) SetHsl(h int, s int, l int) {
	C.QColor_SetHsl(this.h, (C.int)(h), (C.int)(s), (C.int)(l))
}

func (this *QColor) GetHslF(h *float64, s *float64, l *float64) {
	C.QColor_GetHslF(this.h, (*C.double)(unsafe.Pointer(h)), (*C.double)(unsafe.Pointer(s)), (*C.double)(unsafe.Pointer(l)))
}

func (this *QColor) SetHslF(h float64, s float64, l float64) {
	C.QColor_SetHslF(this.h, (C.double)(h), (C.double)(s), (C.double)(l))
}

func (this *QColor) ToRgb() *QColor {
	_ret := C.QColor_ToRgb(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) ToHsv() *QColor {
	_ret := C.QColor_ToHsv(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) ToCmyk() *QColor {
	_ret := C.QColor_ToCmyk(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) ToHsl() *QColor {
	_ret := C.QColor_ToHsl(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) ToExtendedRgb() *QColor {
	_ret := C.QColor_ToExtendedRgb(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) ConvertTo(colorSpec QColor__Spec) *QColor {
	_ret := C.QColor_ConvertTo(this.h, (C.int)(colorSpec))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgb(rgb uint) *QColor {
	_ret := C.QColor_FromRgb((C.uint)(rgb))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgba(rgba uint) *QColor {
	_ret := C.QColor_FromRgba((C.uint)(rgba))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgb2(r int, g int, b int) *QColor {
	_ret := C.QColor_FromRgb2((C.int)(r), (C.int)(g), (C.int)(b))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgbF(r float64, g float64, b float64) *QColor {
	_ret := C.QColor_FromRgbF((C.double)(r), (C.double)(g), (C.double)(b))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgba64(r uint16, g uint16, b uint16) *QColor {
	_ret := C.QColor_FromRgba64((C.uint16_t)(r), (C.uint16_t)(g), (C.uint16_t)(b))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgba64WithRgba(rgba QRgba64) *QColor {
	_ret := C.QColor_FromRgba64WithRgba(rgba.cPointer())
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHsv(h int, s int, v int) *QColor {
	_ret := C.QColor_FromHsv((C.int)(h), (C.int)(s), (C.int)(v))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHsvF(h float64, s float64, v float64) *QColor {
	_ret := C.QColor_FromHsvF((C.double)(h), (C.double)(s), (C.double)(v))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromCmyk(c int, m int, y int, k int) *QColor {
	_ret := C.QColor_FromCmyk((C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromCmykF(c float64, m float64, y float64, k float64) *QColor {
	_ret := C.QColor_FromCmykF((C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHsl(h int, s int, l int) *QColor {
	_ret := C.QColor_FromHsl((C.int)(h), (C.int)(s), (C.int)(l))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHslF(h float64, s float64, l float64) *QColor {
	_ret := C.QColor_FromHslF((C.double)(h), (C.double)(s), (C.double)(l))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Light() *QColor {
	_ret := C.QColor_Light(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Dark() *QColor {
	_ret := C.QColor_Dark(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Lighter() *QColor {
	_ret := C.QColor_Lighter(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Darker() *QColor {
	_ret := C.QColor_Darker(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) OperatorEqual(c *QColor) bool {
	return (bool)(C.QColor_OperatorEqual(this.h, c.cPointer()))
}

func (this *QColor) OperatorNotEqual(c *QColor) bool {
	return (bool)(C.QColor_OperatorNotEqual(this.h, c.cPointer()))
}

func QColor_IsValidColor(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QColor_IsValidColor(name_ms))
}

func (this *QColor) GetRgb4(r *int, g *int, b *int, a *int) {
	C.QColor_GetRgb4(this.h, (*C.int)(unsafe.Pointer(r)), (*C.int)(unsafe.Pointer(g)), (*C.int)(unsafe.Pointer(b)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) SetRgb4(r int, g int, b int, a int) {
	C.QColor_SetRgb4(this.h, (C.int)(r), (C.int)(g), (C.int)(b), (C.int)(a))
}

func (this *QColor) GetRgbF4(r *float64, g *float64, b *float64, a *float64) {
	C.QColor_GetRgbF4(this.h, (*C.double)(unsafe.Pointer(r)), (*C.double)(unsafe.Pointer(g)), (*C.double)(unsafe.Pointer(b)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) SetRgbF4(r float64, g float64, b float64, a float64) {
	C.QColor_SetRgbF4(this.h, (C.double)(r), (C.double)(g), (C.double)(b), (C.double)(a))
}

func (this *QColor) GetHsv4(h *int, s *int, v *int, a *int) {
	C.QColor_GetHsv4(this.h, (*C.int)(unsafe.Pointer(h)), (*C.int)(unsafe.Pointer(s)), (*C.int)(unsafe.Pointer(v)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) SetHsv4(h int, s int, v int, a int) {
	C.QColor_SetHsv4(this.h, (C.int)(h), (C.int)(s), (C.int)(v), (C.int)(a))
}

func (this *QColor) GetHsvF4(h *float64, s *float64, v *float64, a *float64) {
	C.QColor_GetHsvF4(this.h, (*C.double)(unsafe.Pointer(h)), (*C.double)(unsafe.Pointer(s)), (*C.double)(unsafe.Pointer(v)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) SetHsvF4(h float64, s float64, v float64, a float64) {
	C.QColor_SetHsvF4(this.h, (C.double)(h), (C.double)(s), (C.double)(v), (C.double)(a))
}

func (this *QColor) GetCmyk5(c *int, m *int, y *int, k *int, a *int) {
	C.QColor_GetCmyk5(this.h, (*C.int)(unsafe.Pointer(c)), (*C.int)(unsafe.Pointer(m)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(k)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) GetCmyk52(c *int, m *int, y *int, k *int, a *int) {
	C.QColor_GetCmyk52(this.h, (*C.int)(unsafe.Pointer(c)), (*C.int)(unsafe.Pointer(m)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(k)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) SetCmyk5(c int, m int, y int, k int, a int) {
	C.QColor_SetCmyk5(this.h, (C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k), (C.int)(a))
}

func (this *QColor) GetCmykF5(c *float64, m *float64, y *float64, k *float64, a *float64) {
	C.QColor_GetCmykF5(this.h, (*C.double)(unsafe.Pointer(c)), (*C.double)(unsafe.Pointer(m)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(k)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) GetCmykF52(c *float64, m *float64, y *float64, k *float64, a *float64) {
	C.QColor_GetCmykF52(this.h, (*C.double)(unsafe.Pointer(c)), (*C.double)(unsafe.Pointer(m)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(k)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) SetCmykF5(c float64, m float64, y float64, k float64, a float64) {
	C.QColor_SetCmykF5(this.h, (C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k), (C.double)(a))
}

func (this *QColor) GetHsl4(h *int, s *int, l *int, a *int) {
	C.QColor_GetHsl4(this.h, (*C.int)(unsafe.Pointer(h)), (*C.int)(unsafe.Pointer(s)), (*C.int)(unsafe.Pointer(l)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) SetHsl4(h int, s int, l int, a int) {
	C.QColor_SetHsl4(this.h, (C.int)(h), (C.int)(s), (C.int)(l), (C.int)(a))
}

func (this *QColor) GetHslF4(h *float64, s *float64, l *float64, a *float64) {
	C.QColor_GetHslF4(this.h, (*C.double)(unsafe.Pointer(h)), (*C.double)(unsafe.Pointer(s)), (*C.double)(unsafe.Pointer(l)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) SetHslF4(h float64, s float64, l float64, a float64) {
	C.QColor_SetHslF4(this.h, (C.double)(h), (C.double)(s), (C.double)(l), (C.double)(a))
}

func QColor_FromRgb4(r int, g int, b int, a int) *QColor {
	_ret := C.QColor_FromRgb4((C.int)(r), (C.int)(g), (C.int)(b), (C.int)(a))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgbF4(r float64, g float64, b float64, a float64) *QColor {
	_ret := C.QColor_FromRgbF4((C.double)(r), (C.double)(g), (C.double)(b), (C.double)(a))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgba644(r uint16, g uint16, b uint16, a uint16) *QColor {
	_ret := C.QColor_FromRgba644((C.uint16_t)(r), (C.uint16_t)(g), (C.uint16_t)(b), (C.uint16_t)(a))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHsv4(h int, s int, v int, a int) *QColor {
	_ret := C.QColor_FromHsv4((C.int)(h), (C.int)(s), (C.int)(v), (C.int)(a))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHsvF4(h float64, s float64, v float64, a float64) *QColor {
	_ret := C.QColor_FromHsvF4((C.double)(h), (C.double)(s), (C.double)(v), (C.double)(a))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromCmyk5(c int, m int, y int, k int, a int) *QColor {
	_ret := C.QColor_FromCmyk5((C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k), (C.int)(a))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromCmykF5(c float64, m float64, y float64, k float64, a float64) *QColor {
	_ret := C.QColor_FromCmykF5((C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k), (C.double)(a))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHsl4(h int, s int, l int, a int) *QColor {
	_ret := C.QColor_FromHsl4((C.int)(h), (C.int)(s), (C.int)(l), (C.int)(a))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHslF4(h float64, s float64, l float64, a float64) *QColor {
	_ret := C.QColor_FromHslF4((C.double)(h), (C.double)(s), (C.double)(l), (C.double)(a))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Light1(f int) *QColor {
	_ret := C.QColor_Light1(this.h, (C.int)(f))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Dark1(f int) *QColor {
	_ret := C.QColor_Dark1(this.h, (C.int)(f))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Lighter1(f int) *QColor {
	_ret := C.QColor_Lighter1(this.h, (C.int)(f))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Darker1(f int) *QColor {
	_ret := C.QColor_Darker1(this.h, (C.int)(f))
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QColor) Delete() {
	C.QColor_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColor) GoGC() {
	runtime.SetFinalizer(this, func(this *QColor) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

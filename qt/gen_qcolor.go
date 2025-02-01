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
	h *C.QColor
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
	return newQColor((*C.QColor)(h))
}

// NewQColor constructs a new QColor object.
func NewQColor() *QColor {

	return newQColor(C.QColor_new())
}

// NewQColor2 constructs a new QColor object.
func NewQColor2(color GlobalColor) *QColor {

	return newQColor(C.QColor_new2((C.int)(color)))
}

// NewQColor3 constructs a new QColor object.
func NewQColor3(r int, g int, b int) *QColor {

	return newQColor(C.QColor_new3((C.int)(r), (C.int)(g), (C.int)(b)))
}

// NewQColor4 constructs a new QColor object.
func NewQColor4(rgb uint) *QColor {

	return newQColor(C.QColor_new4((C.uint)(rgb)))
}

// NewQColor5 constructs a new QColor object.
func NewQColor5(rgba64 QRgba64) *QColor {

	return newQColor(C.QColor_new5(rgba64.cPointer()))
}

// NewQColor6 constructs a new QColor object.
func NewQColor6(name string) *QColor {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQColor(C.QColor_new6(name_ms))
}

// NewQColor7 constructs a new QColor object.
func NewQColor7(aname string) *QColor {
	aname_Cstring := C.CString(aname)
	defer C.free(unsafe.Pointer(aname_Cstring))

	return newQColor(C.QColor_new7(aname_Cstring))
}

// NewQColor8 constructs a new QColor object.
func NewQColor8(spec QColor__Spec) *QColor {

	return newQColor(C.QColor_new8((C.int)(spec)))
}

// NewQColor9 constructs a new QColor object.
func NewQColor9(color *QColor) *QColor {

	return newQColor(C.QColor_new9(color.cPointer()))
}

// NewQColor10 constructs a new QColor object.
func NewQColor10(spec QColor__Spec, a1 uint16, a2 uint16, a3 uint16, a4 uint16) *QColor {

	return newQColor(C.QColor_new10((C.int)(spec), (C.uint16_t)(a1), (C.uint16_t)(a2), (C.uint16_t)(a3), (C.uint16_t)(a4)))
}

// NewQColor11 constructs a new QColor object.
func NewQColor11(r int, g int, b int, a int) *QColor {

	return newQColor(C.QColor_new11((C.int)(r), (C.int)(g), (C.int)(b), (C.int)(a)))
}

// NewQColor12 constructs a new QColor object.
func NewQColor12(spec QColor__Spec, a1 uint16, a2 uint16, a3 uint16, a4 uint16, a5 uint16) *QColor {

	return newQColor(C.QColor_new12((C.int)(spec), (C.uint16_t)(a1), (C.uint16_t)(a2), (C.uint16_t)(a3), (C.uint16_t)(a4), (C.uint16_t)(a5)))
}

func (this *QColor) OperatorAssign(param1 *QColor) {
	C.QColor_operatorAssign(this.h, param1.cPointer())
}

func (this *QColor) OperatorAssignWithColor(color GlobalColor) {
	C.QColor_operatorAssignWithColor(this.h, (C.int)(color))
}

func (this *QColor) IsValid() bool {
	return (bool)(C.QColor_isValid(this.h))
}

func (this *QColor) Name() string {
	var _ms C.struct_miqt_string = C.QColor_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColor) NameWithFormat(format QColor__NameFormat) string {
	var _ms C.struct_miqt_string = C.QColor_nameWithFormat(this.h, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColor) SetNamedColor(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QColor_setNamedColor(this.h, name_ms)
}

func QColor_ColorNames() []string {
	var _ma C.struct_miqt_array = C.QColor_colorNames()
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
	return (QColor__Spec)(C.QColor_spec(this.h))
}

func (this *QColor) Alpha() int {
	return (int)(C.QColor_alpha(this.h))
}

func (this *QColor) SetAlpha(alpha int) {
	C.QColor_setAlpha(this.h, (C.int)(alpha))
}

func (this *QColor) AlphaF() float64 {
	return (float64)(C.QColor_alphaF(this.h))
}

func (this *QColor) SetAlphaF(alpha float64) {
	C.QColor_setAlphaF(this.h, (C.double)(alpha))
}

func (this *QColor) Red() int {
	return (int)(C.QColor_red(this.h))
}

func (this *QColor) Green() int {
	return (int)(C.QColor_green(this.h))
}

func (this *QColor) Blue() int {
	return (int)(C.QColor_blue(this.h))
}

func (this *QColor) SetRed(red int) {
	C.QColor_setRed(this.h, (C.int)(red))
}

func (this *QColor) SetGreen(green int) {
	C.QColor_setGreen(this.h, (C.int)(green))
}

func (this *QColor) SetBlue(blue int) {
	C.QColor_setBlue(this.h, (C.int)(blue))
}

func (this *QColor) RedF() float64 {
	return (float64)(C.QColor_redF(this.h))
}

func (this *QColor) GreenF() float64 {
	return (float64)(C.QColor_greenF(this.h))
}

func (this *QColor) BlueF() float64 {
	return (float64)(C.QColor_blueF(this.h))
}

func (this *QColor) SetRedF(red float64) {
	C.QColor_setRedF(this.h, (C.double)(red))
}

func (this *QColor) SetGreenF(green float64) {
	C.QColor_setGreenF(this.h, (C.double)(green))
}

func (this *QColor) SetBlueF(blue float64) {
	C.QColor_setBlueF(this.h, (C.double)(blue))
}

func (this *QColor) GetRgb(r *int, g *int, b *int) {
	C.QColor_getRgb(this.h, (*C.int)(unsafe.Pointer(r)), (*C.int)(unsafe.Pointer(g)), (*C.int)(unsafe.Pointer(b)))
}

func (this *QColor) SetRgb(r int, g int, b int) {
	C.QColor_setRgb(this.h, (C.int)(r), (C.int)(g), (C.int)(b))
}

func (this *QColor) GetRgbF(r *float64, g *float64, b *float64) {
	C.QColor_getRgbF(this.h, (*C.double)(unsafe.Pointer(r)), (*C.double)(unsafe.Pointer(g)), (*C.double)(unsafe.Pointer(b)))
}

func (this *QColor) SetRgbF(r float64, g float64, b float64) {
	C.QColor_setRgbF(this.h, (C.double)(r), (C.double)(g), (C.double)(b))
}

func (this *QColor) Rgba64() *QRgba64 {
	_goptr := newQRgba64(C.QColor_rgba64(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) SetRgba64(rgba QRgba64) {
	C.QColor_setRgba64(this.h, rgba.cPointer())
}

func (this *QColor) Rgba() uint {
	return (uint)(C.QColor_rgba(this.h))
}

func (this *QColor) SetRgba(rgba uint) {
	C.QColor_setRgba(this.h, (C.uint)(rgba))
}

func (this *QColor) Rgb() uint {
	return (uint)(C.QColor_rgb(this.h))
}

func (this *QColor) SetRgbWithRgb(rgb uint) {
	C.QColor_setRgbWithRgb(this.h, (C.uint)(rgb))
}

func (this *QColor) Hue() int {
	return (int)(C.QColor_hue(this.h))
}

func (this *QColor) Saturation() int {
	return (int)(C.QColor_saturation(this.h))
}

func (this *QColor) HsvHue() int {
	return (int)(C.QColor_hsvHue(this.h))
}

func (this *QColor) HsvSaturation() int {
	return (int)(C.QColor_hsvSaturation(this.h))
}

func (this *QColor) Value() int {
	return (int)(C.QColor_value(this.h))
}

func (this *QColor) HueF() float64 {
	return (float64)(C.QColor_hueF(this.h))
}

func (this *QColor) SaturationF() float64 {
	return (float64)(C.QColor_saturationF(this.h))
}

func (this *QColor) HsvHueF() float64 {
	return (float64)(C.QColor_hsvHueF(this.h))
}

func (this *QColor) HsvSaturationF() float64 {
	return (float64)(C.QColor_hsvSaturationF(this.h))
}

func (this *QColor) ValueF() float64 {
	return (float64)(C.QColor_valueF(this.h))
}

func (this *QColor) GetHsv(h *int, s *int, v *int) {
	C.QColor_getHsv(this.h, (*C.int)(unsafe.Pointer(h)), (*C.int)(unsafe.Pointer(s)), (*C.int)(unsafe.Pointer(v)))
}

func (this *QColor) SetHsv(h int, s int, v int) {
	C.QColor_setHsv(this.h, (C.int)(h), (C.int)(s), (C.int)(v))
}

func (this *QColor) GetHsvF(h *float64, s *float64, v *float64) {
	C.QColor_getHsvF(this.h, (*C.double)(unsafe.Pointer(h)), (*C.double)(unsafe.Pointer(s)), (*C.double)(unsafe.Pointer(v)))
}

func (this *QColor) SetHsvF(h float64, s float64, v float64) {
	C.QColor_setHsvF(this.h, (C.double)(h), (C.double)(s), (C.double)(v))
}

func (this *QColor) Cyan() int {
	return (int)(C.QColor_cyan(this.h))
}

func (this *QColor) Magenta() int {
	return (int)(C.QColor_magenta(this.h))
}

func (this *QColor) Yellow() int {
	return (int)(C.QColor_yellow(this.h))
}

func (this *QColor) Black() int {
	return (int)(C.QColor_black(this.h))
}

func (this *QColor) CyanF() float64 {
	return (float64)(C.QColor_cyanF(this.h))
}

func (this *QColor) MagentaF() float64 {
	return (float64)(C.QColor_magentaF(this.h))
}

func (this *QColor) YellowF() float64 {
	return (float64)(C.QColor_yellowF(this.h))
}

func (this *QColor) BlackF() float64 {
	return (float64)(C.QColor_blackF(this.h))
}

func (this *QColor) GetCmyk(c *int, m *int, y *int, k *int) {
	C.QColor_getCmyk(this.h, (*C.int)(unsafe.Pointer(c)), (*C.int)(unsafe.Pointer(m)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(k)))
}

func (this *QColor) GetCmyk2(c *int, m *int, y *int, k *int) {
	C.QColor_getCmyk2(this.h, (*C.int)(unsafe.Pointer(c)), (*C.int)(unsafe.Pointer(m)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(k)))
}

func (this *QColor) SetCmyk(c int, m int, y int, k int) {
	C.QColor_setCmyk(this.h, (C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k))
}

func (this *QColor) GetCmykF(c *float64, m *float64, y *float64, k *float64) {
	C.QColor_getCmykF(this.h, (*C.double)(unsafe.Pointer(c)), (*C.double)(unsafe.Pointer(m)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(k)))
}

func (this *QColor) GetCmykF2(c *float64, m *float64, y *float64, k *float64) {
	C.QColor_getCmykF2(this.h, (*C.double)(unsafe.Pointer(c)), (*C.double)(unsafe.Pointer(m)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(k)))
}

func (this *QColor) SetCmykF(c float64, m float64, y float64, k float64) {
	C.QColor_setCmykF(this.h, (C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k))
}

func (this *QColor) HslHue() int {
	return (int)(C.QColor_hslHue(this.h))
}

func (this *QColor) HslSaturation() int {
	return (int)(C.QColor_hslSaturation(this.h))
}

func (this *QColor) Lightness() int {
	return (int)(C.QColor_lightness(this.h))
}

func (this *QColor) HslHueF() float64 {
	return (float64)(C.QColor_hslHueF(this.h))
}

func (this *QColor) HslSaturationF() float64 {
	return (float64)(C.QColor_hslSaturationF(this.h))
}

func (this *QColor) LightnessF() float64 {
	return (float64)(C.QColor_lightnessF(this.h))
}

func (this *QColor) GetHsl(h *int, s *int, l *int) {
	C.QColor_getHsl(this.h, (*C.int)(unsafe.Pointer(h)), (*C.int)(unsafe.Pointer(s)), (*C.int)(unsafe.Pointer(l)))
}

func (this *QColor) SetHsl(h int, s int, l int) {
	C.QColor_setHsl(this.h, (C.int)(h), (C.int)(s), (C.int)(l))
}

func (this *QColor) GetHslF(h *float64, s *float64, l *float64) {
	C.QColor_getHslF(this.h, (*C.double)(unsafe.Pointer(h)), (*C.double)(unsafe.Pointer(s)), (*C.double)(unsafe.Pointer(l)))
}

func (this *QColor) SetHslF(h float64, s float64, l float64) {
	C.QColor_setHslF(this.h, (C.double)(h), (C.double)(s), (C.double)(l))
}

func (this *QColor) ToRgb() *QColor {
	_goptr := newQColor(C.QColor_toRgb(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) ToHsv() *QColor {
	_goptr := newQColor(C.QColor_toHsv(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) ToCmyk() *QColor {
	_goptr := newQColor(C.QColor_toCmyk(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) ToHsl() *QColor {
	_goptr := newQColor(C.QColor_toHsl(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) ToExtendedRgb() *QColor {
	_goptr := newQColor(C.QColor_toExtendedRgb(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) ConvertTo(colorSpec QColor__Spec) *QColor {
	_goptr := newQColor(C.QColor_convertTo(this.h, (C.int)(colorSpec)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgb(rgb uint) *QColor {
	_goptr := newQColor(C.QColor_fromRgb((C.uint)(rgb)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgba(rgba uint) *QColor {
	_goptr := newQColor(C.QColor_fromRgba((C.uint)(rgba)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgb2(r int, g int, b int) *QColor {
	_goptr := newQColor(C.QColor_fromRgb2((C.int)(r), (C.int)(g), (C.int)(b)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgbF(r float64, g float64, b float64) *QColor {
	_goptr := newQColor(C.QColor_fromRgbF((C.double)(r), (C.double)(g), (C.double)(b)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgba64(r uint16, g uint16, b uint16) *QColor {
	_goptr := newQColor(C.QColor_fromRgba64((C.uint16_t)(r), (C.uint16_t)(g), (C.uint16_t)(b)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgba64WithRgba(rgba QRgba64) *QColor {
	_goptr := newQColor(C.QColor_fromRgba64WithRgba(rgba.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHsv(h int, s int, v int) *QColor {
	_goptr := newQColor(C.QColor_fromHsv((C.int)(h), (C.int)(s), (C.int)(v)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHsvF(h float64, s float64, v float64) *QColor {
	_goptr := newQColor(C.QColor_fromHsvF((C.double)(h), (C.double)(s), (C.double)(v)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromCmyk(c int, m int, y int, k int) *QColor {
	_goptr := newQColor(C.QColor_fromCmyk((C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromCmykF(c float64, m float64, y float64, k float64) *QColor {
	_goptr := newQColor(C.QColor_fromCmykF((C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHsl(h int, s int, l int) *QColor {
	_goptr := newQColor(C.QColor_fromHsl((C.int)(h), (C.int)(s), (C.int)(l)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHslF(h float64, s float64, l float64) *QColor {
	_goptr := newQColor(C.QColor_fromHslF((C.double)(h), (C.double)(s), (C.double)(l)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Light() *QColor {
	_goptr := newQColor(C.QColor_light(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Dark() *QColor {
	_goptr := newQColor(C.QColor_dark(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Lighter() *QColor {
	_goptr := newQColor(C.QColor_lighter(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Darker() *QColor {
	_goptr := newQColor(C.QColor_darker(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) OperatorEqual(c *QColor) bool {
	return (bool)(C.QColor_operatorEqual(this.h, c.cPointer()))
}

func (this *QColor) OperatorNotEqual(c *QColor) bool {
	return (bool)(C.QColor_operatorNotEqual(this.h, c.cPointer()))
}

func (this *QColor) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QColor_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_IsValidColor(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QColor_isValidColor(name_ms))
}

func (this *QColor) GetRgb4(r *int, g *int, b *int, a *int) {
	C.QColor_getRgb4(this.h, (*C.int)(unsafe.Pointer(r)), (*C.int)(unsafe.Pointer(g)), (*C.int)(unsafe.Pointer(b)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) SetRgb4(r int, g int, b int, a int) {
	C.QColor_setRgb4(this.h, (C.int)(r), (C.int)(g), (C.int)(b), (C.int)(a))
}

func (this *QColor) GetRgbF4(r *float64, g *float64, b *float64, a *float64) {
	C.QColor_getRgbF4(this.h, (*C.double)(unsafe.Pointer(r)), (*C.double)(unsafe.Pointer(g)), (*C.double)(unsafe.Pointer(b)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) SetRgbF4(r float64, g float64, b float64, a float64) {
	C.QColor_setRgbF4(this.h, (C.double)(r), (C.double)(g), (C.double)(b), (C.double)(a))
}

func (this *QColor) GetHsv4(h *int, s *int, v *int, a *int) {
	C.QColor_getHsv4(this.h, (*C.int)(unsafe.Pointer(h)), (*C.int)(unsafe.Pointer(s)), (*C.int)(unsafe.Pointer(v)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) SetHsv4(h int, s int, v int, a int) {
	C.QColor_setHsv4(this.h, (C.int)(h), (C.int)(s), (C.int)(v), (C.int)(a))
}

func (this *QColor) GetHsvF4(h *float64, s *float64, v *float64, a *float64) {
	C.QColor_getHsvF4(this.h, (*C.double)(unsafe.Pointer(h)), (*C.double)(unsafe.Pointer(s)), (*C.double)(unsafe.Pointer(v)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) SetHsvF4(h float64, s float64, v float64, a float64) {
	C.QColor_setHsvF4(this.h, (C.double)(h), (C.double)(s), (C.double)(v), (C.double)(a))
}

func (this *QColor) GetCmyk5(c *int, m *int, y *int, k *int, a *int) {
	C.QColor_getCmyk5(this.h, (*C.int)(unsafe.Pointer(c)), (*C.int)(unsafe.Pointer(m)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(k)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) GetCmyk52(c *int, m *int, y *int, k *int, a *int) {
	C.QColor_getCmyk52(this.h, (*C.int)(unsafe.Pointer(c)), (*C.int)(unsafe.Pointer(m)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(k)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) SetCmyk5(c int, m int, y int, k int, a int) {
	C.QColor_setCmyk5(this.h, (C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k), (C.int)(a))
}

func (this *QColor) GetCmykF5(c *float64, m *float64, y *float64, k *float64, a *float64) {
	C.QColor_getCmykF5(this.h, (*C.double)(unsafe.Pointer(c)), (*C.double)(unsafe.Pointer(m)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(k)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) GetCmykF52(c *float64, m *float64, y *float64, k *float64, a *float64) {
	C.QColor_getCmykF52(this.h, (*C.double)(unsafe.Pointer(c)), (*C.double)(unsafe.Pointer(m)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(k)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) SetCmykF5(c float64, m float64, y float64, k float64, a float64) {
	C.QColor_setCmykF5(this.h, (C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k), (C.double)(a))
}

func (this *QColor) GetHsl4(h *int, s *int, l *int, a *int) {
	C.QColor_getHsl4(this.h, (*C.int)(unsafe.Pointer(h)), (*C.int)(unsafe.Pointer(s)), (*C.int)(unsafe.Pointer(l)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) SetHsl4(h int, s int, l int, a int) {
	C.QColor_setHsl4(this.h, (C.int)(h), (C.int)(s), (C.int)(l), (C.int)(a))
}

func (this *QColor) GetHslF4(h *float64, s *float64, l *float64, a *float64) {
	C.QColor_getHslF4(this.h, (*C.double)(unsafe.Pointer(h)), (*C.double)(unsafe.Pointer(s)), (*C.double)(unsafe.Pointer(l)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) SetHslF4(h float64, s float64, l float64, a float64) {
	C.QColor_setHslF4(this.h, (C.double)(h), (C.double)(s), (C.double)(l), (C.double)(a))
}

func QColor_FromRgb4(r int, g int, b int, a int) *QColor {
	_goptr := newQColor(C.QColor_fromRgb4((C.int)(r), (C.int)(g), (C.int)(b), (C.int)(a)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgbF4(r float64, g float64, b float64, a float64) *QColor {
	_goptr := newQColor(C.QColor_fromRgbF4((C.double)(r), (C.double)(g), (C.double)(b), (C.double)(a)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromRgba644(r uint16, g uint16, b uint16, a uint16) *QColor {
	_goptr := newQColor(C.QColor_fromRgba644((C.uint16_t)(r), (C.uint16_t)(g), (C.uint16_t)(b), (C.uint16_t)(a)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHsv4(h int, s int, v int, a int) *QColor {
	_goptr := newQColor(C.QColor_fromHsv4((C.int)(h), (C.int)(s), (C.int)(v), (C.int)(a)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHsvF4(h float64, s float64, v float64, a float64) *QColor {
	_goptr := newQColor(C.QColor_fromHsvF4((C.double)(h), (C.double)(s), (C.double)(v), (C.double)(a)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromCmyk5(c int, m int, y int, k int, a int) *QColor {
	_goptr := newQColor(C.QColor_fromCmyk5((C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k), (C.int)(a)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromCmykF5(c float64, m float64, y float64, k float64, a float64) *QColor {
	_goptr := newQColor(C.QColor_fromCmykF5((C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k), (C.double)(a)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHsl4(h int, s int, l int, a int) *QColor {
	_goptr := newQColor(C.QColor_fromHsl4((C.int)(h), (C.int)(s), (C.int)(l), (C.int)(a)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QColor_FromHslF4(h float64, s float64, l float64, a float64) *QColor {
	_goptr := newQColor(C.QColor_fromHslF4((C.double)(h), (C.double)(s), (C.double)(l), (C.double)(a)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Light1(f int) *QColor {
	_goptr := newQColor(C.QColor_light1(this.h, (C.int)(f)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Dark1(f int) *QColor {
	_goptr := newQColor(C.QColor_dark1(this.h, (C.int)(f)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Lighter1(f int) *QColor {
	_goptr := newQColor(C.QColor_lighter1(this.h, (C.int)(f)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColor) Darker1(f int) *QColor {
	_goptr := newQColor(C.QColor_darker1(this.h, (C.int)(f)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QColor) Delete() {
	C.QColor_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColor) GoGC() {
	runtime.SetFinalizer(this, func(this *QColor) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

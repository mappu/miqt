package qt

/*

#include "gen_qcolor.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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

// QColor is a plain Go struct with the same memory layout as the
// Qt class. The zero value is not always the same as the default constructor;
// use NewQColor().
type QColor struct {
	cspec int32
	a1    uint16
	a2    uint16
	a3    uint16
	a4    uint16
	a5    uint16
	pad   uint16
}

func (this *QColor) cPointer() *C.QColor {
	return (*C.QColor)(unsafe.Pointer(this))
}

func (this *QColor) UnsafePointer() unsafe.Pointer {
	return unsafe.Pointer(this)
}

// newQColor views C++ memory as this type, without copying it.
func newQColor(h *C.QColor) *QColor {
	return (*QColor)(unsafe.Pointer(h))
}

// UnsafeNewQColor views C++ memory as this type, without copying it.
func UnsafeNewQColor(h unsafe.Pointer) *QColor {
	return (*QColor)(h)
}

// NewQColor constructs a new QColor object.
func NewQColor() QColor {

	return libmiqt.ValueCast[QColor](C.QColor_new())
}

// NewQColor2 constructs a new QColor object.
func NewQColor2(color GlobalColor) QColor {

	return libmiqt.ValueCast[QColor](C.QColor_new2((C.int)(color)))
}

// NewQColor3 constructs a new QColor object.
func NewQColor3(r int, g int, b int) QColor {

	return libmiqt.ValueCast[QColor](C.QColor_new3((C.int)(r), (C.int)(g), (C.int)(b)))
}

// NewQColor4 constructs a new QColor object.
func NewQColor4(rgb uint) QColor {

	return libmiqt.ValueCast[QColor](C.QColor_new4((C.uint)(rgb)))
}

// NewQColor5 constructs a new QColor object.
func NewQColor5(rgba64 QRgba64) QColor {

	return libmiqt.ValueCast[QColor](C.QColor_new5(libmiqt.ValueCast[C.struct_miqt_qrgba64](rgba64)))
}

// NewQColor6 constructs a new QColor object.
func NewQColor6(name string) QColor {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return libmiqt.ValueCast[QColor](C.QColor_new6(name_ms))
}

// NewQColor7 constructs a new QColor object.
func NewQColor7(aname string) QColor {
	aname_Cstring := C.CString(aname)
	defer C.free(unsafe.Pointer(aname_Cstring))

	return libmiqt.ValueCast[QColor](C.QColor_new7(aname_Cstring))
}

// NewQColor8 constructs a new QColor object.
func NewQColor8(spec QColor__Spec) QColor {

	return libmiqt.ValueCast[QColor](C.QColor_new8((C.int)(spec)))
}

// NewQColor9 constructs a new QColor object.
func NewQColor9(color QColor) QColor {

	return libmiqt.ValueCast[QColor](C.QColor_new9(libmiqt.ValueCast[C.struct_miqt_qcolor](color)))
}

// NewQColor10 constructs a new QColor object.
func NewQColor10(spec QColor__Spec, a1 uint16, a2 uint16, a3 uint16, a4 uint16) QColor {

	return libmiqt.ValueCast[QColor](C.QColor_new10((C.int)(spec), (C.ushort)(a1), (C.ushort)(a2), (C.ushort)(a3), (C.ushort)(a4)))
}

// NewQColor11 constructs a new QColor object.
func NewQColor11(r int, g int, b int, a int) QColor {

	return libmiqt.ValueCast[QColor](C.QColor_new11((C.int)(r), (C.int)(g), (C.int)(b), (C.int)(a)))
}

// NewQColor12 constructs a new QColor object.
func NewQColor12(spec QColor__Spec, a1 uint16, a2 uint16, a3 uint16, a4 uint16, a5 uint16) QColor {

	return libmiqt.ValueCast[QColor](C.QColor_new12((C.int)(spec), (C.ushort)(a1), (C.ushort)(a2), (C.ushort)(a3), (C.ushort)(a4), (C.ushort)(a5)))
}

func (this *QColor) OperatorAssign(param1 QColor) {
	C.QColor_operatorAssign(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qcolor](param1))
}

func (this *QColor) OperatorAssignWithColor(color GlobalColor) {
	C.QColor_operatorAssignWithColor(this.cPointer(), (C.int)(color))
}

func (this QColor) IsValid() bool {
	return (bool)(C.QColor_isValid(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Name() string {
	var _ms C.struct_miqt_string = C.QColor_name(libmiqt.ValueCast[C.struct_miqt_qcolor](this))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this QColor) NameWithFormat(format QColor__NameFormat) string {
	var _ms C.struct_miqt_string = C.QColor_nameWithFormat(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColor) SetNamedColor(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QColor_setNamedColor(this.cPointer(), name_ms)
}

func QColor_ColorNames() []string {
	var _ma C.struct_miqt_array = C.QColor_colorNames()
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this QColor) Spec() QColor__Spec {
	return (QColor__Spec)(C.QColor_spec(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Alpha() int {
	return (int)(C.QColor_alpha(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this *QColor) SetAlpha(alpha int) {
	C.QColor_setAlpha(this.cPointer(), (C.int)(alpha))
}

func (this QColor) AlphaF() float64 {
	return (float64)(C.QColor_alphaF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this *QColor) SetAlphaF(alpha float64) {
	C.QColor_setAlphaF(this.cPointer(), (C.double)(alpha))
}

func (this QColor) Red() int {
	return (int)(C.QColor_red(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Green() int {
	return (int)(C.QColor_green(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Blue() int {
	return (int)(C.QColor_blue(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this *QColor) SetRed(red int) {
	C.QColor_setRed(this.cPointer(), (C.int)(red))
}

func (this *QColor) SetGreen(green int) {
	C.QColor_setGreen(this.cPointer(), (C.int)(green))
}

func (this *QColor) SetBlue(blue int) {
	C.QColor_setBlue(this.cPointer(), (C.int)(blue))
}

func (this QColor) RedF() float64 {
	return (float64)(C.QColor_redF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) GreenF() float64 {
	return (float64)(C.QColor_greenF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) BlueF() float64 {
	return (float64)(C.QColor_blueF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this *QColor) SetRedF(red float64) {
	C.QColor_setRedF(this.cPointer(), (C.double)(red))
}

func (this *QColor) SetGreenF(green float64) {
	C.QColor_setGreenF(this.cPointer(), (C.double)(green))
}

func (this *QColor) SetBlueF(blue float64) {
	C.QColor_setBlueF(this.cPointer(), (C.double)(blue))
}

func (this QColor) GetRgb(r *int, g *int, b *int) {
	C.QColor_getRgb(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.int)(unsafe.Pointer(r)), (*C.int)(unsafe.Pointer(g)), (*C.int)(unsafe.Pointer(b)))
}

func (this *QColor) SetRgb(r int, g int, b int) {
	C.QColor_setRgb(this.cPointer(), (C.int)(r), (C.int)(g), (C.int)(b))
}

func (this QColor) GetRgbF(r *float64, g *float64, b *float64) {
	C.QColor_getRgbF(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.double)(unsafe.Pointer(r)), (*C.double)(unsafe.Pointer(g)), (*C.double)(unsafe.Pointer(b)))
}

func (this *QColor) SetRgbF(r float64, g float64, b float64) {
	C.QColor_setRgbF(this.cPointer(), (C.double)(r), (C.double)(g), (C.double)(b))
}

func (this QColor) Rgba64() QRgba64 {
	return libmiqt.ValueCast[QRgba64](C.QColor_rgba64(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this *QColor) SetRgba64(rgba QRgba64) {
	C.QColor_setRgba64(this.cPointer(), libmiqt.ValueCast[C.struct_miqt_qrgba64](rgba))
}

func (this QColor) Rgba() uint {
	return (uint)(C.QColor_rgba(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this *QColor) SetRgba(rgba uint) {
	C.QColor_setRgba(this.cPointer(), (C.uint)(rgba))
}

func (this QColor) Rgb() uint {
	return (uint)(C.QColor_rgb(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this *QColor) SetRgbWithRgb(rgb uint) {
	C.QColor_setRgbWithRgb(this.cPointer(), (C.uint)(rgb))
}

func (this QColor) Hue() int {
	return (int)(C.QColor_hue(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Saturation() int {
	return (int)(C.QColor_saturation(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) HsvHue() int {
	return (int)(C.QColor_hsvHue(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) HsvSaturation() int {
	return (int)(C.QColor_hsvSaturation(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Value() int {
	return (int)(C.QColor_value(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) HueF() float64 {
	return (float64)(C.QColor_hueF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) SaturationF() float64 {
	return (float64)(C.QColor_saturationF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) HsvHueF() float64 {
	return (float64)(C.QColor_hsvHueF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) HsvSaturationF() float64 {
	return (float64)(C.QColor_hsvSaturationF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) ValueF() float64 {
	return (float64)(C.QColor_valueF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) GetHsv(h *int, s *int, v *int) {
	C.QColor_getHsv(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.int)(unsafe.Pointer(h)), (*C.int)(unsafe.Pointer(s)), (*C.int)(unsafe.Pointer(v)))
}

func (this *QColor) SetHsv(h int, s int, v int) {
	C.QColor_setHsv(this.cPointer(), (C.int)(h), (C.int)(s), (C.int)(v))
}

func (this QColor) GetHsvF(h *float64, s *float64, v *float64) {
	C.QColor_getHsvF(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.double)(unsafe.Pointer(h)), (*C.double)(unsafe.Pointer(s)), (*C.double)(unsafe.Pointer(v)))
}

func (this *QColor) SetHsvF(h float64, s float64, v float64) {
	C.QColor_setHsvF(this.cPointer(), (C.double)(h), (C.double)(s), (C.double)(v))
}

func (this QColor) Cyan() int {
	return (int)(C.QColor_cyan(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Magenta() int {
	return (int)(C.QColor_magenta(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Yellow() int {
	return (int)(C.QColor_yellow(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Black() int {
	return (int)(C.QColor_black(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) CyanF() float64 {
	return (float64)(C.QColor_cyanF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) MagentaF() float64 {
	return (float64)(C.QColor_magentaF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) YellowF() float64 {
	return (float64)(C.QColor_yellowF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) BlackF() float64 {
	return (float64)(C.QColor_blackF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this *QColor) GetCmyk(c *int, m *int, y *int, k *int) {
	C.QColor_getCmyk(this.cPointer(), (*C.int)(unsafe.Pointer(c)), (*C.int)(unsafe.Pointer(m)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(k)))
}

func (this QColor) GetCmyk2(c *int, m *int, y *int, k *int) {
	C.QColor_getCmyk2(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.int)(unsafe.Pointer(c)), (*C.int)(unsafe.Pointer(m)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(k)))
}

func (this *QColor) SetCmyk(c int, m int, y int, k int) {
	C.QColor_setCmyk(this.cPointer(), (C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k))
}

func (this *QColor) GetCmykF(c *float64, m *float64, y *float64, k *float64) {
	C.QColor_getCmykF(this.cPointer(), (*C.double)(unsafe.Pointer(c)), (*C.double)(unsafe.Pointer(m)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(k)))
}

func (this QColor) GetCmykF2(c *float64, m *float64, y *float64, k *float64) {
	C.QColor_getCmykF2(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.double)(unsafe.Pointer(c)), (*C.double)(unsafe.Pointer(m)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(k)))
}

func (this *QColor) SetCmykF(c float64, m float64, y float64, k float64) {
	C.QColor_setCmykF(this.cPointer(), (C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k))
}

func (this QColor) HslHue() int {
	return (int)(C.QColor_hslHue(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) HslSaturation() int {
	return (int)(C.QColor_hslSaturation(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Lightness() int {
	return (int)(C.QColor_lightness(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) HslHueF() float64 {
	return (float64)(C.QColor_hslHueF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) HslSaturationF() float64 {
	return (float64)(C.QColor_hslSaturationF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) LightnessF() float64 {
	return (float64)(C.QColor_lightnessF(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) GetHsl(h *int, s *int, l *int) {
	C.QColor_getHsl(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.int)(unsafe.Pointer(h)), (*C.int)(unsafe.Pointer(s)), (*C.int)(unsafe.Pointer(l)))
}

func (this *QColor) SetHsl(h int, s int, l int) {
	C.QColor_setHsl(this.cPointer(), (C.int)(h), (C.int)(s), (C.int)(l))
}

func (this QColor) GetHslF(h *float64, s *float64, l *float64) {
	C.QColor_getHslF(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.double)(unsafe.Pointer(h)), (*C.double)(unsafe.Pointer(s)), (*C.double)(unsafe.Pointer(l)))
}

func (this *QColor) SetHslF(h float64, s float64, l float64) {
	C.QColor_setHslF(this.cPointer(), (C.double)(h), (C.double)(s), (C.double)(l))
}

func (this QColor) ToRgb() QColor {
	return libmiqt.ValueCast[QColor](C.QColor_toRgb(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) ToHsv() QColor {
	return libmiqt.ValueCast[QColor](C.QColor_toHsv(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) ToCmyk() QColor {
	return libmiqt.ValueCast[QColor](C.QColor_toCmyk(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) ToHsl() QColor {
	return libmiqt.ValueCast[QColor](C.QColor_toHsl(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) ToExtendedRgb() QColor {
	return libmiqt.ValueCast[QColor](C.QColor_toExtendedRgb(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) ConvertTo(colorSpec QColor__Spec) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_convertTo(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (C.int)(colorSpec)))
}

func QColor_FromRgb(rgb uint) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromRgb((C.uint)(rgb)))
}

func QColor_FromRgba(rgba uint) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromRgba((C.uint)(rgba)))
}

func QColor_FromRgb2(r int, g int, b int) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromRgb2((C.int)(r), (C.int)(g), (C.int)(b)))
}

func QColor_FromRgbF(r float64, g float64, b float64) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromRgbF((C.double)(r), (C.double)(g), (C.double)(b)))
}

func QColor_FromRgba64(r uint16, g uint16, b uint16) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromRgba64((C.ushort)(r), (C.ushort)(g), (C.ushort)(b)))
}

func QColor_FromRgba64WithRgba(rgba QRgba64) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromRgba64WithRgba(libmiqt.ValueCast[C.struct_miqt_qrgba64](rgba)))
}

func QColor_FromHsv(h int, s int, v int) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromHsv((C.int)(h), (C.int)(s), (C.int)(v)))
}

func QColor_FromHsvF(h float64, s float64, v float64) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromHsvF((C.double)(h), (C.double)(s), (C.double)(v)))
}

func QColor_FromCmyk(c int, m int, y int, k int) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromCmyk((C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k)))
}

func QColor_FromCmykF(c float64, m float64, y float64, k float64) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromCmykF((C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k)))
}

func QColor_FromHsl(h int, s int, l int) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromHsl((C.int)(h), (C.int)(s), (C.int)(l)))
}

func QColor_FromHslF(h float64, s float64, l float64) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromHslF((C.double)(h), (C.double)(s), (C.double)(l)))
}

func (this QColor) Light() QColor {
	return libmiqt.ValueCast[QColor](C.QColor_light(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Dark() QColor {
	return libmiqt.ValueCast[QColor](C.QColor_dark(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Lighter() QColor {
	return libmiqt.ValueCast[QColor](C.QColor_lighter(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) Darker() QColor {
	return libmiqt.ValueCast[QColor](C.QColor_darker(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
}

func (this QColor) OperatorEqual(c QColor) bool {
	return (bool)(C.QColor_operatorEqual(libmiqt.ValueCast[C.struct_miqt_qcolor](this), libmiqt.ValueCast[C.struct_miqt_qcolor](c)))
}

func (this QColor) OperatorNotEqual(c QColor) bool {
	return (bool)(C.QColor_operatorNotEqual(libmiqt.ValueCast[C.struct_miqt_qcolor](this), libmiqt.ValueCast[C.struct_miqt_qcolor](c)))
}

func (this QColor) ToQVariant() *QVariant {
	_goptr := newQVariant(C.QColor_ToQVariant(libmiqt.ValueCast[C.struct_miqt_qcolor](this)))
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

func (this QColor) GetRgb2(r *int, g *int, b *int, a *int) {
	C.QColor_getRgb2(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.int)(unsafe.Pointer(r)), (*C.int)(unsafe.Pointer(g)), (*C.int)(unsafe.Pointer(b)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) SetRgb2(r int, g int, b int, a int) {
	C.QColor_setRgb2(this.cPointer(), (C.int)(r), (C.int)(g), (C.int)(b), (C.int)(a))
}

func (this QColor) GetRgbF2(r *float64, g *float64, b *float64, a *float64) {
	C.QColor_getRgbF2(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.double)(unsafe.Pointer(r)), (*C.double)(unsafe.Pointer(g)), (*C.double)(unsafe.Pointer(b)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) SetRgbF2(r float64, g float64, b float64, a float64) {
	C.QColor_setRgbF2(this.cPointer(), (C.double)(r), (C.double)(g), (C.double)(b), (C.double)(a))
}

func (this QColor) GetHsv2(h *int, s *int, v *int, a *int) {
	C.QColor_getHsv2(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.int)(unsafe.Pointer(h)), (*C.int)(unsafe.Pointer(s)), (*C.int)(unsafe.Pointer(v)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) SetHsv2(h int, s int, v int, a int) {
	C.QColor_setHsv2(this.cPointer(), (C.int)(h), (C.int)(s), (C.int)(v), (C.int)(a))
}

func (this QColor) GetHsvF2(h *float64, s *float64, v *float64, a *float64) {
	C.QColor_getHsvF2(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.double)(unsafe.Pointer(h)), (*C.double)(unsafe.Pointer(s)), (*C.double)(unsafe.Pointer(v)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) SetHsvF2(h float64, s float64, v float64, a float64) {
	C.QColor_setHsvF2(this.cPointer(), (C.double)(h), (C.double)(s), (C.double)(v), (C.double)(a))
}

func (this *QColor) GetCmyk3(c *int, m *int, y *int, k *int, a *int) {
	C.QColor_getCmyk3(this.cPointer(), (*C.int)(unsafe.Pointer(c)), (*C.int)(unsafe.Pointer(m)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(k)), (*C.int)(unsafe.Pointer(a)))
}

func (this QColor) GetCmyk4(c *int, m *int, y *int, k *int, a *int) {
	C.QColor_getCmyk4(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.int)(unsafe.Pointer(c)), (*C.int)(unsafe.Pointer(m)), (*C.int)(unsafe.Pointer(y)), (*C.int)(unsafe.Pointer(k)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) SetCmyk2(c int, m int, y int, k int, a int) {
	C.QColor_setCmyk2(this.cPointer(), (C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k), (C.int)(a))
}

func (this *QColor) GetCmykF3(c *float64, m *float64, y *float64, k *float64, a *float64) {
	C.QColor_getCmykF3(this.cPointer(), (*C.double)(unsafe.Pointer(c)), (*C.double)(unsafe.Pointer(m)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(k)), (*C.double)(unsafe.Pointer(a)))
}

func (this QColor) GetCmykF4(c *float64, m *float64, y *float64, k *float64, a *float64) {
	C.QColor_getCmykF4(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.double)(unsafe.Pointer(c)), (*C.double)(unsafe.Pointer(m)), (*C.double)(unsafe.Pointer(y)), (*C.double)(unsafe.Pointer(k)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) SetCmykF2(c float64, m float64, y float64, k float64, a float64) {
	C.QColor_setCmykF2(this.cPointer(), (C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k), (C.double)(a))
}

func (this QColor) GetHsl2(h *int, s *int, l *int, a *int) {
	C.QColor_getHsl2(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.int)(unsafe.Pointer(h)), (*C.int)(unsafe.Pointer(s)), (*C.int)(unsafe.Pointer(l)), (*C.int)(unsafe.Pointer(a)))
}

func (this *QColor) SetHsl2(h int, s int, l int, a int) {
	C.QColor_setHsl2(this.cPointer(), (C.int)(h), (C.int)(s), (C.int)(l), (C.int)(a))
}

func (this QColor) GetHslF2(h *float64, s *float64, l *float64, a *float64) {
	C.QColor_getHslF2(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (*C.double)(unsafe.Pointer(h)), (*C.double)(unsafe.Pointer(s)), (*C.double)(unsafe.Pointer(l)), (*C.double)(unsafe.Pointer(a)))
}

func (this *QColor) SetHslF2(h float64, s float64, l float64, a float64) {
	C.QColor_setHslF2(this.cPointer(), (C.double)(h), (C.double)(s), (C.double)(l), (C.double)(a))
}

func QColor_FromRgb3(r int, g int, b int, a int) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromRgb3((C.int)(r), (C.int)(g), (C.int)(b), (C.int)(a)))
}

func QColor_FromRgbF2(r float64, g float64, b float64, a float64) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromRgbF2((C.double)(r), (C.double)(g), (C.double)(b), (C.double)(a)))
}

func QColor_FromRgba642(r uint16, g uint16, b uint16, a uint16) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromRgba642((C.ushort)(r), (C.ushort)(g), (C.ushort)(b), (C.ushort)(a)))
}

func QColor_FromHsv2(h int, s int, v int, a int) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromHsv2((C.int)(h), (C.int)(s), (C.int)(v), (C.int)(a)))
}

func QColor_FromHsvF2(h float64, s float64, v float64, a float64) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromHsvF2((C.double)(h), (C.double)(s), (C.double)(v), (C.double)(a)))
}

func QColor_FromCmyk2(c int, m int, y int, k int, a int) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromCmyk2((C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k), (C.int)(a)))
}

func QColor_FromCmykF2(c float64, m float64, y float64, k float64, a float64) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromCmykF2((C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k), (C.double)(a)))
}

func QColor_FromHsl2(h int, s int, l int, a int) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromHsl2((C.int)(h), (C.int)(s), (C.int)(l), (C.int)(a)))
}

func QColor_FromHslF2(h float64, s float64, l float64, a float64) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_fromHslF2((C.double)(h), (C.double)(s), (C.double)(l), (C.double)(a)))
}

func (this QColor) LightWithInt(f int) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_lightWithInt(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (C.int)(f)))
}

func (this QColor) DarkWithInt(f int) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_darkWithInt(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (C.int)(f)))
}

func (this QColor) LighterWithInt(f int) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_lighterWithInt(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (C.int)(f)))
}

func (this QColor) DarkerWithInt(f int) QColor {
	return libmiqt.ValueCast[QColor](C.QColor_darkerWithInt(libmiqt.ValueCast[C.struct_miqt_qcolor](this), (C.int)(f)))
}

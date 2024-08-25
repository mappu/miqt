package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcolor.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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

func newQColor(h *C.QColor) *QColor {
	return &QColor{h: h}
}

func newQColor_U(h unsafe.Pointer) *QColor {
	return newQColor((*C.QColor)(h))
}

// NewQColor constructs a new QColor object.
func NewQColor() *QColor {
	ret := C.QColor_new()
	return newQColor(ret)
}

// NewQColor2 constructs a new QColor object.
func NewQColor2(r int, g int, b int) *QColor {
	ret := C.QColor_new2((C.int)(r), (C.int)(g), (C.int)(b))
	return newQColor(ret)
}

// NewQColor3 constructs a new QColor object.
func NewQColor3(rgb uint32) *QColor {
	ret := C.QColor_new3((C.uint)(rgb))
	return newQColor(ret)
}

// NewQColor4 constructs a new QColor object.
func NewQColor4(rgba64 QRgba64) *QColor {
	ret := C.QColor_new4(rgba64.cPointer())
	return newQColor(ret)
}

// NewQColor5 constructs a new QColor object.
func NewQColor5(name string) *QColor {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QColor_new5(name_Cstring, C.ulong(len(name)))
	return newQColor(ret)
}

// NewQColor6 constructs a new QColor object.
func NewQColor6(aname string) *QColor {
	aname_Cstring := C.CString(aname)
	defer C.free(unsafe.Pointer(aname_Cstring))
	ret := C.QColor_new6(aname_Cstring)
	return newQColor(ret)
}

// NewQColor7 constructs a new QColor object.
func NewQColor7(color *QColor) *QColor {
	ret := C.QColor_new7(color.cPointer())
	return newQColor(ret)
}

// NewQColor8 constructs a new QColor object.
func NewQColor8(r int, g int, b int, a int) *QColor {
	ret := C.QColor_new8((C.int)(r), (C.int)(g), (C.int)(b), (C.int)(a))
	return newQColor(ret)
}

func (this *QColor) OperatorAssign(param1 *QColor) {
	C.QColor_OperatorAssign(this.h, param1.cPointer())
}

func (this *QColor) IsValid() bool {
	ret := C.QColor_IsValid(this.h)
	return (bool)(ret)
}

func (this *QColor) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColor_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QColor) SetNamedColor(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QColor_SetNamedColor(this.h, name_Cstring, C.ulong(len(name)))
}

func QColor_ColorNames() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QColor_ColorNames(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QColor) Alpha() int {
	ret := C.QColor_Alpha(this.h)
	return (int)(ret)
}

func (this *QColor) SetAlpha(alpha int) {
	C.QColor_SetAlpha(this.h, (C.int)(alpha))
}

func (this *QColor) AlphaF() float64 {
	ret := C.QColor_AlphaF(this.h)
	return (float64)(ret)
}

func (this *QColor) SetAlphaF(alpha float64) {
	C.QColor_SetAlphaF(this.h, (C.double)(alpha))
}

func (this *QColor) Red() int {
	ret := C.QColor_Red(this.h)
	return (int)(ret)
}

func (this *QColor) Green() int {
	ret := C.QColor_Green(this.h)
	return (int)(ret)
}

func (this *QColor) Blue() int {
	ret := C.QColor_Blue(this.h)
	return (int)(ret)
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
	ret := C.QColor_RedF(this.h)
	return (float64)(ret)
}

func (this *QColor) GreenF() float64 {
	ret := C.QColor_GreenF(this.h)
	return (float64)(ret)
}

func (this *QColor) BlueF() float64 {
	ret := C.QColor_BlueF(this.h)
	return (float64)(ret)
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
	ret := C.QColor_Rgba64(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRgba64(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRgba64) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) SetRgba64(rgba QRgba64) {
	C.QColor_SetRgba64(this.h, rgba.cPointer())
}

func (this *QColor) Rgba() uint32 {
	ret := C.QColor_Rgba(this.h)
	return (uint32)(ret)
}

func (this *QColor) SetRgba(rgba uint32) {
	C.QColor_SetRgba(this.h, (C.uint)(rgba))
}

func (this *QColor) Rgb() uint32 {
	ret := C.QColor_Rgb(this.h)
	return (uint32)(ret)
}

func (this *QColor) SetRgbWithRgb(rgb uint32) {
	C.QColor_SetRgbWithRgb(this.h, (C.uint)(rgb))
}

func (this *QColor) Hue() int {
	ret := C.QColor_Hue(this.h)
	return (int)(ret)
}

func (this *QColor) Saturation() int {
	ret := C.QColor_Saturation(this.h)
	return (int)(ret)
}

func (this *QColor) HsvHue() int {
	ret := C.QColor_HsvHue(this.h)
	return (int)(ret)
}

func (this *QColor) HsvSaturation() int {
	ret := C.QColor_HsvSaturation(this.h)
	return (int)(ret)
}

func (this *QColor) Value() int {
	ret := C.QColor_Value(this.h)
	return (int)(ret)
}

func (this *QColor) HueF() float64 {
	ret := C.QColor_HueF(this.h)
	return (float64)(ret)
}

func (this *QColor) SaturationF() float64 {
	ret := C.QColor_SaturationF(this.h)
	return (float64)(ret)
}

func (this *QColor) HsvHueF() float64 {
	ret := C.QColor_HsvHueF(this.h)
	return (float64)(ret)
}

func (this *QColor) HsvSaturationF() float64 {
	ret := C.QColor_HsvSaturationF(this.h)
	return (float64)(ret)
}

func (this *QColor) ValueF() float64 {
	ret := C.QColor_ValueF(this.h)
	return (float64)(ret)
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
	ret := C.QColor_Cyan(this.h)
	return (int)(ret)
}

func (this *QColor) Magenta() int {
	ret := C.QColor_Magenta(this.h)
	return (int)(ret)
}

func (this *QColor) Yellow() int {
	ret := C.QColor_Yellow(this.h)
	return (int)(ret)
}

func (this *QColor) Black() int {
	ret := C.QColor_Black(this.h)
	return (int)(ret)
}

func (this *QColor) CyanF() float64 {
	ret := C.QColor_CyanF(this.h)
	return (float64)(ret)
}

func (this *QColor) MagentaF() float64 {
	ret := C.QColor_MagentaF(this.h)
	return (float64)(ret)
}

func (this *QColor) YellowF() float64 {
	ret := C.QColor_YellowF(this.h)
	return (float64)(ret)
}

func (this *QColor) BlackF() float64 {
	ret := C.QColor_BlackF(this.h)
	return (float64)(ret)
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
	ret := C.QColor_HslHue(this.h)
	return (int)(ret)
}

func (this *QColor) HslSaturation() int {
	ret := C.QColor_HslSaturation(this.h)
	return (int)(ret)
}

func (this *QColor) Lightness() int {
	ret := C.QColor_Lightness(this.h)
	return (int)(ret)
}

func (this *QColor) HslHueF() float64 {
	ret := C.QColor_HslHueF(this.h)
	return (float64)(ret)
}

func (this *QColor) HslSaturationF() float64 {
	ret := C.QColor_HslSaturationF(this.h)
	return (float64)(ret)
}

func (this *QColor) LightnessF() float64 {
	ret := C.QColor_LightnessF(this.h)
	return (float64)(ret)
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
	ret := C.QColor_ToRgb(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) ToHsv() *QColor {
	ret := C.QColor_ToHsv(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) ToCmyk() *QColor {
	ret := C.QColor_ToCmyk(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) ToHsl() *QColor {
	ret := C.QColor_ToHsl(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) ToExtendedRgb() *QColor {
	ret := C.QColor_ToExtendedRgb(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromRgb(rgb uint32) *QColor {
	ret := C.QColor_FromRgb((C.uint)(rgb))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromRgba(rgba uint32) *QColor {
	ret := C.QColor_FromRgba((C.uint)(rgba))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromRgb2(r int, g int, b int) *QColor {
	ret := C.QColor_FromRgb2((C.int)(r), (C.int)(g), (C.int)(b))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromRgbF(r float64, g float64, b float64) *QColor {
	ret := C.QColor_FromRgbF((C.double)(r), (C.double)(g), (C.double)(b))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromRgba64(r uint16, g uint16, b uint16) *QColor {
	ret := C.QColor_FromRgba64((C.uint16_t)(r), (C.uint16_t)(g), (C.uint16_t)(b))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromRgba64WithRgba(rgba QRgba64) *QColor {
	ret := C.QColor_FromRgba64WithRgba(rgba.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromHsv(h int, s int, v int) *QColor {
	ret := C.QColor_FromHsv((C.int)(h), (C.int)(s), (C.int)(v))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromHsvF(h float64, s float64, v float64) *QColor {
	ret := C.QColor_FromHsvF((C.double)(h), (C.double)(s), (C.double)(v))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromCmyk(c int, m int, y int, k int) *QColor {
	ret := C.QColor_FromCmyk((C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromCmykF(c float64, m float64, y float64, k float64) *QColor {
	ret := C.QColor_FromCmykF((C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromHsl(h int, s int, l int) *QColor {
	ret := C.QColor_FromHsl((C.int)(h), (C.int)(s), (C.int)(l))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromHslF(h float64, s float64, l float64) *QColor {
	ret := C.QColor_FromHslF((C.double)(h), (C.double)(s), (C.double)(l))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) Light() *QColor {
	ret := C.QColor_Light(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) Dark() *QColor {
	ret := C.QColor_Dark(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) Lighter() *QColor {
	ret := C.QColor_Lighter(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) Darker() *QColor {
	ret := C.QColor_Darker(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) OperatorEqual(c *QColor) bool {
	ret := C.QColor_OperatorEqual(this.h, c.cPointer())
	return (bool)(ret)
}

func (this *QColor) OperatorNotEqual(c *QColor) bool {
	ret := C.QColor_OperatorNotEqual(this.h, c.cPointer())
	return (bool)(ret)
}

func QColor_IsValidColor(name string) bool {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QColor_IsValidColor(name_Cstring, C.ulong(len(name)))
	return (bool)(ret)
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
	ret := C.QColor_FromRgb4((C.int)(r), (C.int)(g), (C.int)(b), (C.int)(a))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromRgbF4(r float64, g float64, b float64, a float64) *QColor {
	ret := C.QColor_FromRgbF4((C.double)(r), (C.double)(g), (C.double)(b), (C.double)(a))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromRgba644(r uint16, g uint16, b uint16, a uint16) *QColor {
	ret := C.QColor_FromRgba644((C.uint16_t)(r), (C.uint16_t)(g), (C.uint16_t)(b), (C.uint16_t)(a))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromHsv4(h int, s int, v int, a int) *QColor {
	ret := C.QColor_FromHsv4((C.int)(h), (C.int)(s), (C.int)(v), (C.int)(a))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromHsvF4(h float64, s float64, v float64, a float64) *QColor {
	ret := C.QColor_FromHsvF4((C.double)(h), (C.double)(s), (C.double)(v), (C.double)(a))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromCmyk5(c int, m int, y int, k int, a int) *QColor {
	ret := C.QColor_FromCmyk5((C.int)(c), (C.int)(m), (C.int)(y), (C.int)(k), (C.int)(a))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromCmykF5(c float64, m float64, y float64, k float64, a float64) *QColor {
	ret := C.QColor_FromCmykF5((C.double)(c), (C.double)(m), (C.double)(y), (C.double)(k), (C.double)(a))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromHsl4(h int, s int, l int, a int) *QColor {
	ret := C.QColor_FromHsl4((C.int)(h), (C.int)(s), (C.int)(l), (C.int)(a))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QColor_FromHslF4(h float64, s float64, l float64, a float64) *QColor {
	ret := C.QColor_FromHslF4((C.double)(h), (C.double)(s), (C.double)(l), (C.double)(a))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) Light1(f int) *QColor {
	ret := C.QColor_Light1(this.h, (C.int)(f))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) Dark1(f int) *QColor {
	ret := C.QColor_Dark1(this.h, (C.int)(f))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) Lighter1(f int) *QColor {
	ret := C.QColor_Lighter1(this.h, (C.int)(f))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) Darker1(f int) *QColor {
	ret := C.QColor_Darker1(this.h, (C.int)(f))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColor) Delete() {
	C.QColor_Delete(this.h)
}

package qt

/*

#include "gen_qbrush.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"unsafe"
)

type QGradient__Type int

const (
	QGradient__LinearGradient  QGradient__Type = 0
	QGradient__RadialGradient  QGradient__Type = 1
	QGradient__ConicalGradient QGradient__Type = 2
	QGradient__NoGradient      QGradient__Type = 3
)

type QGradient__Spread int

const (
	QGradient__PadSpread     QGradient__Spread = 0
	QGradient__ReflectSpread QGradient__Spread = 1
	QGradient__RepeatSpread  QGradient__Spread = 2
)

type QGradient__CoordinateMode int

const (
	QGradient__LogicalMode         QGradient__CoordinateMode = 0
	QGradient__StretchToDeviceMode QGradient__CoordinateMode = 1
	QGradient__ObjectBoundingMode  QGradient__CoordinateMode = 2
	QGradient__ObjectMode          QGradient__CoordinateMode = 3
)

type QGradient__InterpolationMode int

const (
	QGradient__ColorInterpolation     QGradient__InterpolationMode = 0
	QGradient__ComponentInterpolation QGradient__InterpolationMode = 1
)

type QGradient__Preset int

const (
	QGradient__WarmFlame        QGradient__Preset = 1
	QGradient__NightFade        QGradient__Preset = 2
	QGradient__SpringWarmth     QGradient__Preset = 3
	QGradient__JuicyPeach       QGradient__Preset = 4
	QGradient__YoungPassion     QGradient__Preset = 5
	QGradient__LadyLips         QGradient__Preset = 6
	QGradient__SunnyMorning     QGradient__Preset = 7
	QGradient__RainyAshville    QGradient__Preset = 8
	QGradient__FrozenDreams     QGradient__Preset = 9
	QGradient__WinterNeva       QGradient__Preset = 10
	QGradient__DustyGrass       QGradient__Preset = 11
	QGradient__TemptingAzure    QGradient__Preset = 12
	QGradient__HeavyRain        QGradient__Preset = 13
	QGradient__AmyCrisp         QGradient__Preset = 14
	QGradient__MeanFruit        QGradient__Preset = 15
	QGradient__DeepBlue         QGradient__Preset = 16
	QGradient__RipeMalinka      QGradient__Preset = 17
	QGradient__CloudyKnoxville  QGradient__Preset = 18
	QGradient__MalibuBeach      QGradient__Preset = 19
	QGradient__NewLife          QGradient__Preset = 20
	QGradient__TrueSunset       QGradient__Preset = 21
	QGradient__MorpheusDen      QGradient__Preset = 22
	QGradient__RareWind         QGradient__Preset = 23
	QGradient__NearMoon         QGradient__Preset = 24
	QGradient__WildApple        QGradient__Preset = 25
	QGradient__SaintPetersburg  QGradient__Preset = 26
	QGradient__PlumPlate        QGradient__Preset = 28
	QGradient__EverlastingSky   QGradient__Preset = 29
	QGradient__HappyFisher      QGradient__Preset = 30
	QGradient__Blessing         QGradient__Preset = 31
	QGradient__SharpeyeEagle    QGradient__Preset = 32
	QGradient__LadogaBottom     QGradient__Preset = 33
	QGradient__LemonGate        QGradient__Preset = 34
	QGradient__ItmeoBranding    QGradient__Preset = 35
	QGradient__ZeusMiracle      QGradient__Preset = 36
	QGradient__OldHat           QGradient__Preset = 37
	QGradient__StarWine         QGradient__Preset = 38
	QGradient__HappyAcid        QGradient__Preset = 41
	QGradient__AwesomePine      QGradient__Preset = 42
	QGradient__NewYork          QGradient__Preset = 43
	QGradient__ShyRainbow       QGradient__Preset = 44
	QGradient__MixedHopes       QGradient__Preset = 46
	QGradient__FlyHigh          QGradient__Preset = 47
	QGradient__StrongBliss      QGradient__Preset = 48
	QGradient__FreshMilk        QGradient__Preset = 49
	QGradient__SnowAgain        QGradient__Preset = 50
	QGradient__FebruaryInk      QGradient__Preset = 51
	QGradient__KindSteel        QGradient__Preset = 52
	QGradient__SoftGrass        QGradient__Preset = 53
	QGradient__GrownEarly       QGradient__Preset = 54
	QGradient__SharpBlues       QGradient__Preset = 55
	QGradient__ShadyWater       QGradient__Preset = 56
	QGradient__DirtyBeauty      QGradient__Preset = 57
	QGradient__GreatWhale       QGradient__Preset = 58
	QGradient__TeenNotebook     QGradient__Preset = 59
	QGradient__PoliteRumors     QGradient__Preset = 60
	QGradient__SweetPeriod      QGradient__Preset = 61
	QGradient__WideMatrix       QGradient__Preset = 62
	QGradient__SoftCherish      QGradient__Preset = 63
	QGradient__RedSalvation     QGradient__Preset = 64
	QGradient__BurningSpring    QGradient__Preset = 65
	QGradient__NightParty       QGradient__Preset = 66
	QGradient__SkyGlider        QGradient__Preset = 67
	QGradient__HeavenPeach      QGradient__Preset = 68
	QGradient__PurpleDivision   QGradient__Preset = 69
	QGradient__AquaSplash       QGradient__Preset = 70
	QGradient__SpikyNaga        QGradient__Preset = 72
	QGradient__LoveKiss         QGradient__Preset = 73
	QGradient__CleanMirror      QGradient__Preset = 75
	QGradient__PremiumDark      QGradient__Preset = 76
	QGradient__ColdEvening      QGradient__Preset = 77
	QGradient__CochitiLake      QGradient__Preset = 78
	QGradient__SummerGames      QGradient__Preset = 79
	QGradient__PassionateBed    QGradient__Preset = 80
	QGradient__MountainRock     QGradient__Preset = 81
	QGradient__DesertHump       QGradient__Preset = 82
	QGradient__JungleDay        QGradient__Preset = 83
	QGradient__PhoenixStart     QGradient__Preset = 84
	QGradient__OctoberSilence   QGradient__Preset = 85
	QGradient__FarawayRiver     QGradient__Preset = 86
	QGradient__AlchemistLab     QGradient__Preset = 87
	QGradient__OverSun          QGradient__Preset = 88
	QGradient__PremiumWhite     QGradient__Preset = 89
	QGradient__MarsParty        QGradient__Preset = 90
	QGradient__EternalConstance QGradient__Preset = 91
	QGradient__JapanBlush       QGradient__Preset = 92
	QGradient__SmilingRain      QGradient__Preset = 93
	QGradient__CloudyApple      QGradient__Preset = 94
	QGradient__BigMango         QGradient__Preset = 95
	QGradient__HealthyWater     QGradient__Preset = 96
	QGradient__AmourAmour       QGradient__Preset = 97
	QGradient__RiskyConcrete    QGradient__Preset = 98
	QGradient__StrongStick      QGradient__Preset = 99
	QGradient__ViciousStance    QGradient__Preset = 100
	QGradient__PaloAlto         QGradient__Preset = 101
	QGradient__HappyMemories    QGradient__Preset = 102
	QGradient__MidnightBloom    QGradient__Preset = 103
	QGradient__Crystalline      QGradient__Preset = 104
	QGradient__PartyBliss       QGradient__Preset = 106
	QGradient__ConfidentCloud   QGradient__Preset = 107
	QGradient__LeCocktail       QGradient__Preset = 108
	QGradient__RiverCity        QGradient__Preset = 109
	QGradient__FrozenBerry      QGradient__Preset = 110
	QGradient__ChildCare        QGradient__Preset = 112
	QGradient__FlyingLemon      QGradient__Preset = 113
	QGradient__NewRetrowave     QGradient__Preset = 114
	QGradient__HiddenJaguar     QGradient__Preset = 115
	QGradient__AboveTheSky      QGradient__Preset = 116
	QGradient__Nega             QGradient__Preset = 117
	QGradient__DenseWater       QGradient__Preset = 118
	QGradient__Seashore         QGradient__Preset = 120
	QGradient__MarbleWall       QGradient__Preset = 121
	QGradient__CheerfulCaramel  QGradient__Preset = 122
	QGradient__NightSky         QGradient__Preset = 123
	QGradient__MagicLake        QGradient__Preset = 124
	QGradient__YoungGrass       QGradient__Preset = 125
	QGradient__ColorfulPeach    QGradient__Preset = 126
	QGradient__GentleCare       QGradient__Preset = 127
	QGradient__PlumBath         QGradient__Preset = 128
	QGradient__HappyUnicorn     QGradient__Preset = 129
	QGradient__AfricanField     QGradient__Preset = 131
	QGradient__SolidStone       QGradient__Preset = 132
	QGradient__OrangeJuice      QGradient__Preset = 133
	QGradient__GlassWater       QGradient__Preset = 134
	QGradient__NorthMiracle     QGradient__Preset = 136
	QGradient__FruitBlend       QGradient__Preset = 137
	QGradient__MillenniumPine   QGradient__Preset = 138
	QGradient__HighFlight       QGradient__Preset = 139
	QGradient__MoleHall         QGradient__Preset = 140
	QGradient__SpaceShift       QGradient__Preset = 142
	QGradient__ForestInei       QGradient__Preset = 143
	QGradient__RoyalGarden      QGradient__Preset = 144
	QGradient__RichMetal        QGradient__Preset = 145
	QGradient__JuicyCake        QGradient__Preset = 146
	QGradient__SmartIndigo      QGradient__Preset = 147
	QGradient__SandStrike       QGradient__Preset = 148
	QGradient__NorseBeauty      QGradient__Preset = 149
	QGradient__AquaGuidance     QGradient__Preset = 150
	QGradient__SunVeggie        QGradient__Preset = 151
	QGradient__SeaLord          QGradient__Preset = 152
	QGradient__BlackSea         QGradient__Preset = 153
	QGradient__GrassShampoo     QGradient__Preset = 154
	QGradient__LandingAircraft  QGradient__Preset = 155
	QGradient__WitchDance       QGradient__Preset = 156
	QGradient__SleeplessNight   QGradient__Preset = 157
	QGradient__AngelCare        QGradient__Preset = 158
	QGradient__CrystalRiver     QGradient__Preset = 159
	QGradient__SoftLipstick     QGradient__Preset = 160
	QGradient__SaltMountain     QGradient__Preset = 161
	QGradient__PerfectWhite     QGradient__Preset = 162
	QGradient__FreshOasis       QGradient__Preset = 163
	QGradient__StrictNovember   QGradient__Preset = 164
	QGradient__MorningSalad     QGradient__Preset = 165
	QGradient__DeepRelief       QGradient__Preset = 166
	QGradient__SeaStrike        QGradient__Preset = 167
	QGradient__NightCall        QGradient__Preset = 168
	QGradient__SupremeSky       QGradient__Preset = 169
	QGradient__LightBlue        QGradient__Preset = 170
	QGradient__MindCrawl        QGradient__Preset = 171
	QGradient__LilyMeadow       QGradient__Preset = 172
	QGradient__SugarLollipop    QGradient__Preset = 173
	QGradient__SweetDessert     QGradient__Preset = 174
	QGradient__MagicRay         QGradient__Preset = 175
	QGradient__TeenParty        QGradient__Preset = 176
	QGradient__FrozenHeat       QGradient__Preset = 177
	QGradient__GagarinView      QGradient__Preset = 178
	QGradient__FabledSunset     QGradient__Preset = 179
	QGradient__PerfectBlue      QGradient__Preset = 180
	QGradient__NumPresets       QGradient__Preset = 181
)

type QBrush struct {
	h  *C.QBrush
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QBrush) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QBrush) cPointer() *C.QBrush {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBrush) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBrush constructs the type using only CGO pointers.
func newQBrush(h *C.QBrush) *QBrush {
	if h == nil {
		return nil
	}

	return &QBrush{h: h}
}

// UnsafeNewQBrush constructs the type using only unsafe pointers.
func UnsafeNewQBrush(h unsafe.Pointer) *QBrush {
	return newQBrush((*C.QBrush)(h))
}

// NewQBrush constructs a new QBrush object.
func NewQBrush() *QBrush {

	return newQBrush(C.QBrush_new())
}

// NewQBrush2 constructs a new QBrush object.
func NewQBrush2(bs BrushStyle) *QBrush {

	return newQBrush(C.QBrush_new2((C.int)(bs)))
}

// NewQBrush3 constructs a new QBrush object.
func NewQBrush3(color QColor) *QBrush {

	return newQBrush(C.QBrush_new3(libmiqt.ValueCast[C.struct_miqt_qcolor](color)))
}

// NewQBrush4 constructs a new QBrush object.
func NewQBrush4(color GlobalColor) *QBrush {

	return newQBrush(C.QBrush_new4((C.int)(color)))
}

// NewQBrush5 constructs a new QBrush object.
func NewQBrush5(color QColor, pixmap *QPixmap) *QBrush {
	defer runtime.KeepAlive(pixmap)

	return newQBrush(C.QBrush_new5(libmiqt.ValueCast[C.struct_miqt_qcolor](color), pixmap.cPointer()))
}

// NewQBrush6 constructs a new QBrush object.
func NewQBrush6(color GlobalColor, pixmap *QPixmap) *QBrush {
	defer runtime.KeepAlive(pixmap)

	return newQBrush(C.QBrush_new6((C.int)(color), pixmap.cPointer()))
}

// NewQBrush7 constructs a new QBrush object.
func NewQBrush7(pixmap *QPixmap) *QBrush {
	defer runtime.KeepAlive(pixmap)

	return newQBrush(C.QBrush_new7(pixmap.cPointer()))
}

// NewQBrush8 constructs a new QBrush object.
func NewQBrush8(image *QImage) *QBrush {
	defer runtime.KeepAlive(image)

	return newQBrush(C.QBrush_new8(image.cPointer()))
}

// NewQBrush9 constructs a new QBrush object.
func NewQBrush9(brush *QBrush) *QBrush {
	defer runtime.KeepAlive(brush)

	return newQBrush(C.QBrush_new9(brush.cPointer()))
}

// NewQBrush10 constructs a new QBrush object.
func NewQBrush10(gradient *QGradient) *QBrush {
	defer runtime.KeepAlive(gradient)

	return newQBrush(C.QBrush_new10(gradient.cPointer()))
}

// NewQBrush11 constructs a new QBrush object.
func NewQBrush11(color QColor, bs BrushStyle) *QBrush {

	return newQBrush(C.QBrush_new11(libmiqt.ValueCast[C.struct_miqt_qcolor](color), (C.int)(bs)))
}

// NewQBrush12 constructs a new QBrush object.
func NewQBrush12(color GlobalColor, bs BrushStyle) *QBrush {

	return newQBrush(C.QBrush_new12((C.int)(color), (C.int)(bs)))
}

func (this *QBrush) OperatorAssign(brush *QBrush) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(brush)
	C.QBrush_operatorAssign(this.h, brush.cPointer())
}

func (this *QBrush) Swap(other *QBrush) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QBrush_swap(this.h, other.cPointer())
}

func (this *QBrush) ToQVariant() *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QBrush_ToQVariant(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBrush) Style() BrushStyle {
	defer runtime.KeepAlive(this)
	return (BrushStyle)(C.QBrush_style(this.h))
}

func (this *QBrush) SetStyle(style BrushStyle) {
	defer runtime.KeepAlive(this)
	C.QBrush_setStyle(this.h, (C.int)(style))
}

func (this *QBrush) Matrix() *QMatrix {
	defer runtime.KeepAlive(this)
	_ret := newQMatrix(C.QBrush_matrix(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QBrush) SetMatrix(mat *QMatrix) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(mat)
	C.QBrush_setMatrix(this.h, mat.cPointer())
}

func (this *QBrush) Transform() *QTransform {
	defer runtime.KeepAlive(this)
	_goptr := newQTransform(C.QBrush_transform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBrush) SetTransform(transform *QTransform) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(transform)
	C.QBrush_setTransform(this.h, transform.cPointer())
}

func (this *QBrush) Texture() *QPixmap {
	defer runtime.KeepAlive(this)
	_goptr := newQPixmap(C.QBrush_texture(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBrush) SetTexture(pixmap *QPixmap) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pixmap)
	C.QBrush_setTexture(this.h, pixmap.cPointer())
}

func (this *QBrush) TextureImage() *QImage {
	defer runtime.KeepAlive(this)
	_goptr := newQImage(C.QBrush_textureImage(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBrush) SetTextureImage(image *QImage) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(image)
	C.QBrush_setTextureImage(this.h, image.cPointer())
}

func (this *QBrush) Color() QColor {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QColor](C.QBrush_color(this.h))
}

func (this *QBrush) SetColor(color QColor) {
	defer runtime.KeepAlive(this)
	C.QBrush_setColor(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](color))
}

func (this *QBrush) SetColorWithColor(color GlobalColor) {
	defer runtime.KeepAlive(this)
	C.QBrush_setColorWithColor(this.h, (C.int)(color))
}

func (this *QBrush) Gradient() *QGradient {
	defer runtime.KeepAlive(this)
	return newQGradient(C.QBrush_gradient(this.h))
}

func (this *QBrush) IsOpaque() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBrush_isOpaque(this.h))
}

func (this *QBrush) OperatorEqual(b *QBrush) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(b)
	return (bool)(C.QBrush_operatorEqual(this.h, b.cPointer()))
}

func (this *QBrush) OperatorNotEqual(b *QBrush) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(b)
	return (bool)(C.QBrush_operatorNotEqual(this.h, b.cPointer()))
}

func (this *QBrush) IsDetached() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QBrush_isDetached(this.h))
}

// Delete this object from C++ memory.
func (this *QBrush) Delete() {
	C.QBrush_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QBrush) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QBrush_delete((*C.QBrush)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGradient struct {
	h  *C.QGradient
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGradient) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QGradient) cPointer() *C.QGradient {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGradient) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGradient constructs the type using only CGO pointers.
func newQGradient(h *C.QGradient) *QGradient {
	if h == nil {
		return nil
	}

	return &QGradient{h: h}
}

// UnsafeNewQGradient constructs the type using only unsafe pointers.
func UnsafeNewQGradient(h unsafe.Pointer) *QGradient {
	return newQGradient((*C.QGradient)(h))
}

// NewQGradient constructs a new QGradient object.
func NewQGradient() *QGradient {

	return newQGradient(C.QGradient_new())
}

// NewQGradient2 constructs a new QGradient object.
func NewQGradient2(param1 QGradient__Preset) *QGradient {

	return newQGradient(C.QGradient_new2((C.int)(param1)))
}

// NewQGradient3 constructs a new QGradient object.
func NewQGradient3(param1 *QGradient) *QGradient {
	defer runtime.KeepAlive(param1)

	return newQGradient(C.QGradient_new3(param1.cPointer()))
}

func (this *QGradient) Type() QGradient__Type {
	defer runtime.KeepAlive(this)
	return (QGradient__Type)(C.QGradient_type(this.h))
}

func (this *QGradient) SetSpread(spread QGradient__Spread) {
	defer runtime.KeepAlive(this)
	C.QGradient_setSpread(this.h, (C.int)(spread))
}

func (this *QGradient) Spread() QGradient__Spread {
	defer runtime.KeepAlive(this)
	return (QGradient__Spread)(C.QGradient_spread(this.h))
}

func (this *QGradient) SetColorAt(pos float64, color QColor) {
	defer runtime.KeepAlive(this)
	C.QGradient_setColorAt(this.h, (C.double)(pos), libmiqt.ValueCast[C.struct_miqt_qcolor](color))
}

func (this *QGradient) SetStops(stops []struct {
	First  float64
	Second QColor
}) {
	defer runtime.KeepAlive(this)
	stops_CArray_ptr := (*C.struct_miqt_map)(C.malloc(C.size_t(8 * len(stops))))
	defer C.free(unsafe.Pointer(stops_CArray_ptr))
	stops_CArray := unsafe.Slice(stops_CArray_ptr, len(stops))
	for i := range stops {
		stops_i_First_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8)))
		defer C.free(unsafe.Pointer(stops_i_First_CArray))
		stops_i_Second_CArray := (*[0xffff]C.struct_miqt_qcolor)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_qcolor{})))))
		defer C.free(unsafe.Pointer(stops_i_Second_CArray))
		stops_i_First_CArray[0] = (C.double)(stops[i].First)
		stops_i_Second_CArray[0] = libmiqt.ValueCast[C.struct_miqt_qcolor](stops[i].Second)
		stops_i_pair := C.struct_miqt_map{
			len:    1,
			keys:   unsafe.Pointer(stops_i_First_CArray),
			values: unsafe.Pointer(stops_i_Second_CArray),
		}
		stops_CArray[i] = stops_i_pair
	}
	stops_ma := C.struct_miqt_array{len: C.size_t(len(stops)), data: unsafe.Pointer(stops_CArray_ptr)}
	C.QGradient_setStops(this.h, stops_ma)
}

func (this *QGradient) Stops() []struct {
	First  float64
	Second QColor
} {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QGradient_stops(this.h)
	_ret := make([]struct {
		First  float64
		Second QColor
	}, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_map)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _vv_mm C.struct_miqt_map = _outCast[i]
		_vv_First_CArray := (*[0xffff]C.double)(unsafe.Pointer(_vv_mm.keys))
		_vv_Second_CArray := (*[0xffff]C.struct_miqt_qcolor)(unsafe.Pointer(_vv_mm.values))
		_vv_entry_First := (float64)(_vv_First_CArray[0])

		_vv_entry_Second := libmiqt.ValueCast[QColor](_vv_Second_CArray[0])

		_ret[i] = struct {
			First  float64
			Second QColor
		}{First: _vv_entry_First, Second: _vv_entry_Second}
	}
	return _ret
}

func (this *QGradient) CoordinateMode() QGradient__CoordinateMode {
	defer runtime.KeepAlive(this)
	return (QGradient__CoordinateMode)(C.QGradient_coordinateMode(this.h))
}

func (this *QGradient) SetCoordinateMode(mode QGradient__CoordinateMode) {
	defer runtime.KeepAlive(this)
	C.QGradient_setCoordinateMode(this.h, (C.int)(mode))
}

func (this *QGradient) InterpolationMode() QGradient__InterpolationMode {
	defer runtime.KeepAlive(this)
	return (QGradient__InterpolationMode)(C.QGradient_interpolationMode(this.h))
}

func (this *QGradient) SetInterpolationMode(mode QGradient__InterpolationMode) {
	defer runtime.KeepAlive(this)
	C.QGradient_setInterpolationMode(this.h, (C.int)(mode))
}

func (this *QGradient) OperatorEqual(gradient *QGradient) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(gradient)
	return (bool)(C.QGradient_operatorEqual(this.h, gradient.cPointer()))
}

func (this *QGradient) OperatorNotEqual(other *QGradient) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QGradient_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QGradient) OperatorAssign(param1 *QGradient) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QGradient_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QGradient) Delete() {
	C.QGradient_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGradient) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGradient_delete((*C.QGradient)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QLinearGradient struct {
	h  *C.QLinearGradient
	gc *[1]unsafe.Pointer
	*QGradient
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QLinearGradient) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGradient.miqtSetGC(gc)
}

func (this *QLinearGradient) cPointer() *C.QLinearGradient {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLinearGradient) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLinearGradient constructs the type using only CGO pointers.
func newQLinearGradient(h *C.QLinearGradient) *QLinearGradient {
	if h == nil {
		return nil
	}
	var outptr_QGradient *C.QGradient = nil
	C.QLinearGradient_virtbase(h, &outptr_QGradient)

	return &QLinearGradient{h: h,
		QGradient: newQGradient(outptr_QGradient)}
}

// UnsafeNewQLinearGradient constructs the type using only unsafe pointers.
func UnsafeNewQLinearGradient(h unsafe.Pointer) *QLinearGradient {
	return newQLinearGradient((*C.QLinearGradient)(h))
}

// NewQLinearGradient constructs a new QLinearGradient object.
func NewQLinearGradient() *QLinearGradient {

	return newQLinearGradient(C.QLinearGradient_new())
}

// NewQLinearGradient2 constructs a new QLinearGradient object.
func NewQLinearGradient2(start QPointF, finalStop QPointF) *QLinearGradient {

	return newQLinearGradient(C.QLinearGradient_new2(libmiqt.ValueCast[C.struct_miqt_qpointf](start), libmiqt.ValueCast[C.struct_miqt_qpointf](finalStop)))
}

// NewQLinearGradient3 constructs a new QLinearGradient object.
func NewQLinearGradient3(xStart float64, yStart float64, xFinalStop float64, yFinalStop float64) *QLinearGradient {

	return newQLinearGradient(C.QLinearGradient_new3((C.double)(xStart), (C.double)(yStart), (C.double)(xFinalStop), (C.double)(yFinalStop)))
}

// NewQLinearGradient4 constructs a new QLinearGradient object.
func NewQLinearGradient4(param1 *QLinearGradient) *QLinearGradient {
	defer runtime.KeepAlive(param1)

	return newQLinearGradient(C.QLinearGradient_new4(param1.cPointer()))
}

func (this *QLinearGradient) Start() QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QLinearGradient_start(this.h))
}

func (this *QLinearGradient) SetStart(start QPointF) {
	defer runtime.KeepAlive(this)
	C.QLinearGradient_setStart(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](start))
}

func (this *QLinearGradient) SetStart2(x float64, y float64) {
	defer runtime.KeepAlive(this)
	C.QLinearGradient_setStart2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QLinearGradient) FinalStop() QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QLinearGradient_finalStop(this.h))
}

func (this *QLinearGradient) SetFinalStop(stop QPointF) {
	defer runtime.KeepAlive(this)
	C.QLinearGradient_setFinalStop(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](stop))
}

func (this *QLinearGradient) SetFinalStop2(x float64, y float64) {
	defer runtime.KeepAlive(this)
	C.QLinearGradient_setFinalStop2(this.h, (C.double)(x), (C.double)(y))
}

// Delete this object from C++ memory.
func (this *QLinearGradient) Delete() {
	C.QLinearGradient_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QLinearGradient) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QLinearGradient_delete((*C.QLinearGradient)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QRadialGradient struct {
	h  *C.QRadialGradient
	gc *[1]unsafe.Pointer
	*QGradient
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QRadialGradient) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGradient.miqtSetGC(gc)
}

func (this *QRadialGradient) cPointer() *C.QRadialGradient {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRadialGradient) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRadialGradient constructs the type using only CGO pointers.
func newQRadialGradient(h *C.QRadialGradient) *QRadialGradient {
	if h == nil {
		return nil
	}
	var outptr_QGradient *C.QGradient = nil
	C.QRadialGradient_virtbase(h, &outptr_QGradient)

	return &QRadialGradient{h: h,
		QGradient: newQGradient(outptr_QGradient)}
}

// UnsafeNewQRadialGradient constructs the type using only unsafe pointers.
func UnsafeNewQRadialGradient(h unsafe.Pointer) *QRadialGradient {
	return newQRadialGradient((*C.QRadialGradient)(h))
}

// NewQRadialGradient constructs a new QRadialGradient object.
func NewQRadialGradient() *QRadialGradient {

	return newQRadialGradient(C.QRadialGradient_new())
}

// NewQRadialGradient2 constructs a new QRadialGradient object.
func NewQRadialGradient2(center QPointF, radius float64, focalPoint QPointF) *QRadialGradient {

	return newQRadialGradient(C.QRadialGradient_new2(libmiqt.ValueCast[C.struct_miqt_qpointf](center), (C.double)(radius), libmiqt.ValueCast[C.struct_miqt_qpointf](focalPoint)))
}

// NewQRadialGradient3 constructs a new QRadialGradient object.
func NewQRadialGradient3(cx float64, cy float64, radius float64, fx float64, fy float64) *QRadialGradient {

	return newQRadialGradient(C.QRadialGradient_new3((C.double)(cx), (C.double)(cy), (C.double)(radius), (C.double)(fx), (C.double)(fy)))
}

// NewQRadialGradient4 constructs a new QRadialGradient object.
func NewQRadialGradient4(center QPointF, radius float64) *QRadialGradient {

	return newQRadialGradient(C.QRadialGradient_new4(libmiqt.ValueCast[C.struct_miqt_qpointf](center), (C.double)(radius)))
}

// NewQRadialGradient5 constructs a new QRadialGradient object.
func NewQRadialGradient5(cx float64, cy float64, radius float64) *QRadialGradient {

	return newQRadialGradient(C.QRadialGradient_new5((C.double)(cx), (C.double)(cy), (C.double)(radius)))
}

// NewQRadialGradient6 constructs a new QRadialGradient object.
func NewQRadialGradient6(center QPointF, centerRadius float64, focalPoint QPointF, focalRadius float64) *QRadialGradient {

	return newQRadialGradient(C.QRadialGradient_new6(libmiqt.ValueCast[C.struct_miqt_qpointf](center), (C.double)(centerRadius), libmiqt.ValueCast[C.struct_miqt_qpointf](focalPoint), (C.double)(focalRadius)))
}

// NewQRadialGradient7 constructs a new QRadialGradient object.
func NewQRadialGradient7(cx float64, cy float64, centerRadius float64, fx float64, fy float64, focalRadius float64) *QRadialGradient {

	return newQRadialGradient(C.QRadialGradient_new7((C.double)(cx), (C.double)(cy), (C.double)(centerRadius), (C.double)(fx), (C.double)(fy), (C.double)(focalRadius)))
}

// NewQRadialGradient8 constructs a new QRadialGradient object.
func NewQRadialGradient8(param1 *QRadialGradient) *QRadialGradient {
	defer runtime.KeepAlive(param1)

	return newQRadialGradient(C.QRadialGradient_new8(param1.cPointer()))
}

func (this *QRadialGradient) Center() QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QRadialGradient_center(this.h))
}

func (this *QRadialGradient) SetCenter(center QPointF) {
	defer runtime.KeepAlive(this)
	C.QRadialGradient_setCenter(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](center))
}

func (this *QRadialGradient) SetCenter2(x float64, y float64) {
	defer runtime.KeepAlive(this)
	C.QRadialGradient_setCenter2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QRadialGradient) FocalPoint() QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QRadialGradient_focalPoint(this.h))
}

func (this *QRadialGradient) SetFocalPoint(focalPoint QPointF) {
	defer runtime.KeepAlive(this)
	C.QRadialGradient_setFocalPoint(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](focalPoint))
}

func (this *QRadialGradient) SetFocalPoint2(x float64, y float64) {
	defer runtime.KeepAlive(this)
	C.QRadialGradient_setFocalPoint2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QRadialGradient) Radius() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QRadialGradient_radius(this.h))
}

func (this *QRadialGradient) SetRadius(radius float64) {
	defer runtime.KeepAlive(this)
	C.QRadialGradient_setRadius(this.h, (C.double)(radius))
}

func (this *QRadialGradient) CenterRadius() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QRadialGradient_centerRadius(this.h))
}

func (this *QRadialGradient) SetCenterRadius(radius float64) {
	defer runtime.KeepAlive(this)
	C.QRadialGradient_setCenterRadius(this.h, (C.double)(radius))
}

func (this *QRadialGradient) FocalRadius() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QRadialGradient_focalRadius(this.h))
}

func (this *QRadialGradient) SetFocalRadius(radius float64) {
	defer runtime.KeepAlive(this)
	C.QRadialGradient_setFocalRadius(this.h, (C.double)(radius))
}

// Delete this object from C++ memory.
func (this *QRadialGradient) Delete() {
	C.QRadialGradient_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QRadialGradient) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QRadialGradient_delete((*C.QRadialGradient)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QConicalGradient struct {
	h  *C.QConicalGradient
	gc *[1]unsafe.Pointer
	*QGradient
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QConicalGradient) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGradient.miqtSetGC(gc)
}

func (this *QConicalGradient) cPointer() *C.QConicalGradient {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QConicalGradient) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQConicalGradient constructs the type using only CGO pointers.
func newQConicalGradient(h *C.QConicalGradient) *QConicalGradient {
	if h == nil {
		return nil
	}
	var outptr_QGradient *C.QGradient = nil
	C.QConicalGradient_virtbase(h, &outptr_QGradient)

	return &QConicalGradient{h: h,
		QGradient: newQGradient(outptr_QGradient)}
}

// UnsafeNewQConicalGradient constructs the type using only unsafe pointers.
func UnsafeNewQConicalGradient(h unsafe.Pointer) *QConicalGradient {
	return newQConicalGradient((*C.QConicalGradient)(h))
}

// NewQConicalGradient constructs a new QConicalGradient object.
func NewQConicalGradient() *QConicalGradient {

	return newQConicalGradient(C.QConicalGradient_new())
}

// NewQConicalGradient2 constructs a new QConicalGradient object.
func NewQConicalGradient2(center QPointF, startAngle float64) *QConicalGradient {

	return newQConicalGradient(C.QConicalGradient_new2(libmiqt.ValueCast[C.struct_miqt_qpointf](center), (C.double)(startAngle)))
}

// NewQConicalGradient3 constructs a new QConicalGradient object.
func NewQConicalGradient3(cx float64, cy float64, startAngle float64) *QConicalGradient {

	return newQConicalGradient(C.QConicalGradient_new3((C.double)(cx), (C.double)(cy), (C.double)(startAngle)))
}

// NewQConicalGradient4 constructs a new QConicalGradient object.
func NewQConicalGradient4(param1 *QConicalGradient) *QConicalGradient {
	defer runtime.KeepAlive(param1)

	return newQConicalGradient(C.QConicalGradient_new4(param1.cPointer()))
}

func (this *QConicalGradient) Center() QPointF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[QPointF](C.QConicalGradient_center(this.h))
}

func (this *QConicalGradient) SetCenter(center QPointF) {
	defer runtime.KeepAlive(this)
	C.QConicalGradient_setCenter(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](center))
}

func (this *QConicalGradient) SetCenter2(x float64, y float64) {
	defer runtime.KeepAlive(this)
	C.QConicalGradient_setCenter2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QConicalGradient) Angle() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QConicalGradient_angle(this.h))
}

func (this *QConicalGradient) SetAngle(angle float64) {
	defer runtime.KeepAlive(this)
	C.QConicalGradient_setAngle(this.h, (C.double)(angle))
}

// Delete this object from C++ memory.
func (this *QConicalGradient) Delete() {
	C.QConicalGradient_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QConicalGradient) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QConicalGradient_delete((*C.QConicalGradient)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGradient__QGradientData struct {
	h  *C.QGradient__QGradientData
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGradient__QGradientData) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QGradient__QGradientData) cPointer() *C.QGradient__QGradientData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGradient__QGradientData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGradient__QGradientData constructs the type using only CGO pointers.
func newQGradient__QGradientData(h *C.QGradient__QGradientData) *QGradient__QGradientData {
	if h == nil {
		return nil
	}

	return &QGradient__QGradientData{h: h}
}

// UnsafeNewQGradient__QGradientData constructs the type using only unsafe pointers.
func UnsafeNewQGradient__QGradientData(h unsafe.Pointer) *QGradient__QGradientData {
	return newQGradient__QGradientData((*C.QGradient__QGradientData)(h))
}

// NewQGradient__QGradientData constructs a new QGradient::QGradientData object.
func NewQGradient__QGradientData(param1 *QGradient__QGradientData) *QGradient__QGradientData {
	defer runtime.KeepAlive(param1)

	return newQGradient__QGradientData(C.QGradient__QGradientData_new(param1.cPointer()))
}

func (this *QGradient__QGradientData) OperatorAssign(param1 *QGradient__QGradientData) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QGradient__QGradientData_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QGradient__QGradientData) Delete() {
	C.QGradient__QGradientData_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGradient__QGradientData) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGradient__QGradientData_delete((*C.QGradient__QGradientData)(gc[0]))
	})
	this.miqtSetGC(gc)
}

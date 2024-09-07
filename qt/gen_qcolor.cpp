#include <QColor>
#include <QList>
#include <QRgba64>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qcolor.h"

#include "gen_qcolor.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QColor* QColor_new() {
	return new QColor();
}

QColor* QColor_new2(uintptr_t color) {
	return new QColor(static_cast<Qt::GlobalColor>(color));
}

QColor* QColor_new3(int r, int g, int b) {
	return new QColor(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b));
}

QColor* QColor_new4(unsigned int rgb) {
	return new QColor(static_cast<QRgb>(rgb));
}

QColor* QColor_new5(QRgba64* rgba64) {
	return new QColor(*rgba64);
}

QColor* QColor_new6(const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return new QColor(name_QString);
}

QColor* QColor_new7(const char* aname) {
	return new QColor(aname);
}

QColor* QColor_new8(uintptr_t spec) {
	return new QColor(static_cast<QColor::Spec>(spec));
}

QColor* QColor_new9(QColor* color) {
	return new QColor(*color);
}

QColor* QColor_new10(uintptr_t spec, uint16_t a1, uint16_t a2, uint16_t a3, uint16_t a4) {
	return new QColor(static_cast<QColor::Spec>(spec), static_cast<ushort>(a1), static_cast<ushort>(a2), static_cast<ushort>(a3), static_cast<ushort>(a4));
}

QColor* QColor_new11(int r, int g, int b, int a) {
	return new QColor(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a));
}

QColor* QColor_new12(uintptr_t spec, uint16_t a1, uint16_t a2, uint16_t a3, uint16_t a4, uint16_t a5) {
	return new QColor(static_cast<QColor::Spec>(spec), static_cast<ushort>(a1), static_cast<ushort>(a2), static_cast<ushort>(a3), static_cast<ushort>(a4), static_cast<ushort>(a5));
}

void QColor_OperatorAssign(QColor* self, QColor* param1) {
	self->operator=(*param1);
}

void QColor_OperatorAssignWithColor(QColor* self, uintptr_t color) {
	self->operator=(static_cast<Qt::GlobalColor>(color));
}

bool QColor_IsValid(QColor* self) {
	return const_cast<const QColor*>(self)->isValid();
}

void QColor_Name(QColor* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QColor*>(self)->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColor_NameWithFormat(QColor* self, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QColor*>(self)->name(static_cast<QColor::NameFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QColor_SetNamedColor(QColor* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setNamedColor(name_QString);
}

void QColor_ColorNames(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = QColor::colorNames();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

uintptr_t QColor_Spec(QColor* self) {
	QColor::Spec ret = const_cast<const QColor*>(self)->spec();
	return static_cast<uintptr_t>(ret);
}

int QColor_Alpha(QColor* self) {
	return const_cast<const QColor*>(self)->alpha();
}

void QColor_SetAlpha(QColor* self, int alpha) {
	self->setAlpha(static_cast<int>(alpha));
}

double QColor_AlphaF(QColor* self) {
	return const_cast<const QColor*>(self)->alphaF();
}

void QColor_SetAlphaF(QColor* self, double alpha) {
	self->setAlphaF(static_cast<qreal>(alpha));
}

int QColor_Red(QColor* self) {
	return const_cast<const QColor*>(self)->red();
}

int QColor_Green(QColor* self) {
	return const_cast<const QColor*>(self)->green();
}

int QColor_Blue(QColor* self) {
	return const_cast<const QColor*>(self)->blue();
}

void QColor_SetRed(QColor* self, int red) {
	self->setRed(static_cast<int>(red));
}

void QColor_SetGreen(QColor* self, int green) {
	self->setGreen(static_cast<int>(green));
}

void QColor_SetBlue(QColor* self, int blue) {
	self->setBlue(static_cast<int>(blue));
}

double QColor_RedF(QColor* self) {
	return const_cast<const QColor*>(self)->redF();
}

double QColor_GreenF(QColor* self) {
	return const_cast<const QColor*>(self)->greenF();
}

double QColor_BlueF(QColor* self) {
	return const_cast<const QColor*>(self)->blueF();
}

void QColor_SetRedF(QColor* self, double red) {
	self->setRedF(static_cast<qreal>(red));
}

void QColor_SetGreenF(QColor* self, double green) {
	self->setGreenF(static_cast<qreal>(green));
}

void QColor_SetBlueF(QColor* self, double blue) {
	self->setBlueF(static_cast<qreal>(blue));
}

void QColor_GetRgb(QColor* self, int* r, int* g, int* b) {
	const_cast<const QColor*>(self)->getRgb(static_cast<int*>(r), static_cast<int*>(g), static_cast<int*>(b));
}

void QColor_SetRgb(QColor* self, int r, int g, int b) {
	self->setRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b));
}

void QColor_GetRgbF(QColor* self, double* r, double* g, double* b) {
	const_cast<const QColor*>(self)->getRgbF(static_cast<qreal*>(r), static_cast<qreal*>(g), static_cast<qreal*>(b));
}

void QColor_SetRgbF(QColor* self, double r, double g, double b) {
	self->setRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b));
}

QRgba64* QColor_Rgba64(QColor* self) {
	QRgba64 ret = const_cast<const QColor*>(self)->rgba64();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRgba64*>(new QRgba64(ret));
}

void QColor_SetRgba64(QColor* self, QRgba64* rgba) {
	self->setRgba64(*rgba);
}

unsigned int QColor_Rgba(QColor* self) {
	return const_cast<const QColor*>(self)->rgba();
}

void QColor_SetRgba(QColor* self, unsigned int rgba) {
	self->setRgba(static_cast<QRgb>(rgba));
}

unsigned int QColor_Rgb(QColor* self) {
	return const_cast<const QColor*>(self)->rgb();
}

void QColor_SetRgbWithRgb(QColor* self, unsigned int rgb) {
	self->setRgb(static_cast<QRgb>(rgb));
}

int QColor_Hue(QColor* self) {
	return const_cast<const QColor*>(self)->hue();
}

int QColor_Saturation(QColor* self) {
	return const_cast<const QColor*>(self)->saturation();
}

int QColor_HsvHue(QColor* self) {
	return const_cast<const QColor*>(self)->hsvHue();
}

int QColor_HsvSaturation(QColor* self) {
	return const_cast<const QColor*>(self)->hsvSaturation();
}

int QColor_Value(QColor* self) {
	return const_cast<const QColor*>(self)->value();
}

double QColor_HueF(QColor* self) {
	return const_cast<const QColor*>(self)->hueF();
}

double QColor_SaturationF(QColor* self) {
	return const_cast<const QColor*>(self)->saturationF();
}

double QColor_HsvHueF(QColor* self) {
	return const_cast<const QColor*>(self)->hsvHueF();
}

double QColor_HsvSaturationF(QColor* self) {
	return const_cast<const QColor*>(self)->hsvSaturationF();
}

double QColor_ValueF(QColor* self) {
	return const_cast<const QColor*>(self)->valueF();
}

void QColor_GetHsv(QColor* self, int* h, int* s, int* v) {
	const_cast<const QColor*>(self)->getHsv(static_cast<int*>(h), static_cast<int*>(s), static_cast<int*>(v));
}

void QColor_SetHsv(QColor* self, int h, int s, int v) {
	self->setHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v));
}

void QColor_GetHsvF(QColor* self, double* h, double* s, double* v) {
	const_cast<const QColor*>(self)->getHsvF(static_cast<qreal*>(h), static_cast<qreal*>(s), static_cast<qreal*>(v));
}

void QColor_SetHsvF(QColor* self, double h, double s, double v) {
	self->setHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v));
}

int QColor_Cyan(QColor* self) {
	return const_cast<const QColor*>(self)->cyan();
}

int QColor_Magenta(QColor* self) {
	return const_cast<const QColor*>(self)->magenta();
}

int QColor_Yellow(QColor* self) {
	return const_cast<const QColor*>(self)->yellow();
}

int QColor_Black(QColor* self) {
	return const_cast<const QColor*>(self)->black();
}

double QColor_CyanF(QColor* self) {
	return const_cast<const QColor*>(self)->cyanF();
}

double QColor_MagentaF(QColor* self) {
	return const_cast<const QColor*>(self)->magentaF();
}

double QColor_YellowF(QColor* self) {
	return const_cast<const QColor*>(self)->yellowF();
}

double QColor_BlackF(QColor* self) {
	return const_cast<const QColor*>(self)->blackF();
}

void QColor_GetCmyk(QColor* self, int* c, int* m, int* y, int* k) {
	self->getCmyk(static_cast<int*>(c), static_cast<int*>(m), static_cast<int*>(y), static_cast<int*>(k));
}

void QColor_GetCmyk2(QColor* self, int* c, int* m, int* y, int* k) {
	const_cast<const QColor*>(self)->getCmyk(static_cast<int*>(c), static_cast<int*>(m), static_cast<int*>(y), static_cast<int*>(k));
}

void QColor_SetCmyk(QColor* self, int c, int m, int y, int k) {
	self->setCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k));
}

void QColor_GetCmykF(QColor* self, double* c, double* m, double* y, double* k) {
	self->getCmykF(static_cast<qreal*>(c), static_cast<qreal*>(m), static_cast<qreal*>(y), static_cast<qreal*>(k));
}

void QColor_GetCmykF2(QColor* self, double* c, double* m, double* y, double* k) {
	const_cast<const QColor*>(self)->getCmykF(static_cast<qreal*>(c), static_cast<qreal*>(m), static_cast<qreal*>(y), static_cast<qreal*>(k));
}

void QColor_SetCmykF(QColor* self, double c, double m, double y, double k) {
	self->setCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k));
}

int QColor_HslHue(QColor* self) {
	return const_cast<const QColor*>(self)->hslHue();
}

int QColor_HslSaturation(QColor* self) {
	return const_cast<const QColor*>(self)->hslSaturation();
}

int QColor_Lightness(QColor* self) {
	return const_cast<const QColor*>(self)->lightness();
}

double QColor_HslHueF(QColor* self) {
	return const_cast<const QColor*>(self)->hslHueF();
}

double QColor_HslSaturationF(QColor* self) {
	return const_cast<const QColor*>(self)->hslSaturationF();
}

double QColor_LightnessF(QColor* self) {
	return const_cast<const QColor*>(self)->lightnessF();
}

void QColor_GetHsl(QColor* self, int* h, int* s, int* l) {
	const_cast<const QColor*>(self)->getHsl(static_cast<int*>(h), static_cast<int*>(s), static_cast<int*>(l));
}

void QColor_SetHsl(QColor* self, int h, int s, int l) {
	self->setHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l));
}

void QColor_GetHslF(QColor* self, double* h, double* s, double* l) {
	const_cast<const QColor*>(self)->getHslF(static_cast<qreal*>(h), static_cast<qreal*>(s), static_cast<qreal*>(l));
}

void QColor_SetHslF(QColor* self, double h, double s, double l) {
	self->setHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l));
}

QColor* QColor_ToRgb(QColor* self) {
	QColor ret = const_cast<const QColor*>(self)->toRgb();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_ToHsv(QColor* self) {
	QColor ret = const_cast<const QColor*>(self)->toHsv();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_ToCmyk(QColor* self) {
	QColor ret = const_cast<const QColor*>(self)->toCmyk();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_ToHsl(QColor* self) {
	QColor ret = const_cast<const QColor*>(self)->toHsl();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_ToExtendedRgb(QColor* self) {
	QColor ret = const_cast<const QColor*>(self)->toExtendedRgb();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_ConvertTo(QColor* self, uintptr_t colorSpec) {
	QColor ret = const_cast<const QColor*>(self)->convertTo(static_cast<QColor::Spec>(colorSpec));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromRgb(unsigned int rgb) {
	QColor ret = QColor::fromRgb(static_cast<QRgb>(rgb));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromRgba(unsigned int rgba) {
	QColor ret = QColor::fromRgba(static_cast<QRgb>(rgba));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromRgb2(int r, int g, int b) {
	QColor ret = QColor::fromRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromRgbF(double r, double g, double b) {
	QColor ret = QColor::fromRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromRgba64(uint16_t r, uint16_t g, uint16_t b) {
	QColor ret = QColor::fromRgba64(static_cast<ushort>(r), static_cast<ushort>(g), static_cast<ushort>(b));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromRgba64WithRgba(QRgba64* rgba) {
	QColor ret = QColor::fromRgba64(*rgba);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromHsv(int h, int s, int v) {
	QColor ret = QColor::fromHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromHsvF(double h, double s, double v) {
	QColor ret = QColor::fromHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromCmyk(int c, int m, int y, int k) {
	QColor ret = QColor::fromCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromCmykF(double c, double m, double y, double k) {
	QColor ret = QColor::fromCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromHsl(int h, int s, int l) {
	QColor ret = QColor::fromHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromHslF(double h, double s, double l) {
	QColor ret = QColor::fromHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_Light(QColor* self) {
	QColor ret = const_cast<const QColor*>(self)->light();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_Dark(QColor* self) {
	QColor ret = const_cast<const QColor*>(self)->dark();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_Lighter(QColor* self) {
	QColor ret = const_cast<const QColor*>(self)->lighter();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_Darker(QColor* self) {
	QColor ret = const_cast<const QColor*>(self)->darker();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

bool QColor_OperatorEqual(QColor* self, QColor* c) {
	return const_cast<const QColor*>(self)->operator==(*c);
}

bool QColor_OperatorNotEqual(QColor* self, QColor* c) {
	return const_cast<const QColor*>(self)->operator!=(*c);
}

bool QColor_IsValidColor(const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return QColor::isValidColor(name_QString);
}

void QColor_GetRgb4(QColor* self, int* r, int* g, int* b, int* a) {
	const_cast<const QColor*>(self)->getRgb(static_cast<int*>(r), static_cast<int*>(g), static_cast<int*>(b), static_cast<int*>(a));
}

void QColor_SetRgb4(QColor* self, int r, int g, int b, int a) {
	self->setRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a));
}

void QColor_GetRgbF4(QColor* self, double* r, double* g, double* b, double* a) {
	const_cast<const QColor*>(self)->getRgbF(static_cast<qreal*>(r), static_cast<qreal*>(g), static_cast<qreal*>(b), static_cast<qreal*>(a));
}

void QColor_SetRgbF4(QColor* self, double r, double g, double b, double a) {
	self->setRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b), static_cast<qreal>(a));
}

void QColor_GetHsv4(QColor* self, int* h, int* s, int* v, int* a) {
	const_cast<const QColor*>(self)->getHsv(static_cast<int*>(h), static_cast<int*>(s), static_cast<int*>(v), static_cast<int*>(a));
}

void QColor_SetHsv4(QColor* self, int h, int s, int v, int a) {
	self->setHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v), static_cast<int>(a));
}

void QColor_GetHsvF4(QColor* self, double* h, double* s, double* v, double* a) {
	const_cast<const QColor*>(self)->getHsvF(static_cast<qreal*>(h), static_cast<qreal*>(s), static_cast<qreal*>(v), static_cast<qreal*>(a));
}

void QColor_SetHsvF4(QColor* self, double h, double s, double v, double a) {
	self->setHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v), static_cast<qreal>(a));
}

void QColor_GetCmyk5(QColor* self, int* c, int* m, int* y, int* k, int* a) {
	self->getCmyk(static_cast<int*>(c), static_cast<int*>(m), static_cast<int*>(y), static_cast<int*>(k), static_cast<int*>(a));
}

void QColor_GetCmyk52(QColor* self, int* c, int* m, int* y, int* k, int* a) {
	const_cast<const QColor*>(self)->getCmyk(static_cast<int*>(c), static_cast<int*>(m), static_cast<int*>(y), static_cast<int*>(k), static_cast<int*>(a));
}

void QColor_SetCmyk5(QColor* self, int c, int m, int y, int k, int a) {
	self->setCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k), static_cast<int>(a));
}

void QColor_GetCmykF5(QColor* self, double* c, double* m, double* y, double* k, double* a) {
	self->getCmykF(static_cast<qreal*>(c), static_cast<qreal*>(m), static_cast<qreal*>(y), static_cast<qreal*>(k), static_cast<qreal*>(a));
}

void QColor_GetCmykF52(QColor* self, double* c, double* m, double* y, double* k, double* a) {
	const_cast<const QColor*>(self)->getCmykF(static_cast<qreal*>(c), static_cast<qreal*>(m), static_cast<qreal*>(y), static_cast<qreal*>(k), static_cast<qreal*>(a));
}

void QColor_SetCmykF5(QColor* self, double c, double m, double y, double k, double a) {
	self->setCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k), static_cast<qreal>(a));
}

void QColor_GetHsl4(QColor* self, int* h, int* s, int* l, int* a) {
	const_cast<const QColor*>(self)->getHsl(static_cast<int*>(h), static_cast<int*>(s), static_cast<int*>(l), static_cast<int*>(a));
}

void QColor_SetHsl4(QColor* self, int h, int s, int l, int a) {
	self->setHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l), static_cast<int>(a));
}

void QColor_GetHslF4(QColor* self, double* h, double* s, double* l, double* a) {
	const_cast<const QColor*>(self)->getHslF(static_cast<qreal*>(h), static_cast<qreal*>(s), static_cast<qreal*>(l), static_cast<qreal*>(a));
}

void QColor_SetHslF4(QColor* self, double h, double s, double l, double a) {
	self->setHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l), static_cast<qreal>(a));
}

QColor* QColor_FromRgb4(int r, int g, int b, int a) {
	QColor ret = QColor::fromRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromRgbF4(double r, double g, double b, double a) {
	QColor ret = QColor::fromRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b), static_cast<qreal>(a));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromRgba644(uint16_t r, uint16_t g, uint16_t b, uint16_t a) {
	QColor ret = QColor::fromRgba64(static_cast<ushort>(r), static_cast<ushort>(g), static_cast<ushort>(b), static_cast<ushort>(a));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromHsv4(int h, int s, int v, int a) {
	QColor ret = QColor::fromHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v), static_cast<int>(a));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromHsvF4(double h, double s, double v, double a) {
	QColor ret = QColor::fromHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v), static_cast<qreal>(a));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromCmyk5(int c, int m, int y, int k, int a) {
	QColor ret = QColor::fromCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k), static_cast<int>(a));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromCmykF5(double c, double m, double y, double k, double a) {
	QColor ret = QColor::fromCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k), static_cast<qreal>(a));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromHsl4(int h, int s, int l, int a) {
	QColor ret = QColor::fromHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l), static_cast<int>(a));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_FromHslF4(double h, double s, double l, double a) {
	QColor ret = QColor::fromHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l), static_cast<qreal>(a));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_Light1(QColor* self, int f) {
	QColor ret = const_cast<const QColor*>(self)->light(static_cast<int>(f));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_Dark1(QColor* self, int f) {
	QColor ret = const_cast<const QColor*>(self)->dark(static_cast<int>(f));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_Lighter1(QColor* self, int f) {
	QColor ret = const_cast<const QColor*>(self)->lighter(static_cast<int>(f));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QColor_Darker1(QColor* self, int f) {
	QColor ret = const_cast<const QColor*>(self)->darker(static_cast<int>(f));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QColor_Delete(QColor* self) {
	delete self;
}


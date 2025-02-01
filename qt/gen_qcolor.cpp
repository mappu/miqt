#include <QColor>
#include <QList>
#include <QRgba64>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qcolor.h>
#include "gen_qcolor.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QColor* QColor_new() {
	return new QColor();
}

QColor* QColor_new2(int color) {
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

QColor* QColor_new6(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QColor(name_QString);
}

QColor* QColor_new7(const char* aname) {
	return new QColor(aname);
}

QColor* QColor_new8(int spec) {
	return new QColor(static_cast<QColor::Spec>(spec));
}

QColor* QColor_new9(QColor* color) {
	return new QColor(*color);
}

QColor* QColor_new10(int spec, uint16_t a1, uint16_t a2, uint16_t a3, uint16_t a4) {
	return new QColor(static_cast<QColor::Spec>(spec), static_cast<ushort>(a1), static_cast<ushort>(a2), static_cast<ushort>(a3), static_cast<ushort>(a4));
}

QColor* QColor_new11(int r, int g, int b, int a) {
	return new QColor(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a));
}

QColor* QColor_new12(int spec, uint16_t a1, uint16_t a2, uint16_t a3, uint16_t a4, uint16_t a5) {
	return new QColor(static_cast<QColor::Spec>(spec), static_cast<ushort>(a1), static_cast<ushort>(a2), static_cast<ushort>(a3), static_cast<ushort>(a4), static_cast<ushort>(a5));
}

void QColor_operatorAssign(QColor* self, QColor* param1) {
	self->operator=(*param1);
}

void QColor_operatorAssignWithColor(QColor* self, int color) {
	self->operator=(static_cast<Qt::GlobalColor>(color));
}

bool QColor_isValid(const QColor* self) {
	return self->isValid();
}

struct miqt_string QColor_name(const QColor* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColor_nameWithFormat(const QColor* self, int format) {
	QString _ret = self->name(static_cast<QColor::NameFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColor_setNamedColor(QColor* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setNamedColor(name_QString);
}

struct miqt_array /* of struct miqt_string */  QColor_colorNames() {
	QStringList _ret = QColor::colorNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QColor_spec(const QColor* self) {
	QColor::Spec _ret = self->spec();
	return static_cast<int>(_ret);
}

int QColor_alpha(const QColor* self) {
	return self->alpha();
}

void QColor_setAlpha(QColor* self, int alpha) {
	self->setAlpha(static_cast<int>(alpha));
}

double QColor_alphaF(const QColor* self) {
	qreal _ret = self->alphaF();
	return static_cast<double>(_ret);
}

void QColor_setAlphaF(QColor* self, double alpha) {
	self->setAlphaF(static_cast<qreal>(alpha));
}

int QColor_red(const QColor* self) {
	return self->red();
}

int QColor_green(const QColor* self) {
	return self->green();
}

int QColor_blue(const QColor* self) {
	return self->blue();
}

void QColor_setRed(QColor* self, int red) {
	self->setRed(static_cast<int>(red));
}

void QColor_setGreen(QColor* self, int green) {
	self->setGreen(static_cast<int>(green));
}

void QColor_setBlue(QColor* self, int blue) {
	self->setBlue(static_cast<int>(blue));
}

double QColor_redF(const QColor* self) {
	qreal _ret = self->redF();
	return static_cast<double>(_ret);
}

double QColor_greenF(const QColor* self) {
	qreal _ret = self->greenF();
	return static_cast<double>(_ret);
}

double QColor_blueF(const QColor* self) {
	qreal _ret = self->blueF();
	return static_cast<double>(_ret);
}

void QColor_setRedF(QColor* self, double red) {
	self->setRedF(static_cast<qreal>(red));
}

void QColor_setGreenF(QColor* self, double green) {
	self->setGreenF(static_cast<qreal>(green));
}

void QColor_setBlueF(QColor* self, double blue) {
	self->setBlueF(static_cast<qreal>(blue));
}

void QColor_getRgb(const QColor* self, int* r, int* g, int* b) {
	self->getRgb(static_cast<int*>(r), static_cast<int*>(g), static_cast<int*>(b));
}

void QColor_setRgb(QColor* self, int r, int g, int b) {
	self->setRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b));
}

void QColor_getRgbF(const QColor* self, double* r, double* g, double* b) {
	self->getRgbF(static_cast<qreal*>(r), static_cast<qreal*>(g), static_cast<qreal*>(b));
}

void QColor_setRgbF(QColor* self, double r, double g, double b) {
	self->setRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b));
}

QRgba64* QColor_rgba64(const QColor* self) {
	return new QRgba64(self->rgba64());
}

void QColor_setRgba64(QColor* self, QRgba64* rgba) {
	self->setRgba64(*rgba);
}

unsigned int QColor_rgba(const QColor* self) {
	QRgb _ret = self->rgba();
	return static_cast<unsigned int>(_ret);
}

void QColor_setRgba(QColor* self, unsigned int rgba) {
	self->setRgba(static_cast<QRgb>(rgba));
}

unsigned int QColor_rgb(const QColor* self) {
	QRgb _ret = self->rgb();
	return static_cast<unsigned int>(_ret);
}

void QColor_setRgbWithRgb(QColor* self, unsigned int rgb) {
	self->setRgb(static_cast<QRgb>(rgb));
}

int QColor_hue(const QColor* self) {
	return self->hue();
}

int QColor_saturation(const QColor* self) {
	return self->saturation();
}

int QColor_hsvHue(const QColor* self) {
	return self->hsvHue();
}

int QColor_hsvSaturation(const QColor* self) {
	return self->hsvSaturation();
}

int QColor_value(const QColor* self) {
	return self->value();
}

double QColor_hueF(const QColor* self) {
	qreal _ret = self->hueF();
	return static_cast<double>(_ret);
}

double QColor_saturationF(const QColor* self) {
	qreal _ret = self->saturationF();
	return static_cast<double>(_ret);
}

double QColor_hsvHueF(const QColor* self) {
	qreal _ret = self->hsvHueF();
	return static_cast<double>(_ret);
}

double QColor_hsvSaturationF(const QColor* self) {
	qreal _ret = self->hsvSaturationF();
	return static_cast<double>(_ret);
}

double QColor_valueF(const QColor* self) {
	qreal _ret = self->valueF();
	return static_cast<double>(_ret);
}

void QColor_getHsv(const QColor* self, int* h, int* s, int* v) {
	self->getHsv(static_cast<int*>(h), static_cast<int*>(s), static_cast<int*>(v));
}

void QColor_setHsv(QColor* self, int h, int s, int v) {
	self->setHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v));
}

void QColor_getHsvF(const QColor* self, double* h, double* s, double* v) {
	self->getHsvF(static_cast<qreal*>(h), static_cast<qreal*>(s), static_cast<qreal*>(v));
}

void QColor_setHsvF(QColor* self, double h, double s, double v) {
	self->setHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v));
}

int QColor_cyan(const QColor* self) {
	return self->cyan();
}

int QColor_magenta(const QColor* self) {
	return self->magenta();
}

int QColor_yellow(const QColor* self) {
	return self->yellow();
}

int QColor_black(const QColor* self) {
	return self->black();
}

double QColor_cyanF(const QColor* self) {
	qreal _ret = self->cyanF();
	return static_cast<double>(_ret);
}

double QColor_magentaF(const QColor* self) {
	qreal _ret = self->magentaF();
	return static_cast<double>(_ret);
}

double QColor_yellowF(const QColor* self) {
	qreal _ret = self->yellowF();
	return static_cast<double>(_ret);
}

double QColor_blackF(const QColor* self) {
	qreal _ret = self->blackF();
	return static_cast<double>(_ret);
}

void QColor_getCmyk(QColor* self, int* c, int* m, int* y, int* k) {
	self->getCmyk(static_cast<int*>(c), static_cast<int*>(m), static_cast<int*>(y), static_cast<int*>(k));
}

void QColor_getCmyk2(const QColor* self, int* c, int* m, int* y, int* k) {
	self->getCmyk(static_cast<int*>(c), static_cast<int*>(m), static_cast<int*>(y), static_cast<int*>(k));
}

void QColor_setCmyk(QColor* self, int c, int m, int y, int k) {
	self->setCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k));
}

void QColor_getCmykF(QColor* self, double* c, double* m, double* y, double* k) {
	self->getCmykF(static_cast<qreal*>(c), static_cast<qreal*>(m), static_cast<qreal*>(y), static_cast<qreal*>(k));
}

void QColor_getCmykF2(const QColor* self, double* c, double* m, double* y, double* k) {
	self->getCmykF(static_cast<qreal*>(c), static_cast<qreal*>(m), static_cast<qreal*>(y), static_cast<qreal*>(k));
}

void QColor_setCmykF(QColor* self, double c, double m, double y, double k) {
	self->setCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k));
}

int QColor_hslHue(const QColor* self) {
	return self->hslHue();
}

int QColor_hslSaturation(const QColor* self) {
	return self->hslSaturation();
}

int QColor_lightness(const QColor* self) {
	return self->lightness();
}

double QColor_hslHueF(const QColor* self) {
	qreal _ret = self->hslHueF();
	return static_cast<double>(_ret);
}

double QColor_hslSaturationF(const QColor* self) {
	qreal _ret = self->hslSaturationF();
	return static_cast<double>(_ret);
}

double QColor_lightnessF(const QColor* self) {
	qreal _ret = self->lightnessF();
	return static_cast<double>(_ret);
}

void QColor_getHsl(const QColor* self, int* h, int* s, int* l) {
	self->getHsl(static_cast<int*>(h), static_cast<int*>(s), static_cast<int*>(l));
}

void QColor_setHsl(QColor* self, int h, int s, int l) {
	self->setHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l));
}

void QColor_getHslF(const QColor* self, double* h, double* s, double* l) {
	self->getHslF(static_cast<qreal*>(h), static_cast<qreal*>(s), static_cast<qreal*>(l));
}

void QColor_setHslF(QColor* self, double h, double s, double l) {
	self->setHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l));
}

QColor* QColor_toRgb(const QColor* self) {
	return new QColor(self->toRgb());
}

QColor* QColor_toHsv(const QColor* self) {
	return new QColor(self->toHsv());
}

QColor* QColor_toCmyk(const QColor* self) {
	return new QColor(self->toCmyk());
}

QColor* QColor_toHsl(const QColor* self) {
	return new QColor(self->toHsl());
}

QColor* QColor_toExtendedRgb(const QColor* self) {
	return new QColor(self->toExtendedRgb());
}

QColor* QColor_convertTo(const QColor* self, int colorSpec) {
	return new QColor(self->convertTo(static_cast<QColor::Spec>(colorSpec)));
}

QColor* QColor_fromRgb(unsigned int rgb) {
	return new QColor(QColor::fromRgb(static_cast<QRgb>(rgb)));
}

QColor* QColor_fromRgba(unsigned int rgba) {
	return new QColor(QColor::fromRgba(static_cast<QRgb>(rgba)));
}

QColor* QColor_fromRgb2(int r, int g, int b) {
	return new QColor(QColor::fromRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b)));
}

QColor* QColor_fromRgbF(double r, double g, double b) {
	return new QColor(QColor::fromRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b)));
}

QColor* QColor_fromRgba64(uint16_t r, uint16_t g, uint16_t b) {
	return new QColor(QColor::fromRgba64(static_cast<ushort>(r), static_cast<ushort>(g), static_cast<ushort>(b)));
}

QColor* QColor_fromRgba64WithRgba(QRgba64* rgba) {
	return new QColor(QColor::fromRgba64(*rgba));
}

QColor* QColor_fromHsv(int h, int s, int v) {
	return new QColor(QColor::fromHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v)));
}

QColor* QColor_fromHsvF(double h, double s, double v) {
	return new QColor(QColor::fromHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v)));
}

QColor* QColor_fromCmyk(int c, int m, int y, int k) {
	return new QColor(QColor::fromCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k)));
}

QColor* QColor_fromCmykF(double c, double m, double y, double k) {
	return new QColor(QColor::fromCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k)));
}

QColor* QColor_fromHsl(int h, int s, int l) {
	return new QColor(QColor::fromHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l)));
}

QColor* QColor_fromHslF(double h, double s, double l) {
	return new QColor(QColor::fromHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l)));
}

QColor* QColor_light(const QColor* self) {
	return new QColor(self->light());
}

QColor* QColor_dark(const QColor* self) {
	return new QColor(self->dark());
}

QColor* QColor_lighter(const QColor* self) {
	return new QColor(self->lighter());
}

QColor* QColor_darker(const QColor* self) {
	return new QColor(self->darker());
}

bool QColor_operatorEqual(const QColor* self, QColor* c) {
	return (*self == *c);
}

bool QColor_operatorNotEqual(const QColor* self, QColor* c) {
	return (*self != *c);
}

QVariant* QColor_ToQVariant(const QColor* self) {
	return new QVariant(self->operator QVariant());
}

bool QColor_isValidColor(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return QColor::isValidColor(name_QString);
}

void QColor_getRgb4(const QColor* self, int* r, int* g, int* b, int* a) {
	self->getRgb(static_cast<int*>(r), static_cast<int*>(g), static_cast<int*>(b), static_cast<int*>(a));
}

void QColor_setRgb4(QColor* self, int r, int g, int b, int a) {
	self->setRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a));
}

void QColor_getRgbF4(const QColor* self, double* r, double* g, double* b, double* a) {
	self->getRgbF(static_cast<qreal*>(r), static_cast<qreal*>(g), static_cast<qreal*>(b), static_cast<qreal*>(a));
}

void QColor_setRgbF4(QColor* self, double r, double g, double b, double a) {
	self->setRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b), static_cast<qreal>(a));
}

void QColor_getHsv4(const QColor* self, int* h, int* s, int* v, int* a) {
	self->getHsv(static_cast<int*>(h), static_cast<int*>(s), static_cast<int*>(v), static_cast<int*>(a));
}

void QColor_setHsv4(QColor* self, int h, int s, int v, int a) {
	self->setHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v), static_cast<int>(a));
}

void QColor_getHsvF4(const QColor* self, double* h, double* s, double* v, double* a) {
	self->getHsvF(static_cast<qreal*>(h), static_cast<qreal*>(s), static_cast<qreal*>(v), static_cast<qreal*>(a));
}

void QColor_setHsvF4(QColor* self, double h, double s, double v, double a) {
	self->setHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v), static_cast<qreal>(a));
}

void QColor_getCmyk5(QColor* self, int* c, int* m, int* y, int* k, int* a) {
	self->getCmyk(static_cast<int*>(c), static_cast<int*>(m), static_cast<int*>(y), static_cast<int*>(k), static_cast<int*>(a));
}

void QColor_getCmyk52(const QColor* self, int* c, int* m, int* y, int* k, int* a) {
	self->getCmyk(static_cast<int*>(c), static_cast<int*>(m), static_cast<int*>(y), static_cast<int*>(k), static_cast<int*>(a));
}

void QColor_setCmyk5(QColor* self, int c, int m, int y, int k, int a) {
	self->setCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k), static_cast<int>(a));
}

void QColor_getCmykF5(QColor* self, double* c, double* m, double* y, double* k, double* a) {
	self->getCmykF(static_cast<qreal*>(c), static_cast<qreal*>(m), static_cast<qreal*>(y), static_cast<qreal*>(k), static_cast<qreal*>(a));
}

void QColor_getCmykF52(const QColor* self, double* c, double* m, double* y, double* k, double* a) {
	self->getCmykF(static_cast<qreal*>(c), static_cast<qreal*>(m), static_cast<qreal*>(y), static_cast<qreal*>(k), static_cast<qreal*>(a));
}

void QColor_setCmykF5(QColor* self, double c, double m, double y, double k, double a) {
	self->setCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k), static_cast<qreal>(a));
}

void QColor_getHsl4(const QColor* self, int* h, int* s, int* l, int* a) {
	self->getHsl(static_cast<int*>(h), static_cast<int*>(s), static_cast<int*>(l), static_cast<int*>(a));
}

void QColor_setHsl4(QColor* self, int h, int s, int l, int a) {
	self->setHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l), static_cast<int>(a));
}

void QColor_getHslF4(const QColor* self, double* h, double* s, double* l, double* a) {
	self->getHslF(static_cast<qreal*>(h), static_cast<qreal*>(s), static_cast<qreal*>(l), static_cast<qreal*>(a));
}

void QColor_setHslF4(QColor* self, double h, double s, double l, double a) {
	self->setHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l), static_cast<qreal>(a));
}

QColor* QColor_fromRgb4(int r, int g, int b, int a) {
	return new QColor(QColor::fromRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a)));
}

QColor* QColor_fromRgbF4(double r, double g, double b, double a) {
	return new QColor(QColor::fromRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b), static_cast<qreal>(a)));
}

QColor* QColor_fromRgba644(uint16_t r, uint16_t g, uint16_t b, uint16_t a) {
	return new QColor(QColor::fromRgba64(static_cast<ushort>(r), static_cast<ushort>(g), static_cast<ushort>(b), static_cast<ushort>(a)));
}

QColor* QColor_fromHsv4(int h, int s, int v, int a) {
	return new QColor(QColor::fromHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v), static_cast<int>(a)));
}

QColor* QColor_fromHsvF4(double h, double s, double v, double a) {
	return new QColor(QColor::fromHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v), static_cast<qreal>(a)));
}

QColor* QColor_fromCmyk5(int c, int m, int y, int k, int a) {
	return new QColor(QColor::fromCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k), static_cast<int>(a)));
}

QColor* QColor_fromCmykF5(double c, double m, double y, double k, double a) {
	return new QColor(QColor::fromCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k), static_cast<qreal>(a)));
}

QColor* QColor_fromHsl4(int h, int s, int l, int a) {
	return new QColor(QColor::fromHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l), static_cast<int>(a)));
}

QColor* QColor_fromHslF4(double h, double s, double l, double a) {
	return new QColor(QColor::fromHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l), static_cast<qreal>(a)));
}

QColor* QColor_light1(const QColor* self, int f) {
	return new QColor(self->light(static_cast<int>(f)));
}

QColor* QColor_dark1(const QColor* self, int f) {
	return new QColor(self->dark(static_cast<int>(f)));
}

QColor* QColor_lighter1(const QColor* self, int f) {
	return new QColor(self->lighter(static_cast<int>(f)));
}

QColor* QColor_darker1(const QColor* self, int f) {
	return new QColor(self->darker(static_cast<int>(f)));
}

void QColor_delete(QColor* self) {
	delete self;
}


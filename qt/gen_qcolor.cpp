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

struct miqt_qcolor QColor_new() {
	return miqt_to_cabi<struct miqt_qcolor>(QColor());
}

struct miqt_qcolor QColor_new2(int color) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor(static_cast<Qt::GlobalColor>(color)));
}

struct miqt_qcolor QColor_new3(int r, int g, int b) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b)));
}

struct miqt_qcolor QColor_new4(unsigned int rgb) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor(static_cast<QRgb>(rgb)));
}

struct miqt_qcolor QColor_new5(struct miqt_qrgba64 rgba64) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor(miqt_from_cabi<QRgba64>(rgba64)));
}

struct miqt_qcolor QColor_new6(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return miqt_to_cabi<struct miqt_qcolor>(QColor(name_QString));
}

struct miqt_qcolor QColor_new7(const char* aname) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor(aname));
}

struct miqt_qcolor QColor_new8(int spec) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor(static_cast<QColor::Spec>(spec)));
}

struct miqt_qcolor QColor_new9(struct miqt_qcolor color) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor(miqt_from_cabi<QColor>(color)));
}

struct miqt_qcolor QColor_new10(int spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor(static_cast<QColor::Spec>(spec), static_cast<ushort>(a1), static_cast<ushort>(a2), static_cast<ushort>(a3), static_cast<ushort>(a4)));
}

struct miqt_qcolor QColor_new11(int r, int g, int b, int a) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a)));
}

struct miqt_qcolor QColor_new12(int spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor(static_cast<QColor::Spec>(spec), static_cast<ushort>(a1), static_cast<ushort>(a2), static_cast<ushort>(a3), static_cast<ushort>(a4), static_cast<ushort>(a5)));
}

void QColor_operatorAssign(QColor* self, struct miqt_qcolor param1) {
	self->operator=(miqt_from_cabi<QColor>(param1));
}

void QColor_operatorAssignWithColor(QColor* self, int color) {
	self->operator=(static_cast<Qt::GlobalColor>(color));
}

bool QColor_isValid(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->isValid();
}

struct miqt_string QColor_name(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColor_nameWithFormat(struct miqt_qcolor self_cabi, int format) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
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

int QColor_spec(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	QColor::Spec _ret = self->spec();
	return static_cast<int>(_ret);
}

int QColor_alpha(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->alpha();
}

void QColor_setAlpha(QColor* self, int alpha) {
	self->setAlpha(static_cast<int>(alpha));
}

double QColor_alphaF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->alphaF();
	return static_cast<double>(_ret);
}

void QColor_setAlphaF(QColor* self, double alpha) {
	self->setAlphaF(static_cast<qreal>(alpha));
}

int QColor_red(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->red();
}

int QColor_green(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->green();
}

int QColor_blue(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
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

double QColor_redF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->redF();
	return static_cast<double>(_ret);
}

double QColor_greenF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->greenF();
	return static_cast<double>(_ret);
}

double QColor_blueF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
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

void QColor_getRgb(struct miqt_qcolor self_cabi, int* r, int* g, int* b) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getRgb(static_cast<int*>(r), static_cast<int*>(g), static_cast<int*>(b));
}

void QColor_setRgb(QColor* self, int r, int g, int b) {
	self->setRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b));
}

void QColor_getRgbF(struct miqt_qcolor self_cabi, double* r, double* g, double* b) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getRgbF(static_cast<qreal*>(r), static_cast<qreal*>(g), static_cast<qreal*>(b));
}

void QColor_setRgbF(QColor* self, double r, double g, double b) {
	self->setRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b));
}

struct miqt_qrgba64 QColor_rgba64(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qrgba64>(self->rgba64());
}

void QColor_setRgba64(QColor* self, struct miqt_qrgba64 rgba) {
	self->setRgba64(miqt_from_cabi<QRgba64>(rgba));
}

unsigned int QColor_rgba(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	QRgb _ret = self->rgba();
	return static_cast<unsigned int>(_ret);
}

void QColor_setRgba(QColor* self, unsigned int rgba) {
	self->setRgba(static_cast<QRgb>(rgba));
}

unsigned int QColor_rgb(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	QRgb _ret = self->rgb();
	return static_cast<unsigned int>(_ret);
}

void QColor_setRgbWithRgb(QColor* self, unsigned int rgb) {
	self->setRgb(static_cast<QRgb>(rgb));
}

int QColor_hue(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->hue();
}

int QColor_saturation(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->saturation();
}

int QColor_hsvHue(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->hsvHue();
}

int QColor_hsvSaturation(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->hsvSaturation();
}

int QColor_value(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->value();
}

double QColor_hueF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->hueF();
	return static_cast<double>(_ret);
}

double QColor_saturationF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->saturationF();
	return static_cast<double>(_ret);
}

double QColor_hsvHueF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->hsvHueF();
	return static_cast<double>(_ret);
}

double QColor_hsvSaturationF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->hsvSaturationF();
	return static_cast<double>(_ret);
}

double QColor_valueF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->valueF();
	return static_cast<double>(_ret);
}

void QColor_getHsv(struct miqt_qcolor self_cabi, int* h, int* s, int* v) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getHsv(static_cast<int*>(h), static_cast<int*>(s), static_cast<int*>(v));
}

void QColor_setHsv(QColor* self, int h, int s, int v) {
	self->setHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v));
}

void QColor_getHsvF(struct miqt_qcolor self_cabi, double* h, double* s, double* v) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getHsvF(static_cast<qreal*>(h), static_cast<qreal*>(s), static_cast<qreal*>(v));
}

void QColor_setHsvF(QColor* self, double h, double s, double v) {
	self->setHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v));
}

int QColor_cyan(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->cyan();
}

int QColor_magenta(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->magenta();
}

int QColor_yellow(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->yellow();
}

int QColor_black(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->black();
}

double QColor_cyanF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->cyanF();
	return static_cast<double>(_ret);
}

double QColor_magentaF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->magentaF();
	return static_cast<double>(_ret);
}

double QColor_yellowF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->yellowF();
	return static_cast<double>(_ret);
}

double QColor_blackF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->blackF();
	return static_cast<double>(_ret);
}

void QColor_getCmyk(QColor* self, int* c, int* m, int* y, int* k) {
	self->getCmyk(static_cast<int*>(c), static_cast<int*>(m), static_cast<int*>(y), static_cast<int*>(k));
}

void QColor_getCmyk2(struct miqt_qcolor self_cabi, int* c, int* m, int* y, int* k) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getCmyk(static_cast<int*>(c), static_cast<int*>(m), static_cast<int*>(y), static_cast<int*>(k));
}

void QColor_setCmyk(QColor* self, int c, int m, int y, int k) {
	self->setCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k));
}

void QColor_getCmykF(QColor* self, double* c, double* m, double* y, double* k) {
	self->getCmykF(static_cast<qreal*>(c), static_cast<qreal*>(m), static_cast<qreal*>(y), static_cast<qreal*>(k));
}

void QColor_getCmykF2(struct miqt_qcolor self_cabi, double* c, double* m, double* y, double* k) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getCmykF(static_cast<qreal*>(c), static_cast<qreal*>(m), static_cast<qreal*>(y), static_cast<qreal*>(k));
}

void QColor_setCmykF(QColor* self, double c, double m, double y, double k) {
	self->setCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k));
}

int QColor_hslHue(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->hslHue();
}

int QColor_hslSaturation(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->hslSaturation();
}

int QColor_lightness(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return self->lightness();
}

double QColor_hslHueF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->hslHueF();
	return static_cast<double>(_ret);
}

double QColor_hslSaturationF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->hslSaturationF();
	return static_cast<double>(_ret);
}

double QColor_lightnessF(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	qreal _ret = self->lightnessF();
	return static_cast<double>(_ret);
}

void QColor_getHsl(struct miqt_qcolor self_cabi, int* h, int* s, int* l) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getHsl(static_cast<int*>(h), static_cast<int*>(s), static_cast<int*>(l));
}

void QColor_setHsl(QColor* self, int h, int s, int l) {
	self->setHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l));
}

void QColor_getHslF(struct miqt_qcolor self_cabi, double* h, double* s, double* l) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getHslF(static_cast<qreal*>(h), static_cast<qreal*>(s), static_cast<qreal*>(l));
}

void QColor_setHslF(QColor* self, double h, double s, double l) {
	self->setHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l));
}

struct miqt_qcolor QColor_toRgb(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->toRgb());
}

struct miqt_qcolor QColor_toHsv(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->toHsv());
}

struct miqt_qcolor QColor_toCmyk(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->toCmyk());
}

struct miqt_qcolor QColor_toHsl(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->toHsl());
}

struct miqt_qcolor QColor_toExtendedRgb(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->toExtendedRgb());
}

struct miqt_qcolor QColor_convertTo(struct miqt_qcolor self_cabi, int colorSpec) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->convertTo(static_cast<QColor::Spec>(colorSpec)));
}

struct miqt_qcolor QColor_fromRgb(unsigned int rgb) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromRgb(static_cast<QRgb>(rgb)));
}

struct miqt_qcolor QColor_fromRgba(unsigned int rgba) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromRgba(static_cast<QRgb>(rgba)));
}

struct miqt_qcolor QColor_fromRgb2(int r, int g, int b) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b)));
}

struct miqt_qcolor QColor_fromRgbF(double r, double g, double b) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b)));
}

struct miqt_qcolor QColor_fromRgba64(unsigned short r, unsigned short g, unsigned short b) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromRgba64(static_cast<ushort>(r), static_cast<ushort>(g), static_cast<ushort>(b)));
}

struct miqt_qcolor QColor_fromRgba64WithRgba(struct miqt_qrgba64 rgba) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromRgba64(miqt_from_cabi<QRgba64>(rgba)));
}

struct miqt_qcolor QColor_fromHsv(int h, int s, int v) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v)));
}

struct miqt_qcolor QColor_fromHsvF(double h, double s, double v) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v)));
}

struct miqt_qcolor QColor_fromCmyk(int c, int m, int y, int k) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k)));
}

struct miqt_qcolor QColor_fromCmykF(double c, double m, double y, double k) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k)));
}

struct miqt_qcolor QColor_fromHsl(int h, int s, int l) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l)));
}

struct miqt_qcolor QColor_fromHslF(double h, double s, double l) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l)));
}

struct miqt_qcolor QColor_light(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->light());
}

struct miqt_qcolor QColor_dark(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->dark());
}

struct miqt_qcolor QColor_lighter(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->lighter());
}

struct miqt_qcolor QColor_darker(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->darker());
}

bool QColor_operatorEqual(struct miqt_qcolor self_cabi, struct miqt_qcolor c) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return (*self == miqt_from_cabi<QColor>(c));
}

bool QColor_operatorNotEqual(struct miqt_qcolor self_cabi, struct miqt_qcolor c) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return (*self != miqt_from_cabi<QColor>(c));
}

QVariant* QColor_ToQVariant(struct miqt_qcolor self_cabi) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return new QVariant(self->operator QVariant());
}

bool QColor_isValidColor(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return QColor::isValidColor(name_QString);
}

void QColor_getRgb2(struct miqt_qcolor self_cabi, int* r, int* g, int* b, int* a) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getRgb(static_cast<int*>(r), static_cast<int*>(g), static_cast<int*>(b), static_cast<int*>(a));
}

void QColor_setRgb2(QColor* self, int r, int g, int b, int a) {
	self->setRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a));
}

void QColor_getRgbF2(struct miqt_qcolor self_cabi, double* r, double* g, double* b, double* a) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getRgbF(static_cast<qreal*>(r), static_cast<qreal*>(g), static_cast<qreal*>(b), static_cast<qreal*>(a));
}

void QColor_setRgbF2(QColor* self, double r, double g, double b, double a) {
	self->setRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b), static_cast<qreal>(a));
}

void QColor_getHsv2(struct miqt_qcolor self_cabi, int* h, int* s, int* v, int* a) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getHsv(static_cast<int*>(h), static_cast<int*>(s), static_cast<int*>(v), static_cast<int*>(a));
}

void QColor_setHsv2(QColor* self, int h, int s, int v, int a) {
	self->setHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v), static_cast<int>(a));
}

void QColor_getHsvF2(struct miqt_qcolor self_cabi, double* h, double* s, double* v, double* a) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getHsvF(static_cast<qreal*>(h), static_cast<qreal*>(s), static_cast<qreal*>(v), static_cast<qreal*>(a));
}

void QColor_setHsvF2(QColor* self, double h, double s, double v, double a) {
	self->setHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v), static_cast<qreal>(a));
}

void QColor_getCmyk3(QColor* self, int* c, int* m, int* y, int* k, int* a) {
	self->getCmyk(static_cast<int*>(c), static_cast<int*>(m), static_cast<int*>(y), static_cast<int*>(k), static_cast<int*>(a));
}

void QColor_getCmyk4(struct miqt_qcolor self_cabi, int* c, int* m, int* y, int* k, int* a) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getCmyk(static_cast<int*>(c), static_cast<int*>(m), static_cast<int*>(y), static_cast<int*>(k), static_cast<int*>(a));
}

void QColor_setCmyk2(QColor* self, int c, int m, int y, int k, int a) {
	self->setCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k), static_cast<int>(a));
}

void QColor_getCmykF3(QColor* self, double* c, double* m, double* y, double* k, double* a) {
	self->getCmykF(static_cast<qreal*>(c), static_cast<qreal*>(m), static_cast<qreal*>(y), static_cast<qreal*>(k), static_cast<qreal*>(a));
}

void QColor_getCmykF4(struct miqt_qcolor self_cabi, double* c, double* m, double* y, double* k, double* a) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getCmykF(static_cast<qreal*>(c), static_cast<qreal*>(m), static_cast<qreal*>(y), static_cast<qreal*>(k), static_cast<qreal*>(a));
}

void QColor_setCmykF2(QColor* self, double c, double m, double y, double k, double a) {
	self->setCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k), static_cast<qreal>(a));
}

void QColor_getHsl2(struct miqt_qcolor self_cabi, int* h, int* s, int* l, int* a) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getHsl(static_cast<int*>(h), static_cast<int*>(s), static_cast<int*>(l), static_cast<int*>(a));
}

void QColor_setHsl2(QColor* self, int h, int s, int l, int a) {
	self->setHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l), static_cast<int>(a));
}

void QColor_getHslF2(struct miqt_qcolor self_cabi, double* h, double* s, double* l, double* a) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	self->getHslF(static_cast<qreal*>(h), static_cast<qreal*>(s), static_cast<qreal*>(l), static_cast<qreal*>(a));
}

void QColor_setHslF2(QColor* self, double h, double s, double l, double a) {
	self->setHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l), static_cast<qreal>(a));
}

struct miqt_qcolor QColor_fromRgb3(int r, int g, int b, int a) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a)));
}

struct miqt_qcolor QColor_fromRgbF2(double r, double g, double b, double a) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromRgbF(static_cast<qreal>(r), static_cast<qreal>(g), static_cast<qreal>(b), static_cast<qreal>(a)));
}

struct miqt_qcolor QColor_fromRgba642(unsigned short r, unsigned short g, unsigned short b, unsigned short a) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromRgba64(static_cast<ushort>(r), static_cast<ushort>(g), static_cast<ushort>(b), static_cast<ushort>(a)));
}

struct miqt_qcolor QColor_fromHsv2(int h, int s, int v, int a) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v), static_cast<int>(a)));
}

struct miqt_qcolor QColor_fromHsvF2(double h, double s, double v, double a) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromHsvF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(v), static_cast<qreal>(a)));
}

struct miqt_qcolor QColor_fromCmyk2(int c, int m, int y, int k, int a) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k), static_cast<int>(a)));
}

struct miqt_qcolor QColor_fromCmykF2(double c, double m, double y, double k, double a) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromCmykF(static_cast<qreal>(c), static_cast<qreal>(m), static_cast<qreal>(y), static_cast<qreal>(k), static_cast<qreal>(a)));
}

struct miqt_qcolor QColor_fromHsl2(int h, int s, int l, int a) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l), static_cast<int>(a)));
}

struct miqt_qcolor QColor_fromHslF2(double h, double s, double l, double a) {
	return miqt_to_cabi<struct miqt_qcolor>(QColor::fromHslF(static_cast<qreal>(h), static_cast<qreal>(s), static_cast<qreal>(l), static_cast<qreal>(a)));
}

struct miqt_qcolor QColor_lightWithInt(struct miqt_qcolor self_cabi, int f) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->light(static_cast<int>(f)));
}

struct miqt_qcolor QColor_darkWithInt(struct miqt_qcolor self_cabi, int f) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->dark(static_cast<int>(f)));
}

struct miqt_qcolor QColor_lighterWithInt(struct miqt_qcolor self_cabi, int f) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->lighter(static_cast<int>(f)));
}

struct miqt_qcolor QColor_darkerWithInt(struct miqt_qcolor self_cabi, int f) {
	const QColor self_val = miqt_from_cabi<QColor>(self_cabi);
	const QColor* self = &self_val;
	return miqt_to_cabi<struct miqt_qcolor>(self->darker(static_cast<int>(f)));
}


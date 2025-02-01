#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWebEngineSettings>
#include <qwebenginesettings.h>
#include "gen_qwebenginesettings.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebEngineSettings* QWebEngineSettings_globalSettings() {
	return QWebEngineSettings::globalSettings();
}

QWebEngineSettings* QWebEngineSettings_defaultSettings() {
	return QWebEngineSettings::defaultSettings();
}

void QWebEngineSettings_setFontFamily(QWebEngineSettings* self, int which, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	self->setFontFamily(static_cast<QWebEngineSettings::FontFamily>(which), family_QString);
}

struct miqt_string QWebEngineSettings_fontFamily(const QWebEngineSettings* self, int which) {
	QString _ret = self->fontFamily(static_cast<QWebEngineSettings::FontFamily>(which));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineSettings_resetFontFamily(QWebEngineSettings* self, int which) {
	self->resetFontFamily(static_cast<QWebEngineSettings::FontFamily>(which));
}

void QWebEngineSettings_setFontSize(QWebEngineSettings* self, int type, int size) {
	self->setFontSize(static_cast<QWebEngineSettings::FontSize>(type), static_cast<int>(size));
}

int QWebEngineSettings_fontSize(const QWebEngineSettings* self, int type) {
	return self->fontSize(static_cast<QWebEngineSettings::FontSize>(type));
}

void QWebEngineSettings_resetFontSize(QWebEngineSettings* self, int type) {
	self->resetFontSize(static_cast<QWebEngineSettings::FontSize>(type));
}

void QWebEngineSettings_setAttribute(QWebEngineSettings* self, int attr, bool on) {
	self->setAttribute(static_cast<QWebEngineSettings::WebAttribute>(attr), on);
}

bool QWebEngineSettings_testAttribute(const QWebEngineSettings* self, int attr) {
	return self->testAttribute(static_cast<QWebEngineSettings::WebAttribute>(attr));
}

void QWebEngineSettings_resetAttribute(QWebEngineSettings* self, int attr) {
	self->resetAttribute(static_cast<QWebEngineSettings::WebAttribute>(attr));
}

void QWebEngineSettings_setDefaultTextEncoding(QWebEngineSettings* self, struct miqt_string encoding) {
	QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
	self->setDefaultTextEncoding(encoding_QString);
}

struct miqt_string QWebEngineSettings_defaultTextEncoding(const QWebEngineSettings* self) {
	QString _ret = self->defaultTextEncoding();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWebEngineSettings_unknownUrlSchemePolicy(const QWebEngineSettings* self) {
	QWebEngineSettings::UnknownUrlSchemePolicy _ret = self->unknownUrlSchemePolicy();
	return static_cast<int>(_ret);
}

void QWebEngineSettings_setUnknownUrlSchemePolicy(QWebEngineSettings* self, int policy) {
	self->setUnknownUrlSchemePolicy(static_cast<QWebEngineSettings::UnknownUrlSchemePolicy>(policy));
}

void QWebEngineSettings_resetUnknownUrlSchemePolicy(QWebEngineSettings* self) {
	self->resetUnknownUrlSchemePolicy();
}


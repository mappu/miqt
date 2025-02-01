#include <QFont>
#include <QPalette>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QToolTip>
#include <QWidget>
#include <qtooltip.h>
#include "gen_qtooltip.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QToolTip_showText(QPoint* pos, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QToolTip::showText(*pos, text_QString);
}

void QToolTip_showText2(QPoint* pos, struct miqt_string text, QWidget* w, QRect* rect) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QToolTip::showText(*pos, text_QString, w, *rect);
}

void QToolTip_showText3(QPoint* pos, struct miqt_string text, QWidget* w, QRect* rect, int msecShowTime) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QToolTip::showText(*pos, text_QString, w, *rect, static_cast<int>(msecShowTime));
}

void QToolTip_hideText() {
	QToolTip::hideText();
}

bool QToolTip_isVisible() {
	return QToolTip::isVisible();
}

struct miqt_string QToolTip_text() {
	QString _ret = QToolTip::text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPalette* QToolTip_palette() {
	return new QPalette(QToolTip::palette());
}

void QToolTip_setPalette(QPalette* palette) {
	QToolTip::setPalette(*palette);
}

QFont* QToolTip_font() {
	return new QFont(QToolTip::font());
}

void QToolTip_setFont(QFont* font) {
	QToolTip::setFont(*font);
}

void QToolTip_showText32(QPoint* pos, struct miqt_string text, QWidget* w) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QToolTip::showText(*pos, text_QString, w);
}

void QToolTip_delete(QToolTip* self) {
	delete self;
}


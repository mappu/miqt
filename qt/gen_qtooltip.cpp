#include <QFont>
#include <QPalette>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QToolTip>
#include <QWidget>
#include "qtooltip.h"
#include "gen_qtooltip.h"
#include "_cgo_export.h"

void QToolTip_ShowText(QPoint* pos, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QToolTip::showText(*pos, text_QString);
}

void QToolTip_ShowText2(QPoint* pos, struct miqt_string* text, QWidget* w, QRect* rect) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QToolTip::showText(*pos, text_QString, w, *rect);
}

void QToolTip_ShowText3(QPoint* pos, struct miqt_string* text, QWidget* w, QRect* rect, int msecShowTime) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QToolTip::showText(*pos, text_QString, w, *rect, static_cast<int>(msecShowTime));
}

void QToolTip_HideText() {
	QToolTip::hideText();
}

bool QToolTip_IsVisible() {
	return QToolTip::isVisible();
}

struct miqt_string* QToolTip_Text() {
	QString _ret = QToolTip::text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QPalette* QToolTip_Palette() {
	QPalette _ret = QToolTip::palette();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(_ret));
}

void QToolTip_SetPalette(QPalette* palette) {
	QToolTip::setPalette(*palette);
}

QFont* QToolTip_Font() {
	QFont _ret = QToolTip::font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(_ret));
}

void QToolTip_SetFont(QFont* font) {
	QToolTip::setFont(*font);
}

void QToolTip_ShowText32(QPoint* pos, struct miqt_string* text, QWidget* w) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	QToolTip::showText(*pos, text_QString, w);
}

void QToolTip_Delete(QToolTip* self) {
	delete self;
}


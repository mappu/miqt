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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QToolTip_ShowText(QPoint* pos, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QToolTip::showText(*pos, text_QString);
}

void QToolTip_ShowText2(QPoint* pos, const char* text, size_t text_Strlen, QWidget* w, QRect* rect) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QToolTip::showText(*pos, text_QString, w, *rect);
}

void QToolTip_ShowText3(QPoint* pos, const char* text, size_t text_Strlen, QWidget* w, QRect* rect, int msecShowTime) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QToolTip::showText(*pos, text_QString, w, *rect, static_cast<int>(msecShowTime));
}

void QToolTip_HideText() {
	QToolTip::hideText();
}

bool QToolTip_IsVisible() {
	return QToolTip::isVisible();
}

void QToolTip_Text(char** _out, int* _out_Strlen) {
	QString ret = QToolTip::text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QPalette* QToolTip_Palette() {
	QPalette ret = QToolTip::palette();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(ret));
}

void QToolTip_SetPalette(QPalette* palette) {
	QToolTip::setPalette(*palette);
}

QFont* QToolTip_Font() {
	QFont ret = QToolTip::font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QToolTip_SetFont(QFont* font) {
	QToolTip::setFont(*font);
}

void QToolTip_ShowText32(QPoint* pos, const char* text, size_t text_Strlen, QWidget* w) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QToolTip::showText(*pos, text_QString, w);
}

void QToolTip_Delete(QToolTip* self) {
	delete self;
}


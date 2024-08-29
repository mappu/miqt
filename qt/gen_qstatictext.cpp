#include <QFont>
#include <QSizeF>
#include <QStaticText>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextOption>
#include <QTransform>
#include "qstatictext.h"

#include "gen_qstatictext.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStaticText* QStaticText_new() {
	return new QStaticText();
}

QStaticText* QStaticText_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QStaticText(text_QString);
}

QStaticText* QStaticText_new3(QStaticText* other) {
	return new QStaticText(*other);
}

void QStaticText_OperatorAssign(QStaticText* self, QStaticText* param1) {
	self->operator=(*param1);
}

void QStaticText_Swap(QStaticText* self, QStaticText* other) {
	self->swap(*other);
}

void QStaticText_SetText(QStaticText* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(text_QString);
}

void QStaticText_Text(QStaticText* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QStaticText*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStaticText_SetTextFormat(QStaticText* self, uintptr_t textFormat) {
	self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

uintptr_t QStaticText_TextFormat(QStaticText* self) {
	Qt::TextFormat ret = const_cast<const QStaticText*>(self)->textFormat();
	return static_cast<uintptr_t>(ret);
}

void QStaticText_SetTextWidth(QStaticText* self, double textWidth) {
	self->setTextWidth(static_cast<qreal>(textWidth));
}

double QStaticText_TextWidth(QStaticText* self) {
	return const_cast<const QStaticText*>(self)->textWidth();
}

void QStaticText_SetTextOption(QStaticText* self, QTextOption* textOption) {
	self->setTextOption(*textOption);
}

QTextOption* QStaticText_TextOption(QStaticText* self) {
	QTextOption ret = const_cast<const QStaticText*>(self)->textOption();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextOption*>(new QTextOption(ret));
}

QSizeF* QStaticText_Size(QStaticText* self) {
	QSizeF ret = const_cast<const QStaticText*>(self)->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QStaticText_Prepare(QStaticText* self) {
	self->prepare();
}

void QStaticText_SetPerformanceHint(QStaticText* self, uintptr_t performanceHint) {
	self->setPerformanceHint(static_cast<QStaticText::PerformanceHint>(performanceHint));
}

uintptr_t QStaticText_PerformanceHint(QStaticText* self) {
	QStaticText::PerformanceHint ret = const_cast<const QStaticText*>(self)->performanceHint();
	return static_cast<uintptr_t>(ret);
}

bool QStaticText_OperatorEqual(QStaticText* self, QStaticText* param1) {
	return const_cast<const QStaticText*>(self)->operator==(*param1);
}

bool QStaticText_OperatorNotEqual(QStaticText* self, QStaticText* param1) {
	return const_cast<const QStaticText*>(self)->operator!=(*param1);
}

void QStaticText_Prepare1(QStaticText* self, QTransform* matrix) {
	self->prepare(*matrix);
}

void QStaticText_Prepare2(QStaticText* self, QTransform* matrix, QFont* font) {
	self->prepare(*matrix, *font);
}

void QStaticText_Delete(QStaticText* self) {
	delete self;
}


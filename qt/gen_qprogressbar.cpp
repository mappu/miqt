#include "gen_qprogressbar.h"
#include "qprogressbar.h"

#include <QMetaObject>
#include <QProgressBar>
#include <QSize>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QProgressBar* QProgressBar_new() {
	return new QProgressBar();
}

QProgressBar* QProgressBar_new2(QWidget* parent) {
	return new QProgressBar(parent);
}

QMetaObject* QProgressBar_MetaObject(QProgressBar* self) {
	return (QMetaObject*) self->metaObject();
}

void QProgressBar_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QProgressBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressBar_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QProgressBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QProgressBar_Minimum(QProgressBar* self) {
	return self->minimum();
}

int QProgressBar_Maximum(QProgressBar* self) {
	return self->maximum();
}

int QProgressBar_Value(QProgressBar* self) {
	return self->value();
}

void QProgressBar_Text(QProgressBar* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressBar_SetTextVisible(QProgressBar* self, bool visible) {
	self->setTextVisible(visible);
}

bool QProgressBar_IsTextVisible(QProgressBar* self) {
	return self->isTextVisible();
}

QSize* QProgressBar_SizeHint(QProgressBar* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QProgressBar_MinimumSizeHint(QProgressBar* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QProgressBar_SetInvertedAppearance(QProgressBar* self, bool invert) {
	self->setInvertedAppearance(invert);
}

bool QProgressBar_InvertedAppearance(QProgressBar* self) {
	return self->invertedAppearance();
}

void QProgressBar_SetFormat(QProgressBar* self, const char* format, size_t format_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	self->setFormat(format_QString);
}

void QProgressBar_ResetFormat(QProgressBar* self) {
	self->resetFormat();
}

void QProgressBar_Format(QProgressBar* self, char** _out, int* _out_Strlen) {
	QString ret = self->format();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressBar_Reset(QProgressBar* self) {
	self->reset();
}

void QProgressBar_SetRange(QProgressBar* self, int minimum, int maximum) {
	self->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QProgressBar_SetMinimum(QProgressBar* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

void QProgressBar_SetMaximum(QProgressBar* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

void QProgressBar_SetValue(QProgressBar* self, int value) {
	self->setValue(static_cast<int>(value));
}

void QProgressBar_ValueChanged(QProgressBar* self, int value) {
	self->valueChanged(static_cast<int>(value));
}

void QProgressBar_connect_ValueChanged(QProgressBar* self, void* slot) {
	QProgressBar::connect(self, static_cast<void (QProgressBar::*)(int)>(&QProgressBar::valueChanged), self, [=](int value) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QProgressBar_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QProgressBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressBar_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QProgressBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressBar_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QProgressBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressBar_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QProgressBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QProgressBar_Delete(QProgressBar* self) {
	delete self;
}


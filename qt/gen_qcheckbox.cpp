#include <QCheckBox>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qcheckbox.h"

#include "gen_qcheckbox.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCheckBox* QCheckBox_new() {
	return new QCheckBox();
}

QCheckBox* QCheckBox_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QCheckBox(text_QString);
}

QCheckBox* QCheckBox_new3(QWidget* parent) {
	return new QCheckBox(parent);
}

QCheckBox* QCheckBox_new4(const char* text, size_t text_Strlen, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QCheckBox(text_QString, parent);
}

QMetaObject* QCheckBox_MetaObject(QCheckBox* self) {
	return (QMetaObject*) const_cast<const QCheckBox*>(self)->metaObject();
}

void QCheckBox_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QCheckBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCheckBox_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QCheckBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QCheckBox_SizeHint(QCheckBox* self) {
	QSize ret = const_cast<const QCheckBox*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QCheckBox_MinimumSizeHint(QCheckBox* self) {
	QSize ret = const_cast<const QCheckBox*>(self)->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QCheckBox_SetTristate(QCheckBox* self) {
	self->setTristate();
}

bool QCheckBox_IsTristate(QCheckBox* self) {
	return const_cast<const QCheckBox*>(self)->isTristate();
}

uintptr_t QCheckBox_CheckState(QCheckBox* self) {
	Qt::CheckState ret = const_cast<const QCheckBox*>(self)->checkState();
	return static_cast<uintptr_t>(ret);
}

void QCheckBox_SetCheckState(QCheckBox* self, uintptr_t state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

void QCheckBox_StateChanged(QCheckBox* self, int param1) {
	self->stateChanged(static_cast<int>(param1));
}

void QCheckBox_connect_StateChanged(QCheckBox* self, void* slot) {
	QCheckBox::connect(self, static_cast<void (QCheckBox::*)(int)>(&QCheckBox::stateChanged), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCheckBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QCheckBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCheckBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCheckBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCheckBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QCheckBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCheckBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCheckBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCheckBox_SetTristate1(QCheckBox* self, bool y) {
	self->setTristate(y);
}

void QCheckBox_Delete(QCheckBox* self) {
	delete self;
}


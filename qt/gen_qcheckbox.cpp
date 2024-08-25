#include "gen_qcheckbox.h"
#include "qcheckbox.h"

#include <QCheckBox>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QWidget>


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
	return (QMetaObject*) self->metaObject();
}

void QCheckBox_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QCheckBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCheckBox_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QCheckBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QCheckBox_SizeHint(QCheckBox* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QCheckBox_MinimumSizeHint(QCheckBox* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QCheckBox_SetTristate(QCheckBox* self) {
	self->setTristate();
}

bool QCheckBox_IsTristate(QCheckBox* self) {
	return self->isTristate();
}

void QCheckBox_StateChanged(QCheckBox* self, int param1) {
	self->stateChanged(static_cast<int>(param1));
}

void QCheckBox_connect_StateChanged(QCheckBox* self, void* slot) {
	QCheckBox::connect(self, static_cast<void (QCheckBox::*)(int)>(&QCheckBox::stateChanged), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCheckBox_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QCheckBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCheckBox_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCheckBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCheckBox_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QCheckBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCheckBox_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
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


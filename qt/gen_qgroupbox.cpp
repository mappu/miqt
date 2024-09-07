#include <QGroupBox>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qgroupbox.h"

#include "gen_qgroupbox.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGroupBox* QGroupBox_new() {
	return new QGroupBox();
}

QGroupBox* QGroupBox_new2(const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return new QGroupBox(title_QString);
}

QGroupBox* QGroupBox_new3(QWidget* parent) {
	return new QGroupBox(parent);
}

QGroupBox* QGroupBox_new4(const char* title, size_t title_Strlen, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return new QGroupBox(title_QString, parent);
}

QMetaObject* QGroupBox_MetaObject(QGroupBox* self) {
	return (QMetaObject*) const_cast<const QGroupBox*>(self)->metaObject();
}

void QGroupBox_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGroupBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGroupBox_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGroupBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGroupBox_Title(QGroupBox* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QGroupBox*>(self)->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGroupBox_SetTitle(QGroupBox* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	self->setTitle(title_QString);
}

int QGroupBox_Alignment(QGroupBox* self) {
	Qt::Alignment ret = const_cast<const QGroupBox*>(self)->alignment();
	return static_cast<int>(ret);
}

void QGroupBox_SetAlignment(QGroupBox* self, int alignment) {
	self->setAlignment(static_cast<int>(alignment));
}

QSize* QGroupBox_MinimumSizeHint(QGroupBox* self) {
	QSize ret = const_cast<const QGroupBox*>(self)->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

bool QGroupBox_IsFlat(QGroupBox* self) {
	return const_cast<const QGroupBox*>(self)->isFlat();
}

void QGroupBox_SetFlat(QGroupBox* self, bool flat) {
	self->setFlat(flat);
}

bool QGroupBox_IsCheckable(QGroupBox* self) {
	return const_cast<const QGroupBox*>(self)->isCheckable();
}

void QGroupBox_SetCheckable(QGroupBox* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QGroupBox_IsChecked(QGroupBox* self) {
	return const_cast<const QGroupBox*>(self)->isChecked();
}

void QGroupBox_SetChecked(QGroupBox* self, bool checked) {
	self->setChecked(checked);
}

void QGroupBox_Clicked(QGroupBox* self) {
	self->clicked();
}

void QGroupBox_connect_Clicked(QGroupBox* self, void* slot) {
	QGroupBox::connect(self, static_cast<void (QGroupBox::*)(bool)>(&QGroupBox::clicked), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGroupBox_Toggled(QGroupBox* self, bool param1) {
	self->toggled(param1);
}

void QGroupBox_connect_Toggled(QGroupBox* self, void* slot) {
	QGroupBox::connect(self, static_cast<void (QGroupBox::*)(bool)>(&QGroupBox::toggled), self, [=](bool param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGroupBox_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGroupBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGroupBox_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGroupBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGroupBox_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGroupBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGroupBox_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGroupBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGroupBox_Clicked1(QGroupBox* self, bool checked) {
	self->clicked(checked);
}

void QGroupBox_connect_Clicked1(QGroupBox* self, void* slot) {
	QGroupBox::connect(self, static_cast<void (QGroupBox::*)(bool)>(&QGroupBox::clicked), self, [=](bool checked) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGroupBox_Delete(QGroupBox* self) {
	delete self;
}


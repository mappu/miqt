#include "gen_qpushbutton.h"
#include "qpushbutton.h"

#include <QIcon>
#include <QMenu>
#include <QMetaObject>
#include <QPushButton>
#include <QSize>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPushButton* QPushButton_new() {
	return new QPushButton();
}

QPushButton* QPushButton_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QPushButton(text_QString);
}

QPushButton* QPushButton_new3(QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QPushButton(*icon, text_QString);
}

QPushButton* QPushButton_new4(QWidget* parent) {
	return new QPushButton(parent);
}

QPushButton* QPushButton_new5(const char* text, size_t text_Strlen, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QPushButton(text_QString, parent);
}

QPushButton* QPushButton_new6(QIcon* icon, const char* text, size_t text_Strlen, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QPushButton(*icon, text_QString, parent);
}

QMetaObject* QPushButton_MetaObject(QPushButton* self) {
	return (QMetaObject*) self->metaObject();
}

void QPushButton_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QPushButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPushButton_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QPushButton::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QPushButton_SizeHint(QPushButton* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QPushButton_MinimumSizeHint(QPushButton* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

bool QPushButton_AutoDefault(QPushButton* self) {
	return self->autoDefault();
}

void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault) {
	self->setAutoDefault(autoDefault);
}

bool QPushButton_IsDefault(QPushButton* self) {
	return self->isDefault();
}

void QPushButton_SetDefault(QPushButton* self, bool defaultVal) {
	self->setDefault(defaultVal);
}

void QPushButton_SetMenu(QPushButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QPushButton_Menu(QPushButton* self) {
	return self->menu();
}

void QPushButton_SetFlat(QPushButton* self, bool flat) {
	self->setFlat(flat);
}

bool QPushButton_IsFlat(QPushButton* self) {
	return self->isFlat();
}

void QPushButton_ShowMenu(QPushButton* self) {
	self->showMenu();
}

void QPushButton_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QPushButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPushButton_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPushButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPushButton_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QPushButton::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPushButton_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPushButton::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPushButton_Delete(QPushButton* self) {
	delete self;
}


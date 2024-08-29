#include <QMetaObject>
#include <QStatusBar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qstatusbar.h"

#include "gen_qstatusbar.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStatusBar* QStatusBar_new() {
	return new QStatusBar();
}

QStatusBar* QStatusBar_new2(QWidget* parent) {
	return new QStatusBar(parent);
}

QMetaObject* QStatusBar_MetaObject(QStatusBar* self) {
	return (QMetaObject*) const_cast<const QStatusBar*>(self)->metaObject();
}

void QStatusBar_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStatusBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStatusBar_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStatusBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStatusBar_AddWidget(QStatusBar* self, QWidget* widget) {
	self->addWidget(widget);
}

int QStatusBar_InsertWidget(QStatusBar* self, int index, QWidget* widget) {
	return self->insertWidget(static_cast<int>(index), widget);
}

void QStatusBar_AddPermanentWidget(QStatusBar* self, QWidget* widget) {
	self->addPermanentWidget(widget);
}

int QStatusBar_InsertPermanentWidget(QStatusBar* self, int index, QWidget* widget) {
	return self->insertPermanentWidget(static_cast<int>(index), widget);
}

void QStatusBar_RemoveWidget(QStatusBar* self, QWidget* widget) {
	self->removeWidget(widget);
}

void QStatusBar_SetSizeGripEnabled(QStatusBar* self, bool sizeGripEnabled) {
	self->setSizeGripEnabled(sizeGripEnabled);
}

bool QStatusBar_IsSizeGripEnabled(QStatusBar* self) {
	return const_cast<const QStatusBar*>(self)->isSizeGripEnabled();
}

void QStatusBar_CurrentMessage(QStatusBar* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QStatusBar*>(self)->currentMessage();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStatusBar_ShowMessage(QStatusBar* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->showMessage(text_QString);
}

void QStatusBar_ClearMessage(QStatusBar* self) {
	self->clearMessage();
}

void QStatusBar_MessageChanged(QStatusBar* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->messageChanged(text_QString);
}

void QStatusBar_connect_MessageChanged(QStatusBar* self, void* slot) {
	QStatusBar::connect(self, static_cast<void (QStatusBar::*)(const QString&)>(&QStatusBar::messageChanged), self, [=](const QString& text) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStatusBar_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStatusBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStatusBar_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStatusBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStatusBar_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStatusBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStatusBar_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStatusBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStatusBar_AddWidget2(QStatusBar* self, QWidget* widget, int stretch) {
	self->addWidget(widget, static_cast<int>(stretch));
}

int QStatusBar_InsertWidget3(QStatusBar* self, int index, QWidget* widget, int stretch) {
	return self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QStatusBar_AddPermanentWidget2(QStatusBar* self, QWidget* widget, int stretch) {
	self->addPermanentWidget(widget, static_cast<int>(stretch));
}

int QStatusBar_InsertPermanentWidget3(QStatusBar* self, int index, QWidget* widget, int stretch) {
	return self->insertPermanentWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QStatusBar_ShowMessage2(QStatusBar* self, const char* text, size_t text_Strlen, int timeout) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->showMessage(text_QString, static_cast<int>(timeout));
}

void QStatusBar_Delete(QStatusBar* self) {
	delete self;
}


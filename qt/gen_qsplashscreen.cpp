#include <QColor>
#include <QMetaObject>
#include <QPixmap>
#include <QScreen>
#include <QSplashScreen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qsplashscreen.h"

#include "gen_qsplashscreen.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSplashScreen* QSplashScreen_new() {
	return new QSplashScreen();
}

QSplashScreen* QSplashScreen_new2(QScreen* screen) {
	return new QSplashScreen(screen);
}

QSplashScreen* QSplashScreen_new3(QWidget* parent) {
	return new QSplashScreen(parent);
}

QSplashScreen* QSplashScreen_new4(QPixmap* pixmap) {
	return new QSplashScreen(*pixmap);
}

QSplashScreen* QSplashScreen_new5(QPixmap* pixmap, int f) {
	return new QSplashScreen(*pixmap, static_cast<Qt::WindowFlags>(f));
}

QSplashScreen* QSplashScreen_new6(QScreen* screen, QPixmap* pixmap) {
	return new QSplashScreen(screen, *pixmap);
}

QSplashScreen* QSplashScreen_new7(QScreen* screen, QPixmap* pixmap, int f) {
	return new QSplashScreen(screen, *pixmap, static_cast<Qt::WindowFlags>(f));
}

QSplashScreen* QSplashScreen_new8(QWidget* parent, QPixmap* pixmap) {
	return new QSplashScreen(parent, *pixmap);
}

QSplashScreen* QSplashScreen_new9(QWidget* parent, QPixmap* pixmap, int f) {
	return new QSplashScreen(parent, *pixmap, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QSplashScreen_MetaObject(QSplashScreen* self) {
	return (QMetaObject*) const_cast<const QSplashScreen*>(self)->metaObject();
}

void QSplashScreen_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSplashScreen::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSplashScreen_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QSplashScreen::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSplashScreen_SetPixmap(QSplashScreen* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

QPixmap* QSplashScreen_Pixmap(QSplashScreen* self) {
	QPixmap ret = const_cast<const QSplashScreen*>(self)->pixmap();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QSplashScreen_Finish(QSplashScreen* self, QWidget* w) {
	self->finish(w);
}

void QSplashScreen_Repaint(QSplashScreen* self) {
	self->repaint();
}

void QSplashScreen_Message(QSplashScreen* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QSplashScreen*>(self)->message();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSplashScreen_ShowMessage(QSplashScreen* self, const char* message, size_t message_Strlen) {
	QString message_QString = QString::fromUtf8(message, message_Strlen);
	self->showMessage(message_QString);
}

void QSplashScreen_ClearMessage(QSplashScreen* self) {
	self->clearMessage();
}

void QSplashScreen_MessageChanged(QSplashScreen* self, const char* message, size_t message_Strlen) {
	QString message_QString = QString::fromUtf8(message, message_Strlen);
	self->messageChanged(message_QString);
}

void QSplashScreen_connect_MessageChanged(QSplashScreen* self, void* slot) {
	QSplashScreen::connect(self, static_cast<void (QSplashScreen::*)(const QString&)>(&QSplashScreen::messageChanged), self, [=](const QString& message) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QSplashScreen_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSplashScreen::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSplashScreen_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSplashScreen::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSplashScreen_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QSplashScreen::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSplashScreen_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSplashScreen::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSplashScreen_ShowMessage2(QSplashScreen* self, const char* message, size_t message_Strlen, int alignment) {
	QString message_QString = QString::fromUtf8(message, message_Strlen);
	self->showMessage(message_QString, static_cast<int>(alignment));
}

void QSplashScreen_ShowMessage3(QSplashScreen* self, const char* message, size_t message_Strlen, int alignment, QColor* color) {
	QString message_QString = QString::fromUtf8(message, message_Strlen);
	self->showMessage(message_QString, static_cast<int>(alignment), *color);
}

void QSplashScreen_Delete(QSplashScreen* self) {
	delete self;
}


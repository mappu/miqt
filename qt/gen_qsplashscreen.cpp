#include "gen_qsplashscreen.h"
#include "qsplashscreen.h"

#include <QColor>
#include <QMetaObject>
#include <QPixmap>
#include <QSplashScreen>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QSplashScreen_MetaObject(QSplashScreen* self) {
	return (QMetaObject*) self->metaObject();
}

void QSplashScreen_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSplashScreen::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSplashScreen_TrUtf8(char* s, char** _out, int* _out_Strlen) {
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
	QPixmap ret = self->pixmap();
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
	QString ret = self->message();
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

void QSplashScreen_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSplashScreen::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSplashScreen_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSplashScreen::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSplashScreen_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSplashScreen::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSplashScreen_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
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


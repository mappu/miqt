#include "gen_qrasterwindow.h"
#include "qrasterwindow.h"

#include <QMetaObject>
#include <QRasterWindow>
#include <QString>
#include <QWindow>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRasterWindow* QRasterWindow_new() {
	return new QRasterWindow();
}

QRasterWindow* QRasterWindow_new2(QWindow* parent) {
	return new QRasterWindow(parent);
}

QMetaObject* QRasterWindow_MetaObject(QRasterWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void QRasterWindow_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QRasterWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRasterWindow_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QRasterWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRasterWindow_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QRasterWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRasterWindow_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QRasterWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRasterWindow_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QRasterWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRasterWindow_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QRasterWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRasterWindow_Delete(QRasterWindow* self) {
	delete self;
}


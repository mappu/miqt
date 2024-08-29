#include <QMetaObject>
#include <QPaintDeviceWindow>
#include <QRect>
#include <QRegion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qpaintdevicewindow.h"

#include "gen_qpaintdevicewindow.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QPaintDeviceWindow_MetaObject(QPaintDeviceWindow* self) {
	return (QMetaObject*) const_cast<const QPaintDeviceWindow*>(self)->metaObject();
}

void QPaintDeviceWindow_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QPaintDeviceWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPaintDeviceWindow_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QPaintDeviceWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPaintDeviceWindow_Update(QPaintDeviceWindow* self, QRect* rect) {
	self->update(*rect);
}

void QPaintDeviceWindow_UpdateWithRegion(QPaintDeviceWindow* self, QRegion* region) {
	self->update(*region);
}

void QPaintDeviceWindow_Update2(QPaintDeviceWindow* self) {
	self->update();
}

void QPaintDeviceWindow_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QPaintDeviceWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPaintDeviceWindow_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPaintDeviceWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPaintDeviceWindow_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QPaintDeviceWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPaintDeviceWindow_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPaintDeviceWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPaintDeviceWindow_Delete(QPaintDeviceWindow* self) {
	delete self;
}


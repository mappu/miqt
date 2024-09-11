#include <QMetaObject>
#include <QPicture>
#include <QPictureFormatPlugin>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qpictureformatplugin.h"

#include "gen_qpictureformatplugin.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QPictureFormatPlugin_MetaObject(const QPictureFormatPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void QPictureFormatPlugin_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QPictureFormatPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPictureFormatPlugin_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QPictureFormatPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QPictureFormatPlugin_LoadPicture(QPictureFormatPlugin* self, const char* format, size_t format_Strlen, const char* filename, size_t filename_Strlen, QPicture* pic) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	return self->loadPicture(format_QString, filename_QString, pic);
}

bool QPictureFormatPlugin_SavePicture(QPictureFormatPlugin* self, const char* format, size_t format_Strlen, const char* filename, size_t filename_Strlen, QPicture* pic) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	return self->savePicture(format_QString, filename_QString, *pic);
}

bool QPictureFormatPlugin_InstallIOHandler(QPictureFormatPlugin* self, const char* format, size_t format_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	return self->installIOHandler(format_QString);
}

void QPictureFormatPlugin_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QPictureFormatPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPictureFormatPlugin_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPictureFormatPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPictureFormatPlugin_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QPictureFormatPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPictureFormatPlugin_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPictureFormatPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPictureFormatPlugin_Delete(QPictureFormatPlugin* self) {
	delete self;
}


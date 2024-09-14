#include <QMetaObject>
#include <QPicture>
#include <QPictureFormatPlugin>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qpictureformatplugin.h"
#include "gen_qpictureformatplugin.h"
#include "_cgo_export.h"

QMetaObject* QPictureFormatPlugin_MetaObject(const QPictureFormatPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QPictureFormatPlugin_Tr(const char* s) {
	QString _ret = QPictureFormatPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPictureFormatPlugin_TrUtf8(const char* s) {
	QString _ret = QPictureFormatPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QPictureFormatPlugin_LoadPicture(QPictureFormatPlugin* self, struct miqt_string* format, struct miqt_string* filename, QPicture* pic) {
	QString format_QString = QString::fromUtf8(&format->data, format->len);
	QString filename_QString = QString::fromUtf8(&filename->data, filename->len);
	return self->loadPicture(format_QString, filename_QString, pic);
}

bool QPictureFormatPlugin_SavePicture(QPictureFormatPlugin* self, struct miqt_string* format, struct miqt_string* filename, QPicture* pic) {
	QString format_QString = QString::fromUtf8(&format->data, format->len);
	QString filename_QString = QString::fromUtf8(&filename->data, filename->len);
	return self->savePicture(format_QString, filename_QString, *pic);
}

bool QPictureFormatPlugin_InstallIOHandler(QPictureFormatPlugin* self, struct miqt_string* format) {
	QString format_QString = QString::fromUtf8(&format->data, format->len);
	return self->installIOHandler(format_QString);
}

struct miqt_string* QPictureFormatPlugin_Tr2(const char* s, const char* c) {
	QString _ret = QPictureFormatPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPictureFormatPlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPictureFormatPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPictureFormatPlugin_TrUtf82(const char* s, const char* c) {
	QString _ret = QPictureFormatPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPictureFormatPlugin_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPictureFormatPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QPictureFormatPlugin_Delete(QPictureFormatPlugin* self) {
	delete self;
}


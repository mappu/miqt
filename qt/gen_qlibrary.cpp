#include <QLibrary>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlibrary.h>
#include "gen_qlibrary.h"
#include "_cgo_export.h"

QLibrary* QLibrary_new() {
	return new QLibrary();
}

QLibrary* QLibrary_new2(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QLibrary(fileName_QString);
}

QLibrary* QLibrary_new3(struct miqt_string* fileName, int verNum) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QLibrary(fileName_QString, static_cast<int>(verNum));
}

QLibrary* QLibrary_new4(struct miqt_string* fileName, struct miqt_string* version) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	QString version_QString = QString::fromUtf8(&version->data, version->len);
	return new QLibrary(fileName_QString, version_QString);
}

QLibrary* QLibrary_new5(QObject* parent) {
	return new QLibrary(parent);
}

QLibrary* QLibrary_new6(struct miqt_string* fileName, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QLibrary(fileName_QString, parent);
}

QLibrary* QLibrary_new7(struct miqt_string* fileName, int verNum, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QLibrary(fileName_QString, static_cast<int>(verNum), parent);
}

QLibrary* QLibrary_new8(struct miqt_string* fileName, struct miqt_string* version, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	QString version_QString = QString::fromUtf8(&version->data, version->len);
	return new QLibrary(fileName_QString, version_QString, parent);
}

QMetaObject* QLibrary_MetaObject(const QLibrary* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLibrary_Metacast(QLibrary* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QLibrary_Tr(const char* s) {
	QString _ret = QLibrary::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLibrary_TrUtf8(const char* s) {
	QString _ret = QLibrary::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QLibrary_Load(QLibrary* self) {
	return self->load();
}

bool QLibrary_Unload(QLibrary* self) {
	return self->unload();
}

bool QLibrary_IsLoaded(const QLibrary* self) {
	return self->isLoaded();
}

bool QLibrary_IsLibrary(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return QLibrary::isLibrary(fileName_QString);
}

void QLibrary_SetFileName(QLibrary* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	self->setFileName(fileName_QString);
}

struct miqt_string* QLibrary_FileName(const QLibrary* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QLibrary_SetFileNameAndVersion(QLibrary* self, struct miqt_string* fileName, int verNum) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	self->setFileNameAndVersion(fileName_QString, static_cast<int>(verNum));
}

void QLibrary_SetFileNameAndVersion2(QLibrary* self, struct miqt_string* fileName, struct miqt_string* version) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	QString version_QString = QString::fromUtf8(&version->data, version->len);
	self->setFileNameAndVersion(fileName_QString, version_QString);
}

struct miqt_string* QLibrary_ErrorString(const QLibrary* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QLibrary_SetLoadHints(QLibrary* self, int hints) {
	self->setLoadHints(static_cast<QLibrary::LoadHints>(hints));
}

int QLibrary_LoadHints(const QLibrary* self) {
	QLibrary::LoadHints _ret = self->loadHints();
	return static_cast<int>(_ret);
}

struct miqt_string* QLibrary_Tr2(const char* s, const char* c) {
	QString _ret = QLibrary::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLibrary_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLibrary::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLibrary_TrUtf82(const char* s, const char* c) {
	QString _ret = QLibrary::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLibrary_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QLibrary::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QLibrary_Delete(QLibrary* self) {
	delete self;
}


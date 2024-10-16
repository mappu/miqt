#include <QMetaObject>
#include <QObject>
#include <QSaveFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsavefile.h>
#include "gen_qsavefile.h"
#include "_cgo_export.h"

QSaveFile* QSaveFile_new(struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	return new QSaveFile(name_QString);
}

QSaveFile* QSaveFile_new2() {
	return new QSaveFile();
}

QSaveFile* QSaveFile_new3(struct miqt_string* name, QObject* parent) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	return new QSaveFile(name_QString, parent);
}

QSaveFile* QSaveFile_new4(QObject* parent) {
	return new QSaveFile(parent);
}

QMetaObject* QSaveFile_MetaObject(const QSaveFile* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSaveFile_Metacast(QSaveFile* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QSaveFile_Tr(const char* s) {
	QString _ret = QSaveFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSaveFile_TrUtf8(const char* s) {
	QString _ret = QSaveFile::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSaveFile_FileName(const QSaveFile* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSaveFile_SetFileName(QSaveFile* self, struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	self->setFileName(name_QString);
}

bool QSaveFile_Open(QSaveFile* self, int flags) {
	return self->open(static_cast<QIODevice::OpenMode>(flags));
}

bool QSaveFile_Commit(QSaveFile* self) {
	return self->commit();
}

void QSaveFile_CancelWriting(QSaveFile* self) {
	self->cancelWriting();
}

void QSaveFile_SetDirectWriteFallback(QSaveFile* self, bool enabled) {
	self->setDirectWriteFallback(enabled);
}

bool QSaveFile_DirectWriteFallback(const QSaveFile* self) {
	return self->directWriteFallback();
}

struct miqt_string* QSaveFile_Tr2(const char* s, const char* c) {
	QString _ret = QSaveFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSaveFile_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSaveFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSaveFile_TrUtf82(const char* s, const char* c) {
	QString _ret = QSaveFile::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSaveFile_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSaveFile::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSaveFile_Delete(QSaveFile* self) {
	delete self;
}


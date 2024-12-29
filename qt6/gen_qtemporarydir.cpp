#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTemporaryDir>
#include <qtemporarydir.h>
#include "gen_qtemporarydir.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QTemporaryDir* QTemporaryDir_new() {
	return new QTemporaryDir();
}

QTemporaryDir* QTemporaryDir_new2(struct miqt_string templateName) {
	QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
	return new QTemporaryDir(templateName_QString);
}

void QTemporaryDir_Swap(QTemporaryDir* self, QTemporaryDir* other) {
	self->swap(*other);
}

bool QTemporaryDir_IsValid(const QTemporaryDir* self) {
	return self->isValid();
}

struct miqt_string QTemporaryDir_ErrorString(const QTemporaryDir* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTemporaryDir_AutoRemove(const QTemporaryDir* self) {
	return self->autoRemove();
}

void QTemporaryDir_SetAutoRemove(QTemporaryDir* self, bool b) {
	self->setAutoRemove(b);
}

bool QTemporaryDir_Remove(QTemporaryDir* self) {
	return self->remove();
}

struct miqt_string QTemporaryDir_Path(const QTemporaryDir* self) {
	QString _ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTemporaryDir_FilePath(const QTemporaryDir* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString _ret = self->filePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTemporaryDir_Delete(QTemporaryDir* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTemporaryDir*>( self );
	} else {
		delete self;
	}
}


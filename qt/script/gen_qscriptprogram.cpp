#include <QScriptProgram>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscriptprogram.h>
#include "gen_qscriptprogram.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QScriptProgram* QScriptProgram_new() {
	return new QScriptProgram();
}

QScriptProgram* QScriptProgram_new2(struct miqt_string sourceCode) {
	QString sourceCode_QString = QString::fromUtf8(sourceCode.data, sourceCode.len);
	return new QScriptProgram(sourceCode_QString);
}

QScriptProgram* QScriptProgram_new3(QScriptProgram* other) {
	return new QScriptProgram(*other);
}

QScriptProgram* QScriptProgram_new4(struct miqt_string sourceCode, struct miqt_string fileName) {
	QString sourceCode_QString = QString::fromUtf8(sourceCode.data, sourceCode.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QScriptProgram(sourceCode_QString, fileName_QString);
}

QScriptProgram* QScriptProgram_new5(struct miqt_string sourceCode, struct miqt_string fileName, int firstLineNumber) {
	QString sourceCode_QString = QString::fromUtf8(sourceCode.data, sourceCode.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QScriptProgram(sourceCode_QString, fileName_QString, static_cast<int>(firstLineNumber));
}

void QScriptProgram_operatorAssign(QScriptProgram* self, QScriptProgram* other) {
	self->operator=(*other);
}

bool QScriptProgram_isNull(const QScriptProgram* self) {
	return self->isNull();
}

struct miqt_string QScriptProgram_sourceCode(const QScriptProgram* self) {
	QString _ret = self->sourceCode();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScriptProgram_fileName(const QScriptProgram* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QScriptProgram_firstLineNumber(const QScriptProgram* self) {
	return self->firstLineNumber();
}

bool QScriptProgram_operatorEqual(const QScriptProgram* self, QScriptProgram* other) {
	return (*self == *other);
}

bool QScriptProgram_operatorNotEqual(const QScriptProgram* self, QScriptProgram* other) {
	return (*self != *other);
}

void QScriptProgram_delete(QScriptProgram* self) {
	delete self;
}


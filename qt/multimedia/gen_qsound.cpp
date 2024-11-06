#include <QMetaObject>
#include <QObject>
#include <QSound>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsound.h>
#include "gen_qsound.h"
#include "_cgo_export.h"

QSound* QSound_new(struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return new QSound(filename_QString);
}

QSound* QSound_new2(struct miqt_string filename, QObject* parent) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return new QSound(filename_QString, parent);
}

QMetaObject* QSound_MetaObject(const QSound* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSound_Metacast(QSound* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSound_Tr(const char* s) {
	QString _ret = QSound::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSound_TrUtf8(const char* s) {
	QString _ret = QSound::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSound_Play(struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QSound::play(filename_QString);
}

int QSound_Loops(const QSound* self) {
	return self->loops();
}

int QSound_LoopsRemaining(const QSound* self) {
	return self->loopsRemaining();
}

void QSound_SetLoops(QSound* self, int loops) {
	self->setLoops(static_cast<int>(loops));
}

struct miqt_string QSound_FileName(const QSound* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSound_IsFinished(const QSound* self) {
	return self->isFinished();
}

void QSound_Play2(QSound* self) {
	self->play();
}

void QSound_Stop(QSound* self) {
	self->stop();
}

struct miqt_string QSound_Tr2(const char* s, const char* c) {
	QString _ret = QSound::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSound_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSound::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSound_TrUtf82(const char* s, const char* c) {
	QString _ret = QSound::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSound_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSound::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSound_Delete(QSound* self) {
	delete self;
}


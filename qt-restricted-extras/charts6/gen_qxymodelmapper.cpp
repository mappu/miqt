#include <QAbstractItemModel>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QXYModelMapper>
#include <QXYSeries>
#include <qxymodelmapper.h>
#include "gen_qxymodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QXYModelMapper_virtbase(QXYModelMapper* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QXYModelMapper_metaObject(const QXYModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QXYModelMapper_metacast(QXYModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QXYModelMapper_tr(const char* s) {
	QString _ret = QXYModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QXYModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QXYModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QXYModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QXYModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QXYModelMapper_delete(QXYModelMapper* self) {
	delete self;
}


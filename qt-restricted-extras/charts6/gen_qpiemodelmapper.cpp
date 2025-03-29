#include <QAbstractItemModel>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPieModelMapper>
#include <QPieSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpiemodelmapper.h>
#include "gen_qpiemodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QPieModelMapper_virtbase(QPieModelMapper* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QPieModelMapper_metaObject(const QPieModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPieModelMapper_metacast(QPieModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPieModelMapper_tr(const char* s) {
	QString _ret = QPieModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPieModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QPieModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPieModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QPieModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPieModelMapper_delete(QPieModelMapper* self) {
	delete self;
}


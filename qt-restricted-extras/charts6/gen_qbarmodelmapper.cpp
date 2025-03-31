#include <QAbstractBarSeries>
#include <QAbstractItemModel>
#include <QBarModelMapper>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qbarmodelmapper.h>
#include "gen_qbarmodelmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QBarModelMapper_virtbase(QBarModelMapper* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QBarModelMapper_metaObject(const QBarModelMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBarModelMapper_metacast(QBarModelMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBarModelMapper_tr(const char* s) {
	QString _ret = QBarModelMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBarModelMapper_tr2(const char* s, const char* c) {
	QString _ret = QBarModelMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBarModelMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QBarModelMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QBarModelMapper_delete(QBarModelMapper* self) {
	delete self;
}


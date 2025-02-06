#include <QAbstractVideoSurface>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoRendererControl>
#include <qvideorenderercontrol.h>
#include "gen_qvideorenderercontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QVideoRendererControl_virtbase(QVideoRendererControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QVideoRendererControl_metaObject(const QVideoRendererControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoRendererControl_metacast(QVideoRendererControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoRendererControl_tr(const char* s) {
	QString _ret = QVideoRendererControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoRendererControl_trUtf8(const char* s) {
	QString _ret = QVideoRendererControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractVideoSurface* QVideoRendererControl_surface(const QVideoRendererControl* self) {
	return self->surface();
}

void QVideoRendererControl_setSurface(QVideoRendererControl* self, QAbstractVideoSurface* surface) {
	self->setSurface(surface);
}

struct miqt_string QVideoRendererControl_tr2(const char* s, const char* c) {
	QString _ret = QVideoRendererControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoRendererControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoRendererControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoRendererControl_trUtf82(const char* s, const char* c) {
	QString _ret = QVideoRendererControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoRendererControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QVideoRendererControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoRendererControl_delete(QVideoRendererControl* self) {
	delete self;
}


#include <QAbstractVideoSurface>
#include <QMediaControl>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoRendererControl>
#include <qvideorenderercontrol.h>
#include "gen_qvideorenderercontrol.h"
#include "_cgo_export.h"

QMetaObject* QVideoRendererControl_MetaObject(const QVideoRendererControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoRendererControl_Metacast(QVideoRendererControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoRendererControl_Tr(const char* s) {
	QString _ret = QVideoRendererControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoRendererControl_TrUtf8(const char* s) {
	QString _ret = QVideoRendererControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractVideoSurface* QVideoRendererControl_Surface(const QVideoRendererControl* self) {
	return self->surface();
}

void QVideoRendererControl_SetSurface(QVideoRendererControl* self, QAbstractVideoSurface* surface) {
	self->setSurface(surface);
}

struct miqt_string QVideoRendererControl_Tr2(const char* s, const char* c) {
	QString _ret = QVideoRendererControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoRendererControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoRendererControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoRendererControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QVideoRendererControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoRendererControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QVideoRendererControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoRendererControl_Delete(QVideoRendererControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QVideoRendererControl*>( self );
	} else {
		delete self;
	}
}


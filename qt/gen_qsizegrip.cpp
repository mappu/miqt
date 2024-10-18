#include <QMetaObject>
#include <QSize>
#include <QSizeGrip>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qsizegrip.h>
#include "gen_qsizegrip.h"
#include "_cgo_export.h"

QSizeGrip* QSizeGrip_new(QWidget* parent) {
	return new QSizeGrip(parent);
}

QMetaObject* QSizeGrip_MetaObject(const QSizeGrip* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSizeGrip_Metacast(QSizeGrip* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSizeGrip_Tr(const char* s) {
	QString _ret = QSizeGrip::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSizeGrip_TrUtf8(const char* s) {
	QString _ret = QSizeGrip::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QSizeGrip_SizeHint(const QSizeGrip* self) {
	return new QSize(self->sizeHint());
}

void QSizeGrip_SetVisible(QSizeGrip* self, bool visible) {
	self->setVisible(visible);
}

struct miqt_string QSizeGrip_Tr2(const char* s, const char* c) {
	QString _ret = QSizeGrip::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSizeGrip_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSizeGrip::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSizeGrip_TrUtf82(const char* s, const char* c) {
	QString _ret = QSizeGrip::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSizeGrip_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSizeGrip::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSizeGrip_Delete(QSizeGrip* self) {
	delete self;
}


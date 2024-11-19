#include <QAccessibleInterface>
#include <QAccessiblePlugin>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaccessibleplugin.h>
#include "gen_qaccessibleplugin.h"
#include "_cgo_export.h"

QMetaObject* QAccessiblePlugin_MetaObject(const QAccessiblePlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAccessiblePlugin_Metacast(QAccessiblePlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAccessiblePlugin_Tr(const char* s) {
	QString _ret = QAccessiblePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAccessibleInterface* QAccessiblePlugin_Create(QAccessiblePlugin* self, struct miqt_string key, QObject* object) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->create(key_QString, object);
}

struct miqt_string QAccessiblePlugin_Tr2(const char* s, const char* c) {
	QString _ret = QAccessiblePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessiblePlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAccessiblePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAccessiblePlugin_Delete(QAccessiblePlugin* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAccessiblePlugin*>( self );
	} else {
		delete self;
	}
}


#include <QMap>
#include <QMetaObject>
#include <QObject>
#include <QQmlWebChannel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWebChannel>
#include <qqmlwebchannel.h>
#include "gen_qqmlwebchannel.h"
#include "_cgo_export.h"

void QQmlWebChannel_new(QQmlWebChannel** outptr_QQmlWebChannel, QWebChannel** outptr_QWebChannel, QObject** outptr_QObject) {
	QQmlWebChannel* ret = new QQmlWebChannel();
	*outptr_QQmlWebChannel = ret;
	*outptr_QWebChannel = static_cast<QWebChannel*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QQmlWebChannel_new2(QObject* parent, QQmlWebChannel** outptr_QQmlWebChannel, QWebChannel** outptr_QWebChannel, QObject** outptr_QObject) {
	QQmlWebChannel* ret = new QQmlWebChannel(parent);
	*outptr_QQmlWebChannel = ret;
	*outptr_QWebChannel = static_cast<QWebChannel*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QQmlWebChannel_MetaObject(const QQmlWebChannel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlWebChannel_Metacast(QQmlWebChannel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlWebChannel_Tr(const char* s) {
	QString _ret = QQmlWebChannel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlWebChannel_RegisterObjects(QQmlWebChannel* self, struct miqt_map /* of struct miqt_string to QVariant* */  objects) {
	QVariantMap objects_QMap;
	struct miqt_string* objects_karr = static_cast<struct miqt_string*>(objects.keys);
	QVariant** objects_varr = static_cast<QVariant**>(objects.values);
	for(size_t i = 0; i < objects.len; ++i) {
		QString objects_karr_i_QString = QString::fromUtf8(objects_karr[i].data, objects_karr[i].len);
		objects_QMap[objects_karr_i_QString] = *(objects_varr[i]);
	}
	self->registerObjects(objects_QMap);
}

void QQmlWebChannel_ConnectTo(QQmlWebChannel* self, QObject* transport) {
	self->connectTo(transport);
}

void QQmlWebChannel_DisconnectFrom(QQmlWebChannel* self, QObject* transport) {
	self->disconnectFrom(transport);
}

struct miqt_string QQmlWebChannel_Tr2(const char* s, const char* c) {
	QString _ret = QQmlWebChannel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlWebChannel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlWebChannel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlWebChannel_Delete(QQmlWebChannel* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QQmlWebChannel*>( self );
	} else {
		delete self;
	}
}


#include <QAccessibleBridge>
#include <QAccessibleBridgePlugin>
#include <QAccessibleEvent>
#include <QAccessibleInterface>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaccessiblebridge.h>
#include "gen_qaccessiblebridge.h"
#include "_cgo_export.h"

void QAccessibleBridge_SetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject) {
	self->setRootObject(rootObject);
}

void QAccessibleBridge_NotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event) {
	self->notifyAccessibilityUpdate(event);
}

void QAccessibleBridge_OperatorAssign(QAccessibleBridge* self, QAccessibleBridge* param1) {
	self->operator=(*param1);
}

void QAccessibleBridge_Delete(QAccessibleBridge* self) {
	delete self;
}

QMetaObject* QAccessibleBridgePlugin_MetaObject(const QAccessibleBridgePlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAccessibleBridgePlugin_Metacast(QAccessibleBridgePlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAccessibleBridgePlugin_Tr(const char* s) {
	QString _ret = QAccessibleBridgePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAccessibleBridge* QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->create(key_QString);
}

struct miqt_string QAccessibleBridgePlugin_Tr2(const char* s, const char* c) {
	QString _ret = QAccessibleBridgePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleBridgePlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAccessibleBridgePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAccessibleBridgePlugin_Delete(QAccessibleBridgePlugin* self) {
	delete self;
}


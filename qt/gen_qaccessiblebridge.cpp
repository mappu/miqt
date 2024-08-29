#include <QAccessibleBridge>
#include <QAccessibleBridgePlugin>
#include <QAccessibleEvent>
#include <QAccessibleInterface>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qaccessiblebridge.h"

#include "gen_qaccessiblebridge.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

QMetaObject* QAccessibleBridgePlugin_MetaObject(QAccessibleBridgePlugin* self) {
	return (QMetaObject*) const_cast<const QAccessibleBridgePlugin*>(self)->metaObject();
}

void QAccessibleBridgePlugin_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAccessibleBridgePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleBridgePlugin_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAccessibleBridgePlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAccessibleBridge* QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return self->create(key_QString);
}

void QAccessibleBridgePlugin_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAccessibleBridgePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleBridgePlugin_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAccessibleBridgePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleBridgePlugin_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAccessibleBridgePlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleBridgePlugin_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAccessibleBridgePlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessibleBridgePlugin_Delete(QAccessibleBridgePlugin* self) {
	delete self;
}


#include <QAccessibleInterface>
#include <QAccessiblePlugin>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qaccessibleplugin.h"

#include "gen_qaccessibleplugin.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAccessiblePlugin_MetaObject(QAccessiblePlugin* self) {
	return (QMetaObject*) const_cast<const QAccessiblePlugin*>(self)->metaObject();
}

void QAccessiblePlugin_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAccessiblePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessiblePlugin_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAccessiblePlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAccessibleInterface* QAccessiblePlugin_Create(QAccessiblePlugin* self, const char* key, size_t key_Strlen, QObject* object) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return self->create(key_QString, object);
}

void QAccessiblePlugin_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAccessiblePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessiblePlugin_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAccessiblePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessiblePlugin_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAccessiblePlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessiblePlugin_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAccessiblePlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAccessiblePlugin_Delete(QAccessiblePlugin* self) {
	delete self;
}


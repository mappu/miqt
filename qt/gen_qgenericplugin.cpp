#include <QGenericPlugin>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qgenericplugin.h"

#include "gen_qgenericplugin.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QGenericPlugin_MetaObject(const QGenericPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void QGenericPlugin_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGenericPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGenericPlugin_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGenericPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QObject* QGenericPlugin_Create(QGenericPlugin* self, const char* name, size_t name_Strlen, const char* spec, size_t spec_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString spec_QString = QString::fromUtf8(spec, spec_Strlen);
	return self->create(name_QString, spec_QString);
}

void QGenericPlugin_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGenericPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGenericPlugin_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGenericPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGenericPlugin_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGenericPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGenericPlugin_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGenericPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGenericPlugin_Delete(QGenericPlugin* self) {
	delete self;
}


#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStylePlugin>
#include "qstyleplugin.h"

#include "gen_qstyleplugin.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QStylePlugin_MetaObject(QStylePlugin* self) {
	return (QMetaObject*) const_cast<const QStylePlugin*>(self)->metaObject();
}

void QStylePlugin_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStylePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStylePlugin_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStylePlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QStyle* QStylePlugin_Create(QStylePlugin* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return self->create(key_QString);
}

void QStylePlugin_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStylePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStylePlugin_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStylePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStylePlugin_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStylePlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStylePlugin_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStylePlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStylePlugin_Delete(QStylePlugin* self) {
	delete self;
}


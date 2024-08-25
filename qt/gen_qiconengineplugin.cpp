#include "gen_qiconengineplugin.h"
#include "qiconengineplugin.h"

#include <QIconEngine>
#include <QIconEnginePlugin>
#include <QMetaObject>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QIconEnginePlugin_MetaObject(QIconEnginePlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void QIconEnginePlugin_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QIconEnginePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIconEnginePlugin_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QIconEnginePlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QIconEngine* QIconEnginePlugin_Create(QIconEnginePlugin* self) {
	return self->create();
}

void QIconEnginePlugin_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QIconEnginePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIconEnginePlugin_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QIconEnginePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIconEnginePlugin_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QIconEnginePlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QIconEnginePlugin_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QIconEnginePlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QIconEngine* QIconEnginePlugin_Create1(QIconEnginePlugin* self, const char* filename, size_t filename_Strlen) {
	QString filename_QString = QString::fromUtf8(filename, filename_Strlen);
	return self->create(filename_QString);
}

void QIconEnginePlugin_Delete(QIconEnginePlugin* self) {
	delete self;
}


#include <QJsonObject>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QPluginLoader>
#include <QStaticPlugin>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qpluginloader.h"

#include "gen_qpluginloader.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPluginLoader* QPluginLoader_new() {
	return new QPluginLoader();
}

QPluginLoader* QPluginLoader_new2(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QPluginLoader(fileName_QString);
}

QPluginLoader* QPluginLoader_new3(QObject* parent) {
	return new QPluginLoader(parent);
}

QPluginLoader* QPluginLoader_new4(const char* fileName, size_t fileName_Strlen, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QPluginLoader(fileName_QString, parent);
}

QMetaObject* QPluginLoader_MetaObject(QPluginLoader* self) {
	return (QMetaObject*) const_cast<const QPluginLoader*>(self)->metaObject();
}

void QPluginLoader_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QPluginLoader::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPluginLoader_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QPluginLoader::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QObject* QPluginLoader_Instance(QPluginLoader* self) {
	return self->instance();
}

QJsonObject* QPluginLoader_MetaData(QPluginLoader* self) {
	QJsonObject ret = const_cast<const QPluginLoader*>(self)->metaData();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QJsonObject*>(new QJsonObject(ret));
}

void QPluginLoader_StaticInstances(QObject*** _out, size_t* _out_len) {
	QObjectList ret = QPluginLoader::staticInstances();
	// Convert QList<> from C++ memory to manually-managed C memory
	QObject** __out = static_cast<QObject**>(malloc(sizeof(QObject*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QPluginLoader_StaticPlugins(QStaticPlugin*** _out, size_t* _out_len) {
	QVector<QStaticPlugin> ret = QPluginLoader::staticPlugins();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QStaticPlugin** __out = static_cast<QStaticPlugin**>(malloc(sizeof(QStaticPlugin**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QStaticPlugin(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

bool QPluginLoader_Load(QPluginLoader* self) {
	return self->load();
}

bool QPluginLoader_Unload(QPluginLoader* self) {
	return self->unload();
}

bool QPluginLoader_IsLoaded(QPluginLoader* self) {
	return const_cast<const QPluginLoader*>(self)->isLoaded();
}

void QPluginLoader_SetFileName(QPluginLoader* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	self->setFileName(fileName_QString);
}

void QPluginLoader_FileName(QPluginLoader* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QPluginLoader*>(self)->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPluginLoader_ErrorString(QPluginLoader* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QPluginLoader*>(self)->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPluginLoader_SetLoadHints(QPluginLoader* self, int loadHints) {
	self->setLoadHints(static_cast<QLibrary::LoadHints>(loadHints));
}

int QPluginLoader_LoadHints(QPluginLoader* self) {
	QLibrary::LoadHints ret = const_cast<const QPluginLoader*>(self)->loadHints();
	return static_cast<int>(ret);
}

void QPluginLoader_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QPluginLoader::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPluginLoader_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPluginLoader::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPluginLoader_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QPluginLoader::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPluginLoader_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPluginLoader::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPluginLoader_Delete(QPluginLoader* self) {
	delete self;
}


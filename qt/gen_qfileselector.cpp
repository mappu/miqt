#include <QFileSelector>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include "qfileselector.h"

#include "gen_qfileselector.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QFileSelector* QFileSelector_new() {
	return new QFileSelector();
}

QFileSelector* QFileSelector_new2(QObject* parent) {
	return new QFileSelector(parent);
}

QMetaObject* QFileSelector_MetaObject(QFileSelector* self) {
	return (QMetaObject*) const_cast<const QFileSelector*>(self)->metaObject();
}

void QFileSelector_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFileSelector::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSelector_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QFileSelector::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSelector_Select(QFileSelector* self, const char* filePath, size_t filePath_Strlen, char** _out, int* _out_Strlen) {
	QString filePath_QString = QString::fromUtf8(filePath, filePath_Strlen);
	QString ret = const_cast<const QFileSelector*>(self)->select(filePath_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QUrl* QFileSelector_SelectWithFilePath(QFileSelector* self, QUrl* filePath) {
	QUrl ret = const_cast<const QFileSelector*>(self)->select(*filePath);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

void QFileSelector_ExtraSelectors(QFileSelector* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QFileSelector*>(self)->extraSelectors();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QFileSelector_SetExtraSelectors(QFileSelector* self, char** list, uint64_t* list_Lengths, size_t list_len) {
	QList<QString> list_QList;
	list_QList.reserve(list_len);
	for(size_t i = 0; i < list_len; ++i) {
		list_QList.push_back(QString::fromUtf8(list[i], list_Lengths[i]));
	}
	self->setExtraSelectors(list_QList);
}

void QFileSelector_AllSelectors(QFileSelector* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QFileSelector*>(self)->allSelectors();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QFileSelector_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFileSelector::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSelector_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFileSelector::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSelector_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QFileSelector::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSelector_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QFileSelector::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QFileSelector_Delete(QFileSelector* self) {
	delete self;
}


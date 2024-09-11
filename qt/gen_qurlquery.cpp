#include <QChar>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QUrlQuery>
#include "qurlquery.h"

#include "gen_qurlquery.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QUrlQuery* QUrlQuery_new() {
	return new QUrlQuery();
}

QUrlQuery* QUrlQuery_new2(QUrl* url) {
	return new QUrlQuery(*url);
}

QUrlQuery* QUrlQuery_new3(const char* queryString, size_t queryString_Strlen) {
	QString queryString_QString = QString::fromUtf8(queryString, queryString_Strlen);
	return new QUrlQuery(queryString_QString);
}

QUrlQuery* QUrlQuery_new4(QUrlQuery* other) {
	return new QUrlQuery(*other);
}

void QUrlQuery_OperatorAssign(QUrlQuery* self, QUrlQuery* other) {
	self->operator=(*other);
}

bool QUrlQuery_OperatorEqual(const QUrlQuery* self, QUrlQuery* other) {
	return self->operator==(*other);
}

bool QUrlQuery_OperatorNotEqual(const QUrlQuery* self, QUrlQuery* other) {
	return self->operator!=(*other);
}

void QUrlQuery_Swap(QUrlQuery* self, QUrlQuery* other) {
	self->swap(*other);
}

bool QUrlQuery_IsEmpty(const QUrlQuery* self) {
	return self->isEmpty();
}

bool QUrlQuery_IsDetached(const QUrlQuery* self) {
	return self->isDetached();
}

void QUrlQuery_Clear(QUrlQuery* self) {
	self->clear();
}

void QUrlQuery_Query(const QUrlQuery* self, char** _out, int* _out_Strlen) {
	QString ret = self->query();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrlQuery_SetQuery(QUrlQuery* self, const char* queryString, size_t queryString_Strlen) {
	QString queryString_QString = QString::fromUtf8(queryString, queryString_Strlen);
	self->setQuery(queryString_QString);
}

void QUrlQuery_ToString(const QUrlQuery* self, char** _out, int* _out_Strlen) {
	QString ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrlQuery_SetQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter) {
	self->setQueryDelimiters(*valueDelimiter, *pairDelimiter);
}

QChar* QUrlQuery_QueryValueDelimiter(const QUrlQuery* self) {
	QChar ret = self->queryValueDelimiter();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QUrlQuery_QueryPairDelimiter(const QUrlQuery* self) {
	QChar ret = self->queryPairDelimiter();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

bool QUrlQuery_HasQueryItem(const QUrlQuery* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return self->hasQueryItem(key_QString);
}

void QUrlQuery_AddQueryItem(QUrlQuery* self, const char* key, size_t key_Strlen, const char* value, size_t value_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QString value_QString = QString::fromUtf8(value, value_Strlen);
	self->addQueryItem(key_QString, value_QString);
}

void QUrlQuery_RemoveQueryItem(QUrlQuery* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	self->removeQueryItem(key_QString);
}

void QUrlQuery_QueryItemValue(const QUrlQuery* self, const char* key, size_t key_Strlen, char** _out, int* _out_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QString ret = self->queryItemValue(key_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrlQuery_AllQueryItemValues(const QUrlQuery* self, const char* key, size_t key_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QStringList ret = self->allQueryItemValues(key_QString);
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

void QUrlQuery_RemoveAllQueryItems(QUrlQuery* self, const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	self->removeAllQueryItems(key_QString);
}

QChar* QUrlQuery_DefaultQueryValueDelimiter() {
	QChar ret = QUrlQuery::defaultQueryValueDelimiter();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QUrlQuery_DefaultQueryPairDelimiter() {
	QChar ret = QUrlQuery::defaultQueryPairDelimiter();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

void QUrlQuery_Query1(const QUrlQuery* self, int encoding, char** _out, int* _out_Strlen) {
	QString ret = self->query(static_cast<QUrl::ComponentFormattingOptions>(encoding));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrlQuery_ToString1(const QUrlQuery* self, int encoding, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<QUrl::ComponentFormattingOptions>(encoding));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrlQuery_QueryItemValue2(const QUrlQuery* self, const char* key, size_t key_Strlen, int encoding, char** _out, int* _out_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QString ret = self->queryItemValue(key_QString, static_cast<QUrl::ComponentFormattingOptions>(encoding));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUrlQuery_AllQueryItemValues2(const QUrlQuery* self, const char* key, size_t key_Strlen, int encoding, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QStringList ret = self->allQueryItemValues(key_QString, static_cast<QUrl::ComponentFormattingOptions>(encoding));
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

void QUrlQuery_Delete(QUrlQuery* self) {
	delete self;
}


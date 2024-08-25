#include "gen_qurlquery.h"
#include "qurlquery.h"

#include <QChar>
#include <QString>
#include <QUrl>
#include <QUrlQuery>


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

bool QUrlQuery_OperatorEqual(QUrlQuery* self, QUrlQuery* other) {
	return self->operator==(*other);
}

bool QUrlQuery_OperatorNotEqual(QUrlQuery* self, QUrlQuery* other) {
	return self->operator!=(*other);
}

void QUrlQuery_Swap(QUrlQuery* self, QUrlQuery* other) {
	self->swap(*other);
}

bool QUrlQuery_IsEmpty(QUrlQuery* self) {
	return self->isEmpty();
}

bool QUrlQuery_IsDetached(QUrlQuery* self) {
	return self->isDetached();
}

void QUrlQuery_Clear(QUrlQuery* self) {
	self->clear();
}

void QUrlQuery_SetQuery(QUrlQuery* self, const char* queryString, size_t queryString_Strlen) {
	QString queryString_QString = QString::fromUtf8(queryString, queryString_Strlen);
	self->setQuery(queryString_QString);
}

void QUrlQuery_SetQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter) {
	self->setQueryDelimiters(*valueDelimiter, *pairDelimiter);
}

QChar* QUrlQuery_QueryValueDelimiter(QUrlQuery* self) {
	QChar ret = self->queryValueDelimiter();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QUrlQuery_QueryPairDelimiter(QUrlQuery* self) {
	QChar ret = self->queryPairDelimiter();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

bool QUrlQuery_HasQueryItem(QUrlQuery* self, const char* key, size_t key_Strlen) {
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

void QUrlQuery_Delete(QUrlQuery* self) {
	delete self;
}


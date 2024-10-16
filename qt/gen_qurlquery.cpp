#include <QChar>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QUrlQuery>
#include <qurlquery.h>
#include "gen_qurlquery.h"
#include "_cgo_export.h"

QUrlQuery* QUrlQuery_new() {
	return new QUrlQuery();
}

QUrlQuery* QUrlQuery_new2(QUrl* url) {
	return new QUrlQuery(*url);
}

QUrlQuery* QUrlQuery_new3(struct miqt_string* queryString) {
	QString queryString_QString = QString::fromUtf8(&queryString->data, queryString->len);
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

struct miqt_string* QUrlQuery_Query(const QUrlQuery* self) {
	QString _ret = self->query();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrlQuery_SetQuery(QUrlQuery* self, struct miqt_string* queryString) {
	QString queryString_QString = QString::fromUtf8(&queryString->data, queryString->len);
	self->setQuery(queryString_QString);
}

struct miqt_string* QUrlQuery_ToString(const QUrlQuery* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QUrlQuery_SetQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter) {
	self->setQueryDelimiters(*valueDelimiter, *pairDelimiter);
}

QChar* QUrlQuery_QueryValueDelimiter(const QUrlQuery* self) {
	return new QChar(self->queryValueDelimiter());
}

QChar* QUrlQuery_QueryPairDelimiter(const QUrlQuery* self) {
	return new QChar(self->queryPairDelimiter());
}

bool QUrlQuery_HasQueryItem(const QUrlQuery* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	return self->hasQueryItem(key_QString);
}

void QUrlQuery_AddQueryItem(QUrlQuery* self, struct miqt_string* key, struct miqt_string* value) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QString value_QString = QString::fromUtf8(&value->data, value->len);
	self->addQueryItem(key_QString, value_QString);
}

void QUrlQuery_RemoveQueryItem(QUrlQuery* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	self->removeQueryItem(key_QString);
}

struct miqt_string* QUrlQuery_QueryItemValue(const QUrlQuery* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QString _ret = self->queryItemValue(key_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QUrlQuery_AllQueryItemValues(const QUrlQuery* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QStringList _ret = self->allQueryItemValues(key_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QUrlQuery_RemoveAllQueryItems(QUrlQuery* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	self->removeAllQueryItems(key_QString);
}

QChar* QUrlQuery_DefaultQueryValueDelimiter() {
	return new QChar(QUrlQuery::defaultQueryValueDelimiter());
}

QChar* QUrlQuery_DefaultQueryPairDelimiter() {
	return new QChar(QUrlQuery::defaultQueryPairDelimiter());
}

struct miqt_string* QUrlQuery_Query1(const QUrlQuery* self, int encoding) {
	QString _ret = self->query(static_cast<QUrl::ComponentFormattingOptions>(encoding));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUrlQuery_ToString1(const QUrlQuery* self, int encoding) {
	QString _ret = self->toString(static_cast<QUrl::ComponentFormattingOptions>(encoding));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUrlQuery_QueryItemValue2(const QUrlQuery* self, struct miqt_string* key, int encoding) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QString _ret = self->queryItemValue(key_QString, static_cast<QUrl::ComponentFormattingOptions>(encoding));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QUrlQuery_AllQueryItemValues2(const QUrlQuery* self, struct miqt_string* key, int encoding) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QStringList _ret = self->allQueryItemValues(key_QString, static_cast<QUrl::ComponentFormattingOptions>(encoding));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QUrlQuery_Delete(QUrlQuery* self) {
	delete self;
}


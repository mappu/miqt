#include <QChar>
#include <QList>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QUrlQuery>
#include <qurlquery.h>
#include "gen_qurlquery.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QUrlQuery* QUrlQuery_new() {
	return new QUrlQuery();
}

QUrlQuery* QUrlQuery_new2(QUrl* url) {
	return new QUrlQuery(*url);
}

QUrlQuery* QUrlQuery_new3(struct miqt_string queryString) {
	QString queryString_QString = QString::fromUtf8(queryString.data, queryString.len);
	return new QUrlQuery(queryString_QString);
}

QUrlQuery* QUrlQuery_new4(QUrlQuery* other) {
	return new QUrlQuery(*other);
}

void QUrlQuery_operatorAssign(QUrlQuery* self, QUrlQuery* other) {
	self->operator=(*other);
}

bool QUrlQuery_operatorEqual(const QUrlQuery* self, QUrlQuery* other) {
	return (*self == *other);
}

bool QUrlQuery_operatorNotEqual(const QUrlQuery* self, QUrlQuery* other) {
	return (*self != *other);
}

void QUrlQuery_swap(QUrlQuery* self, QUrlQuery* other) {
	self->swap(*other);
}

bool QUrlQuery_isEmpty(const QUrlQuery* self) {
	return self->isEmpty();
}

bool QUrlQuery_isDetached(const QUrlQuery* self) {
	return self->isDetached();
}

void QUrlQuery_clear(QUrlQuery* self) {
	self->clear();
}

struct miqt_string QUrlQuery_query(const QUrlQuery* self) {
	QString _ret = self->query();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrlQuery_setQuery(QUrlQuery* self, struct miqt_string queryString) {
	QString queryString_QString = QString::fromUtf8(queryString.data, queryString.len);
	self->setQuery(queryString_QString);
}

struct miqt_string QUrlQuery_toString(const QUrlQuery* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrlQuery_setQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter) {
	self->setQueryDelimiters(*valueDelimiter, *pairDelimiter);
}

QChar* QUrlQuery_queryValueDelimiter(const QUrlQuery* self) {
	return new QChar(self->queryValueDelimiter());
}

QChar* QUrlQuery_queryPairDelimiter(const QUrlQuery* self) {
	return new QChar(self->queryPairDelimiter());
}

void QUrlQuery_setQueryItems(QUrlQuery* self, struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and struct miqt_string   */  query) {
	QList<QPair<QString, QString>> query_QList;
	query_QList.reserve(query.len);
	struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ * query_arr = static_cast<struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ *>(query.data);
	for(size_t i = 0; i < query.len; ++i) {
		QPair<QString, QString> query_arr_i_QPair;
		struct miqt_string* query_arr_i_first_arr = static_cast<struct miqt_string*>(query_arr[i].keys);
		struct miqt_string* query_arr_i_second_arr = static_cast<struct miqt_string*>(query_arr[i].values);
			QString query_arr_i_first_arr_0_QString = QString::fromUtf8(query_arr_i_first_arr[0].data, query_arr_i_first_arr[0].len);
			QString query_arr_i_second_arr_0_QString = QString::fromUtf8(query_arr_i_second_arr[0].data, query_arr_i_second_arr[0].len);
		query_arr_i_QPair.first = query_arr_i_first_arr_0_QString;
		query_arr_i_QPair.second = query_arr_i_second_arr_0_QString;
		query_QList.push_back(query_arr_i_QPair);
	}
	self->setQueryItems(query_QList);
}

struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and struct miqt_string   */  QUrlQuery_queryItems(const QUrlQuery* self) {
	QList<QPair<QString, QString>> _ret = self->queryItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ * _arr = static_cast<struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ *>(malloc(sizeof(struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<QString, QString> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		struct miqt_string* _lv_first_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
		struct miqt_string* _lv_second_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
		QString _lv_first_ret = _lv_ret.first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_first_b = _lv_first_ret.toUtf8();
		struct miqt_string _lv_first_ms;
		_lv_first_ms.len = _lv_first_b.length();
		_lv_first_ms.data = static_cast<char*>(malloc(_lv_first_ms.len));
		memcpy(_lv_first_ms.data, _lv_first_b.data(), _lv_first_ms.len);
		_lv_first_arr[0] = _lv_first_ms;
		QString _lv_second_ret = _lv_ret.second;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_second_b = _lv_second_ret.toUtf8();
		struct miqt_string _lv_second_ms;
		_lv_second_ms.len = _lv_second_b.length();
		_lv_second_ms.data = static_cast<char*>(malloc(_lv_second_ms.len));
		memcpy(_lv_second_ms.data, _lv_second_b.data(), _lv_second_ms.len);
		_lv_second_arr[0] = _lv_second_ms;
		struct miqt_map _lv_out;
		_lv_out.len = 1;
		_lv_out.keys = static_cast<void*>(_lv_first_arr);
		_lv_out.values = static_cast<void*>(_lv_second_arr);
		_arr[i] = _lv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QUrlQuery_hasQueryItem(const QUrlQuery* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->hasQueryItem(key_QString);
}

void QUrlQuery_addQueryItem(QUrlQuery* self, struct miqt_string key, struct miqt_string value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->addQueryItem(key_QString, value_QString);
}

void QUrlQuery_removeQueryItem(QUrlQuery* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->removeQueryItem(key_QString);
}

struct miqt_string QUrlQuery_queryItemValue(const QUrlQuery* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString _ret = self->queryItemValue(key_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QUrlQuery_allQueryItemValues(const QUrlQuery* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QStringList _ret = self->allQueryItemValues(key_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QUrlQuery_removeAllQueryItems(QUrlQuery* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->removeAllQueryItems(key_QString);
}

QChar* QUrlQuery_defaultQueryValueDelimiter() {
	return new QChar(QUrlQuery::defaultQueryValueDelimiter());
}

QChar* QUrlQuery_defaultQueryPairDelimiter() {
	return new QChar(QUrlQuery::defaultQueryPairDelimiter());
}

struct miqt_string QUrlQuery_query1(const QUrlQuery* self, int encoding) {
	QString _ret = self->query(static_cast<QUrl::ComponentFormattingOptions>(encoding));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrlQuery_toString1(const QUrlQuery* self, int encoding) {
	QString _ret = self->toString(static_cast<QUrl::ComponentFormattingOptions>(encoding));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and struct miqt_string   */  QUrlQuery_queryItems1(const QUrlQuery* self, int encoding) {
	QList<QPair<QString, QString>> _ret = self->queryItems(static_cast<QUrl::ComponentFormattingOptions>(encoding));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ * _arr = static_cast<struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ *>(malloc(sizeof(struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<QString, QString> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		struct miqt_string* _lv_first_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
		struct miqt_string* _lv_second_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
		QString _lv_first_ret = _lv_ret.first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_first_b = _lv_first_ret.toUtf8();
		struct miqt_string _lv_first_ms;
		_lv_first_ms.len = _lv_first_b.length();
		_lv_first_ms.data = static_cast<char*>(malloc(_lv_first_ms.len));
		memcpy(_lv_first_ms.data, _lv_first_b.data(), _lv_first_ms.len);
		_lv_first_arr[0] = _lv_first_ms;
		QString _lv_second_ret = _lv_ret.second;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_second_b = _lv_second_ret.toUtf8();
		struct miqt_string _lv_second_ms;
		_lv_second_ms.len = _lv_second_b.length();
		_lv_second_ms.data = static_cast<char*>(malloc(_lv_second_ms.len));
		memcpy(_lv_second_ms.data, _lv_second_b.data(), _lv_second_ms.len);
		_lv_second_arr[0] = _lv_second_ms;
		struct miqt_map _lv_out;
		_lv_out.len = 1;
		_lv_out.keys = static_cast<void*>(_lv_first_arr);
		_lv_out.values = static_cast<void*>(_lv_second_arr);
		_arr[i] = _lv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QUrlQuery_queryItemValue2(const QUrlQuery* self, struct miqt_string key, int encoding) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString _ret = self->queryItemValue(key_QString, static_cast<QUrl::ComponentFormattingOptions>(encoding));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QUrlQuery_allQueryItemValues2(const QUrlQuery* self, struct miqt_string key, int encoding) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QStringList _ret = self->allQueryItemValues(key_QString, static_cast<QUrl::ComponentFormattingOptions>(encoding));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QUrlQuery_delete(QUrlQuery* self) {
	delete self;
}


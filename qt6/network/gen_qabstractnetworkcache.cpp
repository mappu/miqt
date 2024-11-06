#include <QAbstractNetworkCache>
#include <QDateTime>
#include <QIODevice>
#include <QMap>
#include <QMetaObject>
#include <QNetworkCacheMetaData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <qabstractnetworkcache.h>
#include "gen_qabstractnetworkcache.h"
#include "_cgo_export.h"

QNetworkCacheMetaData* QNetworkCacheMetaData_new() {
	return new QNetworkCacheMetaData();
}

QNetworkCacheMetaData* QNetworkCacheMetaData_new2(QNetworkCacheMetaData* other) {
	return new QNetworkCacheMetaData(*other);
}

void QNetworkCacheMetaData_OperatorAssign(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	self->operator=(*other);
}

void QNetworkCacheMetaData_Swap(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	self->swap(*other);
}

bool QNetworkCacheMetaData_OperatorEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	return self->operator==(*other);
}

bool QNetworkCacheMetaData_OperatorNotEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	return self->operator!=(*other);
}

bool QNetworkCacheMetaData_IsValid(const QNetworkCacheMetaData* self) {
	return self->isValid();
}

QUrl* QNetworkCacheMetaData_Url(const QNetworkCacheMetaData* self) {
	return new QUrl(self->url());
}

void QNetworkCacheMetaData_SetUrl(QNetworkCacheMetaData* self, QUrl* url) {
	self->setUrl(*url);
}

QDateTime* QNetworkCacheMetaData_LastModified(const QNetworkCacheMetaData* self) {
	return new QDateTime(self->lastModified());
}

void QNetworkCacheMetaData_SetLastModified(QNetworkCacheMetaData* self, QDateTime* dateTime) {
	self->setLastModified(*dateTime);
}

QDateTime* QNetworkCacheMetaData_ExpirationDate(const QNetworkCacheMetaData* self) {
	return new QDateTime(self->expirationDate());
}

void QNetworkCacheMetaData_SetExpirationDate(QNetworkCacheMetaData* self, QDateTime* dateTime) {
	self->setExpirationDate(*dateTime);
}

bool QNetworkCacheMetaData_SaveToDisk(const QNetworkCacheMetaData* self) {
	return self->saveToDisk();
}

void QNetworkCacheMetaData_SetSaveToDisk(QNetworkCacheMetaData* self, bool allow) {
	self->setSaveToDisk(allow);
}

struct miqt_map QNetworkCacheMetaData_Attributes(const QNetworkCacheMetaData* self) {
	QNetworkCacheMetaData::AttributesMap _ret = self->attributes();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QNetworkRequest::Attribute _hashkey_ret = _itr->first;
		_karr[_ctr] = static_cast<int>(_hashkey_ret);
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QNetworkCacheMetaData_SetAttributes(QNetworkCacheMetaData* self, struct miqt_map attributes) {
	QNetworkCacheMetaData::AttributesMap attributes_QMap;
	attributes_QMap.reserve(attributes.len);
	int* attributes_karr = static_cast<int*>(attributes.keys);
	QVariant** attributes_varr = static_cast<QVariant**>(attributes.values);
	for(size_t i = 0; i < attributes.len; ++i) {
		attributes_QMap[static_cast<QNetworkRequest::Attribute>(attributes_karr[i])] = *(attributes_varr[i]);
	}
	self->setAttributes(attributes_QMap);
}

void QNetworkCacheMetaData_Delete(QNetworkCacheMetaData* self) {
	delete self;
}

QMetaObject* QAbstractNetworkCache_MetaObject(const QAbstractNetworkCache* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractNetworkCache_Metacast(QAbstractNetworkCache* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractNetworkCache_Tr(const char* s) {
	QString _ret = QAbstractNetworkCache::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QNetworkCacheMetaData* QAbstractNetworkCache_MetaData(QAbstractNetworkCache* self, QUrl* url) {
	return new QNetworkCacheMetaData(self->metaData(*url));
}

void QAbstractNetworkCache_UpdateMetaData(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData) {
	self->updateMetaData(*metaData);
}

QIODevice* QAbstractNetworkCache_Data(QAbstractNetworkCache* self, QUrl* url) {
	return self->data(*url);
}

bool QAbstractNetworkCache_Remove(QAbstractNetworkCache* self, QUrl* url) {
	return self->remove(*url);
}

long long QAbstractNetworkCache_CacheSize(const QAbstractNetworkCache* self) {
	qint64 _ret = self->cacheSize();
	return static_cast<long long>(_ret);
}

QIODevice* QAbstractNetworkCache_Prepare(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData) {
	return self->prepare(*metaData);
}

void QAbstractNetworkCache_Insert(QAbstractNetworkCache* self, QIODevice* device) {
	self->insert(device);
}

void QAbstractNetworkCache_Clear(QAbstractNetworkCache* self) {
	self->clear();
}

struct miqt_string QAbstractNetworkCache_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractNetworkCache::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractNetworkCache_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractNetworkCache::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractNetworkCache_Delete(QAbstractNetworkCache* self) {
	delete self;
}


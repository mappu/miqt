#include <QAbstractNetworkCache>
#include <QIODevice>
#include <QMetaObject>
#include <QNetworkCacheMetaData>
#include <QNetworkDiskCache>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qnetworkdiskcache.h>
#include "gen_qnetworkdiskcache.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQNetworkDiskCache : public virtual QNetworkDiskCache {
public:

	MiqtVirtualQNetworkDiskCache(): QNetworkDiskCache() {};
	MiqtVirtualQNetworkDiskCache(QObject* parent): QNetworkDiskCache(parent) {};

	virtual ~MiqtVirtualQNetworkDiskCache() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CacheSize = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 cacheSize() const override {
		if (handle__CacheSize == 0) {
			return QNetworkDiskCache::cacheSize();
		}
		

		long long callback_return_value = miqt_exec_callback_QNetworkDiskCache_CacheSize(const_cast<MiqtVirtualQNetworkDiskCache*>(this), handle__CacheSize);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_CacheSize() const {

		qint64 _ret = QNetworkDiskCache::cacheSize();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MetaData = 0;

	// Subclass to allow providing a Go implementation
	virtual QNetworkCacheMetaData metaData(const QUrl& url) override {
		if (handle__MetaData == 0) {
			return QNetworkDiskCache::metaData(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		QNetworkCacheMetaData* callback_return_value = miqt_exec_callback_QNetworkDiskCache_MetaData(this, handle__MetaData, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QNetworkCacheMetaData* virtualbase_MetaData(QUrl* url) {

		return new QNetworkCacheMetaData(QNetworkDiskCache::metaData(*url));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateMetaData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateMetaData(const QNetworkCacheMetaData& metaData) override {
		if (handle__UpdateMetaData == 0) {
			QNetworkDiskCache::updateMetaData(metaData);
			return;
		}
		
		const QNetworkCacheMetaData& metaData_ret = metaData;
		// Cast returned reference into pointer
		QNetworkCacheMetaData* sigval1 = const_cast<QNetworkCacheMetaData*>(&metaData_ret);

		miqt_exec_callback_QNetworkDiskCache_UpdateMetaData(this, handle__UpdateMetaData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateMetaData(QNetworkCacheMetaData* metaData) {

		QNetworkDiskCache::updateMetaData(*metaData);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QIODevice* data(const QUrl& url) override {
		if (handle__Data == 0) {
			return QNetworkDiskCache::data(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		QIODevice* callback_return_value = miqt_exec_callback_QNetworkDiskCache_Data(this, handle__Data, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIODevice* virtualbase_Data(QUrl* url) {

		return QNetworkDiskCache::data(*url);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Remove = 0;

	// Subclass to allow providing a Go implementation
	virtual bool remove(const QUrl& url) override {
		if (handle__Remove == 0) {
			return QNetworkDiskCache::remove(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		bool callback_return_value = miqt_exec_callback_QNetworkDiskCache_Remove(this, handle__Remove, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Remove(QUrl* url) {

		return QNetworkDiskCache::remove(*url);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Prepare = 0;

	// Subclass to allow providing a Go implementation
	virtual QIODevice* prepare(const QNetworkCacheMetaData& metaData) override {
		if (handle__Prepare == 0) {
			return QNetworkDiskCache::prepare(metaData);
		}
		
		const QNetworkCacheMetaData& metaData_ret = metaData;
		// Cast returned reference into pointer
		QNetworkCacheMetaData* sigval1 = const_cast<QNetworkCacheMetaData*>(&metaData_ret);

		QIODevice* callback_return_value = miqt_exec_callback_QNetworkDiskCache_Prepare(this, handle__Prepare, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIODevice* virtualbase_Prepare(QNetworkCacheMetaData* metaData) {

		return QNetworkDiskCache::prepare(*metaData);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Insert = 0;

	// Subclass to allow providing a Go implementation
	virtual void insert(QIODevice* device) override {
		if (handle__Insert == 0) {
			QNetworkDiskCache::insert(device);
			return;
		}
		
		QIODevice* sigval1 = device;

		miqt_exec_callback_QNetworkDiskCache_Insert(this, handle__Insert, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Insert(QIODevice* device) {

		QNetworkDiskCache::insert(device);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__Clear == 0) {
			QNetworkDiskCache::clear();
			return;
		}
		

		miqt_exec_callback_QNetworkDiskCache_Clear(this, handle__Clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Clear() {

		QNetworkDiskCache::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Expire = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 expire() override {
		if (handle__Expire == 0) {
			return QNetworkDiskCache::expire();
		}
		

		long long callback_return_value = miqt_exec_callback_QNetworkDiskCache_Expire(this, handle__Expire);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Expire() {

		qint64 _ret = QNetworkDiskCache::expire();
		return static_cast<long long>(_ret);

	}

};

QNetworkDiskCache* QNetworkDiskCache_new() {
	return new MiqtVirtualQNetworkDiskCache();
}

QNetworkDiskCache* QNetworkDiskCache_new2(QObject* parent) {
	return new MiqtVirtualQNetworkDiskCache(parent);
}

void QNetworkDiskCache_virtbase(QNetworkDiskCache* src, QAbstractNetworkCache** outptr_QAbstractNetworkCache) {
	*outptr_QAbstractNetworkCache = static_cast<QAbstractNetworkCache*>(src);
}

QMetaObject* QNetworkDiskCache_MetaObject(const QNetworkDiskCache* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkDiskCache_Metacast(QNetworkDiskCache* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkDiskCache_Tr(const char* s) {
	QString _ret = QNetworkDiskCache::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkDiskCache_CacheDirectory(const QNetworkDiskCache* self) {
	QString _ret = self->cacheDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkDiskCache_SetCacheDirectory(QNetworkDiskCache* self, struct miqt_string cacheDir) {
	QString cacheDir_QString = QString::fromUtf8(cacheDir.data, cacheDir.len);
	self->setCacheDirectory(cacheDir_QString);
}

long long QNetworkDiskCache_MaximumCacheSize(const QNetworkDiskCache* self) {
	qint64 _ret = self->maximumCacheSize();
	return static_cast<long long>(_ret);
}

void QNetworkDiskCache_SetMaximumCacheSize(QNetworkDiskCache* self, long long size) {
	self->setMaximumCacheSize(static_cast<qint64>(size));
}

long long QNetworkDiskCache_CacheSize(const QNetworkDiskCache* self) {
	qint64 _ret = self->cacheSize();
	return static_cast<long long>(_ret);
}

QNetworkCacheMetaData* QNetworkDiskCache_MetaData(QNetworkDiskCache* self, QUrl* url) {
	return new QNetworkCacheMetaData(self->metaData(*url));
}

void QNetworkDiskCache_UpdateMetaData(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData) {
	self->updateMetaData(*metaData);
}

QIODevice* QNetworkDiskCache_Data(QNetworkDiskCache* self, QUrl* url) {
	return self->data(*url);
}

bool QNetworkDiskCache_Remove(QNetworkDiskCache* self, QUrl* url) {
	return self->remove(*url);
}

QIODevice* QNetworkDiskCache_Prepare(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData) {
	return self->prepare(*metaData);
}

void QNetworkDiskCache_Insert(QNetworkDiskCache* self, QIODevice* device) {
	self->insert(device);
}

QNetworkCacheMetaData* QNetworkDiskCache_FileMetaData(const QNetworkDiskCache* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QNetworkCacheMetaData(self->fileMetaData(fileName_QString));
}

void QNetworkDiskCache_Clear(QNetworkDiskCache* self) {
	self->clear();
}

struct miqt_string QNetworkDiskCache_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkDiskCache::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkDiskCache_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkDiskCache::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkDiskCache_override_virtual_CacheSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) )->handle__CacheSize = slot;
}

long long QNetworkDiskCache_virtualbase_CacheSize(const void* self) {
	return ( (const MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_CacheSize();
}

void QNetworkDiskCache_override_virtual_MetaData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) )->handle__MetaData = slot;
}

QNetworkCacheMetaData* QNetworkDiskCache_virtualbase_MetaData(void* self, QUrl* url) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_MetaData(url);
}

void QNetworkDiskCache_override_virtual_UpdateMetaData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) )->handle__UpdateMetaData = slot;
}

void QNetworkDiskCache_virtualbase_UpdateMetaData(void* self, QNetworkCacheMetaData* metaData) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_UpdateMetaData(metaData);
}

void QNetworkDiskCache_override_virtual_Data(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) )->handle__Data = slot;
}

QIODevice* QNetworkDiskCache_virtualbase_Data(void* self, QUrl* url) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Data(url);
}

void QNetworkDiskCache_override_virtual_Remove(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) )->handle__Remove = slot;
}

bool QNetworkDiskCache_virtualbase_Remove(void* self, QUrl* url) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Remove(url);
}

void QNetworkDiskCache_override_virtual_Prepare(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) )->handle__Prepare = slot;
}

QIODevice* QNetworkDiskCache_virtualbase_Prepare(void* self, QNetworkCacheMetaData* metaData) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Prepare(metaData);
}

void QNetworkDiskCache_override_virtual_Insert(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) )->handle__Insert = slot;
}

void QNetworkDiskCache_virtualbase_Insert(void* self, QIODevice* device) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Insert(device);
}

void QNetworkDiskCache_override_virtual_Clear(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) )->handle__Clear = slot;
}

void QNetworkDiskCache_virtualbase_Clear(void* self) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Clear();
}

void QNetworkDiskCache_override_virtual_Expire(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) )->handle__Expire = slot;
}

long long QNetworkDiskCache_virtualbase_Expire(void* self) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_Expire();
}

void QNetworkDiskCache_Delete(QNetworkDiskCache* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQNetworkDiskCache*>( self );
	} else {
		delete self;
	}
}


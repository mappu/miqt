#include <QAbstractNetworkCache>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkCacheMetaData>
#include <QNetworkDiskCache>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <qnetworkdiskcache.h>
#include "gen_qnetworkdiskcache.h"

#ifdef __cplusplus
extern "C" {
#endif

long long miqt_exec_callback_QNetworkDiskCache_cacheSize(const QNetworkDiskCache*, intptr_t);
QNetworkCacheMetaData* miqt_exec_callback_QNetworkDiskCache_metaData(QNetworkDiskCache*, intptr_t, QUrl*);
void miqt_exec_callback_QNetworkDiskCache_updateMetaData(QNetworkDiskCache*, intptr_t, QNetworkCacheMetaData*);
QIODevice* miqt_exec_callback_QNetworkDiskCache_data(QNetworkDiskCache*, intptr_t, QUrl*);
bool miqt_exec_callback_QNetworkDiskCache_remove(QNetworkDiskCache*, intptr_t, QUrl*);
QIODevice* miqt_exec_callback_QNetworkDiskCache_prepare(QNetworkDiskCache*, intptr_t, QNetworkCacheMetaData*);
void miqt_exec_callback_QNetworkDiskCache_insert(QNetworkDiskCache*, intptr_t, QIODevice*);
void miqt_exec_callback_QNetworkDiskCache_clear(QNetworkDiskCache*, intptr_t);
long long miqt_exec_callback_QNetworkDiskCache_expire(QNetworkDiskCache*, intptr_t);
bool miqt_exec_callback_QNetworkDiskCache_event(QNetworkDiskCache*, intptr_t, QEvent*);
bool miqt_exec_callback_QNetworkDiskCache_eventFilter(QNetworkDiskCache*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QNetworkDiskCache_timerEvent(QNetworkDiskCache*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QNetworkDiskCache_childEvent(QNetworkDiskCache*, intptr_t, QChildEvent*);
void miqt_exec_callback_QNetworkDiskCache_customEvent(QNetworkDiskCache*, intptr_t, QEvent*);
void miqt_exec_callback_QNetworkDiskCache_connectNotify(QNetworkDiskCache*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QNetworkDiskCache_disconnectNotify(QNetworkDiskCache*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQNetworkDiskCache final : public QNetworkDiskCache {
public:

	MiqtVirtualQNetworkDiskCache(): QNetworkDiskCache() {};
	MiqtVirtualQNetworkDiskCache(QObject* parent): QNetworkDiskCache(parent) {};

	virtual ~MiqtVirtualQNetworkDiskCache() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__cacheSize = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 cacheSize() const override {
		if (handle__cacheSize == 0) {
			return QNetworkDiskCache::cacheSize();
		}
		

		long long callback_return_value = miqt_exec_callback_QNetworkDiskCache_cacheSize(this, handle__cacheSize);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_cacheSize() const {

		qint64 _ret = QNetworkDiskCache::cacheSize();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metaData = 0;

	// Subclass to allow providing a Go implementation
	virtual QNetworkCacheMetaData metaData(const QUrl& url) override {
		if (handle__metaData == 0) {
			return QNetworkDiskCache::metaData(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		QNetworkCacheMetaData* callback_return_value = miqt_exec_callback_QNetworkDiskCache_metaData(this, handle__metaData, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QNetworkCacheMetaData* virtualbase_metaData(QUrl* url) {

		return new QNetworkCacheMetaData(QNetworkDiskCache::metaData(*url));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateMetaData = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateMetaData(const QNetworkCacheMetaData& metaData) override {
		if (handle__updateMetaData == 0) {
			QNetworkDiskCache::updateMetaData(metaData);
			return;
		}
		
		const QNetworkCacheMetaData& metaData_ret = metaData;
		// Cast returned reference into pointer
		QNetworkCacheMetaData* sigval1 = const_cast<QNetworkCacheMetaData*>(&metaData_ret);

		miqt_exec_callback_QNetworkDiskCache_updateMetaData(this, handle__updateMetaData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateMetaData(QNetworkCacheMetaData* metaData) {

		QNetworkDiskCache::updateMetaData(*metaData);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QIODevice* data(const QUrl& url) override {
		if (handle__data == 0) {
			return QNetworkDiskCache::data(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		QIODevice* callback_return_value = miqt_exec_callback_QNetworkDiskCache_data(this, handle__data, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIODevice* virtualbase_data(QUrl* url) {

		return QNetworkDiskCache::data(*url);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__remove = 0;

	// Subclass to allow providing a Go implementation
	virtual bool remove(const QUrl& url) override {
		if (handle__remove == 0) {
			return QNetworkDiskCache::remove(url);
		}
		
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);

		bool callback_return_value = miqt_exec_callback_QNetworkDiskCache_remove(this, handle__remove, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_remove(QUrl* url) {

		return QNetworkDiskCache::remove(*url);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__prepare = 0;

	// Subclass to allow providing a Go implementation
	virtual QIODevice* prepare(const QNetworkCacheMetaData& metaData) override {
		if (handle__prepare == 0) {
			return QNetworkDiskCache::prepare(metaData);
		}
		
		const QNetworkCacheMetaData& metaData_ret = metaData;
		// Cast returned reference into pointer
		QNetworkCacheMetaData* sigval1 = const_cast<QNetworkCacheMetaData*>(&metaData_ret);

		QIODevice* callback_return_value = miqt_exec_callback_QNetworkDiskCache_prepare(this, handle__prepare, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIODevice* virtualbase_prepare(QNetworkCacheMetaData* metaData) {

		return QNetworkDiskCache::prepare(*metaData);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insert = 0;

	// Subclass to allow providing a Go implementation
	virtual void insert(QIODevice* device) override {
		if (handle__insert == 0) {
			QNetworkDiskCache::insert(device);
			return;
		}
		
		QIODevice* sigval1 = device;

		miqt_exec_callback_QNetworkDiskCache_insert(this, handle__insert, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_insert(QIODevice* device) {

		QNetworkDiskCache::insert(device);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QNetworkDiskCache::clear();
			return;
		}
		

		miqt_exec_callback_QNetworkDiskCache_clear(this, handle__clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_clear() {

		QNetworkDiskCache::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__expire = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 expire() override {
		if (handle__expire == 0) {
			return QNetworkDiskCache::expire();
		}
		

		long long callback_return_value = miqt_exec_callback_QNetworkDiskCache_expire(this, handle__expire);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_expire() {

		qint64 _ret = QNetworkDiskCache::expire();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QNetworkDiskCache::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkDiskCache_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QNetworkDiskCache::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QNetworkDiskCache::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QNetworkDiskCache_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QNetworkDiskCache::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QNetworkDiskCache::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QNetworkDiskCache_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QNetworkDiskCache::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QNetworkDiskCache::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QNetworkDiskCache_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QNetworkDiskCache::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QNetworkDiskCache::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QNetworkDiskCache_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QNetworkDiskCache::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QNetworkDiskCache::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkDiskCache_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QNetworkDiskCache::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QNetworkDiskCache::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QNetworkDiskCache_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QNetworkDiskCache::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QNetworkDiskCache_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QNetworkDiskCache_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QNetworkDiskCache_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QNetworkDiskCache_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QNetworkDiskCache_metaObject(const QNetworkDiskCache* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkDiskCache_metacast(QNetworkDiskCache* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkDiskCache_tr(const char* s) {
	QString _ret = QNetworkDiskCache::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkDiskCache_trUtf8(const char* s) {
	QString _ret = QNetworkDiskCache::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkDiskCache_cacheDirectory(const QNetworkDiskCache* self) {
	QString _ret = self->cacheDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkDiskCache_setCacheDirectory(QNetworkDiskCache* self, struct miqt_string cacheDir) {
	QString cacheDir_QString = QString::fromUtf8(cacheDir.data, cacheDir.len);
	self->setCacheDirectory(cacheDir_QString);
}

long long QNetworkDiskCache_maximumCacheSize(const QNetworkDiskCache* self) {
	qint64 _ret = self->maximumCacheSize();
	return static_cast<long long>(_ret);
}

void QNetworkDiskCache_setMaximumCacheSize(QNetworkDiskCache* self, long long size) {
	self->setMaximumCacheSize(static_cast<qint64>(size));
}

long long QNetworkDiskCache_cacheSize(const QNetworkDiskCache* self) {
	qint64 _ret = self->cacheSize();
	return static_cast<long long>(_ret);
}

QNetworkCacheMetaData* QNetworkDiskCache_metaData(QNetworkDiskCache* self, QUrl* url) {
	return new QNetworkCacheMetaData(self->metaData(*url));
}

void QNetworkDiskCache_updateMetaData(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData) {
	self->updateMetaData(*metaData);
}

QIODevice* QNetworkDiskCache_data(QNetworkDiskCache* self, QUrl* url) {
	return self->data(*url);
}

bool QNetworkDiskCache_remove(QNetworkDiskCache* self, QUrl* url) {
	return self->remove(*url);
}

QIODevice* QNetworkDiskCache_prepare(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData) {
	return self->prepare(*metaData);
}

void QNetworkDiskCache_insert(QNetworkDiskCache* self, QIODevice* device) {
	self->insert(device);
}

QNetworkCacheMetaData* QNetworkDiskCache_fileMetaData(const QNetworkDiskCache* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QNetworkCacheMetaData(self->fileMetaData(fileName_QString));
}

void QNetworkDiskCache_clear(QNetworkDiskCache* self) {
	self->clear();
}

struct miqt_string QNetworkDiskCache_tr2(const char* s, const char* c) {
	QString _ret = QNetworkDiskCache::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkDiskCache_tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkDiskCache::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkDiskCache_trUtf82(const char* s, const char* c) {
	QString _ret = QNetworkDiskCache::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkDiskCache_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QNetworkDiskCache::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QNetworkDiskCache_override_virtual_cacheSize(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__cacheSize = slot;
	return true;
}

long long QNetworkDiskCache_virtualbase_cacheSize(const void* self) {
	return ( (const MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_cacheSize();
}

bool QNetworkDiskCache_override_virtual_metaData(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metaData = slot;
	return true;
}

QNetworkCacheMetaData* QNetworkDiskCache_virtualbase_metaData(void* self, QUrl* url) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_metaData(url);
}

bool QNetworkDiskCache_override_virtual_updateMetaData(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateMetaData = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_updateMetaData(void* self, QNetworkCacheMetaData* metaData) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_updateMetaData(metaData);
}

bool QNetworkDiskCache_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__data = slot;
	return true;
}

QIODevice* QNetworkDiskCache_virtualbase_data(void* self, QUrl* url) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_data(url);
}

bool QNetworkDiskCache_override_virtual_remove(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__remove = slot;
	return true;
}

bool QNetworkDiskCache_virtualbase_remove(void* self, QUrl* url) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_remove(url);
}

bool QNetworkDiskCache_override_virtual_prepare(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__prepare = slot;
	return true;
}

QIODevice* QNetworkDiskCache_virtualbase_prepare(void* self, QNetworkCacheMetaData* metaData) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_prepare(metaData);
}

bool QNetworkDiskCache_override_virtual_insert(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insert = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_insert(void* self, QIODevice* device) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_insert(device);
}

bool QNetworkDiskCache_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clear = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_clear(void* self) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_clear();
}

bool QNetworkDiskCache_override_virtual_expire(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__expire = slot;
	return true;
}

long long QNetworkDiskCache_virtualbase_expire(void* self) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_expire();
}

bool QNetworkDiskCache_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QNetworkDiskCache_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_event(event);
}

bool QNetworkDiskCache_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QNetworkDiskCache_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QNetworkDiskCache_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_timerEvent(event);
}

bool QNetworkDiskCache_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_childEvent(event);
}

bool QNetworkDiskCache_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_customEvent(event);
}

bool QNetworkDiskCache_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_connectNotify(signal);
}

bool QNetworkDiskCache_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QNetworkDiskCache_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQNetworkDiskCache*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QNetworkDiskCache_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QNetworkDiskCache_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QNetworkDiskCache_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QNetworkDiskCache_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQNetworkDiskCache* self_cast = dynamic_cast<MiqtVirtualQNetworkDiskCache*>( (QNetworkDiskCache*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QNetworkDiskCache_delete(QNetworkDiskCache* self) {
	delete self;
}

